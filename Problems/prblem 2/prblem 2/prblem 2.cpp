

#include <iostream>
using namespace std;
enum primeornotprinme { prinme = 1, notprime = 2 };
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

primeornotprinme checkprime(int num)
{
    int M = round(num / 2);
    for (int i = 2; i <= M; i++)
    {
        if (num % i == 0)
            return primeornotprinme::notprime;


    }
    return primeornotprinme::prinme;
}
void printprimeornot(int num)
{
    for (int i = 1; i <= num; i++)
    {
        switch (checkprime(i))
        {
        case prinme:
            cout << "the number " << i << " is prime number " << endl;
        case notprime:
            break;
        default:
            break;
        }
        
        
    }

}

int main()
{
    int num = readpossotivenumber("enter a number");
    printprimeornot(num);
    
}


