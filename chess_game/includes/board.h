#ifndef BOARD_H_
#define BOARD_H_

enum Pieces {
    NONE = 0,
    Pawn,
    Bishop,
    Knight,
    Rook,
    King,
    Queen
};

enum Colours {
    NONE = 0,
    Black,
    White
}

typedef struct ChessPiece_t{
    Pieces p;
    Colours c;
} ChessPiece;

class ChessBoard{
    private:
        ChessPiece[8][8] board;
    
    public:
        ChessBoard();
        //~ChessBoard();
}

#endif