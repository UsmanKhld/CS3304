#include<iostream>
#include<vector>
#include<string>

using namespace std;

class SearchVec
{
public:
    struct location
    {
        int row;
        int col;
    };
    
    vector<location> searchVector(vector<vector<int>> vec, int item)
    {
        location L;
        vector<location> locations;
        for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
            {
                if(vec[i][j] == item)
                {
                    L.row = i;
                    L.col = j;
                    locations.push_back(L);
                }
            }
        }
        return locations;
    }
    
    void displayVector(vector<vector<int>> vec)
    {
        for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
            {
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    SearchVec searchvec;
    vector<vector<int>> vec = {{1,2,2,2,3}, {4,5,6,6,6}};
    searchvec.displayVector(vec);
    int item;
    cout << "Input item: ";
    cin >> item;
    vector<SearchVec::location> locations = searchvec.searchVector(vec,item);
    for(auto& loc : locations)
    {
        cout << loc.row << " " << loc.col << endl;
    }
    
    
    return 0;
}
