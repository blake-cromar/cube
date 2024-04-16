#include <iostream>
using namespace std;

double relu(double x) {
    return (x > 0.0) ? x : 0.0;
}

}

int main() {
    
    int result = relu(-1);

    cout << "The activation function produces the value of: " << result << endl;

    return 0;
}