#pragma once
#include<iostream>
#define N 64
using namespace std;

class MD5
{
private:
	void calculateMD5(size_t* chunk);
	void calculateMD5Final(size_t* _chunk);
	string getFileMd5();

	size_t F(size_t b, size_t c, size_t d)
	{
		return (b & c) | ((~b) & d);
	}
	size_t G(size_t b, size_t c, size_t d)
	{
		return (b & d) | (c & (~d));
	}
	size_t H(size_t b, size_t c, size_t d)
	{
		return b^c^d;
	}
	size_t I(size_t b, size_t c, size_t d)
	{
		return c ^ (b | (~d));
	}

	size_t shiftLeftRotate(size_t num, size_t n)
	{
		return (num << n) | (num >> (32 - n));
	}

	size_t _a;
	size_t _b;
	size_t _c;
	size_t _d;
	size_t _k[N];
	size_t _sft[N];

	const size_t _chunkByte;
	unsigned char _chunk[N];
};