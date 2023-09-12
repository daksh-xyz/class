// C program to check if a string is
// a palindrome or not.
#include <stdio.h>
#include <string.h>

// A function to check if a
// string str is palindrome
void isPalindrome(char str[])
{
	// Start from leftmost and
	// rightmost corners of str
	int l = strlen(str);
	int h = strlen(str) - 1;
	char temp[1];

	// Keep comparing characters
	// while they are same
	for(int i=0; i<= l/2; i++){
		temp[0] = str[i];
		str[i] = str[h];
		str[h] = temp[0];
		h--;
	}
	printf("%s", str);
}

// Driver program to test above function
int main()
{
	char inpStr[100];
    scanf("%s", &inpStr);
    isPalindrome(inpStr);
	return 0;
}
