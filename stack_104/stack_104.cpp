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


};
int main()
{
    std::cout << "Hello World!\n";
}



