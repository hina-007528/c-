#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i=1;
    cout<<"Enter the value";
cin>>n;
while(i<=n){
sum+=i;
i++;
}
cout<<"Sum of all natural no up to "<<n<<"is"<<sum;
return 0;
}