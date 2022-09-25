// A B C
// D E F
// G H I

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num; cin>>num;
	int row=1;
	char ch='A';
	while(row<=num){
		int col=1;
		while(col<=num){
			cout<<ch;
			ch++;
			col++;
		}
		cout<<endl;
		row++;
	}
	
	return 0;
}
