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

    string push(string element) {
        if (top == 4) { //step 1
            cout << "Number of data exceeds the limit." << endl;
            return"";
        }

        top++; //step 2
        stack_array[top] = element; // step 3
        cout << element << "ditambahkan(pushed)" << endl;

        return element;
    }


    void pop() {
        if (empty()) { //step 1
            cout << "\nstack is empty. Cannot pop." << endl; //1.a
        }

        cout << "\nThe popped element is: " << stack_array[top] << endl;//step 2
        top--; //step 3 decrement
    }
};
int main()
{
    std::cout << "Hello World!\n";
}



