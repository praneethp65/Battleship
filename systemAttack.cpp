#include <iostream>
using namespace std;
#include <string>
#include <array>
#include <experimental/random>
#include "grid.cpp"

void userShips()
{

    char grid[5][5];
    int maxShips=0;

    while (maxShips <5 )
    {
        int a,b;
        cout << "Enter coordinates(row and coloumn) to add ships: " << endl;
        cin >>a>>b;
        if(a<0 || a>=5 || b<0 || b>=5)
        {
            cout<<"Invalid coordinates"<<endl;
        }
        else
        {
            grid[a][b]='v';
               maxShips++;
        }
        
    }
} 
void system()
{
    char grid[5][5];
    int hits =0 ;
    int misses = 0;
    int totalShots=0;

     while(totalShots<5)
     {

     
          int x = experimental::randint(0,4);
          int y = experimental::randint(0,4);
          cout<<"System move: "<<x<<","<<y<<endl;

          int sysMove = grid[x][y];
          
          if(sysMove == 'v')
          {
               grid[x][y]= 'x';
               cout<<"Shot on Target,Ship DESTROYED"<<endl;
               cout<<endl;
               hits++;
               
          }
          else if(sysMove == '.')
          {
               grid[x][y]= '#';
               cout<<"Target missed"<<endl;
               cout<<endl;
               misses++;
          }
          else if(sysMove == 'x' || sysMove == '#')
          {
               continue;
          }
          totalShots++;
     }
    cout << "Hits: " << hits << endl;
    cout << "Misses: " << misses << endl;
     if(misses>=3)
     {
          cout<<"Congrats, YOU WIN"<<endl;
     }
     else if(hits>=3)
     {
          cout<<"You LOSE,better luck next time"<<endl;
     }
     cout<<endl;
     
    

}

int main()
{
     board();
     display();
     userShips();
     display();
     system();
     display();



     return 0;
}

