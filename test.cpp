#include <iostream>
#include <string>

using namespace std;
int main(void){

	string sentence = "...- ..-";
	int character;
	int i;
	
	for(i = 0; i < sentence.length(); i++){
		character = sentence[i];
		
		if(character == '.'){
			cout<<"DOT"<<endl;
		}else if(character == '-'){
			cout<<"DASH"<<endl;
		}else if(character == ' '){
			cout<<"SPACE"<<endl;
		}
	}
	
}