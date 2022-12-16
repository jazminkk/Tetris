#include "./include/Block.h"
#include <stdlib.h>


Block::Block()
{
    // cube type
    int blocks[7][4] = {
        1, 3, 5, 7, // I
        2, 4, 5, 7, // Z1
        3, 5, 4, 6, // Z2
        3, 5, 4, 7, // T
        2, 3, 5, 7, // L
        3, 5, 7, 6, // J
        2, 3, 4, 5, // o
    };
    // random a cube type
    blockType = 1 + rand() % 7; 

    //smallBlocks初始化
    for (int i = 0; i < 4; i++){
        int value = blocks[blockType - 1][i];
        smallBlocks[i].row = value / 2; //  point
        smallBlocks[i].col = value % 2; //  point
    }
}
void Block::drop(){}
void Block::moveLeftRight(int offset){}
void Block::retate(){}
void Block::draw(int leftMargin, int topMargin){}