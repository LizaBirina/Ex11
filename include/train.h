// Copyright 2021 by Liza
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
#include <iostream>
class Cage{
bool light;
 public:
Cage* next;
Cage* prev;
Cage() : light(false), next(nullptr), prev(nullptr) {}
void on() {light = true;}
void off() {light = false;}
bool get() const {return light;}};
class Train {
 private:
Cage* first;
Cage* last;
 public:
Train(){
first = nullptr;
last = nullptr;
}
void add_cage(const bool);
void print_train();
int train_length();};
#endif  // INCLUDE_TRAIN_H_
