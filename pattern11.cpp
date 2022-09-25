//    1
//   22
//  333
// 4444

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	int row=1;
	while(row<=num){
		int space=num-row;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		while(col<=row){
			cout<<row;
			col++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
