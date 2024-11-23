
#include <iostream>
using namespace std;
void printheader()
{
    cout << "\n\n\n\t\t\t  MULTIPLICATION TABLE FROM 1 TO 10 \n\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n------------------------------------------------------------------------------------------------------------\n";
}
string columnsepretor(int i)
{
    if (i < 10)
        return "    |";
    else
        return "   |";
}
void printmultiplicationtable()
{
    printheader();
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << columnsepretor(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;

    }
}

int main()
{
    printmultiplicationtable();
    
}

