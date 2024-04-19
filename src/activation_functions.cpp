#include <iostream>
#include <cmath>
#include "../include/activation_functions.hpp"
using namespace std;

/**
 * Computes the output of the ReLU (Rectified Linear Unit) activation function.
 *
 * The ReLU function is defined as follows:
 *   f(x) = x * (x > 0)
 *
 * Positives of the function:
 * - Simple and computationally efficient.
 * - Allows for sparse activations, reducing overfitting.
 *
 * Negatives of this function:
 * - Prone to dying ReLU problem for negative inputs, where neurons become inactive.
 * - Not zero-centered, which can lead to optimization difficulties.
 * - Not suitable for networks with many layers due to the dying ReLU problem.
 *
 * Parameters
 * ----------
 * x : double 
 *      Input value to the activation function.
 *
 * Returns
 * -------
 * double: 
 *      Output of the ReLU function for the given input 'x'.
 */
double relu(double x) {
    return x * (x > 0.0);
}

/**
 * Computes the output of the sigmoid activation function.
 *
 * The sigmoid function is defined as follows:
 *   f(x) = 1 / (1 + exp(-x))
 *
 * Positives of the function:
 * - Smooth, bounded between 0 and 1.
 * - Useful for binary classification problems.
 *
 * Negatives of this function:
 * - Prone to vanishing gradients, especially for extreme inputs.
 * - Outputs are not zero-centered, which can slow down convergence.
 * - Not suitable for networks with many layers due to vanishing gradient problem.
 *
 * Parameters
 * ----------
 * x : double 
 *      Input value to the activation function.
 *
 * Returns
 * -------
 * double: 
 *      Output of the sigmoid function for the given input 'x'.
 */
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

/**
 * Computes the output of the hyperbolic tangent activation function.
 *
 * Hyperbolic tangent (tanh) is defined as follows:
 *   f(x) = (exp(x) - exp(-x)) / (exp(x) + exp(-x))
 *
 * Positives of the function:
 * - Smooth, bounded between -1 and 1.
 * - Encourages sparse activations, which can help in regularization.
 *
 * Negatives of this function:
 * - Prone to vanishing gradients, especially for large inputs.
 * - Computationally expensive compared to other activation functions.
 * - Sensitive to the scale of the inputs, which may require normalization.
 *
 * Parameters
 * ----------
 * x : double 
 *      Input value to the activation function.
 *
 * Returns
 * -------
 * double: 
 *      Output of the hyperbolic tangent function for the given input 'x'.
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
 * Parameters
 * ----------
 * x : double  
 *      Input value to the activation function.
 * a : double 
 *      Slope parameter for the negative region.
 *
 * Returns
 * -------
 * double: 
 *      Output of the Leaky ReLU function for the given input 'x' and slope 'a'.
 */
double leaky_relu(double x, double a) {
    return x * (x > 0.0) + a * x * (x <= 0);
}