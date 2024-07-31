#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("abha");
    q.push("sabha");
    q.push("mabha");


    cout << "Size of the queue: " << q.size() << endl;

    
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
