#include <iostream>
using namespace std;


class Vehicle{
		string id;
		int speed, attack, defense, range;
	public:
		Vehicle();
		void setId(string in_id);
		void setSpeed(int in_speed);
		void setAttack(int in_attack);
		void setDefense(int in_defense);
		void setRange(int in_range);
		string getId();
		int getSpeed();
		int getAttack();
		int getRange();
		int getDefense();
		void print();	
};

