#include<iostream>
using namespace std;

int factorial(int n){
int ans=1;

for(int i=n; i>0; i--){

ans=ans*i;


}


return ans;


}


int main(){
int n=3;

cout<<factorial(n)<<endl;


}