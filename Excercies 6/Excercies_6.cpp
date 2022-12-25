#include <iostream>
using namespace std ;

int checkXY (string world );

int main (){
    cout << checkXY("XYXXYX")  << endl ;
    cout << checkXY("XXYY")    << endl ;
    cout << checkXY("XYYYYY")  << endl ;
    cout << checkXY("XYXY")    << endl ;
    cout << checkXY("XXXXXYYYY") << endl   ;
    cout << checkXY("Y")         << endl   ;
}

int checkXY (string world ){
    string check = world ; 
    int howmanyworld = world.size();
    int count_X=0 , count_Y=0;
    for (int i = 0; i < howmanyworld; i++)
    {
        if (check [i]=='Y')
        {
            count_Y++;
        }
        if (check [i]=='X')
        {
            count_X++;
        }   
    }
    if (count_X > count_Y)
    {
        return 1 ;
    }
     if (count_X < count_Y)
    {
        return -1 ;
    }
     if (count_X == count_Y)
    {
        return 0 ;
    }   
}