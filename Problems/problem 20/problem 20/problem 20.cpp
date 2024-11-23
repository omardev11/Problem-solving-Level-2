
#include <iostream>
#include <cstdlib>
using namespace std;
int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) + from;
    return randum;
}
enum enCharType{ SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 }; 
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
int main()
{
    srand((unsigned)time(NULL));
    
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    


}


