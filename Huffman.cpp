//#include<iostream>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//struct Node
//{
//	char character;
//	int frequency;
//	Node* left;
//	Node* right;
//};
//
//struct CompareNodes
//{
//	bool operator()(Node* left, Node* right)
//	{
//		return left->frequency > right->frequency;
//	}
//};
//
//Node* buildHuffmanTree(unordered_map<char, int> frequency)
//{
//	priority_queue<Node*, vector<Node*>, CompareNodes> pq;
//
//	for (const auto& pair : frequency)
//	{
//		Node* node = new Node;
//		node->character = pair.first;
//		node->frequency = pair.second;
//		node->left = nullptr;
//		node->right = nullptr;
//		pq.push(node);
//	}
//
//	while (pq.size() > 1)
//	{
//		Node* left = pq.top();
//		pq.pop();
//		Node* right = pq.top();
//		pq.pop();
//
//		Node* parent = new Node;
//		parent->frequency = left->frequency + right->frequency;
//		parent->right = right;
//		parent->left = left;
//		pq.push(parent);
//	}
//	return pq.top();
//}
//
//void generateCodes(Node* root, string code, unordered_map<char, string>& codes)
//{
//	if (root == nullptr)
//	{
//		return;
//	}
//
//	if (!root->right && !root->left)
//	{
//		codes[root->character] = code;
//		return;
//	}
//
//	generateCodes(root->left, code + "0", codes);
//
//	generateCodes(root->right, code + "1", codes);
//}
//
//string encode(string str, unordered_map<char, string>& codes)
//{
//	string encodedString;
//	for (char c : str)
//	{
//		encodedString += codes.at(c);
//	}
//	return encodedString;
//}
//
//int main()
//{
//	unordered_map<char, int> frequencies = {
//		{'A', 2}, {'B', 4}, {'C', 5}, {'D', 7}, {'E', 8}, {'F', 9}, {'G', 50}, {'H', 55},
//		{'J', 1}, {'K', 2}, {'L', 4}, {'M', 5}, {'N', 6}, {'O', 8}
//	};
//
//	Node* root = buildHuffmanTree(frequencies);
//
//	unordered_map<char, string> codes;
//	generateCodes(root, "", codes);
//
//	cout << "Displaying codes: " << endl;
//	for (const auto& pair : codes)
//	{
//		cout << pair.first << " : " << pair.second << endl;
//	}
//
//	string str = "HELLO";
//	cout << "Encoded word for " << str << " is " << encode(str, codes);
//
//	return 0;
//}