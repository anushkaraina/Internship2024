#include<iostream>
#include<vector>
using namespace std;
#include<algorithm> // For std::stable_sort

int main(){
    vector<int> arr={38,27,43,3,9,82,10};
    stable_sort(arr.begin(),arr.end());

    for(int num: arr){
        cout << num << " ";
    }
    return 0;
}
