#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

}

void print(vector<int> v2, int n) {
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    print(nums2, 3);
    cout << endl;

    print(nums1, 6);
    cout << endl;

    merge(nums1, 3, nums2, 3);

    print(nums1, 6);

    return 0;
}
