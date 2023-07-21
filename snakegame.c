#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int length = 30, width = 30, i, j;
int x, y, fruitx, fruity, flag, gameover, score;
int tailx[100],taily[100];
int peace=0;
/*Main fuction in which write all the logic of snake to run,change the size of snake*/

void logic()
{

    int i;
    int prevx,prevy,prev2x,prev2y;
    prevx=tailx[0];
    prevy=taily[0];
    tailx[0]=x;
    taily[0]=y;
    for(i=1;i<=peace;i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }
    switch (flag)
    {
    case 1:
    {
        x--;
        break;
    }
    case 2:
    {
        x++;
        break;
    }
    case 3:
    {
        y--;
        break;
    }
    case 4:
    {
        y++;
        break;
    }
    }
    if(x==0||x==length||y==0||y==width)
    {
        gameover=1;
    }
    if(x==fruitx && y==fruity)
    {
        label3:
    fruitx = rand() % 30;
    if (fruitx == 0)
        goto label3;

label4:
    fruity = rand() % 30;
    if (fruity == 0)
        goto label4;
        score=score+10;
        peace++;
    }
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
        {
            flag = 1;
            break;
        }
        case 's':
        {
            flag = 2;
            break;
        }
        case 'a':
        {
            flag = 3;
            break;
        }
        case 'd':
        {
            flag = 4;
            break;
        }
        }
    }
}

void setup()
{
    x = length / 2;
    y = length / 2;
label1:
    fruitx = rand() % 30;
    if (fruitx == 0)
        goto label1;

label2:
    fruity = rand() % 30;
    if (fruity == 0)
        goto label2;
    gameover = 0;
    score = 0;
}
/*To make the boundary in which snake game is run*/
void draw()
{
    int k,ch;
    system("cls");
    for (i = 0; i <= length; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (i == 0 || i == 30 || j == 0 || j == 30)
            {
                printf("#");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("0");
                }
                else if (i == fruitx && j == fruity)
                {
                    printf("*");
                }
                else
                {
                    ch=0;
                    for(k=1;k<=peace;k++)
                    {
                        if(i==tailx[k]&&j==taily[k])
                        {
                            printf("0");
                            ch=1;
                        }
                    }
                if(ch==0)
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("SCORE IS\t %d",score);
}
int main()
{

    setup();
    while (gameover != 1)
    {
        input();
        draw();
        logic();
    }
}