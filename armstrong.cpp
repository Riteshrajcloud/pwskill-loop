#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,rem;
    cout<<"Enter two number:";
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        int temp=i,sum=0;
        while(temp>0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
