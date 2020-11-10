#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define ESC 0
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define TAB 5
void setuserdisp(int A[][4]);
void setMatrix(int A[][4]);
void showMatrix(int A[][4]);
void setMatrixnum(int A[][4]);
void showMatrixnum(int A[][4]);
int readKey();
int checkWin(int A[][4]);
int checkWinstring(int A[][4]);
int checkwinAlpha(int [][4]);
int shiftRight(int A[][4]);
int shiftLeft(int A[][4]);
int shiftUp(int A[][4]);
int shiftDown(int A[][4]);
void new();
char pool[15];
void main()
{
       //	int gd=DETECT,gm;
	clrscr();
       //	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//	rectangle(75,75,200,200);
//	 textbackground(03);
       new();
    getch();
   // closegraph();
  }
  void new()
  {
    int choice,y,n;
    int A[4][4],move=1000;
    char name=10,nam ;
	  textcolor(033);
	 printf("\n");cprintf("YOU WANT TO PLAY ENTER YOUR NAME:- ");
	 cscanf("%s",nam);
	 name=strupr(nam);
// setbkcolor(03);
 /*	rectangle(25,5,500,30);
	outtextxy(100,10,"YOU WANT TO PLAY ENTER YOUR NAME:- ");
	printf("\n\n\t\t\t\t");
	scanf("%s",name);


	printf("\n\n\n\t");
	rectangle(100,70,350,200);
	outtextxy(120,100,"*********OPTIONS**********");
	outtextxy(160,120," 1.NUMBER   ");
     outtextxy(160,140," 2.ALPHABETS ");

	outtextxy(160,160," 3.USERWANT ");
	rectangle(80,200,400,250);
	 outtextxy(90,220," WHICH TYPE U WANT TO PLAY:-");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t");

	scanf("%d",&choice); */
	textcolor(02);
   printf("\t\t");cprintf("  *********OPTIONS**********");
   textcolor(07);
   printf("\n\t\t\t");cprintf("---------------");
   printf("\n\t\t\t");cprintf("| 1.NUMBER    |");
   textcolor(01);
   printf("\n\t\t\t");cprintf("---------------");
   printf("\n\t\t\t");cprintf("| 2.ALPHABETS |");
   textcolor(05);
   printf("\n\t\t\t");cprintf("---------------");
   printf("\n\t\t\t");cprintf("| 3.USERWANT  |");
   printf("\n\t\t\t");cprintf("---------------");
   textcolor(0345);
    printf("\n");cprintf(" WHICH TYPE U WANT TO PLAY:-");
   cscanf("%d",&choice);
  //	printf("\n\t\t");
	switch(choice)
	   {
	    case 1:

	   setMatrixnum(A);
	   while(move){
	   textcolor(054);
       //	   textbackground(04);
	  cprintf("%s ",name);
	  textcolor(03);
	 cprintf("YOU HAVE ONLY ");
	  textcolor(02236);
	 cprintf(" %d",move);
	 textcolor(03);
	 cprintf(" MOVE REAMANING");
	 printf("\n");
	 printf("\tNEW  ",name);
	 textcolor(02237);
	 cprintf(" [TAB]");
	 printf("\n");
	 printf("\tEXIT");
	 textcolor(022334);
	 cprintf("  [ESC]");
	showMatrixnum(A);
	if(checkWin(A))
	{
	textbackground(06);
	   printf("\nCONGRATULATION YOU WIN IN %d MOVES",500-move);
	   printf("\nPress any key to exit...");
	   getch();
	   exit(0);
	}
	switch(readKey())
	{
	case ESC:
	    exit(0);
	case UP:
	    if(!shiftDown(A))

		move++;
	    break;
	case DOWN:
	    if(!shiftUp(A))
		move++;
	    break;
	case LEFT:
	    if(!shiftRight(A))
		move++;
	    break;
	case RIGHT:
	    if(!shiftLeft(A))
		move++;
	    break;
	case TAB:
	new();
	default:
	    move++;
	}
	system("cls");
	move--;
    }
    break;
    case 2:

    setMatrix(A);

    while(move)
    {
	  textcolor(02236);
       //	   textbackground(04);
	  cprintf("%s",name);
	 printf("YOU HAVE ONLY ");cprintf(" %d",move);printf(" MOVE REAMANING");
	 printf("\n");
	 printf("%s NEW",name);
	 textcolor(02237);
	 cprintf("[TAB]");
	 printf("\n");
	 printf("EXIT  ");
	 textcolor(022334);
	 cprintf("[ESC].....");
       showMatrix(A);
	if(checkWinAlpha(A))
	{
	textcolor(022433123);
	   printf("\n\t\t");cprintf("CONGRATULATION YOU WIN IN %d MOVES",500-move);
	   printf("\n\t\t");cprintf("Press any key to exit...");
	   getch();
	   exit(0);
	}
	switch(readKey())
	{
	case ESC:
	  exit(0);

	case UP:
	    if(!shiftDown(A))
		move++;
	    break;
	case DOWN:
	    if(!shiftUp(A))
		move++;
	    break;
	case LEFT:
	    if(!shiftRight(A))
		move++;
	    break;
	case RIGHT:
	    if(!shiftLeft(A))
		move++;
	    break;
	    case TAB:
	    new();
	default:
	    move++;
	}
	system("cls");
	move--;
    }

    break;

   case 3:
		setuserdisp(A);
		while(move)
		{
		   textcolor(02236);
       //	   textbackground(04);
	  cprintf("%s",name);
	 printf("YOU HAVE ONLY ");cprintf(" %d",move);printf(" MOVE REAMANING");
	 printf("\n");
	 printf("%s YOU WANT TO PLAY OTHER PLESE PRESS ",name);
	 textcolor(02237);
	 cprintf("[TAB]");
	 printf("\n");
	 printf("  EXIT ");
	 textcolor(022334);
	 cprintf("[ESC]");
		showMatrix(A);
		if(checkWinstring(A))
		{
		textcolor(06);
		printf("\nCONGRATULATION YOU WIN IN %d MOVES",500-move);
		printf("\nPress any key to exit...");
		getch();
		exit(0);
		}
		switch(readKey())
		{
		case ESC:
			exit(0);
		case UP:
		if(!shiftDown(A))
			move++;
		 break;
		case DOWN:
		if(!shiftUp(A))
			move++;
		 break;
		case LEFT:
		if(!shiftRight(A))
			move++;
		break;
		case RIGHT:
		if(!shiftLeft(A))
			move++;
		break;
		case TAB:
		    new();
		default:
			move++;
	}
	system("cls");
	move--;
    }
    break;


   }




}
int shiftRight(int A[][4]){
    int i,j,temp,zeroFound=0;

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	    if(A[i][j]==0){
	       //textbackground(05);
		zeroFound=1;
		break;
	    }
	}
	if(zeroFound)
	    break;
    }
    if(j==0)
	return(0);//shifting not possible
    else{
	temp=A[i][j];
	A[i][j]=A[i][j-1];
	A[i][j-1]=temp;
	return(1);
    }

}
int shiftLeft(int A[][4]){
  int i,j,temp,zeroFound=0;

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	    if(A[i][j]==0){
		zeroFound=1;
		break;
	    }
	}
	if(zeroFound)
	    break;
    }
    if(j==3)
	return(0);//shifting not possible
    else{
	temp=A[i][j];
	A[i][j]=A[i][j+1];
	A[i][j+1]=temp;
	return(1);
    }

}
int shiftUp(int A[][4]){
      int i,j,temp,zeroFound=0;

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	    if(A[i][j]==0){
		zeroFound=1;
		break;
	    }
	}
	if(zeroFound)
	    break;
    }
    if(i==3)
	return(0);//shifting not possible
    else{
	temp=A[i][j];
	A[i][j]=A[i+1][j];
	A[i+1][j]=temp;
	return(1);
    }

}
int shiftDown(int A[][4]){
	  int i,j,temp,zeroFound=0;

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	    if(A[i][j]==0){
		zeroFound=1;
		break;
	    }
	}
	if(zeroFound)
	    break;
    }
    if(i==0)
	return(0);//shifting not possible
    else{
	temp=A[i][j];
	A[i][j]=A[i-1][j];
	A[i-1][j]=temp;
	return(1);
    }

}



int checkWin(int A[][4])
{
    int i,j,k=0;
     for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
		k<15?k++:(k=0);
	    if(A[i][j]!=k)
		return(0);
	}
     }
     return(1);

}
int checkWinAlpha(int A[][4])
{
    int i,j,k=64;
     for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
		k<79?k++:(k=64);
	    if(A[i][j]!=k)
		return(0);
	}
     }
     return(1);

}
int checkWinstring(int A[][4])
{
    int i,j,k=pool[0];
     for(i=0;i<=3;i++)
     {
	for(j=0;j<=3;j++)
	{
		k<pool[15]?k++:(k=pool[0]);
	    if(A[i][j]!=k)
		return(0);
	}
     }
     return(1);

}


int readKey(){
    int ch;
    ch=getch();
    if(ch==224)
	ch=getch();
    switch(ch)
    {
    case 9:
    return(TAB);
    case 27:
	return(ESC);
    case 72:
	return(UP);
    case 80:
	return(DOWN);
    case 75:
	return(LEFT);
    case 77:
	return(RIGHT);
    default:
	return(6);

    }
}

void showMatrix(int A[][4])
{
 int i,j;
  textcolor(036);
  printf("\n");cprintf("-------------------------");printf("\n");cprintf("|");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
		if(A[i][j]!=0)
		cprintf(" %-2c | ",A[i][j]);
		else
		    cprintf("    | ");
	 }
    printf("\n");cprintf("-------------------------");printf("\n");
	if(i!=3)
       cprintf("|");


 }
}
void setMatrix(int A[][4]){
    int pool[15]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79};
    int maxIndex=14,index,i,j;


    srand(time(NULL));

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	    if(maxIndex>=0){
		index=rand()%(maxIndex+1);
		A[i][j]=pool[index];
		pool[index]=pool[maxIndex];
		maxIndex--;
	    }
	    else
		A[i][j]=0;

	}
    }


}
void showMatrixnum(int A[][4]){
 int i,j;
      printf("\n-------------------------\n|");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
		if(A[i][j]!=0)
		printf(" %-2d | ",A[i][j]);
		else
		    printf("    | ");
		 }
	printf("\n-------------------------\n");
	if(i!=3)
	printf("|");

 }
}

void setMatrixnum(int A[][4])
{
    int pool[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int maxIndex=14,index,i,j;
    srand(time(NULL));

    for(i=0;i<=3;i++){
	for(j=0;j<=3;j++){
	   if(maxIndex>=0){
		index=rand()%(maxIndex+1);
		A[i][j]=pool[index];
		pool[index]=pool[maxIndex];
		 maxIndex--;
	    }
	   else
		A[i][j]=0;

	}
    }

}
void setuserdisp(int A[][4])
{

    int maxIndex=14,index,i,j,count;
    printf("\n\t");
    printf("|----------------------------------------------------|");
    printf("\n\t");
    textcolor(05524);
   cprintf(" Enter The String You Want Solve");
   textcolor(02211);
    printf("\n\t");cprintf(" [String Must Be Contain 15 Character Without Spaace]");printf("\n:->");
    textcolor(02);
    cscanf("%s",&pool);
    printf("\n\t|----------------------------------------------------|");
    count=strlen(&pool);
      if(count>15 || count<15)
    {
    textcolor(0223234);
    printf("\n\t\YOUR STRING HAVE CHARACTER [%d] \n");cprintf(" PLEASE ENTER VALID STRING....... ",count);
    setuserdisp(A);
    }
    else
    {
    srand(time(NULL));

    for(i=0;i<=3;i++)
    {
	for(j=0;j<=3;j++)
	{
	    if(maxIndex>=0)
	    {
		index=rand()%(maxIndex+1);
		A[i][j]=pool[index];
		pool[index]=pool[maxIndex];
		maxIndex--;
	    }
	    else
		A[i][j]=0;

	}
    }

   }
}
