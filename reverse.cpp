#include<bits/stdc++.h>
using namespace std;
int reverse(int num){
    int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}
