#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect &R,Rect &T){
	if(R.x+R.w < T.x || R.y+R.h < T.y){
		return 0;
	}
	else{
		if(R.x+R.w > T.x+T.w && R.y+R.w > T.y+T.h){
			return T.w*T.h;
		}
		else return ((R.x+R.w)-T.x)*((R.y+R.h)-T.y);
	}
}