#include <iostream>
using namespace std ;
template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void selectionSort(T d[],int N){
    int min = d[0] , current;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (d[j] > d[i])
            {
                int L = d[i];
                d[i] = d[j];
                d[j] = L ;
            }
            
        }
        
    }
    
}
int main (){
    int X[9] = {9,8,7,6,5,4,3,2,1};
    cout <<"\n------------------------------------"<< endl <<"        ";
    for (int j = 0; j < 9; j++)
    {
        cout << " " << X[j];
    }
    cout <<"\n------------------------------------"<< "\n        After selectionSort \n" << "------------------------------------" << endl <<"        ";
    selectionSort(X,9);
    for (int i = 0; i < 9; i++)
    {
        cout << " "<< X[i] ;
    }
    cout <<"\n------------------------------------";


    
}