__declspec(naked) int add(int a, int b) {
	__asm {
		mov eax, ecx  // ¬ x64 первый аргумент (a) передаетс€ в RCX (ECX в 32-битном режиме)
		add eax, edx  // ¬торой аргумент (b) передаетс€ в RDX (EDX в 32-битном режиме)
		ret           // ¬озвращаем значение через EAX
	}
}