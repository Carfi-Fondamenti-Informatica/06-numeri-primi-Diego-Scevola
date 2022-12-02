#include <iostream>

bool primi(int a);

using namespace std;

int main() {
    int a;
    bool b;

    cin>>a;
    b= primi(a);

    if(b== true)
        cout<<"numero primo"<<endl;
    else if(b== false)
        cout<<"numero non primo"<<endl;
    return 0;
}

bool primi(int a) {
    return false;
}
