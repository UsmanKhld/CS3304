//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<set>
//
//using namespace std;
//
//string removePunctuation(const string& str)
//{
//	string result;
//	for (char c : str)
//	{
//		if (isalnum(c))
//		{
//			result += tolower(c);
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	string inputFile = "input.txt";
//	string outputFile = "output.txt";
//
//	ifstream inFile(inputFile);
//	if (!inFile)
//	{
//		cerr << "Error: cannot open input file." << endl;
//	}
//
//	set<string> unigrams;
//
//	string word;
//	while (inFile >> word)
//	{
//		string cleanedWord = removePunctuation(word);
//
//		unigrams.insert(cleanedWord);
//	}
//
//	ofstream outFile(outputFile);
//	if (!outFile)
//	{
//		cerr << "Error: cannot open output file." << endl;
//	}
//
//	for (const string& unigram : unigrams)
//	{
//		ifstream inFile(inputFile);
//		int count = 0;
//		string fileWord;
//		while (inFile >> fileWord)
//		{
//			if (removePunctuation(fileWord) == unigram)
//			{
//				count++;
//			}
//		}
//
//		outFile << unigram << "," << count << endl;
//	}
//
//	return 0;
//}