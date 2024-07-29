#include<reg51.h>
void main(){
	unsigned long array[] = { 0x53545535, 0x34255555, 0x124582832,  0xf3245344, 0x65421232};
	unsigned long temp, i, j;
	for( i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}