
#include <iostream>
using namespace std;
int readnumber()
{
    int number;
    cout << "enter a number\n ";
    cin >> number;
    return number;
}
float Myabs(int num)
{
    if (num > 0)
    {
        return num;
    }
    else
        return num * -1;
}
int main()
{
    int number= readnumber();
    cout << "My abs " << Myabs(number) << endl;
    cout << "abs c++ function " << abs(number) << endl;
}

