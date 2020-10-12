#include <gamelib.h>
#include <funutility.h>
#include "Functions.h"
#include "Console_Basis.h"

int main(){
	color(13);
	Console Console1;
	while(true){
		color(14);
		cout<<dir.c_str();
		color(10);
		cout<<">>";
		color(Write_Color);
		Console1.Command();
	}
}
