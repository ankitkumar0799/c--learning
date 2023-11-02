#include <iostream>
using namespace std;
int main()
{

    // int x;
    // cin >> x;
    // if (x >= 0)
    // {
    //     cout <<x<< endl;
    // }

    // else if (x < 0 )
    // {
    //     cout << -x<< endl;
    // }



// program 2 check the seller made profilt or loss



int a,b,c;
cout<<"enter the 1st number : ";
cin>>a;
cout<<"enter the 2st number : ";
cin>>b;
cout<<"enter the 3st number : ";
cin>>c;

if (a < b && a < c)
{
    cout<<a<<" 1st is greatest";
}
else if (b < a && b < c)
{
    cout<<b<<" 2st is greatest";
}
else
{
    cout<<c<<" 3rd is greatest";
}





    return 0;
}