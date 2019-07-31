#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char ttt[9];
int mchoice,player,choice,w,m,n,ch,i;
char mark;

int menu()
{
	int a;
	printf("\n");
	printf("\t\t\t\t     -----------------------------------------------------  \n");
	printf("\t\t\t\t    |    ___    __    ___   __    __    ___   __   __    | \n");
	printf("\t\t\t\t    |     |  | |    -  |   |__|  |   -   |   |  | |_     | \n");
	printf("\t\t\t\t    |     |  | |__     |   |  |  |__     |   |__| |__    | \n");
	printf("\t\t\t\t     -----------------------------------------------------  \n");
	printf("\n");
	printf("\t\t\t\t          ------------------------------------------  \n");
	printf("\t\t\t\t         |    _ _   _  .  _      _ _  __   _        | \n");
	printf("\t\t\t\t         |   | | | |-| | | |    | | | |=_ | | |_|   | \n");
	printf("\t\t\t\t          ------------------------------------------  \n");
	printf("\n\n");
	printf("\t\t   -----------------  \t\t     ----------------  \t\t     --------  \n");
	printf("\t\t1.|  SINGLE PLAYER  | \t\t  2.|  MULTI PLAYER  | \t\t  3.|  EXIT  | \n");
	printf("\t\t   -----------------  \t\t     ----------------  \t\t     --------  \n");
	printf("\n\n");
	printf("\t\tEnter Choice: ");
	scanf("%d",&a);
	return a;
}

void layout_two_player()
{
	printf("\n\tGame %d",i);
	printf("\n\n\tWins:");
	printf("\t\tPlayer 1 - %d\t\tPlayer 2 - %d",m,n);
	printf("\n\n\tMark:\t\tPlayer 1 (X)\t\tPlayer 2 (O)");
	printf("\n\n\n");
	printf("\t\t %c  |  %c  |  %c\n",ttt[0],ttt[1],ttt[2]);
	printf("\t\t---------------\n");
	printf("\t\t %c  |  %c  |  %c\n",ttt[3],ttt[4],ttt[5]);
	printf("\t\t---------------\n");
	printf("\t\t %c  |  %c  |  %c\n",ttt[6],ttt[7],ttt[8]);
	printf("\n");
}

void layout_single_player()
{
    printf("\n\tGame %d",i);
    printf("\n\n\tWins:");
    printf("\t\tPlayer - %d\t\tComputer - %d",m,n);
    printf("\n\n\tMark:\t\tPlayer (X)\t\tComputer (O)");
    printf("\n\n\n");
    printf("\t\t %c  |  %c  |  %c\n",ttt[0],ttt[1],ttt[2]);
	printf("\t\t---------------\n");
	printf("\t\t %c  |  %c  |  %c\n",ttt[3],ttt[4],ttt[5]);
	printf("\t\t---------------\n");
	printf("\t\t %c  |  %c  |  %c\n",ttt[6],ttt[7],ttt[8]);
	printf("\n");
}

int win()
{
	if(ttt[0]==ttt[3]&&ttt[3]==ttt[6])
		return 1;
	else if(ttt[1]==ttt[4]&&ttt[4]==ttt[7])
		return 1;
	else if(ttt[2]==ttt[5]&&ttt[5]==ttt[8])
		return 1;
	else if(ttt[0]==ttt[1]&&ttt[1]==ttt[2])
		return 1;
	else if(ttt[3]==ttt[4]&&ttt[4]==ttt[5])
		return 1;
	else if(ttt[6]==ttt[7]&&ttt[7]==ttt[8])
		return 1;
	else if(ttt[0]==ttt[4]&&ttt[4]==ttt[8])
		return 1;
	else if(ttt[2]==ttt[4]&&ttt[4]==ttt[6])
		return 1;
	else if(ttt[0]!='1'&&ttt[1]!='2'&&ttt[2]!='3'&&ttt[3]!='4'&&ttt[4]!='5'&&ttt[5]!='6'&&ttt[6]!='7'&&ttt[7]!='8'&&ttt[8]!='9')
		return 0;
	else
		return -1;
}

char winnable()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='O' && b=='O' && c=='3')
        return '3';
    else if(a=='O' && b=='2' && c=='O')
        return '2';
    else if(a=='1' && b=='O' && c=='O')
        return '1';
    else if(d=='O' && e=='O' && f=='6')
        return '6';
    else if(d=='O' && e=='5' && f=='O')
        return '5';
    else if(d=='4' && e=='O' && f=='O')
        return '4';
    else if(g=='O' && h=='O' && i=='9')
        return '9';
    else if(g=='O' && h=='8' && i=='O')
        return '8';
    else if(g=='7' && h=='O' && i=='O')
        return '7';
    else if(a=='O' && d=='O' && g=='7')
        return '7';
    else if(a=='O' && d=='4' && g=='O')
        return '4';
    else if(a=='1' && d=='O' && g=='O')
        return '1';
    else if(b=='O' && e=='O' && h=='8')
        return '8';
    else if(b=='O' && e=='5' && h=='O')
        return '5';
    else if(b=='2' && e=='O' && h=='O')
        return '2';
    else if(c=='O' && f=='O' && i=='9')
        return '9';
    else if(c=='O' && f=='6' && i=='O')
        return '6';
    else if(c=='3' && f=='O' && i=='O')
        return '3';
    else if(a=='O' && e=='O' && i=='9')
        return '9';
    else if(a=='O' && e=='5' && i=='O')
        return '5';
    else if(a=='1' && e=='O' && i=='O')
        return '1';
    else if(c=='O' && e=='O' && g=='7')
        return '7';
    else if(c=='O' && e=='5' && g=='O')
        return '5';
    else if(c=='3' && e=='O' && g=='O')
        return '3';
    return '0';
}

char loseable()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='O' && b=='O' && c=='3')
        return '3';
    else if(a=='X' && b=='2' && c=='X')
        return '2';
    else if(a=='1' && b=='X' && c=='X')
        return '1';
    else if(d=='X' && e=='X' && f=='6')
        return '6';
    else if(d=='X' && e=='5' && f=='X')
        return '5';
    else if(d=='4' && e=='X' && f=='X')
        return '4';
    else if(g=='X' && h=='X' && i=='9')
        return '9';
    else if(g=='X' && h=='8' && i=='X')
        return '8';
    else if(g=='7' && h=='X' && i=='X')
        return '7';
    else if(a=='X' && d=='X' && g=='7')
        return '7';
    else if(a=='X' && d=='4' && g=='X')
        return '4';
    else if(a=='1' && d=='X' && g=='X')
        return '1';
    else if(b=='X' && e=='X' && h=='8')
        return '8';
    else if(b=='X' && e=='5' && h=='X')
        return '5';
    else if(b=='2' && e=='X' && h=='X')
        return '2';
    else if(c=='X' && f=='X' && i=='9')
        return '9';
    else if(c=='X' && f=='6' && i=='X')
        return '6';
    else if(c=='3' && f=='X' && i=='X')
        return '3';
    else if(a=='X' && e=='X' && i=='9')
        return '9';
    else if(a=='X' && e=='5' && i=='X')
        return '5';
    else if(a=='1' && e=='X' && i=='X')
        return '1';
    else if(c=='X' && e=='X' && g=='7')
        return '7';
    else if(c=='X' && e=='5' && g=='X')
        return '5';
    else if(c=='3' && e=='X' && g=='X')
        return '3';
    return '0';
}

char empty_row()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='1' && b=='2' && c=='3')
        return '2';
    else if(d=='4' && e=='5' && f=='6')
        return '5';
    else if(g=='7' && h=='8' && i=='9')
        return '8';
    return '0';
}

char empty_col()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='1' && d=='4' && g=='7')
        return '4';
    else if(b=='2' && e=='5' && h=='8')
        return '5';
    else if(c=='3' && f=='6' && i=='9')
        return '6';
    return '0';
}

char road_to_win()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='O')
    {
        if(b=='2' && c=='3')
            return '3';
        else if(d=='4' && g=='7')
            return '7';
        else if(e=='5' && i=='9')
            return '5';
    }
    if(b=='O')
    {
        if(a=='1' && c=='3')
            return '1';
        else if(e=='5' && h=='8')
            return '5';
    }
    if(c=='O')
    {
        if(a=='1' && b=='2')
            return '1';
        else if(f=='6' && i=='9')
            return '8';
        else if(e=='5' && g=='7')
            return '5';
    }
    if(d=='O')
    {
        if(a=='1' && g=='7')
            return '1';
        else if(e=='5' && f=='6')
            return '5';
    }
    if(e=='O')
    {
        if(a=='1' && i=='9')
            return '1';
        else if(c=='3' && g=='7')
            return '3';
        else if(b=='2' && h=='8')
            return '2';
        else if(d=='4' && f=='6')
            return '4';
    }
    if(f=='O')
    {
        if(d=='4' && e=='5')
            return '5';
        else if(c=='3' && i=='9')
            return '3';
    }
    if(g=='O')
    {
        if(a=='1' && d=='4')
            return '1';
        else if(h=='8' && i=='9')
            return '9';
        else if(c=='3' && e=='5')
            return '5';
    }
    if(h=='O')
    {
        if(b=='2' && e=='5')
            return '5';
        else if(g=='7' && i=='9')
            return '7';
    }
    if(i=='O')
    {
        if(c=='3' && f=='6')
            return '3';
        else if(g=='7' && h=='8')
            return '7';
        else if(a=='1' && e=='5')
            return '5';
    }
    return '0';
}

char road_to_block()
{
    char a, b, c, d, e, f, g, h, i;
    a=ttt[0];b=ttt[1];c=ttt[2];d=ttt[3];e=ttt[4];
    f=ttt[5];g=ttt[6];h=ttt[7];i=ttt[8];
    if(a=='X')
    {
        if(b=='2' && c=='3')
            return '3';
        else if(d=='4' && g=='7')
            return '7';
        else if(e=='5' && i=='9')
            return '5';
    }
    if(b=='X')
    {
        if(a=='1' && c=='3')
            return '1';
        else if(e=='5' && h=='8')
            return '5';
    }
    if(c=='X')
    {
        if(a=='1' && b=='2')
            return '1';
        else if(f=='6' && i=='9')
            return '6';
        else if(e=='5' && g=='7')
            return '5';
    }
    if(d=='X')
    {
        if(a=='1' && g=='7')
            return '1';
        else if(e=='5' && f=='6')
            return '5';
    }
    if(e=='X')
    {
        if(a=='1' && i=='9')
            return '1';
        else if(c=='3' && g=='7')
            return '3';
        else if(b=='2' && h=='8')
            return '2';
        else if(d=='4' && f=='6')
            return '4';
    }
    if(f=='X')
    {
        if(d=='4' && e=='5')
            return '5';
        else if(c=='3' && i=='9')
            return '3';
    }
    if(g=='X')
    {
        if(a=='1' && d=='4')
            return '1';
        else if(h=='8' && i=='9')
            return '9';
        else if(c=='3' && e=='5')
            return '5';
    }
    if(h=='X')
    {
        if(b=='2' && e=='5')
            return '5';
        else if(g=='7' && i=='9')
            return '7';
    }
    if(i=='X')
    {
        if(c=='3' && f=='6')
            return '3';
        else if(g=='7' && h=='8')
            return '7';
        else if(a=='1' && e=='5')
            return '5';
    }
    return '0';
}

void get_computer_move()
{
    char chance;
    chance=winnable();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    chance=loseable();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    chance=road_to_win();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    chance=empty_row();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    chance=empty_col();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    chance=road_to_block();
    if(chance!='0')
    {
        for(int i=0;i<9;i++)
            if(ttt[i]==chance)
            {
                ttt[i]='O';
                return;
            }
    }
    for(int i=0;i<9;i++)
        if(ttt[i]!='X' && ttt[i]!='O')
        {
            ttt[i]='O';
            return;
        }

}

int main()
{
	do
	{       i=1;m=0;n=0;
		do
		{
			system("cls");
			mchoice=menu();
			if(mchoice!=1&&mchoice!=2&&mchoice!=3)
				printf("\n\t\tInvalid Input\n\t\tPlease Try Again");
			getch();
		}
		while(mchoice!=1&&mchoice!=2&&mchoice!=3);
        if(mchoice==2)
        {
            do
            {
                ttt[0]='1';ttt[1]='2';ttt[2]='3';ttt[3]='4';ttt[4]='5';
                ttt[5]='6';ttt[6]='7';ttt[7]='8';ttt[8]='9';
                player=1;
                do
                {
                    system("cls");
                    player=(player%2)?1:2;
                    mark=(player==1)?'X':'O';
                    layout_two_player();
                    printf("\n\n\tPlayer %d's Turn:\n",player);
                    printf("\n\tEnter Cell No.: ");
                    scanf("%d",&choice);
                    if(choice==1&&ttt[0]=='1')
                        ttt[0]=mark;
                    else if(choice==2&&ttt[1]=='2')
                        ttt[1]=mark;
                    else if(choice==3&&ttt[2]=='3')
                        ttt[2]=mark;
                    else if(choice==4&&ttt[3]=='4')
                        ttt[3]=mark;
                    else if(choice==5&&ttt[4]=='5')
                        ttt[4]=mark;
                    else if(choice==6&&ttt[5]=='6')
                        ttt[5]=mark;
                    else if(choice==7&&ttt[6]=='7')
                        ttt[6]=mark;
                    else if(choice==8&&ttt[7]=='8')
                        ttt[7]=mark;
                    else if(choice==9&&ttt[8]=='9')
                        ttt[8]=mark;
                    else
                    {
                        printf("\n\tInvalid move");
                        getch();
                        player--;
                    }
                    w=win();
                    player++;
                }
                while(w==-1);
                system("cls");
                layout_two_player();
                if(w==1)
                {
                    printf("\n\tPlayer %d wins!\n",--player);
                    if(player==1)
                        m++;
                    else
                        n++;
                }
                else if(w==0)
                    printf("\n\tGame Draw..\n");
                printf("\t\t\t   --------------  \t\t\t    --------------------  \n");
                printf("\t\t\t1.|  PLAY AGAIN  | \t\t\t 2.|  QUIT TO MAIN MENU | \n");
                printf("\t\t\t   --------------  \t\t\t    --------------------  \n");
                printf("\n\tEnter Choice : ");
                scanf("%d",&ch);
                while(ch!=1&&ch!=2)
                {
                    printf("\n\n\tInvalid Input");
                    printf("\n\tPlease Try Again");
                    getch();
                    system("cls");
                    layout_two_player();
                    if(w==1)
                        printf("\n\tPlayer %d wins!\n",player);
                    else if(w==0)
                        printf("\n\tGame Draw..\n");
                    printf("\t\t\t   --------------  \t\t\t    ---------------------  \n");
                    printf("\t\t\t1.|  PLAY AGAIN  | \t\t\t 2.|  QUIT TO MAIN MENU  | \n");
                    printf("\t\t\t   --------------  \t\t\t    ---------------------  \n");
                    printf("\n\tEnter Choice : ");
                    scanf("%d",&ch);
                }
                i++;
            }
            while(ch==1);
        }

        if(mchoice==1)
        {
            do
            {
                ttt[0]='1';ttt[1]='2';ttt[2]='3';ttt[3]='4';ttt[4]='5';
                ttt[5]='6';ttt[6]='7';ttt[7]='8';ttt[8]='9';
                player=1;
                do
                {
                    system("cls");
                    player=(player%2)?1:2;
                    layout_single_player();
                    if(player==1)
                    {
                        printf("\n\n\tYour Turn:");
                        printf("\n\n\tEnter Cell No.: ");
                        scanf("%d",&choice);
                        if(choice==1&&ttt[0]=='1')
                            ttt[0]='X';
                        else if(choice==2&&ttt[1]=='2')
                            ttt[1]='X';
                        else if(choice==3&&ttt[2]=='3')
                            ttt[2]='X';
                        else if(choice==4&&ttt[3]=='4')
                            ttt[3]='X';
                        else if(choice==5&&ttt[4]=='5')
                            ttt[4]='X';
                        else if(choice==6&&ttt[5]=='6')
                            ttt[5]='X';
                        else if(choice==7&&ttt[6]=='7')
                            ttt[6]='X';
                        else if(choice==8&&ttt[7]=='8')
                            ttt[7]='X';
                        else if(choice==9&&ttt[8]=='9')
                            ttt[8]='X';
                        else
                        {
                            printf("\n\tInvalid move");
                            getch();
                            player--;
                        }
                        w=win();
                        player++;
                    }
                    else if(player==2)
                    {
                        printf("\n\n\tComputer's Turn:");
                        get_computer_move();
                        w=win();
                        player++;
                    }
                }
                while(w==-1);
                system("cls");
                layout_single_player();
                if(w==1)
                {
                    player--;
                    if(player==1)
                    {
                        printf("\n\tCongratulations!! You Win\n");
                        m++;
                    }
                    else
                    {
                        printf("\n\tYou Lose..\n");
                        n++;
                    }
                }
                else if(w==0)
                    printf("\n\tGame Draw..\n");
                do
                {
                    printf("\t\t\t   --------------  \t\t\t    ---------------------  \n");
                    printf("\t\t\t1.|  PLAY AGAIN  | \t\t\t 2.|  QUIT TO MAIN MENU  | \n");
                    printf("\t\t\t   --------------  \t\t\t    ---------------------  \n");
                    printf("\n\tEnter Choice : ");
                    scanf("%d",&ch);
                    if(ch!=1 && ch!=2)
                    {
                        printf("\n\tInvalid Choice");
                        printf("\n\tPlease Try Again..");
                        getch();
                        system("cls");
                        layout_single_player();
                        if(w==1)
                            if(player==1)
                                printf("\n\tCongratulations!! You Win\n");
                            else
                                printf("\n\tYou Lose..\n");
                        else if(w==0)
                            printf("\n\tGame Draw..\n");
                    }
                }
                while(ch!=1 && ch!=2);
                i++;
            }
            while(ch==1);
        }
	}
	while(mchoice==1 || mchoice==2);
	return 0;
}
