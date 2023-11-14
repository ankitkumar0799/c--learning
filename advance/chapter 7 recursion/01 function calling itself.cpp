#include <iostream>
using namespace std;
void greet(){
    cout<<"hey"<<endl;
    greet();
}
int main(){
    greet();
    return 0;
}