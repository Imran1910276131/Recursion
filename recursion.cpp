#include<bits/stdc++.h>
using namespace std;
void recursion(int n){

cout<<n<<endl;

if(n==1) return;
recursion(n-1);

}
int main(){
int n;
cin>>n;
recursion(n);

}
