#ifndef ACTIVATION_FUNCTIONS_HPP
#define ACTIVATION_FUNCTIONS_HPP

#include <cmath>

/**
 * Computes the Rectified Linear Unit (ReLU) function for a given input.
 *
 * ReLU is a non-linear activation function commonly used in neural networks.
 * It returns the input value if it is greater than 0, otherwise, it returns 0.
 *
 * @param x: The input value.
 * @return The output value after applying the ReLU function.
 */
double relu(double x);

/**
 * Compute the Sigmoid function for a given input.
 *
 * The Sigmoid function is a non-linear activation function commonly used in neural networks.
 * It squashes the input values between 0 and 1, which can be interpreted as probabilities.
 *
 * @param x: The input value.
 * @return The output value after applying the Sigmoid function.
 */
double sigmoid(double x);

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
double hyperbolic_tangent(double x);

#endif 