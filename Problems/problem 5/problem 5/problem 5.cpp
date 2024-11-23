

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
void printdigit(int num)
{
    int reminder = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        cout << reminder << endl;

    }

}


int main()
{
    printdigit(readpossotivenumber("enter a number"));

}

