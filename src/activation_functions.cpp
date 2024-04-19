#include <iostream>
#include <cmath>
#include "../include/activation_functions.hpp"
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
    return 1.0 / (1.0 + exp(-x));
}

/**
 * Compute the hyperbolic tangent of a given value.
 *
 * This function computes the hyperbolic tangent (tanh) of the input value.
 * The hyperbolic tangent is a hyperbolic function defined as the ratio of
 * the hyperbolic sine to the hyperbolic cosine.
 *
 * @param x The input value for which to compute the hyperbolic tangent.
 * @return The hyperbolic tangent of the input value.
 */
double hyperbolic_tangent(double x) {
    return std::tanh(x);
}

/**
 * Computes the output of the double Leaky ReLU activation function.
 *
 * Leaky ReLU is defined as follows:
 *   f(x) = x,     if x > 0
 *   f(x) = a*x,   if x <= 0, where 'a' is a small positive slope (usually < 1)
 *
 * Positives of the function:
 * 1. Non-zero gradients for negative inputs, preventing the "dying ReLU" problem.
 * 2. Maintains negative information.
 * 3. Computationally efficient.
 * 
 * Negatives of this function:
 * 1. Requires manual tuning of the slope parameter 'a'.
 * 2. Potential for vanishing gradients, especially if 'a' is too small. 
 * 
 * Parameters:
 *   x (double): Input value to the activation function.
 *   a (double): Slope parameter for the negative region.
 *
 * Returns:
 *   double: Output of the Leaky ReLU function for the given input 'x' and slope 'a'.
 */

double leaky_relu(double x, double a) {
    return x * (x > 0.0) + a * x * (x <= 0);
}