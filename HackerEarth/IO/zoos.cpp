// Problem
// You are required to enter a word that consists of 
//  and 
//  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 
// .

// Determine if the entered word is similar to word zoo.

// For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

// Input format

// First line: A word that starts with several Zs and continues by several Os.
// Note: The maximum length of this word must be 
// .
// Output format

// Print Yes if the input word can be considered as the string zoo otherwise, print No.

#include <iostream>
using namespace std;
int main(){
	char a[20];
	cin>>a;
	int x=0, y=0;
	for(int i=0; i<20; i++){
		if(a[i]=='z') x++;
		else if(a[i]=='o') y++;
	}
	if(2*x == y) cout<<"Yes";
	else cout<<"No";
	return 0;
}
