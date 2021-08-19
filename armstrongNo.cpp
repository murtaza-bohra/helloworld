#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int armstrong=0,temp=n;
    while(n){
        int rem=n%10;
        armstrong+=pow(rem,3);
        n/=10;
    }
    if(armstrong==temp){
        cout<<"It is an armstrong number"<<endl;
    }
    else{
        cout<<"It is not an armstrong number"<<endl;
    }

    return 0;
}