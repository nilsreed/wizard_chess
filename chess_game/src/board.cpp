#include "../board.h"


#include <iostream>


using namespace std;

static char* piece_names = {"ph", "Pa", "Bi", "Kn", "Ro", "Ki", "Qu"} //ph = Placeholder

ChessBoard::ChessBoard(){

    for (int i = 2; i < 7; i++){
        for (int j = 0; j < 8; j++){
            board[i][j] = (ChessPiece) {.p = Pieces::NONE, .c = Colours::NONE, .id = 0};
        }
    }

}



ostream& operator<<(ostream& os, const ChessBoard& cb){
    if 
}

/*
ChessBoard::Check_legal_move(ChessPiece cp, char* pos){
    if (chessboard[pos] (DEFINE OPERATOR,).c == cp.c ){
        return 1;
    }

    switch(cp.p){
        ...
    }
}
*/


/*
    TODO:
        - Check_legal_move
        - move (overloadable by wizard_ChessBoard class?)
        - indexing
        - special moves ("Rokade" etc)
        - "Dead pieces"
        - id system for bricks
        - Pawn turning to queen? Maytbe not, since it should become a physical game.
        - printing of a board
*/