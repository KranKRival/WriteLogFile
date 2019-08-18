# WriteLogFile
```cpp
Small Header to write Log files in C/C++ CrossPlatform and easy !
```
# Example
```cpp
#include "WriteLogFile.h"

int main() 
{
   //define your log file path
   const char* LogFilePath = "sdmc://WriteLogFile.log";
   //Info
   WriteLogFile(LogFilePath, "Info From My App", 1) // 1 for [INFO]
   //Error
   WriteLogFile(LogFilePath, "Error From My App", 0) // 0 for [ERROR]
}
```
# Output
```
WriteLogFile.log
```
```
[12:00:01][INFO]Info From My App
[12:00:01][ERROR]Error From My App
```
