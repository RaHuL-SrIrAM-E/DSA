// You are conducting a contest at your college. This contest consists of two problems and 
//  participants. You know the problem that a candidate will solve during the contest.

// You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

// Use green-colored balloons for the first problem and purple-colored balloons for the second problem
// Use purple-colored balloons for the first problem and green-colored balloons for the second problem
// You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

// Input format

// First line: 
//  that denotes the number of test cases (
// )
// For each test case: 
// First line: Cost of green and purple-colored balloons 
// Second line: 
//  that denotes the number of participants (
// )
// Next 
//  lines: Contain the status of users. For example, if the value of the 
//  integer in the 
//  row is 
// , then it depicts that the 
//  participant has not solved the 
//  problem. Similarly, if the value of the 
//  integer in the 
//  row is 
// , then it depicts that the 
//  participant has solved the 
//  problem.

#include <iostream>
using namespace std;
int main(){
	int T;
	cin >> T;
	while(T>0){
		int cost[2];
		for(int i=0;i<2;i++) cin>>cost[i];
		int leastPrice=0, mostPrice=0;
		if(cost[0]>cost[1]){
      leastPrice=cost[1]; 
      mostPrice=cost[0];
    }
		else {
      leastPrice=cost[0]; 
      mostPrice=cost[1];
    }
		int n;
		cin>>n;
		int green=0, purple=0;
		for(int k=0; k<n; k++){
			int a[2];
			for(int i=0;i<2;i++) cin>>a[i];
			if(a[0]==1) green++;
			if(a[1]==1) purple++;
		}
		int leastCount=0, mostCount=0;
		if(green>purple){
      leastCount=purple; 
      mostCount=green;
    }
		else{
      leastCount=green; 
      mostCount=purple;
    }
		cout<<((leastPrice*mostCount) + (mostPrice*leastCount))<<endl;
		T--;
	}
	return 0;
}
