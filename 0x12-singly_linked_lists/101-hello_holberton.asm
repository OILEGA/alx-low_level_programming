SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10,0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

Advanced task

vi
#include <stdio.h>
/**
*before_main - function executed before main
*Return : no return.
*/

void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow");
printf(",/n/I bore my house upon my back!/n");
}

