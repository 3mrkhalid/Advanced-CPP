#include <iostream>

using namespace std;

void Myfunc()
{
    static int Number = 1;
    
    cout << "value Of Number : " << Number <<endl;
    Number++;
}

int main()
{
    Myfunc();
    Myfunc();
    Myfunc();
}