// Vector দিয়ে Stack Implementation
#include <iostream>
#include <vector>
using namespace std;

// Stack class using vector
class Stack {
private:
    vector<int> v;   // internal vector (stores stack elements)

public:
    // Push method
    void push(int x) {
        v.push_back(x);
    }

    // Pop method
    void pop() {
        if (!v.empty()) {
            v.pop_back();
        } else {
            cout << "Stack is empty! Cannot pop.\n";
        }
    }

    // Top method
    int top() {
        if (!v.empty()) {
            return v.back();
        } 
        cout << "Stack is empty! No top element.\n";
        return -1;  // indicate error
    }

    // Size method
    int size() {
        return v.size();
    }

    // Empty check method
    bool empty() {
        return v.empty();
    }
};


int main() {

    Stack st;    // creating object

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top = " << st.top() << endl;   // 30

    st.pop();

    cout << "Top after pop = " << st.top() << endl;  // 20

    cout << "Size = " << st.size() << endl;  // 2

    if(st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}
