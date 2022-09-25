// D
// C D
// B C D
// A B C D

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num; cin>>num;
	int row=1;
	while(row<=num){
		int col=1;
		char ch='D'-row+1;
		while(col<=row){
			cout<<ch;
			ch++;
			col++;
		}
		cout<<endl;
		row++;
	}
	
	return 0;
}
