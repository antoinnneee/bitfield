#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
# define FIELD_MASK 0x1F

typedef struct s_Bfield{
	unsigned int 	b0 : 1;
	unsigned int	b1 : 1;
	unsigned int	b2 : 1;
	unsigned int	b3 : 1;
	unsigned int	b4 : 1;
	unsigned int	bmap : 5;
}field;

int main(void)
{
	field	bf;

	bf.b0 = 1;
	bf.b1 = 1;
	bf.b2 = 1;
	bf.b3 = 1;
	bf.b4 = 1;

//	bf.bmap = 0x00;
	/*
	bf.bmap = bf.bmap + (bf.b0 << 0);
	bf.bmap = bf.bmap + (bf.b1 << 1);
	bf.bmap = bf.bmap + (bf.b2 << 2);
	bf.bmap = bf.bmap + (bf.b3 << 3);
	bf.bmap = bf.bmap + (bf.b4 << 4);
	*/
	bf.bmap = (bf.b0 << 0 | bf.b1 << 1 | bf.b2 << 2 | bf.b3 << 3 | bf.b4 << 4);


	printf("bmap value :%#x\nbits 0 value :%#x\nbits 1 value :%#x\nbits 2 value :%#x\nbits 3 value :%#x\nbits 4 value :%#x\n"
			,bf.bmap, !!(bf.bmap & (1u << 0)), !!(bf.bmap & (1u << 1)), !!(bf.bmap & (1u << 2)), !!(bf.bmap & (1u << 3)), !!(bf.bmap & (1u << 4)));
	return 0;
}
