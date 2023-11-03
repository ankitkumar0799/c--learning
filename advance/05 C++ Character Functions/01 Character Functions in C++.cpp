#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main()
{
    cout<<"\n isalnum : "<<isalnum('1');
    cout<<"\n isalpha : "<<isalpha('a');
    cout<<"\n isdigit : "<<isdigit('1');
    cout<<"\n islower : "<<islower('W');
    cout<<"\n isupper : "<<isupper('w');
    cout<<"\n isspace : "<<isspace(' ');
    cout<<"\n tolower : "<<tolower('A');
    cout<<"\n toupper : "<<toupper('a');

    return 0;
}