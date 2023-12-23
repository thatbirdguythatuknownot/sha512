#ifndef __CONFIG_H_
#define __CONFIG_H_

static uint32_t __endianness = 0xdeadbeef; 
enum __endianness { BIG_ENDIAN, LITTLE_ENDIAN };

#define MACHINE_BYTE_ORDER ( *(const char *)&__endianness == 0xef ? LITTLE_ENDIAN \
                           : *(const char *)&__endianness == 0xde ? BIG_ENDIAN \
                           : assert(0))

#endif //__CONFIG_H_

