 			//TIC-TOC-TOE is the name of my game.// 

     /* 	FEATURE ABOUT GAME

->it is a 267 lines code, 
->In this game 'X' and 'O' are two player.
->This game will give demo firstly...that how to play game properly...
->In this game you have to play in 3x3 size box...
->if 3 continuous 'X' or 3 continuous 'O'... digonally ,vertically ,horizontally 
	any way  come together then that player will win...
->it also was given all instruction,,and also timer
->it will give you warning also if you cheat in the game...
->if cheater player warning>3 then the player will be automatically out from the game...
->This game is not graphical it will played in the console screen of compiler...
->if any player will win , the name of player will be declare*/

//code of game
#include<iostream>
using namespace std;
#include<windows.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{	
    char s[3][3],ch[3]="OX",e;
    int i,j,f,x,o,n,k,t,a[9],b[9];
    system("color 0f");
    t=15;
    while(t)
    {
    	cout<<"*";
    	t--;
    	Sleep(50);
    }
    cout<<"WELCOME TO TIC-TOC-TAE";
     t=15;
    while(t)
    {
    	cout<<"*";
    	t--;
    	Sleep(50);
    }
    	
	cout<<"\n\n\tInstruction :- (1) ONLY ONE KEY PRESS IN ONE TIME....\n\t (2) IF YOU HAVE WARNING > 3\n \t YOU WILL BE OUT FROM GAME\n";
    cout<<".....................................................................................................\n\n";
       cin.get(e);
	cout<<"____DEMO____3*3 \n\n";
	
	for(i=1;i<=11;i++) 
	{       
		if(i==2)
		cout<<"X";
		else if(i%4==0)
		cout<<"\n";
		else
		cout<<".";
		Sleep(1000);
	}  
    cout<<"\nFOR START PRESS ANY KEY\n\n";
    cin.get(e);
    
    cout<<"\nEnter number of times u play\n\a";
    cout<<"-----------------------------\n->";
    cin>>n;
    cout<<"\n\n";
   
    //for timer**
     t=5;
     while(t)
    {system("color 79");
    cout<<"00 : 0"<<t;
    t--;
     for(i=1;i<=7;i++)
    cout<<"\b";
     system("color 1B");
    Sleep(1000);
   }
   //GAMING PART**
 
   cout<<"1:- X's turn ->\n";
    cout<<"--------\n";
    
    for(k=1;k<=n;k++)
    {        
        int c=0;
    	
  label:  for(i=0;i<3;i++)
  	{
  	 system("color 1B");
	  cout<<"\t\t";
    	cin>>s[i];       //for 2d print string
    	}
    	
    	int X=0,O=0;
    
    	for(i=0;i<3;i++)
    	{for(j=0;j<3;j++)
    	{
    	  if(s[i][j]=='X')
	      X++;
	  if(s[i][j]=='O')
		O++;	
	}}
	
//ERROR PORTION**
	if(X+O>k||X+O<k)
	{c++;
	system("color 4B");
	cout<<" WARNING.."<<c<<"\n\a";
	if(c>3)
	{cout<<"\nWARNING OVER... '"<<ch[k%2]<<"'...OUT FROM GAME";
	     exit(0);
	}
	cout<<"PLEASE AGAIN FILL\n";
	goto label;}
	
	if(X-O>1||X-O<0)
	{c++;
	system("color 4B");
	cout<<"WARNING.."<<c<<"\n\a";
	if(c>3)
	{
	system("color 79");
	cout<<"\nWARNING OVER... '"<<ch[k%2]<<"'...OUT FROM GAME";
	     exit(0);
	}
	cout<<"PLEASE AGAIN FILL\n";
	goto label;}
	
	/* IF POSITION OF 'X' and 'O' changed**
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	{
	if(k%2==1)
	{
	if(s[i][j]=='X')
	{a[i]=i;
	 b[j]=j;
	}
	}*/
//FOR ROW
  	 for(i=0;i<3;i++)
    	{
        x=0;   o=0;
        for(j=0;j<3;j++)
        {
            if(s[i][j]=='X')
                x++;

            if(s[i][j]=='O')
                 o++;
        }
        if(x==3)
        { system("color 1F");
	cout<<"ROW " << i+1 <<" MATCHED...\n\n";
	cout<<"RESULT..........\n\n  'X' WON.\n   end";
        exit(0);
        }
        if(o==3)
       {system("color 1F");
       cout<<"ROW " << i+1 <<" MATCHED...\n\n";
	cout<<"RESULT..........\n\n  '0' WON.\n   end";
        exit(0);
        }
    }
    
//for digonal**
    x=0,o=0;
    for(i=0;i<3;i++)
    {   
    	for(j=0;j<3;j++)
    	{
    		if(i==j)
    		{
    			if(s[i][j]=='X')
    			x++;
    			if(s[i][i]=='O')
    			o++;
    		}}
    	
	if(x==3)
        {system("color 1F");
	cout<<"DIGONAL MATCHED...\n\n";
	cout<<"Result....\n  'X' WON.\n   end";
        exit (0);
        }
        if(o==3)
      {system("color 1F"); 
      cout<<"DIGONAL MATCHED...\n\n";
	cout<<"Result....\n  'O' WON.\n   end";
        exit (0);
        }
    }
    
//another digonal**
     x=0,o=0;
    for(i=0;i<3;i++)
    {   
    	for(j=0;j<3;j++)
    	{
    		if(i+j==2)
    		{
    			if(s[i][j]=='X')
    			x++;
    			if(s[i][j]=='O')
    			o++;
    		}}
    	
	if(x==3)
        {system("color 1F");
	cout<<"DIGONAL MATCHED...\n\n";
	cout<<"Result....\n  'X' WON.\n   end";
        exit (0);
        }
        if(o==3)
        {system("color 1F"); 
	cout<<"DIGONAL MATCHED...\n\n";
	cout<<"Result....\n  'O' WON.\n   end";
        exit (0);
        }
    }
    
//FOR COLOUM
  X=0,O=0;
    
    for(i=0;i<3;i++)
    {x=0;   o=0;
        for(j=0;j<3;j++)
        {
            if(s[j][i]=='X')
                {
		x++;
		X++;
		}

            if(s[j][i]=='O')
                {
		 o++;
		 O++;
		}
        }
        if(x==3)
        {system("color 1F");
	cout<<"COLUMN " <<i+1<< " MATCHED...\n\n";
	cout<<"RESULT..........\n\n  'X' WON.\n   end";
        exit(0);
        }
        if(o==3)
       {system("color 1F");
       cout<<"COLUMN " <<i+1<< " MATCHED...\n\n";
	cout<<"RESULT..........\n\n  'O' WON.\n   end";
        exit(0);
        }
    }
    if((X+O)==9)
	{
	cout<<"GAME DRAW...\n\n     end";
	exit(0);
	}
	if(k==n)
	{
		cout<<".....GAME OVER\n\n :- THANK YOU FOR PLAY:-";
		exit(0);}

//turning portion**	
	 if(X-O==1)
	{ 
	cout<<"\n"<<(k+1)<<":- O's turn.-->\n";
	 cout<<"--------\n";
	system("color 1b");}

	else  if(X==O)
	{
	cout<<"\n"<<(k+1)<<":- X's turn.-->\n";
	 cout<<"--------\n";
	system("color 1b");}
	else
	{}
}
return 0;
}
