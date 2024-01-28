#include<iostream>
#include<vector>

using namespace std;

class SearchVector
{
public:
	void searchVector(vector<vector<int>> vec, int item)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < vec[i].size(); j++)
			{
				if (vec[i][j] == item)
				{
					cout << i << " " << j << endl;
				}
			}
		}
	}

	void displayVector(vector<vector<int>> vec)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < vec[i].size(); j++)
			{
				cout << vec[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	int item;
	vector<vector<int>> vec{ {1,2,3,4}, {5,6,6,8,9} };
	SearchVector searchvec;
	
	searchvec.displayVector(vec);
	cout << "The item that you searched for: ";
	cin >> item;
	cout << "The item that you searched for can be found at the following location(s) -> " << endl;
	searchvec.searchVector(vec, item);
	return 0;
}