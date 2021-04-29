#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // here I prompt the user to enter their name on the command line
    string name = get_string("What is your name?\n");
    
    // here I greet the user
    printf("hello, %s\n", name);
}
