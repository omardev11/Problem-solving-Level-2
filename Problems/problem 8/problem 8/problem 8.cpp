

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


long int countdigitnumbers(long int num, short digit)
{
    int reminder = 0; int frequency = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        if (reminder == digit)
        {
            frequency++;

        }

    }
    return frequency;

}


int main()
{
    short digit = readpossotivenumber("enter one digit to check");
    cout << " digit " << digit << " frequency is " << countdigitnumbers(readpossotivenumber("enter a number"), digit) 
        << " times " << endl;

}

