#include "./include/Tetris.h"
#include "Tetris.cpp"
int main(){
    Tetris game( 20, 10, 385, 130, 53);//左邊界 385 915
    //915-385=530 530/10=53 
    //1190-(20*53)=130
    game.play();
    return 0;
}