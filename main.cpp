#include <iostream>
using namespace std;

bool primi (int n) {
int div=1, conta=0;

    while (conta<=1 && div<=n/2){
        if (n%div==0){
            conta++;
        }
        div++;
    }
    if ((conta==1))
    {
        return true;
    } else{
        return false;
    }
}
