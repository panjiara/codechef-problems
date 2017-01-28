#include <bits/stdc++.h>
using namespace std;
//happy coding:)

int main() {
	int A,N,K;
	cin>>A>>N>>K;
	N=N+1;
	for(int i=0;i<K;i++)
	{
	    cout<<A%N<<" ";
	    A=A/N;
	}
	cout<<endl;
	return 0;
}
