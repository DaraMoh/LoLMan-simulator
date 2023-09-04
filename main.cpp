#include <iostream>
#include "Champion.h" // Include the Champion class header

using namespace std;

int main() {
    // Create an instance of the Champion class
    Champion zac("Zac", 0, TANK); // Initialize with appropriate values

    // Add roles and mark a win in a pro game
    zac.addRole("Top");
    zac.addRole("Jungle");
    zac.playProGame(true);

    // Access and display champion information
    cout << "Champion Name: " << zac.getName() << endl;
    cout << "Champion Class: " << zac.getChampionClass() << endl;

    // Calculate and display win rate
    double winRate = zac.calculateWinRate();
    cout << "Pro Games Played: " << zac.getProGamesPlayed() << endl;
    cout << "Pro Games Won: " << zac.getProGamesWon() << endl;
    cout << "Win Rate: " << winRate * 100 << "%" << endl;

    return 0;
}
