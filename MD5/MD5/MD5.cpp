#include"MD5.h"

void MD5::calculateMD5Final()
{
	//lastByte:<64byte,最后一块数据的大小
	unsigned char* p= _chunk + lastByte;
	//填充位的前八bit位：1000 0000   0x80
	*p++ = 0x80;
	size_t reminFillByte = _chunkByte - _lastByte - 1;
	if (reminFillByte < 8)
	{
		memset(p, 0, reminFillByte);
		calculateMD5Final((size_t*)_chunk);
		memset(_chunk, 0, _chunkByte);
	}
	else
	{
		memset(p, 0, reminFillByte);
	}
	//最后的64bit存放原始文档的bit长度
	
}

string MD5::getFileMd5(const char* filename)
{
	ifstream fin(filename,ifstream::binary);
	if (fin.is_open)
	{
		while (!fin.eof())
		{
			
		}
	}

}

void MD5::calculateMD5(size_t* chunk)
{
	size_t a = _a;
	size_t b = _b;
	size_t c = _c;
	size_t d = _d;
	size_t f, g;  //chunk[k]   f:哈希函数的返回值 
	//if(0 <= i < 16) g = i; 
	//if (16 <= i < 32) g = (5 * i + 1) % 16; 
	//if (32 <= i < 48) g = (3 * i + 5) % 16; 
	//if (48 <= i < 63) g = (7 * i) % 16;
	//64次变换，4轮操作，每一轮操作：16次子操作
	for (size_t i = 0; i < 64; i++)
	{
		if (i >= 0 && i < 16)
		{
			f = F(b, c, a);
			g = i;
		}
		else if (i >= 16 && i < 32)
		{
			f = G(b, c, a);
			g = (5 * i + 1) % 16;
		}
		else if (i >= 32 && i < 48)
		{
			f = H(b, c, a);
			g = (3 * i + 5) % 16;
		}
		else
		{
			f = I(b, c, a);
			g = (7 * i) % 16;
		}

		size_t dtemp = d;
		d = c;
		c = b;
		b = b + shiftLeftRotate(a + f + _k[i] + chunk[g], _sft[i]);
		a = dtemp;
	}
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}