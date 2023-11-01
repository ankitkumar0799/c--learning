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



int cp;
cout<<"enter the cost of a product : ";
cin>>cp;
int sp;
cout<<"enter the selling price of a product : ";
cin>>sp;
if (cp > sp)
{
    cout<<"lol you made a loss"<<sp-cp << " rupees";
}
else if (cp < sp)
{
    cout<<"you made a profit"<<sp-cp << " rupees";
}
else
{
    cout<<"you made nor profit or loss";
}



    return 0;
}