#include<iostream>
#include<cmath>
using namespace std;
long long int D_to_B(long long int n){
long long int remainder,binary=0,digitPosition=0, reverse_binary=0;
bool check=false;
while(n!=0){
remainder=n%2;
if(remainder==0 && check==false){
    digitPosition++;
}
else {
    check=true;

}

binary = binary*10+remainder;
n /=2;

}
if(binary<=1){
   binary=binary* pow(10,digitPosition);
    return binary;
}
else {
while(binary!=0){
remainder=binary%10;
reverse_binary=reverse_binary*10+remainder;

binary /=10;
} reverse_binary=reverse_binary*pow(10,digitPosition);
     }
 return reverse_binary;
}
long long int B_to_D(long long int binary){
long long int decimal=0,num,digitPosition=0,remainder=0;
while(binary!=0){
remainder=binary%10;
if(remainder==1){
decimal=decimal+pow(2,digitPosition);
}
    digitPosition++;
   binary=binary/10;
}
return decimal;
}
int main(){
long long int n;
    while(true){
cout<<"Enter the Number for Conversion :   " <<endl;
cin>>n;


        if(n==0){
            return 0;
        }

long long int bi=D_to_B(n);
cout<<"Decimal to Binary Form " << D_to_B(n);
cout<<endl;
cout<< "Binary to Decimal Form "<<B_to_D(bi);
cout<<endl;
}
}