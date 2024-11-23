
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
int reversenumber(int num)
{
    int reminder = 0; int reverse = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        reverse = reverse * 10 + reminder;

    }

    return reverse;
}

int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}
void fillarraywhithrandomnumbers(int array[100], int& arraylength)
{
    cout << "enter array elements" << endl;
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
void coppyarray(int array[100], int array2[100], int arraylength)
{
    for (int i = arraylength-1; i >= 0; i--)
    {
        array2[i] = array[i];
        cout <<(array2[i]) << "  ";
    }

}





int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength; int array2[100];
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements:  " << endl;
    printarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements 2 : after copy  " << endl;
   coppyarray(array, array2, arraylength); cout << endl;
    

}

