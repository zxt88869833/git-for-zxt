#define _CRT_SECURE_NO_WARNINGS 
#include <openssl/md5.h>        // md5 м╥нд╪Ч 
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
void getMD5(const char *str, char *result)
{
	MD5_CTX ctx;
	MD5_Init(&ctx);
}

