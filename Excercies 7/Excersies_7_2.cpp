#include <iostream>
using namespace std ;

string pTu(int F,int M ){
    string rank ;
    if (F<50)
    {
       if (M<50)
       {
        rank = "Unfriend";
       }
       if (M>=50 and M<80)
       {
        rank = "One-night-stand";
       }
       if (M>=80)
       {
        rank = "One-night-stand";
       }
       
    }
    if (F>=50)
    {
       if (M<50)
       {
        rank = "friend";
       }
       if (M>=50 and M<80)
       {
        rank = "friend";
       }
       if (M>=80)
       {
        rank = "Girlfriend";
       }
       
    }
    return rank ;
}


int main (){
    cout << pTu(49,80 );
}