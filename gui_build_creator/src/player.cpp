#include "player.h"
#include <iostream>

cPlayer::cPlayer(){
    mStability = 1;
};

void cPlayer::setmStability(double &rArg){
    mStability = rArg;
    std::cout << "mStability set to: " << rArg << std::endl;
};

double cPlayer::getmStability(){
    std::cout << "return mStability: " << mStability << std::endl;
    return mStability;
};