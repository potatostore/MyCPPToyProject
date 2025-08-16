#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {
private:
    int price;
    std::string id;
public:
    Player(std::string id = "", int price = 0);

    int getPrice();
    std::string getId();

    void setPrice(int price);
    void setId(std::string id);
};

#endif //PLAYER_H