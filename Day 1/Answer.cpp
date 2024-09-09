#include <iostream>
using namespace std;


//Dutch National Flag Algorithm
void dutchNationalFlag(int arr[], int n) {

    int count0 = 0, count1 = 0, count2 = 0;

    // Counting number of 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0){
            count0++;
        }else if (arr[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

    // Placing 0 , 1 and 2 in same array
    int i = 0;
    while (count0--){
        arr[i++] = 0;
    }

    while (count1--){
        arr[i++] = 1;
    }

    while (count2--){
        arr[i++] = 2;
    }
}

int main(){
    int arr[] = { 0, 1, 2, 1, 0, 2, 1, 0 };   
    int n = sizeof(arr) / sizeof(arr[0]);

    dutchNationalFlag(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}