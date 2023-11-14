#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main() {
    int num;
    cout<<"\nenter the number";
    cin>>num;

    for (int i = 1; i <= 10; i++)
    {
        
            cout<<num<<"x"<<i<<"="<<num*i<<endl;
        
    }
    
       return 0;
}