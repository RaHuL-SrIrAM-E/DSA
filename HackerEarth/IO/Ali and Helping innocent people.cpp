// Problem
// Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. 
// Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. 
// He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel.
// Determine if the tag of the truck is valid or not.

// We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.

// Input Format

// The first line contains a string of length 9. The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.

// Output Format

// Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)
// Example: 
// 12X345-67 - invalid
// Explanation
// The tag is invalid because the sum of first and second digit of it is odd (also the sum of 4'th and 5'th, 5'th and 6'th and 8'th and 9'th are odd).

#include <iostream>
using namespace std;
int main() {
	char a[9];
	cin >> a;
	if(a[2]=='A'||a[2]=='E'||a[2]=='I'||a[2]=='O'||a[2]=='U'||a[2]=='Y'){
		cout<<"invalid";
		return 0;
	}
	int flag=0;
	for(int i=0;i<9;i++){
		if(i==6||i==2) continue;
		if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9'){
			if(a[i+1]=='1'||a[i+1]=='3'||a[i+1]=='5'||a[i+1]=='7'||a[i+1]=='9') continue;
			else if(i+1==6 || i+1==2) continue;
			else flag=0;
			break;
		}
		else if(a[i+1]=='2'||a[i+1]=='4'||a[i+1]=='6'||a[i+1]=='8') flag=1;
		else flag=0;
		break;
	}
	if(flag) cout<<"valid";
	else cout<<"invalid";
	return 0;
}
