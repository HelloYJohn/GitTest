	.file	"fixed_array.c"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$32, %esp
	leal	-20(%ebp), %edx
	movl	$0, %eax
.L2:
	movl	%eax, (%edx)
	addl	$3, %eax
	addl	$4, %edx
	cmpl	$15, %eax
	jne	.L2
	movl	-20(%ebp), %eax
	addl	-16(%ebp), %eax
	addl	-12(%ebp), %eax
	addl	-8(%ebp), %eax
	addl	-4(%ebp), %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
