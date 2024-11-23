
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
short findnumberpossotioninarray(int array[100],  int arraylength ,int numbertocheck)
{
    int counter = 0;
    for (int i = 0; i < arraylength; i++)
    {
        if (array[i] == numbertocheck)
        {
            return i;
        }
    }
    
        return -1;
    

    

}





int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength; 
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements:  " << endl;
    printarraywhithrandomnumbers(array, arraylength); cout << endl;
    int numbertosearch = readpossotivenumber("enter a number to search"); cout << endl;
    cout << "the number you are looking is:  " << numbertosearch << endl;
    cout << "Array elements 2 : after copy  " << endl;
    short numberpossotion =findnumberpossotioninarray(array, arraylength,numbertosearch); cout << endl;
    if (numberpossotion == -1)
    {
        cout << "the number is not found :-(\n";
    }
    else 
        cout << "The number found at possoton " << numberpossotion << endl;
        cout << "The number found its order " << numberpossotion + 1 << endl;


   


}

