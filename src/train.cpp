// Copyright 2021 by Liza
#include "train.h"
#include <iostream>
#include <cstdlib>
void Cage::on() {
light = true;}
void Cage::off() {
light = false;}
bool Cage::get() const{
return light;}
void Train::add_cage(){
Cage* newcage = new Cage;
if (this->first) {
this->first->prev = newcage;
this->last->next = newcage;}
else{
this->first = newcage;}
this->last = newcage;
newcage->next = this->first;
newcage->prev = this->last;}
void Train::print_train(){
Cage* ptr = this->first;
int i = 1;
while (ptr != this->last){
if (ptr->get()) {
std::cout << "Cage#" << i << "\tlight is on"
<< std::endl;}
else {
std::cout << "Cage#" << i << "\tlight is off"
<< std::endl;}
i++;
ptr = ptr->next;}
if (ptr->get()) {
std::cout << "Cage#" << i << "\tlight is on"
<< std::endl;}
else {
std::cout << "Cage#" << i << "\tlight is off"
<< std::endl;}}
int Train::train_length() {
int step=0;
if (!this->first) return step;
this->first->off();
step++;
Cage* flCage{ this->first->next };
while (true){
while (true){
if (!flCage->get()){
flCage->on();
break;}
step++;
flCage = flCage->next;}
if (this->first->get()) {
return step;}}}
