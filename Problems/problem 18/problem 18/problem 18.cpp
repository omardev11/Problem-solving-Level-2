
#include <iostream>
#include <string>
using namespace std;
string readpossotivenumber(string messege)
{
    string number;
    do
    {
        cout << messege << endl;
        getline(cin, number);
    } while (number.empty());
    return number;
}
string encryptiontext(string text ,short encryptionkey)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] + encryptionkey);
    }
    return text;
}
string decryptiontext(string text, short encryptionkey)
{

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] - encryptionkey);
    }
    return text;
}
void printencryptanddecrtyption()
{
    short encrtyption = 2;
    string name = readpossotivenumber("enter a name");
    string textafterencrtyption = encryptiontext(name, encrtyption);
    string textafterdecryption = decryptiontext(textafterencrtyption, encrtyption);
    cout << "Text before encryption is " << name << endl;
    cout << "Text after encryption is " << textafterencrtyption << endl;
    cout << "Text after decryption is " << textafterdecryption;
}
int main()
{
    printencryptanddecrtyption();
}


