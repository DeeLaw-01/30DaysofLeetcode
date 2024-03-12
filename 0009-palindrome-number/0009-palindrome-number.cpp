class Solution {
public:
bool isPalindrome(int x) {
	/*Edge cases*/

	if (x < 0) {
		return false;
	}
	if (x < 10) {
		return true;
	}
	long reversed = 0;
	int temp = x;
	while (temp) {
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	return reversed == x;
}
};