// 1111
//  222
//   33
//    4

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num; cin>>num;
	int row=1;
	while(row<=num){
		int space=row-1;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		while(col<=num-row+1){
			cout<<row;
			col++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
