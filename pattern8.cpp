// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num; cin>>num;
	int row=1;
	while(row<=num){
		int col=1;
		char ch='*';
		while(col<=num-row+1){
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
	}
	
	return 0;
}
