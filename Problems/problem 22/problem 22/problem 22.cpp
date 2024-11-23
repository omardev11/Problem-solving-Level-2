
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
void readarray(int array[100], int& length)
{
    
    cout << "enter number of elements\n ";
    cin >> length;
    cout << endl << "enter array elements\n";
    for (int i = 0; i < length; i++)
    {
        cout << "element[" << i+1 << "]:  ";
        cin >> array[i];
        

    }
    cout << endl;
}
void printarray(int array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int timesrepeated(int array[100], int length, int numbertocheck)
{
    int counter = 0;
    for (int i = 0; i <= length-1; i++)
    {
        if (array[i] == numbertocheck)
        {
            counter++;
        }
       
    }
    return counter;
}


int main()
{
    int array[100], length; int numbertocheck;
    readarray(array, length);
    numbertocheck = readpossotivenumber("enter a number to check");
    cout << "original array numbers " << endl;
   printarray(array, length);
    cout << "\n numbers " << numbertocheck << " is repeted ";
    cout << timesrepeated(array, length, numbertocheck) << " times" << endl;
}

