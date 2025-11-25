#include <iostream>
using namespace std;

class TicTacToeRL {
public:
    TicTacToeRL(double lr, double df, double er);
    void train(int numGames);
    void playGame();
    //--
private:
    //-- helper functions --//
    
    
    //-- variables --//
    double learningRate;
    double discountFactor;
    double explorationRate;
};
