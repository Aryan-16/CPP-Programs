// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int row=1;
	while(row<=num){
		//first triangle
		int col=1;
		while(col<=num-row+1){
			cout<<col;
			col++;
		}
		//second triangle
		int secondcol=row-1;
		while(secondcol){
			cout<<"*";
			secondcol--;
		}
		//third triangle
		int thirdcol=row-1;
		while(thirdcol){
			cout<<"*";
			thirdcol--;
		}
		//fourth triangle
		int lastcol=1;
		int n=num;
		while(lastcol<=num-row+1){
			cout<<n-row+1;
			n--;
			lastcol++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
