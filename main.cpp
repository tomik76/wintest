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
    char text[] = "Hello, World!";
  
    for (int i = 0; i < 10000; i++) {
        TypeKeyboard("This issue can be caused by missing runtime dependencies. On Windows, compiled programs typically require the Visual C++ runtime to be installed on the target system.You can try to package the Visual C++ runtime with your program, but this increases the size of your installation package. Another option is to distribute your program as a standalone executable, which includes the runtime libraries in a single file. To create a standalone executable, you can use tools such as the statically-linked version of the Visual C++ runtime.");
    }
 

}

