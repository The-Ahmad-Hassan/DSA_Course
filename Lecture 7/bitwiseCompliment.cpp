#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int bitwiseCompliment(int no){
//for no=0 return 1
//edge case
if(no==0){
    return 1;
}

vector<int> Bits(31,1);

//Converting Decimal to binary

for(int i=30;  i>=0; i--){
    if(no==0){
    break;
}
     int Reminder=no%2;
     Bits[i]=Reminder;
       no=no/2;
}
 

 // Taking Compliment of binary
                                     
for(int i=0;  i<31; i++){

if(Bits[i]==0){
     Bits[i]=1;   }
else {    Bits[i]=0;  
                      }
}



// Converting Binary(that compliment to Binary) 

int Position=0;
int sum=0;
for(int i=30; i>=0; i--){
if(Bits[i]==1){
sum=sum+pow(2,Position);
}
Position++;
}

return sum;


}



int main(){

int no=0;

cout<<bitwiseCompliment(no)<<endl;



return 0;

}