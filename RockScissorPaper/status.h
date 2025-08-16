#ifndef STATUS_H
#define STATUS_H

#include <iostream>
#include <string>

enum status{
    ROCK,
    SCISSOR,
    PAPER
};

class Game {
public:
    status makeStatus(const std::string &status);
    std::string judge(const status &first, const status &second);
};

#endif //STATUS_H
