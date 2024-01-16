
/**
* *generate_password -This program generate random valid password
* @*password: parameter
* Return: Always 0 (Success)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_password()
{
int i;
static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char)); /* +1 for the null terminator */

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = charset[rand() % (sizeof(charset) - 1)];
}

password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */

return (password);
}

int main(void) {
char *password = generate_password();

printf("%s\n", password);

free(password);

return (0);
}

