#include "./include/Tetris.h"
#include <stdlib.h>
#include <time.h>


Tetris::Tetris(int rows, int cols, int left,int top, int blockSize)
{
    //TODO:
}

void Tetris::init()
{
    delay = 30;

    srand(time(NULL));
}
void Tetris::play()
{
    init();

    int timer = 0;  
    while (1)
    {
        //input
        keyEvent();

        timer += getDelay();
        if (timer > delay) {
            timer = 0;
            drop();
            // game window render : time
            update = true;
        }

        if (update) {
            update = false;
            //renew window
            updateWindow();

            //renew data
            clearLine();
        }
    }
}

void Tetris::keyEvent()
{
    //TODO:
}
void Tetris::updateWindow()
{
    //TODO:
}

int Tetris::getDelay()
{
    //TODO:
    return 0;
}

void Tetris::drop()
{
    //TODO:
}

void Tetris::clearLine()
{
    //TODO:
}