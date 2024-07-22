		mov a, #00h
		mov r0, #0ah
		mov b, #01h
		dec r0
repeat: add a, b
		inc b
		dec r0
		jnz repeat
		mov 40h, a
		end