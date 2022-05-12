//PALINDROME
//stringlength with 1 or 0 or binary
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] = "Abba"; // declare with " " if complete word then hindi ka maggamit ng {}
    int i, len;
    
    printf("\nSimple tester: \"%s\".\n",str); // means iprint ang string with ""; without "" in \"%s\", walng "" na maprint

    len = strlen(str);
    for (i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            printf("\nString FAILS test: \"%s\".\n",str);
            return 0;                
        }
    }
    printf("\nString PASSES test: \"%s\".\n",str);
    
    return 0;
}




/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main(void) {
	char string1[] = "not a palindrome!";
	char string2[] = "abccba";
	char string3[] = "abcdcba";
	
	if (is_palindrome(string2))
		printf()
	return 0;
	
}

bool is_palindrome(char string[]) {
		int middle = strlen(string) / 2;
		int length = strlen(string);
		
		for (int i=0; i<middle; i++) 
			if (string[i] != string[i-i-1])
				return false;
		
		return true;
	}
*/