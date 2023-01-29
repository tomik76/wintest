#include <iostream>

using namespace std;
#include <windows.h>

void TypeKeyboard(char* text) {
    for (int i = 0; text[i]; i++) {
        keybd_event(VkKeyScan(text[i]), 0, 0, 0);
        keybd_event(VkKeyScan(text[i]), 0, KEYEVENTF_KEYUP, 0);
    }
}

int main() {
    char text[] = "Hello, World!";
    TypeKeyboard(text);

    return 0;
}

