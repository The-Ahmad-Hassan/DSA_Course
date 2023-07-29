#include<iostream>
#include<array>

using namespace std;

int main(){
//basic array
int arr[3]={1,2,3};


//stl array
array<int,5>a={1,2,3,4,5};

int size=a.size();

for(int i=0; i<size; i++){

cout<<a[i]<<" ";

}
cout<<endl;
cout<<"Element are empty or not "<<a.empty()<<endl;
cout<<"First element of array "<<a.front()<<endl;
cout<<"Last element of array "<<a.back()<<endl;





}