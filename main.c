#include "./headers/training.h"
#include "./headers/activation.h"

int main() {
    double inputs[][NUM_INPUTS] = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 1}
    };
    double outputs[] = {0, 0, 0, 1};
    double weights[NUM_INPUTS];
    for (int i = 0; i < NUM_INPUTS; ++i) {
        weights[i] = (double)rand() / RAND_MAX;
    }
    train(inputs, outputs, weights, 4);

    printf("Test Neural Network:\n");
    int true_positives = 0;
    int true_negatives = 0;
    int false_positives = 0;
    int false_negatives = 0;
    for (int p = 0; p < 4; ++p) {
        double weighted_sum = 0.0;
        for (int i = 0; i < NUM_INPUTS; ++i) {
            weighted_sum += inputs[p][i] * weights[i];
        }
        double output = activationFunction(weighted_sum);
        int predicted = (int)output;
        int actual = (int)outputs[p];

        if (predicted == 1 && actual == 1) {
            true_positives++;
        } else if (predicted == 0 && actual == 0) {
            true_negatives++;
        } else if (predicted == 1 && actual == 0) {
            false_positives++;
        } else if (predicted == 0 && actual == 1) {
            false_negatives++;
        }

        printf("Input: %d %d, Output: %lf\n", (int)inputs[p][0], (int)inputs[p][1], output);
    }

    printf("\nMatrix confusion:\n");
    printf("True Positives: %d\n", true_positives);
    printf("True Negatives: %d\n", true_negatives);
    printf("False Positives: %d\n", false_positives);
    printf("False Negatives: %d\n", false_negatives);

    double accuracy = (double)(true_positives + true_negatives) / 4.0;
    double precision = (double)true_positives / (true_positives + false_positives);
    double recall = (double)true_positives / (true_positives + false_negatives);
    double f1_score = 2 * (precision * recall) / (precision + recall);

    printf("\nAssessment Metrics:\n");
    printf("Accuracy: %lf\n", accuracy);
    printf("Precision: %lf\n", precision);
    printf("Recall: %lf\n", recall);
    printf("F1-Score: %lf\n", f1_score);

    return 0;
}
