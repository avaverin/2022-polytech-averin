#include<cassert>
#include<cstring>

bool palidrome(const char* str)
{
	int k = 0;
	int n = strlen(str) - 1;
	for (int i = 0, k = n; i <= k; i++, k--)
	{
		if (str[i] != str[k])
			return false;
	}
	return true;
}

int main()
{
	assert(palidrome("a") == true);
    assert(palidrome("ab") == false);
    assert(palidrome(" ") == true);
    assert(palidrome("hello world") == false);
    assert(palidrome(nullptr) == false);
    assert(palidrome("заказ") == true);
    assert(palidrome("шалаш") == true);
    return 0;
}