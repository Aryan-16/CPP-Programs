// A B C
// B C D
// C D E

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num; cin>>num;
	int row=1;
	while(row<=num){
		int col=1;
		char ch='A'+row-1;
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
