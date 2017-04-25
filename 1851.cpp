#include <bits/stdc++.h>

using namespace std; 
#ifdef LOCALTEST
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#else
#define DEBUG(x)
#endif


typedef tuple<int, int, int> P;
struct Order
{
    bool operator()(P const& left, P const& right) const
    {
	return ((float)get<0>(left)/(float)get<1>(left)) > ((float)get<0>(right)/(float)get<1>(right));
    }
};

int main()
{
	int t, f;
	priority_queue< P, vector<P>, Order > d;
	bool finished = false;
	int daysLeft = 0;
	unsigned long long day = 0, fine = 0;

	while (++day)
	{

		if (!finished && cin >> t >> f)
			d.emplace(t, f, day);
		else
			finished = true;

		if(daysLeft--)
		{
			continue;
		}
		if(d.empty() && finished)
			break;

		P dragon = d.top();	
		d.pop();

		daysLeft = get<0>(dragon) - 1;
		fine += (day - get<2>(dragon)) * get<1>(dragon);
		DEBUG(fine);
		DEBUG(day);
		DEBUG(daysLeft);
	}
	cout << fine << endl;

}

