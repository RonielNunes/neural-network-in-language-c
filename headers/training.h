
#ifndef TRAINING_H
#define TRAINING_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_INPUTS 2
#define NUM_OUTPUTS 1
#define LEARNING_RATE 0.1
#define EPOCHS 10000

void train(double inputs[][NUM_INPUTS], double outputs[], double weights[], int num_patterns);

#endif