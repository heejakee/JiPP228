#include <iostream>
#include <cstring>
using namespace std;

bool pal_check(char* string){
	int len = strlen(string);
	for(int i=0; i<len/2; ++i){
		if(string[i] != string[len-i-1]){
			return false;
		}
	}
	return true;
}

int main(int argc, char* argv[]){
	if(pal_check(argv[1])){
		cout<<"That's a palindrom"<<endl;
	}
	else{
		cout<<"That's not a palindrom"<<endl;
	}
	return 0;
}
	