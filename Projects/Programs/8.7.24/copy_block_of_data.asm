			MOV R0, #40H
			MOV R1, #30H
			MOV R2, #05H
	LABEL:  MOV A, @R1
			MOV @R0, A
			INC R0
			INC R1
			DJNZ R2, LABEL
			END