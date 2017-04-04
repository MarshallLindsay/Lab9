
#include <iostream>
#include <string>
using namespace std;

int main(){
	string new1 = "This is a string";
	char test;
	for(int i = 0; i < new1.length(); i++){
		test = new1[i];
		cout<<test<<endl;
	}

	switch(test){
		case 'g':
			cout<<"win"<<endl;
			break;
		default:
			break;
	}
}