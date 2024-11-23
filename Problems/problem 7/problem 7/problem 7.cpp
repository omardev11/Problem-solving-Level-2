

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



int main()
{
    cout << "reserve number is "<< reversenumber(readpossotivenumber("enter a number"));

}

