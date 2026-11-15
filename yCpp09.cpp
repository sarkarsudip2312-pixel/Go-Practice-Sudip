#include <iostream>
using namespace std;
int main (){
	
	int number[2][2]={
	{2,6},
	{5,9}
};
	
	for( int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			cout<<number[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
