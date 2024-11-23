

#include <iostream>
using namespace std;
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
void printperfectnumber(int num)
{
    if (checkperfectnumbers(num))
    {
        cout << "the number " << num << " is perfect number" << endl;
    }
    else 
        cout << "the number " << num << " is not perfect number" << endl;

}
int main()
{
    int num = readpossotivenumber("enter a number");
    printperfectnumber(num);
}

