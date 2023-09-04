#ifndef CHAMPION_H
#define CHAMPION_H

#include <string>
#include <vector>

enum ChampionClass {
    // Define your champion classes here
    TANK,
    MAGE,
    BRUISER,
    MARKSMAN,
    SUPPORT,
};

class Champion {
private:
    std::string name;
    ChampionClass championClass;
    std::vector<std::string> roles;
    int proGamesPlayed;
    int proGamesWon;

public:
    Champion(std::string name, ChampionClass championClass);
    void addRole(std::string role);
    bool hasRole(std::string role);
    void playProGame(bool won);
    double calculateWinRate();
    std::string getName();
    ChampionClass getChampionClass();
    int getProGamesPlayed();
    int getProGamesWon();
};

#endif // CHAMPION_H
