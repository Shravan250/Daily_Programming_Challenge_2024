#include<iostream>
#include<vector>
using namespace std;

vector<pair<int , int>> findSubArray(vector<int>& nums){
    vector<pair<int , int>> result;

    for(int i = 0; i < nums.size(); i++){
        int sum = nums[i];
        for(int j = i + 1; j < nums.size(); j++){
            sum += nums[j];
            if(sum == 0){
                result.push_back({i, j});
            }
        }
    }

    return result;
}

void print(vector<pair<int, int>> output)
{
    cout<<"[";
    for (auto it = output.begin(); it != output.end(); it++){
        cout<<"("<< it->first << "," << it->second << ")";
    }
    cout<<"]"<<endl;
}

int main(){
     vector<int> test1 {4, -1, -3, 1, 2, -1}; 
     vector<pair<int ,int >>  test1_ans;
    test1_ans = findSubArray(test1);
    print(test1_ans);


    vector<int> test2 {1, 2, 3, 4}; 
    vector<pair<int ,int >> test2_ans;
    test2_ans = findSubArray(test2);
    print(test2_ans);


    vector<int> test3 {0, 0, 0}; 
    vector<pair<int ,int >> test3_ans;
    test3_ans = findSubArray(test3);
    print(test3_ans);


    vector<int> test4 {-3, 1, 2, -3, 4, 0}; 
    vector<pair<int ,int >> test4_ans;
    test4_ans = findSubArray(test4);
    print(test4_ans);


    vector<int> test5; 
    vector<pair<int ,int >> test5_ans;
    int i = 1;
    while(i <= 10000){
        test5.push_back(i);
        test5.push_back(-i);
        i++;
    }
    test5_ans = findSubArray(test5);
    print(test5_ans);
 


    return 0;
}