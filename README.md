# WriteLogFile
```cpp
Small Header to write Log files in C/C++ CrossPlatform and easy !
```
# Example
```cpp
#include "WriteLogFile.h"

const char *AppName = "My App";

int main() 
{
   //define your log file path
   const char* LogFilePath = "sdmc://WriteLogFile.log";
   
   //Info
   WriteLogFile(LogFilePath, LogType_Info, "Info from %s", AppName);
   
   //Error
   WriteLogFile(LogFilePath, LogType_Error, "Error from %s", AppName);
   
   return 0;
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
