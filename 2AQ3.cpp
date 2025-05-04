#include<iostream>
using namespace std;
int main(){
    int m,i=1;
    cout<<"enter the value";
    cin>>m;

    while(i<=10)
    {
        cout<<m<<"*"<<i<<"="<<m*i<<endl;
        i++;
    }
    return 0;
}