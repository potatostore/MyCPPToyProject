#include "Cassino.h"
#include <random>

Cassino::Cassino(){
  	std::string id;
    int margin;
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter margin: ";
    std::cin >> margin;

    this->person = *new Player(id, margin);
    this->computer = *new Player("Computer", margin);
}

void Cassino::play(){
	while(person.getPrice() > 0){
    	int playervalue = rand() % 100;
        int computervalue = rand() % 100;
        int baiting;

        std::cout << "Baiting(max : " << person.getPrice() << "): ";
        std::cin >> baiting;

        std::cout << "Player value: " << playervalue << std::endl;
        std::cout << "Computer value: " << computervalue << std::endl;
        if(playervalue > computervalue){
          	std::cout << "Player wins!" << std::endl;
          	person.setPrice(person.getPrice() + baiting);
          	computer.setPrice(computer.getPrice() - baiting);
        }
        else if(playervalue < computervalue){
          	std::cout << "Computer wins!" << std::endl;
       		person.setPrice(person.getPrice() - baiting);
         	computer.setPrice(computer.getPrice() + baiting);
        }
        else{
        	std::cout << "Draw!" << std::endl;
        }
	}
}