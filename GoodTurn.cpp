// //PROBLEM
// Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.
// They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
// Given that in a particular turn Chef and Chefina got X and Y on their respective dice, find whether the turn was good.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x>>y;
	    if(x+y>6){
	        cout << "YES"<<endl;
	    }else 
	    cout << "NO"<<endl;
	}
	return 0;
}
