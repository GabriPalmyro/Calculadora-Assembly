.386					;arquitetura
.model flat,C			;Inicializa o modelo de mem�ria do programa (MASM32)., Vinculo C
.code					;inicia o c�digo

SubASM PROC				;inicia procedimentos
	PUSH EBP     		;inicializa a pilha
	MOV  EBP,ESP		;indica o topo da pilha esp ponteiro da pilha
	MOV	 EAX,[EBP+8] 	;le os dados da pilha
	MOV	 EBX,[EBP+12]
	SUB	 EAX,EBX		;eax = a - b
	POP	 EBP			;desempilhar
	RET
SubASM ENDP
end