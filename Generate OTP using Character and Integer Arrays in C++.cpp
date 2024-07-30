#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    int s2[]={0,1,2,3,4,5,6,7,8,9};//,10,11,12,13,14,15};
    for(int i=0;i<10;i++){
        cout << "OTP"<< i+1 << ": " << s1[i+4]<<s2[i+15]<<s1[i+2];//<<s2[i+16]<<s1[i]<<s1[i+17];
        cout << endl;
    }
}
