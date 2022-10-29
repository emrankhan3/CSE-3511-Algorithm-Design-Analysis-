#include<bits/stdc++.h>
using namespace std;
int main(){



function < int(vector<int>&, int, int, int)>lower_ind = [&]( vector<int>&ar, int t, int l, int r) {
		while (l < r) {
			int mid = (l + r) / 2;
			if (ar[mid] < t)l = mid + 1;
			else r = mid;
		}
		return l;
	};
 return 0; 
}
