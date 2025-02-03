#pragma once


#include <iostream>

using namespace std;


namespace MyInputlib 
{
	int ReadNumber()
	{
		int Number;

		cout << "please Enter your Number";

		cin >> Number;

		return Number;
	}
}