/*
 *Transfrom origin string into compressed string, like "aaabb" into "a3b2"
 *ID: starcroce
 *Time: 02/24/2013
 */

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string compressString(string oriStr){
  string newStr = "";
	char buff[1000];
	char index = oriStr[0];
	int count = 1;
	int newLength = 0;
	for(int i=1; i<oriStr.size(); i++){
		if(oriStr[i] == index)
			count++;
		else{
			newStr += index;
			sprintf(buff, "%d", count);
			newStr += buff;
			newLength += 2;
			count = 1;
			index = oriStr[i];
		}
	}
	newStr += index;
	sprintf(buff, "%d", count);
	newStr += buff;
	newLength += 2;
	if(newLength >= oriStr.size())
		return oriStr;
	else
		return newStr;
	return 0;
}

int main(){
	string oriStr;
	cin>>oriStr;
	cout<<"Result: "<<compressString(oriStr)<<"\n";
	return 0;
}
