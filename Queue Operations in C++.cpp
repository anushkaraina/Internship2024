#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    // Pushing elements onto the queue
    q.push("abha");
    q.push("sabha");
    q.push("mabha");

    // Printing the size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // Printing and popping elements from the queue
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
