#include<iostream>
#include<vector>
using namespace std;

int insert(vector<int>& a, int x) {
    int m = a.size();
    int last = a[m - 1];
    int j = m - 2;
    while (j >= 0 && a[j] > x) {
        a[j + 1] = a[j]; 
        j--;
    }
    a[j + 1] = x;
    return last; 
}

void merge(vector<int>& a, vector<int>& b) {
  
    for (int i = b.size() - 1; i >= 0; i--) {
        if (a.back() > b[i]) {
            b[i] = insert(a, b[i]);
        }
    }
}

void printArray(vector<int>& a, vector<int>& b){
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;

    for(int i : b){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> test1_a {1, 3, 5};
    vector<int> test1_b {2, 4, 6};

    cout<<"Test 1 : "<<endl;
    merge(test1_a, test1_b);
    printArray(test1_a, test1_b);
    cout<<endl;

    vector<int> test2_a {10, 12, 14};
    vector<int> test2_b {1, 3, 5};

    cout<<"Test 2 : "<<endl;
    merge(test2_a, test2_b);
    printArray(test2_a, test2_b);
    cout<<endl;

    vector<int> test3_a {2, 3, 8};
    vector<int> test3_b {4, 6, 10};

    cout<<"Test 3 : "<<endl;
    merge(test3_a, test3_b);
    printArray(test3_a, test3_b);
    cout<<endl;

    vector<int> test4_a {1};
    vector<int> test4_b {2};

    cout<<"Test 4 : "<<endl;
    merge(test4_a, test4_b);
    printArray(test4_a, test4_b);
    cout<<endl;

    vector<int> test5_a;
    int i = 1;
    while(i < 100000){
        test5_a.push_back(i);
        i++;
    }
    vector<int> test5_b;
    int j = 50001;
    while(j < 100000){
        test5_b.push_back(j);
        j++;
    }

    cout<<"Test 5 : "<<endl;
    merge(test5_a, test5_b);
    printArray(test5_a, test5_b);
    cout<<endl;

    return 0;
}