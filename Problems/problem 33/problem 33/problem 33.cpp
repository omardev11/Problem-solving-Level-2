
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}
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
enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case SamallLetter:
        return (char)randomnumbers(97, 122);
        break;
    case CapitalLetter:
        return (char)randomnumbers(65, 90);
        break;
    case SpecialCharacter:
        return (char)randomnumbers(33, 47);
        break;
    case Digit:
        return (char)randomnumbers(48, 57);
        break;
    default:
        break;
    }

}
string gereatword(enCharType CharType, short length)
{
    string word;
    for (int i = 1; i <= length; i++)
    {
        word = word + GetRandomCharacter(CharType);
    }
    return word;

}
string greatkey()
{
    string key = "";
    key = gereatword(enCharType::CapitalLetter, 4) + "-";
    key = key + gereatword(enCharType::CapitalLetter, 4) + "-";
    key = key + gereatword(enCharType::CapitalLetter, 4) + "-";
    key = key + gereatword(enCharType::CapitalLetter, 4);
 
    return key;
}
void fillarraywhithkeys(int numberofkeys, string array[100])
{
    for (int i = 0; i < numberofkeys; i++)
    {
        array[i] = greatkey();
        
    }
}
void printstringarray(int numberofkeys, string array[100])
{
    cout << "array of elements\n";
    for (int i = 0; i < numberofkeys; i++)
    {
       
        cout << "key[" << i << "]   :   ";
        cout << array[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    string array[100]; int numberofkeys = readpossotivenumber("enter how many keys do you want");
    fillarraywhithkeys(numberofkeys, array);
    printstringarray(numberofkeys, array);





}


