#ifndef CASSINO_H
#define CASSINO_H

#include "Player.h"
#include <iostream>
#include <random>

class Cassino{
private:
  Player person;
  Player computer;

public:
  Cassino();
  void play();
};

#endif //CASSINO_H