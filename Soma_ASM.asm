.386					;arquitetura
.model flat,C			;Inicializa o modelo de mem�ria do programa (MASM32)., Vinculo C
.code					;inicia o c�digo

SomaASM PROC			;inicia procedimentos
	PUSH EBP     		;inicializa a pilha
	MOV  EBP,ESP		;indica o topo da pilha esp ponteiro da pilha
	MOV	 EAX,[EBP+8] 	;le os dados da pilha
	MOV	 EBX,[EBP+12]
	ADD	 EAX,EBX		;eax = a + b
	POP	 EBP			;desempilhar
	RET
SomaASM ENDP
end