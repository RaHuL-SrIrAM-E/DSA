// You are provided an array A of size N that contains non-negative integers. 
// Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10.


#include <iostream>
using namespace std;
int main() {
    int N = 0;
    cin>>N; 
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
    if(data[N-1]%10==0) cout<<"Yes";
    else cout<<"No";
    return 0;
}
