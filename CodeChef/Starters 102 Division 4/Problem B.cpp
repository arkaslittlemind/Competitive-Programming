

#include<bits/stdc++.h>

using namespace std;



int main() {

	// your code goes here

	int t;

	cin >> t;

	while(t--) {

	    int x;

	    cin >> x;

	    

	    double commRate = 0.20;

	    int target = 100;

	    

	    double val = target / commRate;

	    

	    double minimumInsurance = ceil(val / x);

	    

	    cout << minimumInsurance << endl;

	}

	return 0;

}

