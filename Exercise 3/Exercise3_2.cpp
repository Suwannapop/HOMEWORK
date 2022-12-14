// เเบบฝึก ที่3 ข้อ 2
#include <iostream>
using namespace std ;

int findDivisor (int num);

int main () {
    int input ; 
    cout << "In put your number : " ;
    cin >> input ;
    cout << "Expected out put : "<< findDivisor(input);

}

int findDivisor (int num){
    int divi=num;
    int sum ;
    if (num > 1)
    {
        while (divi <= num and divi > 0)
        {
            if (num%divi == 0 and divi != 1)
            {
                sum = divi ;
            }
            divi--;
        }
    }
    return sum ;
}