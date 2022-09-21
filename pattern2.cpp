// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
    int row=1;
    int n=1;
    while(row<=num){
        int col=1;
        while(col<=row){
            cout<<n;
            n++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
