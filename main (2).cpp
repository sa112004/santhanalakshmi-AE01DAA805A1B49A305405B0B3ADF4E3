#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Batsman batsman;
    Bowler bowler;

    Player* player1 = &batsman;
    Player* player2 = &bowler;

    player1->play();  // Calls Batsman's play() method
    player2->play();  // Calls Bowler's play() method

    return 0;
}

