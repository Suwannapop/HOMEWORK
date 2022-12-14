#include <iostream>
using namespace std ;
int main(){
    int n , sum=1 ;
    cout << "Enter n : " ;
    cin >> n ;
    int i = n ;
    while (n > 0)
    {
        sum = sum * n ;
        n--;
    }
    
    cout << i << "! = " << sum ;
}

