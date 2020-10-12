#include <fstream>
#include <iostream>

using namespace std;

int main(int argc,char *argv[]){
	string root = argv[1];
	ifstream F1;
		string help = "";
		string buffer;
		help.append(root.c_str());
		help.append("etc\\info\\helpme.txt");
		F1.open(help.c_str());
		if(F1.is_open()){
			while(getline(F1,buffer)){
				cout<<buffer;
				printf("\n");
				}
			F1.close();
		}else{
			printf("Error 404:An Error has Okuued\nUnable to Open helpme.txt\nMake sure you did not moved the file or the executable");
	}
}
