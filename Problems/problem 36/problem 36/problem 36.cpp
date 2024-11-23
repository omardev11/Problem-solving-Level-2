
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

void addarrayelement(int number ,int array[100],int &arraylength)
{
    arraylength++;
    array[arraylength - 1] = number;
}
void inputusernumberinarrray(int array[100],int &arraylength)

{
    int addmore = true;
    do
    {
        addarrayelement(readpossotivenumber("enter a number"), array,arraylength);
        cout << "do you want to add more numbers? [0]:no [1]:yes ";
        cin >> addmore;
    } while (addmore);
    

}
void printarray(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << "  ";
    }

}


int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength=0;
    inputusernumberinarrray(array,arraylength); cout << endl;
    cout << "\n array length is " << arraylength << endl;
    cout << "array elements is ";
    printarray(array, arraylength);
    




}

