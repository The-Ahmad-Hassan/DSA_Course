#include<iostream>

using namespace std;


void print(int arr[],int size){



}


int Sum_Of_Array_No(int arr[],int size){
  int sum=0;

  for(int i=0; i<size; i++){

  sum=sum+arr[i];

  }


return sum;

}


int main(){


int arr[5]={1,2,3,4,5};

int size=sizeof(arr)/sizeof(int);

int sum=Sum_Of_Array_No(arr,size);

cout<<"Sum of all element in array is  "<< sum <<endl;


}