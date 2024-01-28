#include <iostream>;
#include <vector>;

using namespace std;

class EraseVec
{
public:
	void Erase_vector_items(vector<int>& nums, int remove)
	{
		auto it = find(nums.begin(), nums.end(), remove);

		if (it != nums.end())
		{
			nums.erase(it);
		}

	}

	void printVector(vector<int> nums)
	{
		for (int num : nums)
		{
			cout << num << " ";
		}
	}
};

int main()
{
	EraseVec erasevec;
	vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int remove = 6;
	erasevec.Erase_vector_items(nums, remove);
	erasevec.printVector(nums);
	return 0;
}