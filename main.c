#include <stdio.h>
#include <stdlib.h>

char spieler='o';
char felder[10]={'0','1','2','3','4','5','6','7','8','9'};
int runde;


int main()
{
    printf("_____________________________________________________\n");
    printf("|                                                   |\n");
    printf("| Tic Tac Toe von Alex                              |\n");
    printf("| Programmiersprache: C                             |\n");
    printf("|                                                   |\n");
    printf("| Druecken sie eine Taste, um das Spiel zu starten. |\n");
    printf("|");
    printf("___________________________________________________|\n\n");
    getch();
    anfang();

    return 0;
}

void anfang()
{

    system("CLS");
    printf("Spieler O faengt an ");
    getch();
    spielfeld();

}

void spielfeld()
{
    int i;
    int auswahl;
    int runde=1;
    int gewonnen;
    for(int i=0;i<10;i++) //schränkt die runden ein
    {

    if (spieler=='O' && runde==2 || runde==4 || runde==6 || runde==8 || runde==10) { //wechselt den spieler von o zu x
        spieler='X';
    }
    else {
    spieler='O'; // der spieler wird zu o
    }

    //Rundenzähler//
    system("CLS");
    if (runde<10) {
    printf("Runde: %i\n",runde);
    }
    else {
    printf("Runde: 9\n");
    }

    //Spielfeld Darstellung//
    printf(" %c | %c | %c \n",felder[1],felder[2],felder[3]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",felder[4],felder[5],felder[6]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",felder[7],felder[8],felder[9]);
    printf("\n\n");
    printf("Spieler %c ist dran\n",spieler);

    printf("Wo wollen sie ihr Zeichen setzen? ");

    //Setzen der Zeichen//
    scanf("%i",&auswahl);
    if (spieler=='x' || spieler=='X') {
    felder[auswahl]='X';
    }

    if (spieler=='o' || spieler=='O') {
    felder[auswahl]='O';
    }
    if (runde>9)
    {
        system("CLS");
        printf("Keiner hat gewonnen,Unentschieden");
    }

    //Bedingungen fürs Gewinnen, diese werden in jeder schleife geprüft.
    if(felder[1]=='X' && felder[2]=='X' && felder[3]=='X' || felder[4]=='X' && felder[5]=='X' && felder[6]=='X' || felder[7]=='X' && felder[8]=='X' && felder[9]=='X') {
       system("CLS");
       printf("Spieler X hat gewonnen");
       exit(1);
   }
   else if (felder[1]=='X' && felder[4]=='X' && felder[7]=='X' || felder[2]=='X' && felder[5]=='X' && felder[8]=='X' || felder[3]=='X' && felder[6]=='X' && felder[9]=='X')
   {
        system("CLS");
        printf("Spieler X hat gewonnen");
        exit(1);
   }
   else if (felder[1]=='X' && felder[5]=='X' && felder[8]=='X' || felder[7]=='X' && felder[5]=='X' && felder[3]=='X')
   {
        system("CLS");
        printf("Spieler X hat gewonnen");
        exit(1);
   }


   if(felder[1]=='O' && felder[2]=='O' && felder[3]=='O' || felder[4]=='O' && felder[5]=='O' && felder[6]=='O' || felder[7]=='O' && felder[8]=='O' && felder[9]=='O') {
       system("CLS");
       printf("Spieler O hat gewonnen");
       exit(1);
   }
   else if (felder[1]=='O' && felder[4]=='O' && felder[7]=='O' || felder[2]=='O' && felder[5]=='O' && felder[8]=='O' || felder[3]=='O' && felder[6]=='O' && felder[9]=='O')
   {
        system("CLS");
        printf("Spieler O hat gewonnen");
        exit(1);

   }
   else if (felder[1]=='O' && felder[5]=='O' && felder[8]=='O' || felder[7]=='O' && felder[5]=='O' && felder[3]=='O')
   {
        system("CLS");
        printf("Spieler O hat gewonnen");
        exit(1);

   }
    runde++;
    }
}
