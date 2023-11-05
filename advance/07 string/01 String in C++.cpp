#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main()
{
    int a[5],i;
for (i = 0; i < 5; i++)
{
   cin>>a[i];
}
cout<<"the name are";
for (  i = 0; i < 5; i++)
{
    cout<<"\nA"<<i+1<<"\t"<<a[i];
}


    

    return 0;
}