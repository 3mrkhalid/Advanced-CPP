#include <iostream>

using namespace std;

// function declaration
void add(int , int);

int main()
{
    int a = 10 , b = 20;
     add(a , b);
}

// function definition
void add(int a , int c)
{
    cout << (a + c);
}