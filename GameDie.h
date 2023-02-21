// Copyright 2022 kbuffardi

#ifndef GAMEDIE_H_
#define GAMEDIE_H_
#include <vector>

using std::vector;

class GameDie{
 public:
  GameDie();
  explicit GameDie(unsigned int);
  int roll();
  vector <int> get_distribution();

 private:
  vector <int> roll_counter;
  static const int FACES = 6;
};

#endif  // GAMEDIE_H_
