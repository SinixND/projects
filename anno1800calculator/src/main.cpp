#include <string>

using namespace std;

class production_building{
	public: 
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

int main() {
	production_building sawmill;
	
	return 0;
}
