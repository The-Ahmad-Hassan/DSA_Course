#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {
    int i = n - 1;
   cout<< n<<endl;
    int j = m - 1;
    
   cout<< m<<endl;
    int k = n + m - 1;
 while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {1, 2, 3, 0, 0, 0};
    int arr2[3] = {2, 5, 6};

    printArray(arr1, 6);

    merge(arr1, 3, arr2, 3);

    printArray(arr1, 6);

    return 0;
}
