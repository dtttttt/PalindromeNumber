class Solution {
public:
    bool isPalindrome(int x) {
    std::string DataString;
	DataString = std::to_string(x);
	std::string::iterator i = DataString.begin();
	std::string::iterator j = DataString.end() - 1;
	for (; j>i;i++,j--)
	{
		if (*i!=*j)
		{
			return false;
		}
	}
	return true;    
    }
};