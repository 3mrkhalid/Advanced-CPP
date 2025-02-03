#include <iostream>

using namespace std;

int main()
{
    int Arr[] = {1 , 2 , 3 , 4 , 5};

    for(int n : Arr)
    {
        cout << n << " "; // 1 2 3 4 5 
    }

    //OR

     for(int n : {1 , 2 , 3 , 4 , 5})
    {
        cout << n << " "; // 1 2 3 4 5
    }
}