#include <iostream>
using namespace std ;
int cheeth(int money);
int main (){
    int X ;
    while (5)
    {
        cout << "what money ";
        cin >> X ;
        cout <<cheeth(X) << endl;
    }
    
    
}

int cheeth(int money){
    int bottle = money/10;
    int sheet = bottle;
    int h=0 ;
    while (sheet >= 3)
    {
        bottle = bottle + sheet/3;
        h = sheet%3;
        sheet = sheet /3 + h ;
    }
    
    return bottle;
}