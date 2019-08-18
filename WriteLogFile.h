#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {
	LogType_Error = 0,
	LogType_Info = 1,
} LogType;

void WriteLogFile(const char* path, LogType type, const char *fmt, ...)
{
	time_t lTime = time(NULL);
	struct tm* timestruct = localtime((const time_t *) &lTime);
	int hour = timestruct->tm_hour;
	int min = timestruct->tm_min;
	int sec = timestruct->tm_sec;
	char time[9];
	sprintf(time, "%02d:%02d:%02d", hour, min, sec);
        char type[16];
	switch (type)
	{
		case LogType_Error: 
		strcpy(type, "ERROR");
		break;
		case LogType_Info: 
		strcpy(type, "INFO");
		break;
	}
	FILE* pFile = fopen(path, "a");
	if(pFile)
	{
		fprintf(pFile, "[%s] [%s] ", time, type);
		va_list args;
		va_start(args, fmt);
		vfprintf(pFile, fmt, args);
		va_end(args);
		fprintf(pFile, "\n");
	}
	fclose(pFile);
}

