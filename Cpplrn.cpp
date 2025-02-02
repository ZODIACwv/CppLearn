#include <stdio.h>

__declspec(naked) int add(int a, int b) {
	__asm {
		mov eax, ecx  // В x64 первый аргумент (a) передается в RCX (ECX в 32-битном режиме)
		add eax, edx  // Второй аргумент (b) передается в RDX (EDX в 32-битном режиме)
		ret           // Возвращаем значение через EAX
	}
}

int main() {
	printf("Sum: %d\n", add(10, 20));
	return 0;
}






/*#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Dictionary {
public:
	Dictionary(T value) {
		this->value = value;
	}

	T* TryGetValueByKey(string key) {
		return ContainKey(key) != -1 ? &value : nullptr;
	}

	void AddKey(string key) {
		if (ContainKey(key) == -1)
			keys.push_back(key);
	}

	void RemoveKey(string key) {
		keys.erase(keys.begin() + ContainKey(key));
	}

	void PrintAllKeys() {
		for (string e : keys)
			cout << e << endl;
	}

private:
	int ContainKey(string key) {
		for (size_t i{}; i < keys.size(); i++)
			if (keys[i] == key)
				return i;
		return -1;
	}

	T value;
	vector<string> keys;
};

int main()
{
	Dictionary<string> dict = Dictionary<string>("VaDa");
	dict.AddKey("Dasha");
	dict.AddKey("Vadim");


	cout << *dict.TryGetValueByKey("Dasha") << endl;
}
*/