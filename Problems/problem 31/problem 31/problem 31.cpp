
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
void Swap(int& A, int& B) {
    int Temp;     Temp = A; A = B; B = Temp;
}
int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}
void fillarraywhithrandomnumbers(int array[100], int& arraylength)
{
    cout << " enter array elements: " << endl;
    cin >> arraylength;
    for (int i = 0; i < arraylength; i++)
    {
        array[i] = randomnumbers(1, arraylength);

    }
}
void printarraywhithoutrandomnumbers(int array[100], int arraylength)
{
    for (int i = 1; i <= arraylength; i++)
    {
        array[i] = i;
        cout << array[i] << "  ";
    }

}

void ShuffleArray(int array[100], int arraylength)
{ 
    for (int i = 0; i < arraylength; i++) 
    { 
        Swap(array[randomnumbers(1, arraylength) - 1], array[randomnumbers(1, arraylength) - 1]);
     
    }
}
void printarrayaftershuffle(int array[100], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        cout << array[i] << " ";
        
    }
    cout << endl;
}






int main()
{
    srand((unsigned)time(NULL));
    int array[100]; int arraylength; int array2[100];
    fillarraywhithrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements before shuffle  " << endl;
    printarraywhithoutrandomnumbers(array, arraylength); cout << endl;
    cout << "Array elements after shuffle  " << endl;
    ShuffleArray(array, arraylength); cout << endl;
    printarrayaftershuffle(array, arraylength);
 

}

