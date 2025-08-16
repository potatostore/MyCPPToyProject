#include "Player.h"

Player::Player(std::string id, int price) : id(id), price(price) {}

int Player::getPrice(){
  return price;
}

std::string Player::getId(){
  return id;
}

void Player::setPrice(int price){
  this->price = price;
}

void Player::setId(std::string id){
  this->id = id;
}