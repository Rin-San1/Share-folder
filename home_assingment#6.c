#include <stdio.h>

void main (void){

	char str;
	unsigned int count = 0; /* number of entered symbols */
	unsigned int digits = 0; /* number of entered digits */
	unsigned int upper_registor = 0; /* number of upper case character */
	unsigned int lower_registor = 0; /* number of lower case character */
	unsigned int spaces = 0; /* number of spaces */
		
	printf ("Enter symbols\n");
	
	while((str = getchar()) != '\n'){
	
		if (str >= '0' && str <= '9'){
		++count;
		++digits;
		}
		if (str >= 'A' && str <= 'Z'){
		++count;
		++upper_registor;
		}
		if (str >= 'a' && str <= 'z'){
		++count;
		++lower_registor;
		}
		if (str == ' '){
		++count;
		++spaces;
		}
		
		//printf ("0x%X\n", (int)str);
		
	}
	
	printf ("\nTotal:%3u Digits:%3u Upper_C:%3u Lower_C:%3u Spaces:%3u\n",
			count, digits, upper_registor, lower_registor, spaces);
			
	printf ("\nTotal:%2.0f Digits:%2.1f Upper_C:%2.1f Lower_C:%2.1f Spaces:%2.1f\n",
		((float) count / count)*100,
		((float) digits / count)*100,
		((float) upper_registor / count)*100,
		((float) lower_registor / count)*100,
		((float) spaces / count)*100);
	
}

