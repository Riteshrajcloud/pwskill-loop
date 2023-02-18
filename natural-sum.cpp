#include<bits/stdc++.h>
using namespace std;
int natural(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<natural(n)<<endl;
    return 0;
}
