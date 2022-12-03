#include<iostream>
using namespace std;

bool isp(int i, int n){
    cout<<i<<"\t "<<n%i<<endl;
    return n%i==0 ? n==i : isp(i+1,n);
}//isp

main(){
    int num;
    cout<<"ins.num:";cin>>num;
    isp(2,num) ? cout<<"primo" :cout<<"NON primo";
}//main
