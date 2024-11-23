
#include <iostream>
#include <string>
using namespace std;
enum primeornotprinme { perfect = 1, notperfect = 2 };
float readpossotivenumber(string messege)
{
    float number;
    do
    {
        cout << messege << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

bool checkperfectnumbers(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return num == sum;
}
void printperfectnumbers_from1to_n(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (checkperfectnumbers(i))
            cout << "the number " << i << " is perfect number" << endl;
        
            
    }

}




int main()
{
    
    printperfectnumbers_from1to_n(readpossotivenumber("enter a number"));
}


