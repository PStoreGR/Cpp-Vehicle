#include "Vehicle.h"


Vehicle::Vehicle(){
	
	getId();
	getSpeed();
	getAttack();
	getRange();
	getDefense();
}




void Vehicle::setId(string in_id){
	
		if(in_id == "Recon"){
			id = in_id;
		}
		else if(in_id == "Light"){
			id = in_id;
		}
		else if (in_id == "Medium"){
			id = in_id;
		}
		else if(in_id == "Heavy"){
			id = in_id;
		}
		else{
		    cout << "Lathos idiotita!!" << endl;
		    id = " ";	
		}
}


void Vehicle::setSpeed(int in_speed){
	
	if(in_speed >= 30 && in_speed <= 100){
		speed = in_speed;
	}
	else{
	    cout << "Lathos taxitita!!" << endl;
	    speed = 30;
	}
}


void Vehicle::setAttack(int in_attack){
	
	
	if(in_attack >= 1 && in_attack <= 10){
		attack = in_attack;
	}
	else{
	    cout << "Lathos epithesi!!" << endl;
	    attack = 1;
	}
}



void Vehicle::setDefense(int in_defense){
	
	if(in_defense >= 1 && in_defense <= 20){
		defense = in_defense;
	}
	else{
	    cout << "Lathos amyna!!" << endl;
	    defense = 1;
	}
}


void Vehicle::setRange(int in_range){	
	
	if(in_range >= 1 && in_range <= 6){
		range = in_range;
	}
	else{
	    cout << "Lathos emveleia!!" << endl;
	    range = 1;
	}
}


string Vehicle::getId(){
	
	return id;
}


int Vehicle::getSpeed(){
	
	return speed;
}

int Vehicle::getAttack(){
	
	return attack;
}

int Vehicle::getRange(){
	
	return range;
}

int Vehicle::getDefense(){
	
	return defense;
}

void Vehicle::print(){
    
    cout << endl;
	cout << "Id :  " << getId() << endl;
	cout << "Speed : " << getSpeed() << endl;
	cout << "Attack : " << getAttack() << endl;
	cout << "Defense : " << getDefense() << endl;
	cout << "Range : " << getRange() << endl;
	cout << endl;
}
