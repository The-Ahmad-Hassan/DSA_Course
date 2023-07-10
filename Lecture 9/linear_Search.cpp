#include<iostream>
using namespace std;


bool linearSearch(int arr[],int size,int no){

for(int i=0; i<size; i++){

if(arr[i]==no){
return true;

}



}


return false;


}


int main(){





int arr[5]={1,2,3,4,5};


int size=sizeof(arr)/sizeof(int);


int lS=linearSearch(arr,size,25);


cout<<"Number is Present or Not "<< lS << endl;
cout<<"0  mean Number Not Present"<<endl;
cout<<"1 mean Number is Present"<<endl;




}