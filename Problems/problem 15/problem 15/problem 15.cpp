
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


void printnumber(int num)
{
    cout << "number pattern is\n ";
    for (int i = 1; i <= num; i++)
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
    printnumber(readpossotivenumber("enter a number"));
}

