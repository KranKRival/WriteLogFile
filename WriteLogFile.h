#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void WriteLogFile(const char* input, int type)
{
	time_t lTime = time(NULL);
	struct tm* timestruct = localtime((const time_t *) &lTime);
	int hour = timestruct->tm_hour;
	int min = timestruct->tm_min;
	int sec = timestruct->tm_sec;
	char time[9];
	sprintf(time, "%02d:%02d:%02d", hour, min, sec);
    char output[1000];
	switch (type)
	{
		case 0: 
		sprintf(output, "[%s] [ERROR] %s", time, input);
		break;
		case 1: 
		sprintf(output, "[%s] [INFO] %s", time, input);
		break;
	}
	FILE* pFile = fopen("sdmc://WriteLogFile.log", "a");
	fprintf(pFile, "%s\n",output);
	fclose(pFile);
}
