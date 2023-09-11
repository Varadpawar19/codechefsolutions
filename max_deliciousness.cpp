// // PROBLEM
// A new patisserie has opened up to rave reviews. You, in your quest for deliciousness, are going to visit it.
// The patisserie has N pastries. With your trained eye, you judge that the i-th of them has deliciousness Ai
// ​Of course, you want to eat pastries whose total deliciousness is as high as possible. Unfortunately, you can't just buy everything out.
// There are K customers in the store, including you. They form a queue to order pastries, of which you're the L-th person.
// Each customer, including you, will do the following:
// Among the remaining pastries, buy the one with the highest deliciousness
// Then, move to the back of the queue
// This will repeat till all the pastries are sold out.
// What's the total deliciousness of the pastries you buy?


#include <iostream>
#include <algorithm>
using namespace std;

bool descendingComparator(int a, int b) {
    return a > b; 
}
int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n,k,l;
	    cin >> n>>k>>l;
	    int d[n],a[100],c=0,v=0,q=0;
	    for (int i=0;i<n;i++){
	        cin >> d[i];
	    }
	    sort(d,d+n,descendingComparator);
	   // for (int i=0;i<n;i++){
	   //     for (int j=i;j<n;j++){
	   //         if (d[i]<d[j]){
	   //             d[i]=d[i]+d[j];
	   //             d[j]=d[i]-d[j];
	   //             d[i]=d[i]-d[j];
	   //         }
	   //     }
	   // }
	     for (int i=0;i<n;i++){
	        cout << d[i];
	    }
	    l=l-1;
	    cout << endl;
	    for(int i=0;i<n;i++){
	        if (i==l){
	            a[v]=d[c];
	            l=l+k;
	            v++;
	        }
	        c++;
	        
	    }
	   
	     for (int i=0;i<v;i++){
	      
	        q=q+a[i];
	    }
	    
	    cout << q<<endl;
	}
	return 0;
    
}
