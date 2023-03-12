#include <iostream>
#include <iomanip>
using namespace std;


void myMatrix (int ***p , int N){   //ทำการจอง เเถวของตัวเองเเล้วให้เเต่ลัเเถวจองหลักของตัวเองอีกที
    *p = new int*[N];
    for (int i = 0; i < N; i++)
    {
        (*p)[i] = new int[N];
        for (int j = 0; j < N; j++)
        {
            (*p)[i][j] = j+i;
        }
        
    }
    
}
void freeSpace(int **p, int N){
    for (int i = 0; i < N; i++)
    {
        delete [] p[i];
    }
    delete [] p;
}



int main()
{
    int **p;
    int N;
    cout << "N = ";
    cin >> N;
    myMatrix(&p, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << p[i][j];
        }
        cout << "\n";
    }
    freeSpace(p, N);
    return 0;
}
