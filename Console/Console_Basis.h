/*************************
         Console 
*************************/

class Console{
	public:
		Console(){
			cout<<"Yukarinsole ~ 1.000 Beta\n";
			cout<<"\tSalve!\n";
		}
		void Help();
		void Echo(string Word);
		void CD();
		void ColorSet();
		void Exit();
		void Command();
};

void Console::CD(){
	char Word[65535];
	char buffer;
	unsigned short int i = 0;
	while(i<65535){
		DEFINITION:
		while(!kbhit()){
			
		}
		buffer = getch();
		Word[i] = buffer;
		if(buffer==BACKSPACE){
			if(i==0){
				break;
			}else if(i!=0){
				cout<<buffer;
				cout<<" ";
				cout<<buffer;
				Word[i] = NULL;
				i--;
			}
			goto DEFINITION;
		}else{
			cout<<buffer;
		}
		if(buffer == ENTER){
			cout<<"\n";
			cout<<Word<<"\n";
			getOut = true;
			break;
		}
		i++;
	}
	
}

void Console::ColorSet(){
	unsigned short Color;
	color(10);
	cout<<"Starting Rainbow My Life\n\tColor Sheet Options\n";
	system(".\\Raiz\\etc\\bin\\rml.exe");
	cout<<"\nPlease,Choose your Color of Writing\n";
	cout<<"Default: 12\t";
	cout<<"Actual: "<<Write_Color<<"\n";
	color(10);
	cout<<">>";
	cin>>Color;
	if(Color>255) Write_Color = 13; else if(Color < 255) Write_Color =Color; else Write_Color = Write_Color;
	cout<<"\n";
}

void Console::Echo(string Word){
	fstream F1;
	string f1_file = root;
	string toBunk;
	f1_file.append("etc\\temp\\Word.txt");
	F1.open(f1_file.c_str(),ios::in | ios::out | ios::trunc);
	F1<<Word;  //sends Word to the file after deleted last content
	while(getline(F1,toBunk)){
		cout<<toBunk<<"\n";
	}
}

void Console::Exit(){
	cout<<"Bye bye~ <3";
	getch();
	exit(0);
}

void Console::Command(){
	char Command[256];
	char buffer;
	string Comando;
	unsigned short int i=0;
	while(i<256){
		if(getOut) getOut = false;
		DEFINITION:
		while(!kbhit()){
			
		}
		fflush(stdin);
		buffer = getch();
		Command[i] = buffer;
		if(buffer==BACKSPACE){
			if(i!=0){
				cout<<buffer;
				cout<<" ";
				cout<<buffer;
				Command[i] = NULL;
				i--;
			}
			goto DEFINITION;
		}else{
			Command[i] = buffer;
			cout<<buffer;
		}
		if(buffer == ENTER) cout<<endl;
		if(Command[0]=='e' && Command[1]=='c'&&Command[2]=='h'&&Command[3]=='o'&&Command[4]==' '"){
			char Word[65535];
			cin.getline(Word,65535,'\n');
			this->Echo(Word);
		}
		if(Command[0]=='e' && Command[1]=='x'&&Command[2]=='i'&&Command[3]=='t'&&Command[4]==(char)ENTER){
			this->Exit();
		}
		if(Command[0]=='c' && Command[1]=='o'&&Command[2]=='l'&&Command[3]=='o'&&Command[4]=='r' && Command[5]=='s'&&Command[6]=='e'&&Command[7]=='t'&&Command[8]==(char)ENTER){
			this->ColorSet();
			break;
		}
		if(Command[0]=='c' && Command[1]=='l'&&Command[2]=='e'&&Command[3]=='a'&&Command[4]=='r'&&Command[5]==(char)ENTER){
			system("cls");
			break;
		}
		if(Command[0]=='c' && Command[1]=='l'&&Command[2]=='s'&&Command[3]==(char)ENTER){
			system("cls");
			break;
		}
		if((Command[0]=='d' && Command[1]=='i'&&Command[2]=='r'&&Command[3]==(char)ENTER)||Command[0]=='l' && Command[1]=='s' && Command[2]==(char)ENTER){
			string cd;
			cd.append("dir ");
			cd.append(dir.c_str());
			system(cd.c_str());
			break;
		}
		if(Command[0]=='h' && Command[1]=='e'&&Command[2]=='l'&&Command[3]=='p'&&Command[4]==(char)ENTER){
			string help = root;
			help.append("etc\\bin\\help.exe ");
			help.append(root);
			system(help.c_str());
			break;
		}if(Command[0]=='c' && Command[1]=='d'&&Command[2]==' '){
			if(getOut){
				break;
			}
			cout<<(char)BACKSPACE;
			cout<<" ";
			cout<<(char)BACKSPACE;
			Command[i] = NULL;
			i--;
		}
		if(buffer == ENTER){
			break;
		}
		if(!getOut){
			i++;
		}else{
			break;
		}
		
	}
}
