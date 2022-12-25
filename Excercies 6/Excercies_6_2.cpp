#include <iostream>
using namespace std ;
char world(char word);

int main(){
    cout << world('A')<< endl ;
    cout << world('a')<< endl ;
    cout << world('B')<< endl ;
    cout << world('Z')<< endl ;
    cout << world('6')<< endl ;
    cout << world('U')<< endl ;
    cout << world('i')<< endl ;
}

char world(char word){
    string check = "AEIOUaeiou";
    for (int i = 0; i < 10; i++)
    {
        if (check[i] == word)
        {
            return 'y' ;
        }
    }
    return 'n';
    
}