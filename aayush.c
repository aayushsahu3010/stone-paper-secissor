#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    // for rock paper scissors returns 1 if c1 is greater  than c2 otherwiise if c1==c2  it willreturn -1 ;
    if (char1 == char2)
    {
        return  -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else   if ((char1 == 'p') && (char2 == 'r'))
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, computerscore = 0, temp;
    char playerchar, computerchar;
    char dict[] = {'r', 'p', 's'};
    printf("\n  WELCOME THE ROCK PAPER SCCISSOR GAMES   \n ");

    for (int i = 0; i < 3; i++)
    { // take players 1 imput

        printf(" choose 1 for Rock ,  Choose 2 for Paper and Choose 3 for Scissor \n");

        printf("player 1 turn :\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf(" YOU choose %c \n ", playerchar);
        // genrate computers
        printf(" Choose 1 for Rock , and Choose 2 for Paper and Choose 3 for Scissor \n");
        printf("Computers  turn :");
        temp = randomNumber(3) + 1;
        computerchar = dict[temp - 1];
        printf("  \n CPU choose %c \n ", computerchar);
        if (greater(computerchar, playerchar) == 1)
        {
            computerscore += 1;
            printf("Cpu got it !! \n ");
        }
        else if (greater(computerchar, playerchar) == -1)
        {
            computerscore += 1;
            playerscore += 1;
            printf(" it is  a draw \n  ");
        }
        else
        {
            playerscore += 1;
            printf(" you got it !!\n\n");
        }
        printf(" You score :%d \n Cpu score :%d\n ", playerscore, computerscore);
    }
    if (playerscore > computerscore)
    {
        printf("!! YOU WIN !!\n");
    }
    else if (playerscore < computerscore)
    {
        printf("!!CPU WINS  !!\n");
    }
    else
    {
        printf(" !! it is  a Draw \n");
    }
    return 0;
}