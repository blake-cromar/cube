#include <iostream>
#include "../../include/activation_functions.hpp"
using namespace std;

int test_relu_function() {
    double x = relu(0);
    cout << "Result of relu function: " << x << endl;
    return 0;
}
