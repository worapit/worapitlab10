#include<iostream>
using namespace std;

void printO(int N,int M){
	if(N > 0 and M > 0){
		for(int a = 1;a <= N;a++){
			for(int i = 1; i <= M;i++){
			cout << 'O';
			}
			cout << "\n";
		}
	}else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
