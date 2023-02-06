#include <iostream>
using namespace std;
#include <string>
#include <array>

void board()
{

     char grid[5][5];
     for (int i=0; i<5; i++)
     {
          for(int j=0; j<5; j++)
          {
               grid[i][j]= '.';
          }
     }
     
}

void display()
{    
     char grid[5][5];

     cout << "Here is the board: " << endl;
     cout<< "-------------"<<endl;
     cout << "|  0 1 2 3 4 " << endl;
     for (int i=0; i<5; i++)
     {
          
          cout<<"|" << i << " ";
          for (int j=0; j<5; j++)
          {
               cout<< grid[i][j] <<" ";
          }
          cout<< endl;
     }
     cout<< "-------------"<<endl;
}
