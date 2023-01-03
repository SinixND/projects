#include <player.h>

cPlayer::cPlayer(){
    mStability = 1;
};

void cPlayer::setmStability(double &rArg){
    mStability = rArg;
};

double cPlayer::getmStability(){
    return mStability;
};