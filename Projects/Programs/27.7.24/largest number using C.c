#include<reg51.h>
void main()
{
	unsigned long array[] = { 0x33344333, 0x33344344, 0x33344444, 0x34444333, 0x33434333};
	unsigned long i, largest =0;
	for(i=0; i<5; i++)
	{
		if(largest<array[i])
		  {
				largest=array[i];
			}
		}
	}	