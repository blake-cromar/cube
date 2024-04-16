#include <iostream>
#include <cmath>
using namespace std;

/**
 * Computes the Rectified Linear Unit (ReLU) function for a given input.
 *
 * ReLU is a non-linear activation function commonly used in neural networks.
 * It returns the input value if it is greater than 0, otherwise, it returns 0.
 *
 * @param x: The input value.
 * @return The output value after applying the ReLU function.
 */
double relu(double x) {
    return (x > 0.0) ? x : 0.0;
}

/**
 * Compute the Sigmoid function for a given input.
 *
 * The Sigmoid function is a non-linear activation function commonly used in neural networks.
 * It squashes the input values between 0 and 1, which can be interpreted as probabilities.
 *
 * @param x: The input value.
 * @return The output value after applying the Sigmoid function.
 */
double sigmoid(double x) {
    double exp_neg_x = exp(-x);
    return 1.0 / (1.0 + exp_neg_x);
}

int main() {
    
    double result = sigmoid(-2);

    cout << "The activation function produces the value of: " << result << endl;

    return 0;
}