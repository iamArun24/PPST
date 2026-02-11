#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        int mini = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // avoids overflow

        if (arr[mid] == target)
            return mid;   // found

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;  // not found
}

int main() {
   int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    int target;
    cin>>target;
    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
