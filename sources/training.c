#include "../headers/training.h"
#include "../headers/activation.h"

void train(double inputs[][NUM_INPUTS], double outputs[], double weights[], int num_patterns) {
    for (int epoch = 0; epoch < EPOCHS; ++epoch) {
        for (int p = 0; p < num_patterns; ++p) {
            double weighted_sum = 0.0;
            for (int i = 0; i < NUM_INPUTS; ++i) {
                weighted_sum += inputs[p][i] * weights[i];
            }
            double output = activationFunction(weighted_sum);
            double error = outputs[p] - output;
            for (int i = 0; i < NUM_INPUTS; ++i) {
                weights[i] += LEARNING_RATE * error * inputs[p][i];
            }
        }
    }
}