#include <iostream >
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std ;
int main (){
    /*srand(time(0));
    int X[]={};S
    for (int i = 0; i < 100; i++)
    {
        cout << rand()%100+1 << " ";  //ข้อเเรก
    }
    */

        
   /*int u[12] = {} ;           // 2
   for (int i = 0; i < 12; i++)
   {
    u[i] = 2*(i+1) ; 
    cout << u[i] << " ";
   }
   srand(time(0)) ;
   int x = rand()%12 ;
   cout << u[x];*/



    /*srand(time(0));
   int u[] = {-5,-4,-3,-2,0,1,2,3,4,5} ;             // 2
   int p[] ={5} , k = 0;
   for (int i = -5 ; i < 6; i++)
   {
    if (i == -1)
    {
        continue;
    }
    p[k] = i ;
    k++;
   }
    k = rand()%10 ;
    cout << p[k] << " ";
    cin.get();*/
   


   int u[12] = {} ;             // 3
   for (int i = 0; i < 10; i++)
   {
    u[i] = 2*pow(2,i) ; 
    cout << u[i] << " ";
   }
   srand(time(0)) ;             
   int x = rand()%12 ;
   cout << u[x];
   
  
 
}