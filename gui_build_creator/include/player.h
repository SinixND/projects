
#ifndef _PLAYER_H_ 
#define _PLAYER_H_ 

class player{
private:
    // red attributes
    double weapon_damage;
    double weapon_handling;
    double accuracy;
    double stability;
    double reload_speed;
    double headshot_damage;
    double critical_hit_chance;
    double critical_hit_damage;


    //blue attributes
    double armor;
    double hazard_protection;
    double health;
    double armor_regeneration;

    //yellow attributes
    int skill_tier;
    double skill_efficiency;
    double skill_damage;
    double skill_haste;
    double skill_duration;
    double skill_repair;
    double status_effects;
}

#endif //_PLAYER_H_