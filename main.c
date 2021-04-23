#include <stdio.h>
#include <stdlib.h>

char player='o';
char field[10]={'0','1','2','3','4','5','6','7','8','9'};
int round;


int main()
{
    printf("_____________________________________________________\n");
    printf("|                                                   |\n");
    printf("| Tic Tac Toe from Alex                             |\n");
    printf("| Programming Language: C                           |\n");
    printf("|                                                   |\n");
    printf("| Press a button to start.                          |\n");
    printf("|");
    printf("___________________________________________________|\n\n");
    getch();
    start();
}

void start()
{

    system("CLS");
    printf("Player O starts ");
    getch();
    map();

}

void map()
{
    int i;
    int choice;
    int round=1;
    for(int i=0;i<10;i++) //schränkt die runden ein
    {

    if (player=='O' && round==2 || round==4 || round==6 || round==8 || round==10) { //wechselt den spieler von o zu x
        player='X';
    }
    else {
    player='O'; // der spieler wird zu o
    }

    //Rundenzähler//
    system("CLS");
    if (round<10) {
    printf("Round: %i\n",round);
    }
    else {
    printf("Round: 9\n");
    }

    //map Darstellung//
    printf(" %c | %c | %c \n",field[1],field[2],field[3]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",field[4],field[5],field[6]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",field[7],field[8],field[9]);
    printf("\n\n");
    printf("Its the turn of %c\n",player);

    printf("Where do you want to put your mark? ");

    //Setzen der Zeichen//
    scanf("%i",&choice);
    if (player=='x' || player=='X') {
        if (field[choice]=='X' || field[choice]=='O') {
            printf("There is already a mark");
            getch();
            round--;
        }
        else {
        field[choice]='X';
        }
    }

    if (player=='o' || player=='O') {
            if (field[choice]=='O' || field[choice]=='X') {
                printf("There is already a mark");
                getch();
                round--;

            }
            else{
                field[choice]='O';
            }

    }
    if (round>9)
    {
        system("CLS");
        printf("Nobody won, draw");
    }

    //Bedingungen fürs Gewinnen, diese werden in jeder schleife geprüft.
    if(field[1]=='X' && field[2]=='X' && field[3]=='X' || field[4]=='X' && field[5]=='X' && field[6]=='X' || field[7]=='X' && field[8]=='X' && field[9]=='X') {
       system("CLS");
       printf("Player X won the game");
       exit(1);
   }
   else if (field[1]=='X' && field[4]=='X' && field[7]=='X' || field[2]=='X' && field[5]=='X' && field[8]=='X' || field[3]=='X' && field[6]=='X' && field[9]=='X')
   {
        system("CLS");
        printf("Player X won the game");
        exit(1);
   }
   else if (field[1]=='X' && field[5]=='X' && field[8]=='X' || field[7]=='X' && field[5]=='X' && field[3]=='X')
   {
        system("CLS");
        printf("Player X won the game");
        exit(1);
   }


   if(field[1]=='O' && field[2]=='O' && field[3]=='O' || field[4]=='O' && field[5]=='O' && field[6]=='O' || field[7]=='O' && field[8]=='O' && field[9]=='O') {
       system("CLS");
       printf("Player O won the game");
       exit(1);
   }
   else if (field[1]=='O' && field[4]=='O' && field[7]=='O' || field[2]=='O' && field[5]=='O' && field[8]=='O' || field[3]=='O' && field[6]=='O' && field[9]=='O')
   {
        system("CLS");
        printf("Player O won the game");
        exit(1);

   }
   else if (field[1]=='O' && field[5]=='O' && field[8]=='O' || field[7]=='O' && field[5]=='O' && field[3]=='O')
   {
        system("CLS");
        printf("Player O won the game");
        exit(1);

   }
    round++;
    }
}
