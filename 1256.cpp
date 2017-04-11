#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{
	int N;

	cin >> N;


	while (N--)
	{
		int nelem, size;
		cin >> size;
		cin >> nelem;

		list<int> l[size];
		while (nelem--)
		{
			int a;

			cin >> a;

			l[a%size].push_back(a);

		}

		for (int i = 0; i < size; i++)
		{
			cout << i << " -> ";
			while (!l[i].empty())
			{
				cout <<	l[i].front() << " -> ";
				l[i].pop_front();
			}
			cout << "\\" << endl;
		}

		if(N)
			cout << endl;
	}
}
