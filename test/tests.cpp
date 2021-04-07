// Copyright 2021 by Liza
#include <string>
#include "train.h"
TEST(Train, test1) {
Train train;
for (int i = 0; i < 76; ++i) {
train.add_cage(std::rand() % 2);}
EXPECT_EQ(76, train.getLen());}
TEST(Train, test2) {
Train train;
for (int i = 0; i < 11; ++i) {
train.add_cage(std::rand() % 2);}
EXPECT_EQ(0, train.getLen());}
TEST(Train, test3) {
Train train;
for (int i = 0; i < 123; ++i) {
train.add_cage(std::rand() % 2);}
EXPECT_EQ(123, train.getLen());}
