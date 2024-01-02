#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array1[n];
	int array2[n];
	for(int i=0; i<n; i++) cin>>array1[i];
	for(int i=0; i<n; i++) cin>>array2[i];
	int minVal=array1[0];
	int count=0;
	int i=0;
	while(i<n){
		while(array1[i]>minVal){
			array1[i]-=array2[i];
			count++;
		}
		if(array1[i]<minVal){
			minVal=array1[i];
			i=0;
		}
		else if(array1[i]<0){
			count=-1;
			break;
		}
		else i++;
	}
	cout<<count;
	return 0;
}
