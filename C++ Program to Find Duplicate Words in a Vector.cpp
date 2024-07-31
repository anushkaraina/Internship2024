#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printDuplicates(vector<string> words)
{
    vector<string> duplicate;
    sort(words.begin(),words.end());
    for(int i=1;i<words.size();i++){
    if (words[i-1]==words[i]){
        if(duplicate.empty())
        duplicate.push_back(words[i]);
        else if(words[i]!=duplicate .back())
        duplicate.push_back(words[i]);
    }
    }
    if(duplicate.size()==0)
    cout<<"no duplicate words"<<endl;
    else
    for(int i=0;i<duplicate.size();i++)
    cout<<duplicate[i]<<endl;
    }
    int main()
    {
        vector<string>words{"welcome","to","miet","for","intern","to","intern"};
    
    printDuplicates(words);
    return 0;
}
