#include <iostream>

using namespace std;

int main()
{
   int num;

   cin >> num;

   (num > 0) ? cout << "Positive" : (num == 0) ? cout << "Zero" : cout << "Negative";

}