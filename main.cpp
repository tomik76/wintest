#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
typedef unsigned char byte;
byte my_byte = 0x01;
void TypeKeyboard(char* text) {
    for (int i = 0; text[i]; i++) {
        keybd_event(VkKeyScan(text[i]), 0, 0, 0);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        keybd_event(VkKeyScan(text[i]), 0, KEYEVENTF_KEYUP, 0);
    }
}

int main() {
    
    for (int i = 0; i < 10000; i++) { 
        std::this_thread::sleep_for(std::chrono::seconds(5));
        TypeKeyboard("Long comment");
        keybd_event(VK_RETURN, 0, 0, 0);
        TypeKeyboard("This");
        keybd_event(VK_RETURN, 0, 0, 0);
        return 0;
    }
 

}

