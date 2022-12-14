// เเบบฝึก ที่3 ข้อ 3
#include <iostream>
using namespace std ;
int greatDivisor (int num);
int main () {
    for (int i = 0; i < 10000; i++) // ไม่จำเป็นต้อง loop ก็ได้ เเค่ทำไว้เพื่อให้ check คำตอบได้งง่ายๆ ไม่ต้อง กด run หลายคร้ัง
    {
        int input ; 
        cout << "In put your number : " ;
        cin >> input ;
        if (input == 0)
        {
            break;
        }
        cout << "Expected out put : "<< greatDivisor(input) << endl <<  "---------------------------------" << endl;
    }
    
}

int greatDivisor (int num){
    int divi=0;
    int sum ;
    if (num > 1)
    {
        while (divi < num)
        {
            if (num%divi == 0 )
            {
                sum = divi ;
            }
            divi++;
        }
    }
    return sum ;
}