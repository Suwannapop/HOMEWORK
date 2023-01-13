#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main (){
    string input;
    double find = 0 , count=0, min , max;
    ifstream score ;
    score.open("score.txt");
    do
    {
        cout << "Enter range of the scores [min,max] for counting: ";
        cin >> min >> max;
        if (min > max )
        {
            cout << "Invalid input. (max>=min)\n";
        }

        
    } while (max < min);
    
    
    while (getline(score , input))
    {
       find = atof(input.c_str()) ;
       if (min <= find and max >= find )  
       {
         count++ ;
       }
    }
    cout << "The number of students who have scores in this range = " << count ;
    
    
    
}