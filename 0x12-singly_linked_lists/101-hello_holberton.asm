SECTION .data
msg:	db "Hello, Holberton", 0    ; Null-terminated string: "Hello, Holberton"
fmt:	db "%s", 10, 0             ; Format string for printf: "%s\n"

SECTION .text
extern printf             ; Declare external function printf
global main               ; Make the main function globally accessible

main:
mov esi, msg              ; Load the address of 'msg' into the esi register
mov edi, fmt              ; Load the address of 'fmt' into the edi register
mov eax, 0                ; Clear the eax register (this is the argument for printf)
call printf               ; Call the printf function

mov eax, 0                ; Set the return value to 0 (indicating successful execution)
ret                       ; Return from the main function and exit the program

