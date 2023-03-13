#include <iostream>
#include <iomanip>
using namespace std;

const int N = 3;
void inputMatrix(double[][N]);
void matrixMultiply(const double[][N], const double[][N], double[][N]);
void showMatrix(const double[][N]);

int main()
{
    double A[N][N], B[N][N], C[N][N];
    cout << "Input the first matrix.....\n";
    inputMatrix(A);
    cout << "Input the second matrix.....\n";
    inputMatrix(B);
    matrixMultiply(A, B, C);
    cout << "Result is \n";
    showMatrix(C);
    return 0;
}

void inputMatrix(double R[][N])
{
    double A;
    for (int i = 0; i < N; i++)
    {
        cout << "Row " << i + 1 << " : ";
        for (int j = 0; j < N; j++)
        {
            cin >> A;
            R[i][j] = A;
        }
    }
}
void matrixMultiply(const double A[][N], const double B[][N], double C[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void showMatrix(const double C[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(10) << C[i][j];
        }
        cout << endl;
    }
}
