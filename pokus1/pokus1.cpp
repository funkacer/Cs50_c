#include <iostream>
#include <string.h>

using namespace std;


int main(){

// s[5] nejde, protože se používá poslední char '\0' (NUL z ASCII - bity 00000000)
char s[6] = "David";

int i = 0;

// dokud není poslední bit tak počítej znaky
while (s[i] != '\0') {
i++;
}

// 5 (bez '\0')
cout << i << endl;

// 5 (bez '\0')
printf("%zu\n", strlen(s));

return 0;

}