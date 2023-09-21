#include<stdio.h>
#include<conio.h>
void board();
void movement();
void boom();
void win();


int structur[6][6],run=1,i=0;j=0,l,b;
char r;


int main()
{
    printf("Use w|a|s|d to play\n\n\n");
    while(run==1)
    {

        board();
        movement();
        boom();
        win();


    }


    getch();
    return 0;
}

void movement()
{
    printf("Enter player movement: ");
    scanf(" %c",&r);

    switch(r)
    {
    case 'w':
        if(i!=0)
        {
            i--;
        }
        break;
    case 's':
        if(i!=5)
        {
            i++;
        }
        break;
    case 'a':
        if(j!=0)
        {
            j--;
        }
        break;
    case 'd':
        if(j!=5)
        {
            j++;
        }
        break;
    }
}
void board()
{
    char robot='R',noCh=' ',win='0',boom='*';

    for(int l=0;l<6;l++)
    {
        for(int b=0;b<6;b++)
        {
            if(l==i && b==j)
            {
                printf("|%c_",robot);
            }
            else if(l==5 && b==5)
            {
                printf("|%c_",win);
            }
            else
            {
                printf("|%c_",noCh);
            }
        }
        printf("|\n");
    }

}
void boom()
{
    if(i==1 && j==1||i==2 && j==2||i==3 && j==3||i==4 && j==4)
    {
        run=0;
        printf("\nGame Over Bomb Detected :(\n");
    }
}
void win()
{
    if(i==5&&j==5)
    {
        run=2;
        printf("\nCongratulation You Win :)");
    }
}
