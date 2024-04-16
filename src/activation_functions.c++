#include <iostream>
#include <cmath>
using namespace std;

double relu(double x) {
    return (x > 0.0) ? x : 0.0;
}

double sigmoid(double x) {
    double exp_neg_x = exp(-x);
    return 1.0 / (1.0 + exp_neg_x);
}

int main() {
    
    double result = sigmoid(-1);

    cout << "The activation function produces the value of: " << result << endl;

    return 0;
}