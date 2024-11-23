
#include <iostream>
using namespace std;
enum evenorodd { even = 1, odd = 2 };
evenorodd checkevenorodd(int num)
{
    if (num % 2 == 0)
        return evenorodd::even;
    else
        return evenorodd::odd;
}
int readpossotivenumber(string messege)
{
    int number;
    do
    {
        cout << messege << endl;
        cin >> number;
    } while (number < 0);
    return number;
}
int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}
void fillarraywhithrandomnumbers(int array[100], int& arraylength)
{
    cout << "enter number" << endl;
    cin >> arraylength;
    for (int i = 0; i < arraylength; i++)
    {
        array[i] = randomnumbers(1, 100);

    }
}
void printarray(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << "  ";
    }

}
void coppyarrayoddnumber(int array[100], int arraylength)
{
    int counter = 0;
    for (int i = 0; i < arraylength; i++)
    {
        if (checkevenorodd(array[i]) == evenorodd::even)
        {
            counter++;
        }

    }
    cout << counter;

}

int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength = 0;
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements:  " << endl;
    printarray(array, arraylength); cout << endl;
    cout << "the even count of arrary is:  ";
    coppyarrayoddnumber(array, arraylength); cout << endl;
    // cout << "Array elements 2 only odd numbers : after copy  " << endl;
   //  printarray(array, arraylength);

}

