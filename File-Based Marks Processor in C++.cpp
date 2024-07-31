#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
 ifstream inFile("marks.txt");
 if(!inFile){
    cerr << "Error opening file marks.txt" << endl;
    return 1;
 }
 string name;
 int marks;
 int sum=0;
 int count=0;

 while(inFile >> name >> marks){
    cout << "Name: " << name << ", Marks:" << marks << endl;
    sum +=marks;
    count++;
 }
 cout << "Sum of the marks : "<<sum << endl;
 inFile.close();

 if(count==0){
    cout << "No data found in the file." << endl;
 } 
 else{
    double average = static_cast<double>(sum)/count;
    cout << "Average marks: " << average << endl;
 }
 return 0;
}
