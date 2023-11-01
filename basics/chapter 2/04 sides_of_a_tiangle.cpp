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
cout<<"enter the 1st side : ";
cin>>a;
cout<<"enter the 2st side : ";
cin>>b;
cout<<"enter the 3st side : ";
cin>>c;

if ((a+b) > c && (b+c) > a && (c+a) > b)
{
    cout<<"yes";
}else{
    cout<<"no ";
}




    return 0;
}