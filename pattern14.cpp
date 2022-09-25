//    1
//   121
//  12321
// 1234321

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int row=1;
	while(row<=num){
		//first triangle
		int space=num-row;
		while(space){
			cout<<" ";
			space--;
		}
		//second triangle
		int col=1;
		while(col<=row){
			cout<<col;
			col++;
		}
		//third triangle
		int nextcol=1;
		int n=row;
		while(nextcol<=row-1){
			cout<<n-1;
			n--;
			nextcol++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
