

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
void printalldigitnumbers(int num)
{
    for (int i = 0; i < 10; i++)
    {
       short digitfrequency= countdigitnumbers(num, i);
       if (digitfrequency > 0)
       {
           cout << "digit " << i << " frequency is " << digitfrequency << " times " << endl;
        }
   }
}


int main()
{
    printalldigitnumbers(readpossotivenumber("enter number"));

}

