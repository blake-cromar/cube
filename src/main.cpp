#include <iostream>
#include "../include/activation_functions.hpp"
using namespace std;

int main () {
    double test_values[] = {0.0, 1.0, -1.0, 2.0, -2.0};

    cout << "Testing hyperbolic tangent function:" << endl;
    for (double value : test_values) {
        double result = hyperbolic_tangent(value);
        cout << "tanh(" << value << ") = " << result << endl;
    }

    return 0;
}