
#include "../headers/activation.h"

double activationFunction(double sum) {
    return (sum >= 0.5) ? 1 : 0;
}