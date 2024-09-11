#include<iostream>
#include<vector>
using namespace std;

//using Tortoise and Hare algorithm i.e cyclic LL method for finding duplicate in O(n) time and O(1) space 
int findDuplicateNumber(vector<int> nums){
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    fast = nums[0];
    while( slow != fast ){
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}


int main(){
    vector<int> test1 {1, 3, 4, 2, 2};
    cout << "Duplicate number in test1: " << findDuplicateNumber(test1) << endl;

    vector<int> test2 {3, 1, 3, 4, 2};
    cout << "Duplicate number in test2: " << findDuplicateNumber(test2) << endl;

    vector<int> test3 {1, 1};
    cout << "Duplicate number in test3: " << findDuplicateNumber(test3) << endl;

    vector<int> test4 {1, 4, 4, 2, 3};
    cout << "Duplicate number in test4: " << findDuplicateNumber(test4) << endl;

    vector<int> test5;
    int i = 1;
    while(i < 99999){
        test5.push_back(i);
        i++;
    }
    test5.push_back(50000);
    cout << "Duplicate number in test5: " << findDuplicateNumber(test5) << endl;


    return 0;
}