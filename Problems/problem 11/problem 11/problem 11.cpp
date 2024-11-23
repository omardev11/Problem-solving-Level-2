

#include <iostream>
using namespace std;
int readpossotivenumber(string messege)
{
    int number;
    do
    {
        cout << messege << endl;
        cin >> number;
    } while (number <= 0);
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
bool checkpalindrome(int num)
{
    return num == reversenumber(num);
}
void printresult(int num)
{
    if (checkpalindrome(num))
        cout << "this number is palindrome " << endl;
    else
        cout << "this number is not palindrome " << endl;
}
int main()
{
    printresult(readpossotivenumber("enter number"));
}
