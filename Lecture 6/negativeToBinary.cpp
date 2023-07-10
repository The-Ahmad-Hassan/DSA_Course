#include <iostream>
#include <string>
#include<cmath>
#include<vector>
using namespace std;
negativeToBinary(int no)
{
vector<int> Bits(31,0);
cout<<" The Given No is " << no <<endl;
cout<< "For converting it into binary ignore - sign"<<endl;
no=abs(no); // no=(-1)*no
cout<<"Binary Form of a given Number of : "<< no <<endl;
for(int i=30;  i>=0; i--){
if(no==0){
    break;
}     int Reminder=no%2;
     Bits[i]=Reminder;
       no=no/2;
}

for(auto i:Bits){ cout<< i << " ";  } cout<<endl;

cout<<"After taking 1's Complement"<<endl;
for(int i=0;  i<31; i++){
if(Bits[i]==0){
     Bits[i]=1;   }
else {    Bits[i]=0;  
                      }
}

for(auto i:Bits){  cout<< i << " "; } cout<<endl;


// adding 1 in 1's compliment
cout<<"After adding 1 in 1's"<<endl;
int i=Bits.size()-1;
for(  ; Bits[i]!=0; i--){
    int j=Bits[i]+1;
    int Reminder=j%2;
    Bits[i]=Reminder;
}
Bits[i]=1;
for(auto i:Bits){ cout<< i << " "; } cout<<endl;

cout<<"Check karo keh 1st bit 1 ha ya nhi?"<<endl;
cout<<" Agar 1 ho  toh dobara 2's Compliment le lo"<<endl;
if(Bits[0]==1){
for(int i=0;  i<31; i++){
if(Bits[i]==0){
     Bits[i]=1;
}
else {
  Bits[i]=0;
}
}
}

cout<<"After taking 1's Complement Again"<<endl;

for(auto i:Bits){ cout<< i << " ";  }  cout<<endl;

cout<<"After adding 1 in 1's again"<<endl;

int j=30;
for(  ; Bits[j]!=0; j--){
   int k=Bits[j]+1;
    int Reminder=k%2;
    Bits[j]=Reminder;
}
Bits[j]=1;
for(auto i:Bits){ cout<< i << " "; }
cout<<endl;

cout<<"Finally Converting Binary to Decimal"<<endl;
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




int main() {


cout<<"Answer is "<<negativeToBinary(-5)<<endl;
    return 0;

}
