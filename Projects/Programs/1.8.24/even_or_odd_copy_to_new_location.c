#include<reg51.h>
void main(){
	unsigned long array[] = { 0x21312321, 0x23423432, 0x32541232, 0x65748312, 0x12345678};
	unsigned long even[5], odd[5];
	unsigned long i, evenCount = 0, oddCount = 0;
	for(i - 0; i < 5; i++)
	{
		if(array[i]% 2 == 0)
		{
			even[evenCount] = array[i];
			evenCount = evenCount + 1;
		}
		else
		{
			odd[oddCount] = array[i];
			oddCount = oddCount + 1;
		}
	}
	}