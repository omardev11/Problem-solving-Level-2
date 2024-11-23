
#include <iostream>
#include <string>
using namespace std;
string readpossotivenumber(string messege)
{
    string number;
    do
    {
        cout << messege << endl;
        cin >> number;
    } while (number <= "");
    return number;
}
bool guess3letterspassaword(string passaword)
{
    string word = ""; int counter = 0;
    for (char i = 65; i <= 90; i++)
    {
        for (char j = 65; j <= 90; j++)
        {
            for (char k = 65; k <= 90; k++)
            {
                counter++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << "Trial [" << counter << "]" << word << endl;
                if (word == passaword)
                {
                    cout << "passaword is " << word << endl;
                    cout << "found after " << counter << " Trials" << endl;
                    return true;
                }
                    word = "";

                
            }
        }
    }
    return false;
}

int main()
{
    guess3letterspassaword(readpossotivenumber("enter a passaword"));
}

