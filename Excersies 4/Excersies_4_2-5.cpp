#include <iostream>
using namespace std ;
int main (){
    int A[6] = {9 ,-7 ,3 ,4 ,-2 ,4};
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "   ";    // ทำข้อ 2 เเละ 3
    }
    cout << endl ;
    for (int i = 0; i < 6; i++)
    {
        if (A[i]>0)
        {
            cout << A[i] << "  "; // ทำข้อ 4
        }
        
    }
    
    
}