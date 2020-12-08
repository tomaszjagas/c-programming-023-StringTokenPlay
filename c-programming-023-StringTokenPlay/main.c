#include <stdio.h>
#include <string.h>

int main() {
	char str[80] = "Hello how are you - my name is - Tomek";
	const char s[2] = "-";
	char* token;

	// get the first token
	token = strtok(str, s);

	// walk thru other tokens
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, s);
	}
	return 0;
}