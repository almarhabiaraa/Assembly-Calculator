; SECTION .DATA

	msg:    db'Enter an operation: ',10
	msgLen: equ $-msg

	msg2:   db'Result is: ',10
	msg2Len: equ $-msg2


  ; SECTION .TEXT

GLOBAL add
add:
	mov  rax, rdi
	push rax

	mov eax, 4
	mov ebx, 1
	mov ecx, msg2
	mov edx, msg2Len

	int 80h

	pop  rax
	ret


Global sub
sub:
	mov  rax, rdi
	push rax

	mov eax, 4
	mov ebx, 1
	mov ecx, msg2
	mov edx, msg2Len

	int 80h

	pop  rax
	ret


GLOBAL mul
mul:
	mov  rax, rdi
	push rax

	mov eax, 4
	mov ebx, 1
	mov ecx, msg2
	mov edx, msg2Len


	int 80h

	pop  rax
	ret


GLOBAL div
div:
	mov  rax, rdi
	push rax

	mov eax, 4
	mov ebx, 1
	mov ecx, msg2
	mov edx, msg2Len


	int 80h

	pop  rax
	ret
; nasm -f elf64 c1.asm  -o codec2.o
