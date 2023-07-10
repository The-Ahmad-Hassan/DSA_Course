#include<iostream>
#include<cmath>
using namespace std;


int Binary_To_Decimal(int no){
int ans=0;
int i=0;
while(no!=0)
{

int remin=no%10;

if(remin==1)
{
ans=ans+pow(2,i);




}

no /=10;  //n=n/10;

i++; 


}

return ans;


}


int main(){


int no;
cin>>no;

cout<<"The Decimal form of this binary no is " << Binary_To_Decimal(no)<<endl;


return 0;
}