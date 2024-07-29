#include<reg51.h>
void main(){
	unsigned char source[5] = { 0x11, 0x12, 0x13, 0x22, 0x33};
	unsigned char destination[5];
	unsigned char i;
	for(i = 0; i < 5; i++){
		destination[i] = source[i];
	}
}