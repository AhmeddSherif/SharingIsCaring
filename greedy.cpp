#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 

	int t; cin >> t;
	while (t--)
	{
		int ans = 0;
		vector<int> v;
		int c, n; cin >> c >> n;
		while (n--)
		{
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end(), greater<int>());
		for (int i = 0; i < v.size(); i++) {
			while (c >= v[i]) {
				c -= v[i];
				ans++;
			}
		}
		cout << ans << endl;
	}
}
