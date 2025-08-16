#include "status.h"

status Game::makeStatus(const std::string &status) {
    if (status == "ROCK") {
        return ROCK;
    }
    else if (status == "SCISSOR") {
        return SCISSOR;
    }
    else {
        return PAPER;
    }
}

std::string Game::judge(const status &first, const status &second) {
    if (first == ROCK) {
        if (second == ROCK) {
            return "Draw";
        }
        else if (second == SCISSOR) {
            return "Win";
        }
        else {
            return "Lose";
        }
    }
    else if (first == SCISSOR) {
        if (second == ROCK) {
            return "Lose";
        }
        else if (second == SCISSOR) {
            return "Draw";
        }
        else {
            return "Win";
        }
    }
    else {
        if (second == ROCK) {
            return "Win";
        }
        else if (second == SCISSOR) {
            return "Lose";
        }
        else {
            return "Draw";
        }
    }
}
