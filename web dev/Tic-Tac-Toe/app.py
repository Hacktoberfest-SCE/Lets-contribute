from flask import Flask, session, render_template, redirect, url_for

app = Flask('__name__')
app.config['SECRET_KEY'] = 'bjbjhkhvv '

def checkWinner(board):

	for i in range(3):
		if board[i][0] == None:
			break
		if board[i][0] == board[i][1] and  board[i][0] == board[i][2]:
			return True
	#check cols
	for i in range(3):
		if board[0][i] == None:
			break
		if board[0][i] == board[1][i] and board[0][i] == board[2][i]:
			return True
	#check diagonals
	if board[0][0] == board[1][1] and board[0][0] == board[2][2]:
		if board[0][0] != None:
			return True
	#check diagonals
	if board[2][0] == board[1][1] and board[2][0] == board[0][2]:
		if board[2][0] != None:
			return True
	#check if game is drawn
	for i in range(3):
		for j in range(3):
			if board[i][j] == None:
				return False

	#game is drawn since there is no winner 
	#and all boxes are filled
	return False

def checkTurns(board):
    temp = 0
    for i in board:
        for j in i:
            if j == None:
                temp += 1
    return temp


@app.route('/')
def index():
    if 'board' not in session:
        session['board'] = [[None]*3]*3
        session['turn'] = 'X'
        session['moves'] = 0

    win = False
    player = False
    if checkWinner(session['board']):
        if session['turn'] == 'X':
            player = 'O'
        else:
            player = 'X'
        win = True

    moves_left = checkTurns(session['board'])

    return render_template('play.html',
            moves_left=moves_left,
            board=session['board'],
            turn=session['turn'],
            win=win,
            player=player)


@app.route('/play/<int:row>/<int:col>')
def play(row,col):
    session['board'][int(row)][int(col)] = session['turn']
    if session['turn'] == 'X':
        session['turn'] = 'O'
    else:
        session['turn'] = 'X'
    session.modified = True
    return redirect(url_for('index'))

@app.route('/reset')
def reset():
    session['board'] = [[None]*3]*3
    session.modified = True
    return redirect(url_for('index'))

if __name__ == '__main__':
    app.run(debug=True)