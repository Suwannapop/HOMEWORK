#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int A[10];
    int i = 0;
    while(i < 10)
    {
        A[i]=i*pow(-1,i);
        i++;
    }
    i = 0;
    while(i < 10)
    {
        cout << A[i] << " ";
        i++; 
    }
return 0;
}