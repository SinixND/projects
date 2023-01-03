#include "player.h"

//#include <memory>
//std::unique_ptr<cPlayer> pPlayer(new cPlayer());

cPlayer::cPlayer(){
    mStability = 1;
};

void cPlayer::setmStability(double &rArg){
    mStability = rArg;
};

double cPlayer::getmStability(){
    return mStability;
};