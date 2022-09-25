// A
// B C
// C D E
// D E F G

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num; cin>>num;
	int row=1;
	while(row<=num){
		int col=1;
		char ch='A'+row-1;
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
