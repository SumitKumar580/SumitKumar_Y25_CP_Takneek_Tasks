#include <bits/stdc++.h>
using namespace std;

int main() {
	// taking input
	
	int x, y;
	cin>> x >> y;
	
	/*we need to know how many x kms are there in y kms, so for that we use floor division,
	but if y is a multiple of x then we dont need to count last one, so y-1*/
	
	int rest = (y-1)/x;
	
	cout<< rest;

}

