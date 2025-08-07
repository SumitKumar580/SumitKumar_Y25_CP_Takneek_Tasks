#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin>> t;
	while(t--){
	    int x, y, z, a, b, c;
	    cin>> x >> y >> z >> a >> b >> c;
	    
	    int xl =min(z, c);
	    int res_xl= z - xl;
	    y += res_xl;
	    int l = min(y, b);
	    int res_l = y - l;
	    x += res_l;
	    int s = min(x, a);
	    cout<< xl + l + s<< endl;
	    
	    
	    
	}

}
