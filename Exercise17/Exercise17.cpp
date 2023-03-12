#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << (4 & 1) << 1;
    cout << (4 | 1) + (3 ^ 2);
    cout << ('C' & ~1);
    cout << (char)('C' & ~1);
    cout << (3 << 2 >> 1);
    cout << (3 >> 2 >> 1);
    string s = "A";
    cout << (s == 'A');
    s += "B";
    cout << s;
    char O[] = "AAAAAAAAAAA 69";
    char x[3];
    int y;
    sscanf(O, "%s %d", x, &y);
    cout << x << y;
    char H[] = "42,45 69:72";
    int a, b, c, d;
    sscanf(H, "%d %d %d %d", &a, &b, &c, &d);
    cout << a << b << c << d << "\n";
    sscanf(H, "%d,%d %d:%d", &a, &b, &c, &d);
    cout << a << b << c << d << "\n";
}
