class Solution {
public:
    bool isPalindrome(int x) {
   std::string DataString;
	DataString = std::to_string(x);
	std::string DataStringResult;
	DataStringResult = DataString;
	reverse(DataString.begin(), DataString.end());
	return(DataString == DataStringResult ? true : false);  
    }
};