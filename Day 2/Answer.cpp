#include<iostream>
#include<vector>
using namespace std;

//Function to find missing number
int findMissingNumber(vector<int>nums){
    int number = 1 ,i = 0;
    while(number<nums.size()){
        if(number != nums[i]){
            return number;
        }else{
            i++;
            number++;
            continue;
        }
    }

    return number+1;
}


int main(){
    vector<int> test1 {1, 2, 4, 5};
    cout << "Missing number in test1: " << findMissingNumber(test1) << endl;

    vector<int> test2 {2, 3, 4, 5};
    cout << "Missing number in test2: " << findMissingNumber(test2) << endl;

    vector<int> test3 {1, 2, 3, 4};
    cout << "Missing number in test3: " << findMissingNumber(test3) << endl;

    vector<int> test4 {1};
    cout << "Missing number in test4: " << findMissingNumber(test4) << endl;

    vector<int> test5;
    int i = 1;
    while(i < 1000000){
        test5.push_back(i);
        i++;
    }
    cout << "Missing number in test5: " << findMissingNumber(test5) << endl;

    return 0;
}