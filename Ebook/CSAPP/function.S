	.file	"function.c"
	.text
.globl add
	.type	add, @function
add:
	pushl	%ebp   	           
	movl	%esp, %ebp            /*1.copy %ebp to stack top and %ebp point %esp*/
	pushl	%ebx                  /*3.copy %ebx */
	movl	12(%ebp), %eax        
	movl	8(%ebp), %edx
	leal	(%edx,%eax), %ebx
	movl	%ebx, %eax            /*4.read and write */
	popl	%ebx                  /*5.recover %ebx  */
	popl	%ebp                  /*7.recover caller stack frame */
	ret                           /*8.pop return addr, out of the current process, continue caller's code */
	.size	add, .-add
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp            /*1.copy %ebp to stack top and %ebp point %esp */
	subl	$24, %esp             /*2.alloc memery for callee */
	movl	$100, -12(%ebp)       
	movl	$101, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)          
	call	add
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax         /*4.read and write */
	leave                          /*6,7.free memery for callee and recover caller stack frame */
	ret                            /*8.pop stack top to PC,and continue */
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
