#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt",ios::app);
    if(!my_file){
        cout << "Failed to open the file for appending."<< endl;
        return 1;
    }   
    my_file << "Anushka 20" << endl;
    my_file << "Faiza 20" << endl;
    my_file << "Arshi 20" << endl;
}
