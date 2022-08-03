#include<iostream>
#include<conio.h>
using namespace std;

int steps = 0 ;
int tower(int n,char fromStick,char toStick,char usingStick,int steps){
	
	if (n == 1){
		cout<<"Move disk "<<n<<" from "<<fromStick<<" to "<<toStick<<endl;
		steps++;
		return 0;
	}
	tower(n-1,fromStick,usingStick,toStick,steps);
		cout<<"Move disk "<<n<<" from "<<fromStick<<" to "<<toStick<<endl;
	tower(n-1,usingStick,toStick,fromStick,steps++);
}
int main(){

	int j = 4;
	tower(j,'A','C','B',steps);
	cout<<"Total steps = "<<steps<<endl;
	getch();
}
	