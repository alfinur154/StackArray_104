#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
    string stack_array[5];
    int top;
public:
    //consturctor
    StackArray() {
        top = -1;
    }

    void push() {
        if (top == 4) { //step 1
            cout << "Number of data exceeds the limit." << endl;
            return;
        }
        cout << "\nEnter a Element: ";
       string element;
       getline(cin, element);
        top++; //step 2

        stack_array[top] = element; // step 3
        cout << element << "ditambahkan(pushed)" << endl;
    }


    void pop() {
        if (empty()) { //step 1
            cout << "\nstack is empty. Cannot pop." << endl; //1.a
        }

        cout << "\nThe popped element is: " << stack_array[top] << endl;//step 2
        top--; //step 3 decrement
    }

    //method for check if data is empy
    bool empty() {
        return (top == -1);
    }

    void display() {
        if (empty()) {
            cout << "\nStack is empty." << endl;
        }
        else {
            for (int tmp = 0; top <= top; tmp++) {
                cout << stack_array[tmp] << endl;
            }
        }
    }
};

int main() {
    StackArray s;
    while (true) {
        cout << endl;
        cout << "\n***Stack Menu***\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. exit\n";
        cout << "\nEnter your choice: ";
        string input;
        getline(cin, input);
        char ch = (input.empty() ? '0' : input[0]);
        switch (ch) {
        case '1': {
            s.push();
            break;
        }
        case '2':
            if (s.empty()) {
                cout << "\nStack is empty." << endl;
                break;
            }
            s.pop();
            break;
        case '3':
            s.display();
            break;
        case '4':
            return 0;
        default:
            cout << "\nInvalid Choice." << endl;
            break;

        }
    }

}




