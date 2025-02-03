#include <iostream>
#include "Mylib.h"
#include "Myinput.h"

using namespace std;
using namespace Mylib;
using namespace MyInputlib;


int main()
{

	int Num1 = 20, Num2 = 5;
 
	Test();

	cout<<Sum2Numbers(Num1 , Num2)<<endl;

	int Number =ReadNumber();
	
	cout << Number;
}