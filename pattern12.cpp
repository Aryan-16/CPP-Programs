// 1234
//  234
//   34
//    4

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int row=1;
	while(row<=num){
		int space=row-1;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		int n=row;
		while(col<=num-row+1){
			cout<<n;
			n++;
			col++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
