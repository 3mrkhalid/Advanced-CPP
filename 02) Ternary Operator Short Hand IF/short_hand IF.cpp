#include <iostream>

using namespace std;

int main()
{
    int Mark = 90 ;

    string result;

    if(Mark >= 50)
    {
        result = "Pass";
    }
    else
    {
         result = "Fail";
    }

    cout<< result << endl;


    //using short hand if (:

    result = (Mark >= 50) ? "pass" : "fail";

    cout<< result << endl;
}