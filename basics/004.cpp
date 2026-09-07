// author: threebabli
// program: constant which can not be deinitialize which means it will not be modified 

#include <iostream>

using namespace std;

int main()
{
    const float pi= 3.14;    //for constant value declaration and initialize at the same time
    
    cout << "the value of pi is =" << pi;

    return 0;
}