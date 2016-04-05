
victim:     file format elf64-x86-64


Disassembly of section .init:

00000000004004d0 <_init>:
  4004d0:	48 83 ec 08          	sub    rsp,0x8
  4004d4:	48 8b 05 1d 0b 20 00 	mov    rax,QWORD PTR [rip+0x200b1d]        # 600ff8 <_DYNAMIC+0x1d0>
  4004db:	48 85 c0             	test   rax,rax
  4004de:	74 05                	je     4004e5 <_init+0x15>
  4004e0:	e8 4b 00 00 00       	call   400530 <__gmon_start__@plt>
  4004e5:	48 83 c4 08          	add    rsp,0x8
  4004e9:	c3                   	ret    

Disassembly of section .plt:

00000000004004f0 <__stack_chk_fail@plt-0x10>:
  4004f0:	ff 35 12 0b 20 00    	push   QWORD PTR [rip+0x200b12]        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4004f6:	ff 25 14 0b 20 00    	jmp    QWORD PTR [rip+0x200b14]        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4004fc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400500 <__stack_chk_fail@plt>:
  400500:	ff 25 12 0b 20 00    	jmp    QWORD PTR [rip+0x200b12]        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400506:	68 00 00 00 00       	push   0x0
  40050b:	e9 e0 ff ff ff       	jmp    4004f0 <_init+0x20>

0000000000400510 <printf@plt>:
  400510:	ff 25 0a 0b 20 00    	jmp    QWORD PTR [rip+0x200b0a]        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400516:	68 01 00 00 00       	push   0x1
  40051b:	e9 d0 ff ff ff       	jmp    4004f0 <_init+0x20>

0000000000400520 <__libc_start_main@plt>:
  400520:	ff 25 02 0b 20 00    	jmp    QWORD PTR [rip+0x200b02]        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400526:	68 02 00 00 00       	push   0x2
  40052b:	e9 c0 ff ff ff       	jmp    4004f0 <_init+0x20>

0000000000400530 <__gmon_start__@plt>:
  400530:	ff 25 fa 0a 20 00    	jmp    QWORD PTR [rip+0x200afa]        # 601030 <_GLOBAL_OFFSET_TABLE_+0x30>
  400536:	68 03 00 00 00       	push   0x3
  40053b:	e9 b0 ff ff ff       	jmp    4004f0 <_init+0x20>

0000000000400540 <__isoc99_scanf@plt>:
  400540:	ff 25 f2 0a 20 00    	jmp    QWORD PTR [rip+0x200af2]        # 601038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400546:	68 04 00 00 00       	push   0x4
  40054b:	e9 a0 ff ff ff       	jmp    4004f0 <_init+0x20>

0000000000400550 <execl@plt>:
  400550:	ff 25 ea 0a 20 00    	jmp    QWORD PTR [rip+0x200aea]        # 601040 <_GLOBAL_OFFSET_TABLE_+0x40>
  400556:	68 05 00 00 00       	push   0x5
  40055b:	e9 90 ff ff ff       	jmp    4004f0 <_init+0x20>

Disassembly of section .text:

0000000000400560 <_start>:
  400560:	31 ed                	xor    ebp,ebp
  400562:	49 89 d1             	mov    r9,rdx
  400565:	5e                   	pop    rsi
  400566:	48 89 e2             	mov    rdx,rsp
  400569:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
  40056d:	50                   	push   rax
  40056e:	54                   	push   rsp
  40056f:	49 c7 c0 60 07 40 00 	mov    r8,0x400760
  400576:	48 c7 c1 f0 06 40 00 	mov    rcx,0x4006f0
  40057d:	48 c7 c7 76 06 40 00 	mov    rdi,0x400676
  400584:	e8 97 ff ff ff       	call   400520 <__libc_start_main@plt>
  400589:	f4                   	hlt    
  40058a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000400590 <deregister_tm_clones>:
  400590:	b8 5f 10 60 00       	mov    eax,0x60105f
  400595:	55                   	push   rbp
  400596:	48 2d 58 10 60 00    	sub    rax,0x601058
  40059c:	48 83 f8 0e          	cmp    rax,0xe
  4005a0:	48 89 e5             	mov    rbp,rsp
  4005a3:	76 1b                	jbe    4005c0 <deregister_tm_clones+0x30>
  4005a5:	b8 00 00 00 00       	mov    eax,0x0
  4005aa:	48 85 c0             	test   rax,rax
  4005ad:	74 11                	je     4005c0 <deregister_tm_clones+0x30>
  4005af:	5d                   	pop    rbp
  4005b0:	bf 58 10 60 00       	mov    edi,0x601058
  4005b5:	ff e0                	jmp    rax
  4005b7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
  4005be:	00 00 
  4005c0:	5d                   	pop    rbp
  4005c1:	c3                   	ret    
  4005c2:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
  4005c6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  4005cd:	00 00 00 

00000000004005d0 <register_tm_clones>:
  4005d0:	be 58 10 60 00       	mov    esi,0x601058
  4005d5:	55                   	push   rbp
  4005d6:	48 81 ee 58 10 60 00 	sub    rsi,0x601058
  4005dd:	48 c1 fe 03          	sar    rsi,0x3
  4005e1:	48 89 e5             	mov    rbp,rsp
  4005e4:	48 89 f0             	mov    rax,rsi
  4005e7:	48 c1 e8 3f          	shr    rax,0x3f
  4005eb:	48 01 c6             	add    rsi,rax
  4005ee:	48 d1 fe             	sar    rsi,1
  4005f1:	74 15                	je     400608 <register_tm_clones+0x38>
  4005f3:	b8 00 00 00 00       	mov    eax,0x0
  4005f8:	48 85 c0             	test   rax,rax
  4005fb:	74 0b                	je     400608 <register_tm_clones+0x38>
  4005fd:	5d                   	pop    rbp
  4005fe:	bf 58 10 60 00       	mov    edi,0x601058
  400603:	ff e0                	jmp    rax
  400605:	0f 1f 00             	nop    DWORD PTR [rax]
  400608:	5d                   	pop    rbp
  400609:	c3                   	ret    
  40060a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000400610 <__do_global_dtors_aux>:
  400610:	80 3d 41 0a 20 00 00 	cmp    BYTE PTR [rip+0x200a41],0x0        # 601058 <__TMC_END__>
  400617:	75 11                	jne    40062a <__do_global_dtors_aux+0x1a>
  400619:	55                   	push   rbp
  40061a:	48 89 e5             	mov    rbp,rsp
  40061d:	e8 6e ff ff ff       	call   400590 <deregister_tm_clones>
  400622:	5d                   	pop    rbp
  400623:	c6 05 2e 0a 20 00 01 	mov    BYTE PTR [rip+0x200a2e],0x1        # 601058 <__TMC_END__>
  40062a:	f3 c3                	repz ret 
  40062c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400630 <frame_dummy>:
  400630:	bf 20 0e 60 00       	mov    edi,0x600e20
  400635:	48 83 3f 00          	cmp    QWORD PTR [rdi],0x0
  400639:	75 05                	jne    400640 <frame_dummy+0x10>
  40063b:	eb 93                	jmp    4005d0 <register_tm_clones>
  40063d:	0f 1f 00             	nop    DWORD PTR [rax]
  400640:	b8 00 00 00 00       	mov    eax,0x0
  400645:	48 85 c0             	test   rax,rax
  400648:	74 f1                	je     40063b <frame_dummy+0xb>
  40064a:	55                   	push   rbp
  40064b:	48 89 e5             	mov    rbp,rsp
  40064e:	ff d0                	call   rax
  400650:	5d                   	pop    rbp
  400651:	e9 7a ff ff ff       	jmp    4005d0 <register_tm_clones>

0000000000400656 <borrowed>:
  400656:	55                   	push   rbp
  400657:	48 89 e5             	mov    rbp,rsp
  40065a:	ba 00 00 00 00       	mov    edx,0x0
  40065f:	be 00 00 00 00       	mov    esi,0x0
  400664:	bf 74 07 40 00       	mov    edi,0x400774
  400669:	b8 00 00 00 00       	mov    eax,0x0
  40066e:	e8 dd fe ff ff       	call   400550 <execl@plt>
  400673:	90                   	nop
  400674:	5d                   	pop    rbp
  400675:	c3                   	ret    

0000000000400676 <main>:
  400676:	55                   	push   rbp
  400677:	48 89 e5             	mov    rbp,rsp
  40067a:	48 83 ec 50          	sub    rsp,0x50
  40067e:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
  400685:	00 00 
  400687:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
  40068b:	31 c0                	xor    eax,eax
  40068d:	bf 7c 07 40 00       	mov    edi,0x40077c
  400692:	b8 00 00 00 00       	mov    eax,0x0
  400697:	e8 74 fe ff ff       	call   400510 <printf@plt>
  40069c:	48 8d 45 b0          	lea    rax,[rbp-0x50]
  4006a0:	48 89 c6             	mov    rsi,rax
  4006a3:	bf 8e 07 40 00       	mov    edi,0x40078e
  4006a8:	b8 00 00 00 00       	mov    eax,0x0
  4006ad:	e8 8e fe ff ff       	call   400540 <__isoc99_scanf@plt>
  4006b2:	48 8d 45 b0          	lea    rax,[rbp-0x50]
  4006b6:	48 89 c6             	mov    rsi,rax
  4006b9:	bf 91 07 40 00       	mov    edi,0x400791
  4006be:	b8 00 00 00 00       	mov    eax,0x0
  4006c3:	e8 48 fe ff ff       	call   400510 <printf@plt>
  4006c8:	b8 00 00 00 00       	mov    eax,0x0
  4006cd:	48 8b 55 f8          	mov    rdx,QWORD PTR [rbp-0x8]
  4006d1:	64 48 33 14 25 28 00 	xor    rdx,QWORD PTR fs:0x28
  4006d8:	00 00 
  4006da:	74 05                	je     4006e1 <main+0x6b>
  4006dc:	e8 1f fe ff ff       	call   400500 <__stack_chk_fail@plt>
  4006e1:	c9                   	leave  
  4006e2:	c3                   	ret    
  4006e3:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  4006ea:	00 00 00 
  4006ed:	0f 1f 00             	nop    DWORD PTR [rax]

00000000004006f0 <__libc_csu_init>:
  4006f0:	41 57                	push   r15
  4006f2:	41 56                	push   r14
  4006f4:	41 89 ff             	mov    r15d,edi
  4006f7:	41 55                	push   r13
  4006f9:	41 54                	push   r12
  4006fb:	4c 8d 25 0e 07 20 00 	lea    r12,[rip+0x20070e]        # 600e10 <__frame_dummy_init_array_entry>
  400702:	55                   	push   rbp
  400703:	48 8d 2d 0e 07 20 00 	lea    rbp,[rip+0x20070e]        # 600e18 <__init_array_end>
  40070a:	53                   	push   rbx
  40070b:	49 89 f6             	mov    r14,rsi
  40070e:	49 89 d5             	mov    r13,rdx
  400711:	31 db                	xor    ebx,ebx
  400713:	4c 29 e5             	sub    rbp,r12
  400716:	48 83 ec 08          	sub    rsp,0x8
  40071a:	48 c1 fd 03          	sar    rbp,0x3
  40071e:	e8 ad fd ff ff       	call   4004d0 <_init>
  400723:	48 85 ed             	test   rbp,rbp
  400726:	74 1e                	je     400746 <__libc_csu_init+0x56>
  400728:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  40072f:	00 
  400730:	4c 89 ea             	mov    rdx,r13
  400733:	4c 89 f6             	mov    rsi,r14
  400736:	44 89 ff             	mov    edi,r15d
  400739:	41 ff 14 dc          	call   QWORD PTR [r12+rbx*8]
  40073d:	48 83 c3 01          	add    rbx,0x1
  400741:	48 39 eb             	cmp    rbx,rbp
  400744:	75 ea                	jne    400730 <__libc_csu_init+0x40>
  400746:	48 83 c4 08          	add    rsp,0x8
  40074a:	5b                   	pop    rbx
  40074b:	5d                   	pop    rbp
  40074c:	41 5c                	pop    r12
  40074e:	41 5d                	pop    r13
  400750:	41 5e                	pop    r14
  400752:	41 5f                	pop    r15
  400754:	c3                   	ret    
  400755:	90                   	nop
  400756:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  40075d:	00 00 00 

0000000000400760 <__libc_csu_fini>:
  400760:	f3 c3                	repz ret 

Disassembly of section .fini:

0000000000400764 <_fini>:
  400764:	48 83 ec 08          	sub    rsp,0x8
  400768:	48 83 c4 08          	add    rsp,0x8
  40076c:	c3                   	ret    
