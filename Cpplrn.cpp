#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Dictionary {
public:
	Dictionary(T value) {
		this->value = value;
	}

	T* TryGetValueByKey(string key) {
		return ContainKey(key) ? &value : nullptr;
	}

	void AddKey(string key) {
		if (!ContainKey(key))
			keys.push_back(key);
	}

private:
	bool ContainKey(string key) {
		for (size_t i{}; i < keys.size(); i++)
			if (keys[i] == key)
				return true;
		return false;
	}

	T value;
	vector<string> keys;
};

int main()
{
	Dictionary<string> dict = Dictionary<string>("VaDa");
	dict.AddKey("Dasha");
	dict.AddKey("Vadim");

	cout << dict.TryGetValueByKey("SerGay") << endl << *dict.TryGetValueByKey("Dasha") << endl;
}
