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
        TypeKeyboard("Long comment The error  is typically encountered when using the Cl.exe compiler to build a C++ project, and dgfgdgdgddgdgindicates that the linker is unable to find the C++ Standard Library (libstdc++.dll) that is required to build your project.");
        keybd_event(VK_RETURN, 0, 0, 0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
        TypeKeyboard("You can try to package the Visual C++ runtime with your program, but this increases the size of your installation package. Another option is to distribute your program as a standalone executable, which includes the runtime libraries in a single file. To create a standalone executable, you can use tools such as the statically-linked version of the Visual C++ runtime.");
        keybd_event(VK_RETURN, 0, 0, 0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
         keybd_event(VK_CONTROL, 0, 0, 0);
         keybd_event(0x53, 0, 0, 0); // 0x53 is the virtual-key code for 'S'
        keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);
    }
 return 0;

}

