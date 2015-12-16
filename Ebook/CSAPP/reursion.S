	.file	"reursion.c"
	.text
.globl rfact
	.type	rfact, @function
rfact:
	pushl	%ebp
	movl	%esp, %ebp        /*1.back up the original frame pointer to stack top  and adjust current frame pointer to the stack pointer*/
	pushl	%ebx              /*3.back up callee's register*/
	subl	$20, %esp         /*2.allocate memory for the current stack frame*/
	movl	8(%ebp), %ebx     
	movl	$1, %eax
	cmpl	$1, %ebx
	jle	.L3
	leal	-1(%ebx), %eax
	movl	%eax, (%esp)
	call	rfact
	imull	%ebx, %eax
.L3:
	addl	$20, %esp         /*6.free callee's stack frame memory*/
	popl	%ebx              /*5.recover callee's register*/
	popl	%ebp              /*7.recover caller's stack frame */
	ret                       /*8.pop stack top to PC, and continue*/
	.size	rfact, .-rfact
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
