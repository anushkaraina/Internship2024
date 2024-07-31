#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> nums {0,1,2,3,4,5,3};
     cout << "Original list: " << endl;
        for(int numbers : nums){
            cout << numbers << endl;
        }
    list<int> nums2 {9,1,88,3,45,54,3};
    //list<int>::iterator itr = nums.begin();
    int x=1;
    while (x){
        if(x==0){
            break;
        }
        else{
             int choice;
    cout << "Enter 1 for reverse\n2 for sort\n3 for unique\n4 for size\n5 for clear\n6 for merge functions\n";
    cin >> choice;
    switch (choice)
    {
    case 1:{
        nums.reverse();
        cout << "Reversed list: " << endl;
        for(int numbers : nums){
            cout << numbers << endl;
        }
        break;
    }
    case 2:{
        nums.sort();
        cout << "Sorted list: " << endl;
        for(int numbers : nums){
            cout << numbers << endl;
        }
        break;
    }
    case 3:{
        nums.unique();
        cout << "Unique list after removal of duplicate elements: " << endl;
        for(int numbers : nums){
            cout << numbers << endl;
        }
        break;
    }
    case 4:{
        cout << "Size of list is: " << nums.size();
        break;
    }
    case 5:{
        nums.clear();
        cout << "All elements cleared\nList is empty." << endl;
        break;
    }
    case 6:{
        nums.merge(nums2);
        cout << "Merged list: " << endl;
        for(int numbers : nums){
            cout << numbers << endl;
        }
        break;
    }
    default:{
        cout << "Wrong choice entered!!" << endl;
        break;
    }
    }
    cout << "Do you want to continue again??\nEnter any number to continue and 0 to exit:" << endl;
    cin >> x;

        }
    }
}
