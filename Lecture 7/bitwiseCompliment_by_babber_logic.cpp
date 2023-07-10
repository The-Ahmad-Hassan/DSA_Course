#include<iostream>
using namespace std;


int bitwiseCompliment(int no){
/*
   Algorithm 
   create mask
   then mask & (~n)
    mask   (n<<1) | 1
*/
int mask=0;
int m=no;
if(no==0)
    return 1;
while(m!=0){
  mask=(mask<<1)|1;
  m=m>>1;
}
int ans=mask & (~no);
return ans;
}




int main(){


int a=6;
cout<<bitwiseCompliment(a)<<endl;
return 0;
}