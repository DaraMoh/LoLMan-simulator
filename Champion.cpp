#include "Champion.h" // Include the header file for the Champion class

// Constructor
Champion::Champion(std::string name, ChampionClass championClass) {
    this->name = name;
    this->championClass = championClass;
    proGamesPlayed = 0;
    proGamesWon = 0;
}

// Add a role to the champion
void Champion::addRole(std::string role) {
    roles.push_back(role);
}

// Check if the champion has a specific role
bool Champion::hasRole(std::string role) {
    for (const std::string& championRole : roles) {
        if (championRole == role) {
            return true;
        }
    }
    return false;
}

// Update pro games played and won
void Champion::playProGame(bool won) {
    proGamesPlayed++;
    if (won) {
        proGamesWon++;
    }
}

// Calculate the win rate
double Champion::calculateWinRate() {
    if (proGamesPlayed == 0) {
        return 0.0; // To avoid division by zero
    }
    return static_cast<double>(proGamesWon) / proGamesPlayed;
}

// Getter methods to access champion information
std::string Champion::getName() {
    return name;
}

ChampionClass Champion::getChampionClass() {
    return championClass;
}

int Champion::getProGamesPlayed() {
    return proGamesPlayed;
}

int Champion::getProGamesWon() {
    return proGamesWon;
}
