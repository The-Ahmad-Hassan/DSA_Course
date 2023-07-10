#include<iostream>
#include<cmath>
using namespace std;


bool powerofTwo(int n){
int ans=1;
for(int i=0; i<31; i++){
      cout<<ans<<endl;
       if(ans==n){
       return true;
      }

   if(ans<INTMAX_MAX/10)
ans=ans*2;

}

return false;


}


int main(){

int n=10737418244;
powerofTwo(n);


}
