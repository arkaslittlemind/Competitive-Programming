#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin >> x;
	
	if(x < 3) {
	    cout << "GOLD" << endl;
	}
	if(x >= 3 && x < 6) {
	    cout << "SILVER" << endl;
	}
	if(x >= 6) {
	    cout << "BRONZE" << endl;
	}
	return 0;
}
