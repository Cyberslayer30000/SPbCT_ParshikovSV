﻿#include <errno.h>
#include <stdio.h>
#include <locale>

#define BUF_SIZE 256

using namespace std;

int main(int argc, char* argv [])
{
	setlocale(LC_ALL, "rus");
	FILE *in_file, *out_file;
	char rec[BUF_SIZE];
	size_t bytes_in, bytes_out;
	if (argc != 3)
	{
		printf("Использование: Cpc file1 file2\n");
		return 1;
	}
	fopen_s(&in_file, argv[1], "rb");
	if (in_file == 0)
	{
		perror(argv[1]);
		return 2;
	}
	fopen_s(&out_file, argv[2], "wb");
	if (out_file == 0)
	{
		perror(argv[2]);
		return 3;
	}
	while ((bytes_in = fread(rec, 1, BUF_SIZE, in_file)) > 0)
	{
		bytes_out = fwrite(rec, 1, bytes_in, out_file);
		if (bytes_out != bytes_in)
		{
			perror("Критическая ошибка записи");
			return 4;
		}
	}
	fclose(in_file);
	fclose(out_file);
}
