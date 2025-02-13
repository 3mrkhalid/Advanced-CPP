#include <iostream>

using namespace std;

void PrintNumbers_AtoB(int A , int B)
{
    if(A <= B)
    {
        cout << A <<" ";
        PrintNumbers_AtoB(A + 1 , B);
    }
}

int main()
{
    PrintNumbers_AtoB(1 , 10); // display 1 2 3 4 5 6 7 8 9 10
}