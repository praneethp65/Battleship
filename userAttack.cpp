#include <iostream>
using namespace std;
#include <string>
#include <array>
#include <stdlib.h>  
#include <experimental/random>
#include "grid.cpp"

void setShip()
{
     char grid[5][5];
     int remainingShips= 0;
     int totalShips =5;
     while(remainingShips< totalShips)
     {
          int x = experimental::randint(0,4);
          int y = experimental::randint(0,4);
          if(grid[x][y] != 'v')
          {
               remainingShips++;
               grid[x][y] = 'v';
          }
     }
     cout<<"Five ships have been deployed and hidden"<<endl;
     
}
void check()
{
     int a, b;
     int remainingShips;
     char grid[5][5];
     int totalShots =0;
     int hits =0;
     int miss =0;
     while(totalShots < 5)
     {
          
          cout<<"Enter the coordinates(row and coloumn)to attack hidden ships: "<<endl;
          cin>>a>>b;
          
          if( a>=5 || a<0 || b>=5 || b<0)
          {         
               cout<< "Invalid coordinates"<<endl;
          }
          else
          {

               if(grid[a][b] == 'v')
               {
                    grid[a][b] = 'x';
                    remainingShips--;
                    cout<< "Shot on TARGET, ship distroyed"<<endl;
                    cout<< "Remaining ships: "<<remainingShips<<endl;
                    hits++;
               }
               else
               {
                    grid[a][b]= '#';
                    cout<< "Shot missed, wrong coordinates"<<endl;
                    cout<< "Remaining ships: "<<remainingShips<<endl;
                    miss++;
               }
               totalShots++;
          }
          cout<<endl;
          

     }
     cout<<endl;
     cout<<"Total Shots: "<<totalShots<<endl;
     cout<<"Number of successful shots: "<<hits<<endl;
     cout<<"Number of unsuccesful shots: "<<miss<<endl;
     if(hits>=3)
     {
          cout<<"Congrats, YOU WIN"<<endl;
     }
     else if(miss>=3)
     {
          cout<<"You LOSE,better luck next time"<<endl;
     }
     cout<<endl;
     cout<<"Symbols: x is a succesful shot, # is a missed shot and v is undestroyed ship"<<endl;
     
     
}

int main()
{
     board();
     display();
     setShip();
     check();
     display();
}



