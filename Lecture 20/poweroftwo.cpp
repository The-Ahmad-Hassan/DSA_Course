#include<iostream>
using namespace std;


bool isPowerOfTwo(int n) {

   long long temp=2;

  if(n==1){
return true;

  }

else {
for(int i=1; i<=n; i++){
   
   if(temp==n){
return true;

   }
   
   temp=temp*2;

}


}
  
  
  return false;


    }

    int main(){

 bool power = isPowerOfTwo(4611686018427387904 );
 cout<< power<<endl;

    }