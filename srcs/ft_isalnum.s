section .text
global _ft_isalnum

extern _ft_isalpha
extern _ft_isdigit

_ft_isalnum:

; int ft_isalnum(int c);
;
; rdi -> int c
;
; rax -> return val


entry:
    call _ft_isalpha             ;rax = ft_isalpha(rdi)
    cmp rax, 1
    je isalnum
    call _ft_isdigit              ;rax = ft_isdigit(rdi)
    cmp rax, 1
    je isalnum
    jmp isnotalnum

isalnum:
    mov rax, 1
    ret

isnotalnum:
    mov rax, 0
    ret
