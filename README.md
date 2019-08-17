# WriteLogFile
```cpp
Small Header to write Log files in C/C++ CrossPlatform and easy !
```

# Usage 
```cpp
add WriteLogFile.h to your project and include it with #include "WriteLogFile.h"
change the pFile in WriteLogFile.h filepath for your needs.
```

# Example

```cpp
#include "WriteLogFile.h"

int main() 
{
//Info
WriteLogFile("Info From My App", 1) // 1 for [INFO]
//Error
WriteLogFile("Error From My App", 1) // 1 for [ERROR]
}
```
