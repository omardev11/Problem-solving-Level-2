
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


int main()
{
    for (char i = 65; i <= 90; i++)
    {
        for (char j = 65; j <= 90; j++)
        {
            for (char k = 65; k <= 90; k++)
            {
                cout << k  << j << i << endl;
            }
        }
    }
}

