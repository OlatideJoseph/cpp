	.file	"example.cpp"
	.intel_syntax noprefix
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Example Constructor"
	.text
	.align 2
	.globl	_ZN7ExampleC2Ev
	.type	_ZN7ExampleC2Ev, @function
_ZN7ExampleC2Ev:
.LFB1764:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	lea	rax, .LC0[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	rdx, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1764:
	.size	_ZN7ExampleC2Ev, .-_ZN7ExampleC2Ev
	.globl	_ZN7ExampleC1Ev
	.set	_ZN7ExampleC1Ev,_ZN7ExampleC2Ev
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2297:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	mov	DWORD PTR -8[rbp], esi
	cmp	DWORD PTR -4[rbp], 1
	jne	.L4
	cmp	DWORD PTR -8[rbp], 65535
	jne	.L4
	lea	rax, _ZStL8__ioinit[rip]
	mov	rdi, rax
	call	_ZNSt8ios_base4InitC1Ev@PLT
	lea	rax, __dso_handle[rip]
	mov	rdx, rax
	lea	rax, _ZStL8__ioinit[rip]
	mov	rsi, rax
	mov	rax, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
.L4:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2297:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN7ExampleC2Ev, @function
_GLOBAL__sub_I__ZN7ExampleC2Ev:
.LFB2298:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2298:
	.size	_GLOBAL__sub_I__ZN7ExampleC2Ev, .-_GLOBAL__sub_I__ZN7ExampleC2Ev
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN7ExampleC2Ev
	.hidden	__dso_handle
	.ident	"GCC: (Deepin 12.3.0-17deepin12) 12.3.0"
	.section	.note.GNU-stack,"",@progbits
