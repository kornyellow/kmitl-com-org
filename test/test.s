.data
	test:
		.word 40
		.word 30
		.word 20
		.word 10

.text
.global main
	main:
		ldr r1, =test
		ldr r0, [r1], #4
		ldr r0, [r1]

		bx lr
