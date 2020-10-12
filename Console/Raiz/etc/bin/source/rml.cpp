#include <gamelib.h>
#include <funutility.h>

int main(){
	int i=0;
	cout<<"\n";
	while(i<256){
		if(i%16 == 0){
			cout<<"\n";
		}
		color(i);
		cout<<i++;
		if(i<10) cout<<"   ";
		if(i==10) cout<<"   ";
		if(i>10 && i<96) cout<<"  ";
		if(i>95 && i<100) cout<<"  ";
		if(i == 100) cout<<"  ";
		if(i>100) cout<<" ";
	}
	color(10);
	return 0;
}
