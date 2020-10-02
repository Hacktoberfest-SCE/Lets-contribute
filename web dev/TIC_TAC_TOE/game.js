console.log("Tic Tac Toe");
const playerTurn=document.getElementById('player');





const STARTED=0;
const ENDED=1;
 const game={
     state:STARTED,
     turn: 'X',
     move:0
 }




 function endgame(winner){
     if(winner){
         alert('Game Over! Winner = '+ winner)
     }
     else{
         alert('Game Over! Draw')
     }
     game.state=ENDED;
 }

 

 function resetgame(){
     if(Math.random()>.5)game.turn='O';
     else
     game.turn='X';
     game.move=0;
     game.state=STARTED;
     Array.from(document.getElementsByTagName('td')).forEach(item =>item.textContent='');
 }


 function nxtTurn(){
     if(game.state===ENDED)return
     game.move++;
     if(game.turn==='X'){
         game.turn="O";

     }
     else{
         game.turn='X';
     }
     if(game.move>8){
         endgame()
     }
     playerTurn.textContent=game.turn;

 }


 function isCap(arrayof){
    let wincom=game.turn+game.turn+game.turn;
    if(arrayof.map(item => item.textContent).join('')===wincom){
        endgame(game.turn);
    }
 }



 function isRowOver(row){
     
     let tableRow=Array.from(board.children[0].children[row-1].children);
     isCap(tableRow);

 }


 function isColOver(col){
     let tableCol=[
        board.children[0].children[0].children[col-1],
        board.children[0].children[1].children[col-1],
        board.children[0].children[2].children[col-1],
     ]
     console.log(tableCol);
    isCap(tableCol);
 }


function isDiagOver(row,col){
    if(row!==col &&(row+col)!==4)return
    let diag1=[
        board.children[0].children[0].children[0],
        board.children[0].children[1].children[1],
        board.children[0].children[2].children[2],
    ]
    let diag2=[
        board.children[0].children[0].children[2],
        board.children[0].children[1].children[1],
        board.children[0].children[2].children[0],
    ]
    isCap(diag1);
    isCap(diag2);
}






 function boxClick(row,col){
    console.log('box =',row,col)
    let clickedbox=board.children[0].children[row-1].children[col-1];
    clickedbox.textContent=game.turn;
    isRowOver(row);
    isColOver(col);
    isDiagOver(row,col);
    nxtTurn();
 }