def display_board(board):
    print("\n"*100)				#to clear the board before every move
    print(board[7],'|',board[8],'|',board[9])
    print("--+---+--")
    print(board[4],'|',board[5],'|',board[6])
    print("--+---+--")
    print(board[1],'|',board[2],'|',board[3])

def player_input():										#to assign symbols to the players
    symbol=' '
    while symbol not in ['X','O']:
        symbol=(input("Choose your symbol. X or O?")).upper()
    if symbol=='X':
        return ('X','O')
    else:
        return ('O','X')

def place_marker(board, symbol, position):							#to place the symbol at the specified position
    board[position]=symbol

def win_check(board, mark):									#to check if the player has won the game
    return ((board[7] == mark and board[8] == mark and board[9] == mark) or # across the top
    (board[4] == mark and board[5] == mark and board[6] == mark) or # across the middle
    (board[1] == mark and board[2] == mark and board[3] == mark) or # across the bottom
    (board[7] == mark and board[4] == mark and board[1] == mark) or # down the middle
    (board[8] == mark and board[5] == mark and board[2] == mark) or # down the middle
    (board[9] == mark and board[6] == mark and board[3] == mark) or # down the right side
    (board[7] == mark and board[5] == mark and board[3] == mark) or # diagonal
    (board[9] == mark and board[5] == mark and board[1] == mark)) # diagonal

import random

def choose_first():										#to decide which player will go first
    if random.randint(0,1) == 0:
        return 'Player 2'
    else:
        return 'Player 1'

def space_check(board, position):								#to check if the specified position is empty in the board
    return board[position]==" "

def full_board_check(board):
    for i in range(1,10):
        if space_check(board,i):
            return False
    return True

def player_choice(board):									#to accept the position to place the symbol on the board from the player
    next_pos=0
    while next_pos not in [1,2,3,4,5,6,7,8,9] or not space_check(board,next_pos):
        next_pos=int(input("Choose the position: "))
    return next_pos

def replay():											#to ask players if they wish to play the game again
    play_again=input("Do you wish to play again? Yes or no ")
    if play_again[0].lower()=='y':
        return True
    return False

print('Welcome to Tic Tac Toe!')								#main game starts

while True:
    board=[" "]*10
    player1, player2=player_input()
    player=choose_first()
    print(player, "goes first")
    
    start=(input("Are you ready to start the game? yes or no "))[0].lower()
    if start=='y':
        game=True
    else:
        game=False
        
    while game:											#to control flow of the game
    
        if player=='Player 1':									#Player 1's turn
            display_board(board)
            position=player_choice(board)
            place_marker(board, player1, position)

            if win_check(board, player1):
                display_board(board)
                print("Player 1 has won the game!")
                game=False
            else:
                if full_board_check(board):
                    display_board(board)
                    print("It is a draw.")
                    game=False
                else:
                    player="Player 2"


        elif player=='Player 2':								# Player2's turn
            display_board(board)
            position=player_choice(board)
            place_marker(board, player2, position)

            if win_check(board, player2):
                display_board(board)
                print("Player 2 has won the game!")
                game=False
            else:
                if full_board_check(board):
                    display_board(board)
                    print("It is a draw.")
                    game=False
                else:
                    player="Player 1"

    if not replay():
        break