#include "Vehicle.h"




int main(){
	
	Vehicle v;
	
	int info;
	string prop;
		
	v.print();
		
	cout << endl << endl;
	cout << "Dwse mia idiotita (Recon,Light,Medium,Heavy) :";
	cin >> prop;
		
	v.setId(prop);
	cout << v.getId();
		
	cout << endl << endl;
	cout << "Dwse taxitita (30...100) :";
	cin >> info;
		
	v.setSpeed(info);
	cout << v.getSpeed();
	
	cout << endl << endl;
	cout << "Dwse epithesi (1...10) :";
	cin >> info;
		
	v.setAttack(info);
	cout << v.getAttack();
		
	cout << endl << endl;
	cout << "Dwse amyna (1...20) :";
    cin >> info;
		
	v.setDefense(info);
	cout << v.getDefense();
		
	cout << endl << endl;
	cout << "Dwse emveleia (1...6) :";
	cin >> info;
		
	v.setRange(info);
	cout << v.getRange();
	
	v.print();
	
	//system("PAUSE");
	return 0;
}
