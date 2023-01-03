#ifndef _SPECIALISATIONS_DATA_H_ 
#define _SPECIALISATIONS_DATA_H_

#include <string>
#include <vector>

class cSpecialisation{
public:
    std::string setmName(std::string &rArg){
        std::string mName = rArg;
    }

    std::string setmSpecBonusStability(std::string &rArg){
        std::string setmSpecBonusStability = rArg;
    }

private:
    std::string mSpecName;
    std::vector<double> mAttributeBonus;
};

#endif //_SPECIALISATIONS_DATA_H_