
#include <iostream>
using namespace std;
enum primeornotprinme { prinme = 1, notprime = 2 };
primeornotprinme checkprime(int num)
{
    int M = round(num / 2);
    for (int i = 2; i <= M; i++)
    {
        if (num % i == 0)
            return primeornotprinme::notprime;


    }
    return primeornotprinme::prinme;
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
void printarraywhithrandomnumbers(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << "  ";
    }

}
void primenumberinarray(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        array[i];
        if (checkprime(array[i])==primeornotprinme::prinme)
        {
            cout << array[i] << "  ";

        }
     
    }

}

int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength; int array2[100];
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements:  " << endl;
    printarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Prime numbers in array : after copy  " << endl;
    primenumberinarray(array, arraylength); cout << endl;

}

