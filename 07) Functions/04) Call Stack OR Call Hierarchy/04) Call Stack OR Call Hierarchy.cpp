#include <iostream>

using namespace std;

void Function4()

{

cout << "This is function4 " << endl;

}

void Function3()
{

Function4();

}

void Function2()
{

Function3();
}

void Function1()
{

Function2();

}

int main() 
{

Function1();

}