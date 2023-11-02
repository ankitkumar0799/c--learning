#include <iostream>
using namespace std;
int main()
{
    const int a = 34; // here we can't cange the vlaue of a because we set a as a const variable which can't chnage till the programe is complete
    a = 34;
    cout<<a;


    return 0;
}