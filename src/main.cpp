// Copyright 2021 by Liza
#include <iostream>
#include <string>
#include "train.h"
int main {
Train train;
for (int i= 0; i < 17; ++i) {
train.add_cage(std::rand() % 2);}
train.print_train();
std::cout << train.train_length() << std::endl;
return 0;}
