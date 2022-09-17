#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char square[] ={'o','1','2','3','4','5','6','7','8','9'};
int cheakWin();
void drawbord();

int main()
{   system("color 1a");
    int player=1,i,choice;
    char mark; // 0 ,X
    do 
    {  drawbord();
     player=(player%2) ? 1:2;
       mark=(player==1) ? 'X' : '0';
     printf("player %d enter choice: ",player);
     scanf("%d",&choice);
     if(choice==1 && square[1]=='1')
        square[1]=mark;
    else if(choice ==2 && square[2]=='2')
        square[2]=mark;        
    else if(choice ==2 && square[2]=='2')
        square[2]=mark; 
    else if(choice ==3 && square[3]=='3')
        square[3]=mark; 
    else if(choice ==4 && square[4]=='4')
        square[4]=mark; 
    else if(choice ==5 && square[5]=='5')
        square[5]=mark; 
    else if(choice ==6 && square[6]=='6')
        square[6]=mark; 
    else if(choice ==7 && square[7]=='7')
        square[7]=mark; 
    else if(choice ==8 && square[8]=='8')
        square[8]=mark; 
    else if(choice ==9 && square[9]=='9')
        square[9]=mark;
    else 
 {   printf("INvaid option ");
     player--;
     getch();
  }
  i =cheakWin();
  player++;
    }while(i==-1);

    drawbord();
 if(i==1)
 {
    printf("==>player %d is won",--player);
 }
 else{
    printf("==>play drawn");
    
 }
    getch();
    return 0; 
}
int cheakWin()
{    if(square[1]==square[2] && square[2]==square[3])
            return 1;
    else if(square[4]==square[5] && square[5]==square[6])
            return 1;
    else if(square[7]==square[8] && square[8]==square[9])
            return 1;
    else if(square[1]==square[2] && square[2]==square[3])
            return 1;
     else if(square[1]==square[5] && square[5]==square[9])
            return 1;
    else if(square[3]==square[5] && square[5]==square[7])
            return 1;
    else if(square[1]==square[4] && square[4]==square[7])
            return 1;
    else if(square[2]==square[5] && square[5]==square[8])
            return 1;
    else if(square[3]==square[6] && square[6]==square[9])
           return 1;
  else if(square[1]!='1' &&square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' &&square[9]!='9')
        return 0;
    else 
    return -1;

}

void drawbord()
{   system("cls");
   printf("\n\n tic tac toe\n\n");
   printf("player1 (X) vs  player2 (0)\n");
   printf("    |    |     \n");
   printf(" %c  | %c  | %c  \n",square[1],square[2],square[3]);
   printf("____|____|____ \n");
   printf("    |    |     \n");
   printf(" %c  | %c  | %c  \n",square[4],square[5],square[6]);
   printf("____|____|____ \n");
   printf("    |    |     \n");
   printf(" %c  | %c  | %c \n",square[7],square[8],square[9]);
   printf("    |    |    \n");


} 