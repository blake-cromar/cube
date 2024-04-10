#include <iostream>
using namespace std;

int relu(int a) {
    return (a > 0) ? a : 0;
}

int main() {
    
    int result = relu(-1);

    cout << "The activation function produces the value of: " << result << endl;

    return 0;
}