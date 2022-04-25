#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;


int main()
{
	#ifndef Online
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(0);

	int array[14] = {4,-3,3,18,8,3,-9,-3,1,-3,5,-7,10,-8};

	int best = 0;
	int sum = 0;

	for(int a = 0; a < 14; a ++){
		sum = max(sum + array[a], array[a]);
		best = max(sum, best);
	}
	cout << best << "\n";

}
