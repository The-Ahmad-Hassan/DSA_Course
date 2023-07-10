#include<iostream>
#include<cmath>
using namespace std;

/// Function to calculate binary of positve integer
int Decimal_to_Binary(int n){   
    int answer=0;
    int i =0;
    while(n!=0){
        int bit = n & 1;
        answer = ( pow(10,i) * bit ) + answer ;
        n = n>> 1;  
        i+=1;
    }
    return answer;
}

/// Function to calculate binary of negative integer
int Binary_of_Negative(int n){
    n = abs(n);
    int bin = Decimal_to_Binary(n);
    
       
    return bin;
}


int main(){


int A=Binary_of_Negative(-3);
cout<< A <<endl;



}