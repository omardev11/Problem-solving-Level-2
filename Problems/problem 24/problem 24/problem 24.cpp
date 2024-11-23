
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
    cout << "Array elements:  ";
    for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << "  ";
    }

}
int maxnumber(int array[100], int arraylength)
{
    int max = 0;
    for (int i = 0; i < arraylength; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength;
    fillarraywhithrandomnumbers(array, arraylength);
    printarraywhithrandomnumbers(array, arraylength);
   cout << endl<< "max of array numbers is "<< maxnumber(array, arraylength);

}

