
#include <iostream>
#include <cstdlib>
using namespace std;
int randomnumbers(int from, int to)
{
    int randum = rand() % (to - from + 1) +from;
    return randum;
}
int main()
{
    srand((unsigned)time(NULL));
    cout << randomnumbers(1, 10) << endl;
   cout << randomnumbers(1, 10)<<endl;
   cout << randomnumbers(1, 10) << endl;

    
}


