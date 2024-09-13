#include<iostream>
#include<vector>
using namespace std;


//time O(n) and space O(1)
vector<int> findLeaders(vector<int>& nums){
    vector<int> ans {nums[nums.size()-1]};
    int max_from_right = nums[nums.size()-1];

    for(int i = nums.size()-2 ; i >= 0 ; i--){
        if(nums[i] > max_from_right){
            max_from_right = nums[i];
            ans.push_back(nums[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void printArray(vector<int>& a){
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> test1 {1, 2, 3, 4, 0} , test1_ans;
    test1_ans = findLeaders(test1);
    printArray(test1_ans);


    vector<int> test2 {7, 10, 4, 10, 6, 5, 2} , test2_ans;
    test2_ans = findLeaders(test2);
    printArray(test2_ans);


    vector<int> test3 {5} , test3_ans;
    test3_ans = findLeaders(test3);
    printArray(test3_ans);


    vector<int> test4 {100, 50, 20, 10} , test4_ans;
    test4_ans = findLeaders(test4);
    printArray(test4_ans);


    vector<int> test5 , test5_ans;
    int i = 1;
    while(i <= 1000000){
        test5.push_back(i);
        i++;
    }
    test5_ans = findLeaders(test5);
    printArray(test5_ans);
    return 0;
}