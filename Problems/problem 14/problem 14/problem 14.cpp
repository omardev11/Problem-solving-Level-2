
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
char numbertoletters(int num)
{
    return 'A' + num - 1;
}
void printinverted(int num)
{
    cout << "inverted pattern is\n ";
    for (int i = num; i >= 1; i--)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << numbertoletters(i);
        }
    }
}

int main()
{
    printinverted(readpossotivenumber("enter a number"));
}

