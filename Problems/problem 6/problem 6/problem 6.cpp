
#include <iostream>
using namespace std;
int readpossotivenumber(string messege)
{
    int number;
    do
    {
        cout << messege << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
int sumofdigit(int num)
{
    int reminder = 0; int sum = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        sum += reminder;

    }
    return sum;

}
void printresult()
{
    cout << "sum of digits is "<< sumofdigit(readpossotivenumber("enter a number"));

}


int main()
{
    printresult();
}

