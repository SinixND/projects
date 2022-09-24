#ifndef __classes_h__
#define __classes_h__

class production_building{
	public: 
		string ID;
		string category; //city, corsumables, material
		int upkeep;
		string resident_tier; //farmer, worker, artisan, engineer
		int workforce;
		int residents_supplied;
};

class house{
	public:
		string resident_tier;
		int residents;
};

#endif
