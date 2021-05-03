.386					;arquitetura
.model flat,C			;Inicializa o modelo de memória do programa (MASM32)., Vinculo C
.code					;inicia o código

DivASM PROC				;inicia procedimentos
	PUSH EBP     		;inicializa a pilha
	MOV  EBP,ESP		;indica o topo da pilha esp ponteiro da pilha
	MOV	 EAX,[EBP+8] 	;le os dados da pilha
	MOV	 EBX,[EBP+12]
	DIV	 EBX			;eax = a - b
	POP	 EBP			;desempilhar
	RET
DivASM ENDP
end