#include "maleta.h"

maleta::maleta(){
	setColor("Negro");
	setSize(18);
}

maleta::~maleta(){
}

void maleta::setColor(string c){
	color=c;
}
	
void maleta::setSize(int s){
	size=s;
}

string maleta::getColor(){
	return color;
}
int maleta::getSize(){
	return size;
}

