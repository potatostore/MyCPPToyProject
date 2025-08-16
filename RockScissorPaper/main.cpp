#include "status.cpp"
#include <iostream>
#include <random>

int main() {
    Game game;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, 2);

    while (true) {
        int n = distrib(gen);
        std::string input;
        std::cin >> input;

        if (input == "0") {
            break;
        }

        status userStatus = game.makeStatus(input);
        status compStatus;
        switch (n) {
            case 0:
                compStatus = ROCK;
                break;
            case 1:
                compStatus = SCISSOR;
                break;
            case 2:
                compStatus = PAPER;
                break;
        }

        std::string judgeResult = game.judge(userStatus, compStatus);
        std::cout << judgeResult << std::endl;
    }

    return 0;
}