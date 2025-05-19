#include <iostream>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0); cout.tie(NULL);
	int  n, k, cnt;
	int  i = 2;
	queue<int>q;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1) {
			cout << q.front() << ">";
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
		}
	}

}