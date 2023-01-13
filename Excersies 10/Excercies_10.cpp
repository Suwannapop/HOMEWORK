#include <iostream>
using namespace std ;

int gcd(int A , int B , int C){
    int i = 1 , ans = 0 ;
    while (true)
    {
        if (i > A || i > B || i > C)
        {
            break;
        }
        if (A%i==0 && B%i==0 && C%i==0)
        {
            ans = i ;
        }
        i++;
        
    }
    return ans;
}
int main (){
     cout <<"gcd(18,17,16) = " << gcd(18,17,16) << '\n'; 
    cout <<"gcd(480,320,1024) = " << gcd(480,320,1024) << '\n'; 
    cout <<"gcd(255,51,765) = " << gcd(255,51,765) << '\n'; 
    cout <<"gcd(15,1,9) = " << gcd(15,1,9) << '\n'; 
    cout <<"gcd(2,6,222) = " << gcd(2,6,222) << '\n';
}
