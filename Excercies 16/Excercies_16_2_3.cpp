#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
void removeNegatives(vector<double> &A){
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < 0)
        {
            A.erase(A.begin()+i) ;
        }
    }
}

int main()
{
    ofstream write;
    ifstream read;
    string text ;
    vector <double> y ;
    double A[9] = {1.2, -0.5 ,45.6 ,24.3 ,-0.24 ,7.6 ,14.7 ,-0.1 ,1.5};
    write.open("numberfile");
    for (int i = 0; i < 9; i++)
    {
        write << A[i] << endl;
    }
    write.close();
    read.open("numberfile");
    while (getline(read,text))
    {
        y.push_back(stod(text));
    }
    for (int i = 0; i < 9; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl ;
    removeNegatives(y);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
    
}
