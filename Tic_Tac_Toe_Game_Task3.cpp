#include <iostream>
using namespace std;
int main()
{
    char A[3][3]={{'-','-','-'},
                  {'-','-','-'},
                  {'-','-','-'}};

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {if(j==0||j==1)
            cout<<A[i][j]<<"  | ";
            else
            cout<<A[i][j]<<"   ";
            if(j==2)
            cout<<"\n------------\n";
        }
    }

    int currentPlayer=1;
    int row,col;
   while(1)
   {

         cout<<"Player "<<currentPlayer<<", Enter row and column to place your marks\n";
    cout<<"Row : ";
    cin>>row;
    cout<<"Column : ";
    cin>>col;
    if(row<1 ||row>3 ||col<1 ||col>3)
    {
        cout<<"Invalid input\nPlease enter again";
        cout<<"Row : ";
    cin>>row;
    cout<<"Column : ";
    cin>>col;
    }    if(A[row-1][col-1]!='X' && A[row-1][col-1]!='O')
    {
    if(currentPlayer==1)
     A[row-1][col-1]='X';
    else if (currentPlayer==2)
     A[row-1][col-1]='O';
    
if(currentPlayer==1)
     A[row-1][col-1]='X';
     if(currentPlayer==2)
     A[row-1][col-1]='O';
     

if(currentPlayer==1)
currentPlayer=2;
else if(currentPlayer==2)
currentPlayer=1;




for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {if(j==0||j==1)
            cout<<A[i][j]<<"  | ";
            else
            cout<<A[i][j]<<"   ";
            if(j==2)
            cout<<"\n------------\n";
        }
    }

for(int i=0 ; i<3 ; i++){
        if(A[0][i]=='X' && A[1][i]=='X' && A[2][i]=='X'){
        cout<<"Player 1 has won";
        return 0;}
        else if(A[0][i]=='O' && A[1][i]=='O' && A[2][i]=='O')
 { cout<<"Player 2 has won";
        return 0;
 }
       if(A[i][0]=='X' && A[i][1]=='X' && A[i][2]=='X')
 { cout<<"Player 1 has won";
        return 0;}
        
        else if(A[i][0]=='O' && A[i][1]=='O' && A[i][2]=='O')
       { cout<<"Player 2 has won";
        return 0;
        }
        if(A[0][0]=='X' && A[1][1]=='X' && A[2][2]=='X')
        { cout<<"Player 1 has won";
        return 0;}
        else if(A[0][0]=='O' && A[1][1]=='O' && A[2][2]=='O')
        { cout<<"Player 2 has won";
        return 0;
        }

        if(A[0][2]=='X' && A[1][1]=='X' && A[2][0]=='X')
        { cout<<"Player 1 has won";
        return 0;}
        else if(A[0][2]=='O' && A[1][1]=='O' && A[2][0]=='O')
        { cout<<"Player 2 has won";
        return 0;
        }
    }
  if(A[0][0]!='-' && A[0][1]!='-' && A[0][2]!='-' && A[1][0]!='-' && A[1][1]!='-' && A[1][2]!='-' && A[2][0]!='-' && A[2][1]!='-' && A[2][2]!='-')
    {
        cout<<"Match Drawn";
        return 0;
    }

}
else
{
     cout<<"Box already occupied. Please enter again.\n";
   
}
}
return 0;
}