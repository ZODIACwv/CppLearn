__declspec(naked) int add(int a, int b) {
	__asm {
		mov eax, ecx  // � x64 ������ �������� (a) ���������� � RCX (ECX � 32-������ ������)
		add eax, edx  // ������ �������� (b) ���������� � RDX (EDX � 32-������ ������)
		ret           // ���������� �������� ����� EAX
	}
}