
#include <iostream>
using namespace std;
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
void addarrayelement(int number, int array[100], int& arraylength)
{
    arraylength++;
    array[arraylength - 1] = number;
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
void coppyarrayoddusingaddarrayelement(int array[100], int array2[100], int arraylength, int& arraylength2)
{
    for (int i = 0; i < arraylength; i++)
    {
        if (array[i] % 2 != 0)
        {
            addarrayelement(array[i], array2, arraylength2);
        }
    }

}

int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength = 0; int array2[100]; int arraylength2 = 0;
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    coppyarrayoddusingaddarrayelement(array, array2, arraylength, arraylength2); cout << endl;
    cout << "Array elements:  " << endl;
    printarray(array, arraylength); cout << endl;
    cout << "Array elements 2 only odd numbers : after copy  " << endl;
    printarray(array2, arraylength2);

}

