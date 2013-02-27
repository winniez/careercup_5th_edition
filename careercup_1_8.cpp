// ID: starcroce
// Time: 2/26/2013 MST
// Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring

bool isRotation(string s1, string s2){
  string tmp = s1;
	int l1, l2;
	l1 = strlen(s1);
	l2 = strlen(s2);
	if(l1 != l2)
		return false;
	tmp = s1+s2;
	if(isSubstring(tmp, s1))
		return true;
	else
		return false;
}
