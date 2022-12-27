#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

void printPattern1(int I , int J){
    if (I > 0 and J > 0)
    {
        for (int i =1; i <= I; i++)
    {
        if (i%2 != 0)
        {
            for (int i = 1; i <= J; i++)
            {
                if(i%2!= 0 ){
                    cout << "O";
                }
                if (i%2 == 0 )
                {
                    cout <<"X";
                }
            }  
        }
        if (i%2 == 0)
        {
            for (int i = 1; i <= J; i++)
            {
                if(i%2!= 0 ){
                    cout << "X";
                }
                if (i%2 == 0 )
                {
                    cout <<"O";
                }
            }  
        }
        cout << endl;
    }
    }else {
        cout << "Invalid input";


    }
    
    
    
}
int main (){
    printPattern1(5,-3);
    
}