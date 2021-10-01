#include <cstdio>
#include<iostream>
#include<string> 
#include<vector> 
//using namespace std;
#include "my_package/DataHandlerClass.h"
//#include "../my_package/DataHandlerClass.h"

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  std::vector<uint8_t> frame = {0x02, 0x01, 0x04};

  /* std::vector<uint8_t> frame = {0x02,0x01,0x04,0x03,0x06,0x05,0x08,0x07,0x04,0x00,0x05,0x03,0x40,0x05,0x00,0x00,0x43,0x18,0x0a,0x00,0x01,0x00,0x00,0x00,0x9c,
                                   0xb9,0x39,0xca,0x08,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xe4,0x33,
                                   0x91,0x3c,0x49,0xb8,0x89,0x3d,0xcb,0x2d,0x62,0x3c,0x00,0x00,0x00,0x00,0x14,0xe1,0x62,0x3f,0xc6,0x8b,0x8b,0x3f,0xb6,0x42,0x44,
                                   0xbe,0x00,0x00,0x00,0x00,0x08,0xf4,0x58,0x3f,0x5d,0xdc,0x38,0x40,0xd5,0x5e,0x0a,0x3e,0x00,0x00,0x00,0x00,0x6e,0xb9,0x04,0xbe,
                                   0xd1,0x4e,0x84,0x40,0xf2,0x70,0x9a,0xbe,0x00,0x00,0x00,0x00,0xa6,0x19,0x32,0x3e,0xdf,0x3f,0xb1,0x40,0x2d,0xc6,0x03,0x3f,0x00,
                                   0x00,0x00,0x00,0xb0,0xa2,0x10,0x3f,0xb2,0xf9,0xbf,0x40,0xc1,0x9a,0xbc,0xbd,0x00,0x00,0x00,0x00,0x60,0xa1,0x37,0x40,0x83,0x0d,
                                   0x0b,0x41,0x13,0xbf,0x3b,0x3f,0x00,0x00,0x00,0x00,0xe6,0x97,0x3c,0x40,0xf4,0x7b,0x0e,0x41,0xa1,0x12,0x77,0x3f,0x00,0x00,0x00,
                                   0x00,0x07,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x7c,0x00,0x0c,0x03,0x83,0x00,0xc5,0x02,0x20,0x01,0xad,0x02,0x86,0x00,0xd9,0x02,
                                   0x80,0x00,0xce,0x02,0x88,0x00,0x95,0x02,0x78,0x00,0x64,0x02,0x82,0x00,0x7c,0x02,0x02,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x45,
                                   0x0e,0x06,0x0f,0x14,0x0f,0xa3,0x0e,0x0c,0x0e,0xde,0x0c,0xb6,0x0c,0x68,0x0c,0x99,0x0c,0x61,0x0d,0x64,0x0d,0x2c,0x0d,0x63,0x0d,
                                   0xdc,0x0c,0xe2,0x0c,0x79,0x0d,0xba,0x0d,0x0a,0x0e,0xd7,0x0d,0x72,0x0d,0xe7,0x0c,0x9b,0x0c,0x3f,0x0c,0x80,0x0c,0x5c,0x0c,0xd8,
                                   0x0b,0x63,0x0b,0x6a,0x0c,0x8f,0x0d,0xdb,0x0d,0x5a,0x0d,0x82,0x0d,0xc9,0x0d,0xc3,0x0d,0x93,0x0d,0x13,0x0d,0xc1,0x0c,0xe0,0x0c,
                                   0x7a,0x0c,0x95,0x0d,0x03,0x0e,0xaf,0x0d,0x91,0x0c,0x47,0x0c,0x5a,0x0c,0x22,0x0c,0x00,0x0c,0x67,0x0c,0x5d,0x0c,0xbb,0x0b,0x41,
                                   0x0b,0x55,0x0b,0x5f,0x0b,0x44,0x0b,0x7a,0x0b,0xee,0x0b,0x2a,0x0c,0x5b,0x0c,0x7d,0x0c,0x47,0x0c,0xcc,0x0c,0xf1,0x0c,0xa8,0x0c,
                                   0x57,0x0c,0x3d,0x0c,0xd8,0x0b,0xc0,0x0b,0x6c,0x0b,0x4b,0x0b,0x6c,0x0b,0xe7,0x0b,0x1b,0x0c,0x23,0x0c,0xd5,0x0b,0x6d,0x0b,0x29,
                                   0x0b,0x1f,0x0b,0x42,0x0b,0x59,0x0b,0xb1,0x0b,0x9b,0x0b,0x61,0x0b,0x03,0x0c,0x6e,0x0e,0xb9,0x0f,0x3c,0x10,0x24,0x10,0x7b,0x0f,
                                   0x6a,0x0e,0x64,0x0d,0x0e,0x0d,0x44,0x0d,0xa4,0x0c,0x64,0x0c,0xb3,0x0c,0x92,0x0c,0x5c,0x0c,0x4a,0x0c,0x0c,0x0d,0x02,0x0e,0x7e,
                                   0x0e,0x5a,0x0e,0x81,0x0d,0xd3,0x0c,0x03,0x0d,0xa5,0x0c,0x00,0x0c,0x03,0x0c,0x1a,0x0c,0x35,0x0c,0xc3,0x0c,0x8d,0x0d,0xc4,0x0d,
                                   0x63,0x0d,0x44,0x0c,0x4e,0x0d,0x35,0x0e,0x69,0x0e,0xf4,0x0d,0xe4,0x0c,0xa7,0x0c,0xe4,0x0c,0xfd,0x0c,0xb0,0x0c,0xf3,0x0b,0xbb,
                                   0x0b,0xca,0x0b,0xc1,0x0b,0x1d,0x0c,0x52,0x0c,0xd6,0x0b,0x63,0x0b,0xe8,0x0b,0xc6,0x0b,0xa7,0x0b,0x1e,0x0c,0xfe,0x0b,0x21,0x0b,
                                   0xfd,0x0a,0x23,0x0b,0xe1,0x0b,0x73,0x0c,0x85,0x0c,0x06,0x0c,0x52,0x0b,0x15,0x0b,0xb1,0x0b,0x26,0x0c,0xe4,0x0b,0x9d,0x0b,0xc5,
                                   0x0b,0x74,0x0c,0x24,0x0d,0x4a,0x0d,0x1d,0x0d,0xd2,0x0c,0x8f,0x0d,0x1d,0x0e,0xf0,0x0d,0xf2,0x0c,0xc3,0x0d,0xe9,0x0d,0x5e,0x0d,
                                   0x59,0x0c,0xcc,0x0b,0x8a,0x0b,0x4e,0x0b,0x2f,0x0b,0x8f,0x0b,0xb3,0x0c,0x4b,0x0d,0x2c,0x0d,0x62,0x0c,0x5f,0x0b,0x08,0x0b,0xf6,
                                   0x0a,0x45,0x0b,0x08,0x0b,0xcf,0x0a,0xa5,0x0a,0x85,0x0a,0x3f,0x0b,0xb9,0x0b,0xa5,0x0b,0x88,0x0b,0x7d,0x0b,0x1d,0x0b,0xa6,0x0b,
                                   0xf9,0x0b,0xa6,0x0b,0xa0,0x0b,0x8f,0x0b,0x88,0x0b,0x2b,0x0c,0x8e,0x0c,0xb3,0x0c,0x01,0x0d,0x16,0x0d,0xe1,0x0c,0x56,0x0c,0xc7,
                                   0x0b,0x9f,0x0b,0xca,0x0b,0x0e,0x0c,0x10,0x0c,0xe2,0x0b,0x34,0x0b,0xd2,0x0a,0xaa,0x0b,0xf0,0x0b,0x03,0x0c,0x0e,0x0c,0xec,0x0b,
                                   0x8e,0x0b,0x50,0x0b,0x0f,0x0b,0x79,0x0a,0x7d,0x0a,0xdf,0x0a,0xff,0x0a,0x1c,0x0b,0xa2,0x0a,0x4e,0x0a,0x51,0x0a,0x5a,0x0b,0x74,
                                   0x0b,0xd6,0x0a,0x67,0x0a,0xd6,0x0a,0x8d,0x0a,0x3b,0x0a,0x95,0x0a,0x8f,0x0a,0xa1,0x0a,0x5d,0x0a,0xcf,0x09,0x63,0x0a,0x7c,0x0a,
                                   0x17,0x0a,0x5a,0x0a,0x26,0x0b,0x4a,0x0b,0xb0,0x0a,0x0a,0x0a,0x56,0x09,0xc2,0x09,0xbc,0x09,0x44,0x0a,0x7d,0x0a,0x3d,0x0a,0xe5,
                                   0x09,0xe3,0x09,0x28,0x0a,0x5e,0x0a,0x5d,0x0a,0x73,0x0a,0x77,0x0b,0x35,0x0b,0x9c,0x0b,0x37,0x0c,0x10,0x0c,0x08,0x0c,0x04,0x0c,
                                   0x55,0x0b,0x45,0x0b,0x69,0x0c,0xc7,0x0c,0x90,0x0c,0x85,0x0b,0x84,0x0a,0x88,0x0a,0xaf,0x0a,0x4d,0x0a,0xac,0x0a,0xc1,0x0a,0xb2,
                                   0x0a,0x8f,0x0a,0xa8,0x0a,0x82,0x0a,0xc3,0x0a,0xbb,0x0a,0xf6,0x0a,0xd3,0x0a,0x7b,0x0a,0x30,0x0a,0xaf,0x09,0xc4,0x09,0xb3,0x09,
                                   0xcc,0x09,0x17,0x0a,0x26,0x0a,0xe6,0x09,0xb6,0x09,0x73,0x0a,0xd8,0x0a,0xbd,0x0a,0x6b,0x0a,0xdc,0x0a,0xbb,0x0a,0x0a,0x0a,0x98,
                                   0x09,0x73,0x09,0x8d,0x09,0x86,0x09,0xed,0x09,0xbf,0x09,0x07,0x0a,0x98,0x0a,0x62,0x0a,0x49,0x0a,0xd7,0x09,0xc8,0x09,0xda,0x09,
                                   0xa6,0x09,0x45,0x09,0xa8,0x09,0x24,0x0a,0x20,0x0a,0xd1,0x09,0xcc,0x09,0xb7,0x09,0x1a,0x0a,0xba,0x0a,0xcd,0x0a,0xcd,0x0a,0xd8,
                                   0x0a,0x56,0x0a,0xdf,0x09,0x4d,0x0a,0x73,0x0a,0xa9,0x0a,0xa3,0x0a,0x39,0x0a,0xa0,0x09,0xca,0x09,0xc8,0x09,0xa3,0x09,0x15,0x0a,
                                   0x31,0x0a,0x6b,0x0a,0x5f,0x0a,0x0c,0x0a,0xf2,0x09,0xc0,0x09,0x59,0x09,0x6e,0x09,0x57,0x09,0x57,0x09,0x3e,0x09,0x6f,0x09,0x6e,
                                   0x09,0x70,0x09,0x8c,0x09,0x51,0x09,0x84,0x09,0xb1,0x09,0xeb,0x09,0xe4,0x09,0xa7,0x09,0x32,0x09,0x36,0x09,0x31,0x09,0x9a,0x09,
                                   0x9c,0x09,0x5e,0x09,0x82,0x09,0xf4,0x09,0x77,0x0a,0xa6,0x0a,0x54,0x0a,0x5c,0x0a,0xc2,0x0a,0x77,0x0a,0x55,0x09,0x28,0x09,0x81,
                                   0x09,0x98,0x09,0x2a,0x09,0x48,0x09,0x12,0x09,0x5c,0x09,0xcb,0x09,0xd7,0x09,0x6c,0x09,0x0f,0x0a,0x22,0x0a,0x1b,0x09,0x72,0x0a,
                                   0xa8,0x0a,0x1b,0x0a,0x4c,0x09,0x80,0x09,0xe7,0x09,0xb3,0x09,0x15,0x0a,0x0d,0x0a,0x6e,0x09,0xd8,0x08,0x37,0x09,0x6c,0x09,0x20,
                                   0x09,0x4c,0x09,0x53,0x09,0x75,0x09,0x2c,0x09,0xe2,0x08,0xe0,0x08,0x25,0x09,0x73,0x09,0x17,0x0a,0x05,0x0a,0xd2,0x09,0x54,0x09,
                                   0x2b,0x09,0x72,0x09,0x4a,0x09,0xed,0x08,0xf7,0x08,0x42,0x09,0x27,0x09,0x56,0x09,0x5c,0x09,0x2b,0x09,0x05,0x09,0x3d,0x09,0x3c,
                                   0x09,0x28,0x09,0x1f,0x09,0x0e,0x09,0xbe,0x08,0xa5,0x08,0x8f,0x08,0xdb,0x08,0x07,0x09,0x3b,0x09,0x39,0x09,0xbe,0x08,0xd8,0x08,
                                   0x48,0x09,0xd2,0x08,0xfb,0x08,0x02,0x09,0xdc,0x08,0xbb,0x08,0xf1,0x08,0x25,0x09,0x05,0x09,0xfb,0x08,0x09,0x09,0x25,0x09,0x4b,
                                   0x09,0x31,0x09,0x1f,0x09,0xac,0x08,0xbd,0x08,0x12,0x09,0x11,0x09,0xd6,0x08,0x1c,0x09,0x19,0x09,0x1e,0x09,0x1c,0x09,0x24,0x09,
                                   0x2a,0x09,0xb5,0x08,0x74,0x08,0x6f,0x08,0xaa,0x08,0xf4,0x08,0xf2,0x08,0xfb,0x08,0xdd,0x08,0x8a,0x08,0x92,0x08,0x7e,0x08,0x37,
                                   0x08,0x04,0x08,0x28,0x08,0x05,0x08,0x2b,0x08,0x6f,0x08,0x4b,0x08,0xda,0x07,0xb0,0x07,0xfa,0x07,0xc5,0x07,0xb2,0x07,0x90,0x07,
                                   0xe5,0x07,0xdb,0x07,0xff,0x07,0xd8,0x07,0x79,0x08,0xcc,0x08,0x3b,0x09,0xd5,0x09,0xfb,0x09,0x7e,0x09,0x50,0x08,0xb5,0x08,0xc6,
                                   0x08,0x07,0x09,0x8a,0x09,0xd0,0x09,0x15,0x0a,0x5c,0x0a,0x17,0x0b,0x82,0x0b,0x86,0x0b,0x5f,0x0b,0x61,0x0b,0xa7,0x0c,0x06,0x00,
                                   0x00,0x00,0x18,0x00,0x00,0x00,0xb1,0x07,0x00,0x00,0xa39,0x00,0x00,0x0f,0x35,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                                   0x00,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x56,0x4c,0x11,0x00,0x22,0x00,0x22,0x00,0x22,
                                   0x00,0x22,0x00,0x26,0x00,0x28,0x00,0x29,0x00,0x27,0x00,0x28,0x00,0x28,0x00,0x00,0x03,0x13,0x00,0x00,0x00,0x00,0x00,0x29,0xf7,
                                   0x00,0x00,0x01,0x00,0x00,0x00,0xe8,0x3d,0x00,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
  */

  DataUARTHandler data();
  printf("hello world my_package package\n");
  return 0;
}


