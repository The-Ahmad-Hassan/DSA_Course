#include<iostream>
using namespace std;
int reverseNo(int x){
int ans=0;  
while(x!=0) { 
    int rem=x%10;
ans=(ans*10)+rem;
//agar INT32_MAX*10 kareen geen toh run time error de ga islye INTMAX_32/10
if(ans>INT32_MAX/10 || ans<INT32_MIN/10)
{
     return 0;
      }
x=x/10; 
  } 
   return ans;  
     }
int main(){
     int no;
      cin>>no;  
      cout<<"Output "<<reverseNo(no)<<endl;
      
      }
