#include<iostream>

using namespace std;

bool isPalindrome(const string& str, int start, int end)
{
	if (start >= end)
	{
		return true;
	}

	if (str[start] != str[end])
	{
		return false;
	}

	return isPalindrome(str, start + 1, end - 1);
}

int main()
{
	cout << isPalindrome("mom", 0, 2);
}