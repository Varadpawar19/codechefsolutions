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
