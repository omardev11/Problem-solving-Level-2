
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
void fillarraywhithrandomnumbers(int array[100],int &arraylength)
{
    cout << "enter number" << endl;
    cin >> arraylength;
    for (int i = 0; i < arraylength; i++)
    {
        array[i] = readpossotivenumber("enter array elements");

    }
    
}
void printarray(int array[100], int arraylength)
{
   for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << "  ";
    }

}
bool ispalindromearray(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        if (array[i] == array[arraylength - i - 1])
        {
            return false;
        }
        
    }
    return true;

}

int main()
{
  
    int array[100]; int arraylength = 0; 
    fillarraywhithrandomnumbers(array,arraylength); cout << endl;
    cout << "Array elements:  " << endl;
    printarray(array, arraylength); cout << endl << endl;
    if (ispalindromearray(array, arraylength)==false)
    {
        cout << "this array is palindrome \n";
    }
    else 
        cout << "this array is not palindrome \n";
   
        
  

}

