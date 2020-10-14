//
// Created by arwin on 30/09/2020.
//

#ifndef LEARNINGC_NETWORK_H
#define LEARNINGC_NETWORK_H

#include<iostream>
#include<random>

using namespace std;


class Neuralnet {

private:
    float learning_rate;
    float weights[4];
    float threshold;
    float inputs[4];
    float outputs[16];
    int targets[16];

public:
    float generate_threshold(void){
        std :: default_random_engine gen;
        std :: uniform_real_distribution<float> dist(-1.000, 1.000);

        return dist(gen);
    }
};


#endif //LEARNINGC_NETWORK_H
