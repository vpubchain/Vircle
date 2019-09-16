#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the vircle network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside an IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    /*{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x4e,0xbc,0x09}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x5d,0x73,0x84}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x12,0xdd,0x72,0x07}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x17,0x66,0xac,0x83}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x23,0xc4,0x30,0x74}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x23,0xc4,0x58,0x7f}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x23,0xe3,0x11,0xc4}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x25,0xbb,0x65,0x4b}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x28,0x41,0x74,0xb1}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2d,0x4c,0xed,0x7e}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2d,0x4d,0x96,0x48}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2e,0x26,0xf0,0x20}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0x0e,0xa1,0x96}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe0,0xa2,0xa9}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe9,0xc7,0x24}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x36,0x25,0x0d,0x02}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x44,0x6d,0x45,0x94}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4b,0xbc,0x32,0x9f}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xd0,0xe6,0x67}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x52,0x12,0xfa,0x7d}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x55,0xbb,0xb7,0xd8}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0x46,0xe2,0xce}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0x67,0x2c,0x33}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0xdd,0xd8,0x1c}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x5c,0xf3,0x03,0x3b}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xa8,0x8f,0x78}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x81,0xaa,0x1c,0x6f}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x8e,0x69,0xc9,0xee}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x90,0xca,0x44,0x93}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x90,0xd9,0x82,0x21}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x93,0x4b,0x52,0x59}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x93,0x87,0xbf,0xa2}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x93,0xaf,0xbb,0x6f}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x9f,0x59,0x04,0x32}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xa3,0xac,0x2a,0x43}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb0,0x09,0x69,0x1b}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc6,0xc7,0x6f,0x7f}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc6,0xcc,0xfb,0x4a}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc7,0xf7,0x11,0xb2}, 51738},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xcf,0x9a,0xdc,0x6a}, 51738},
    {{0x20,0x01,0x19,0xf0,0x64,0x01,0x0b,0x6d,0x54,0x00,0x01,0xff,0xfe,0x63,0xcc,0xd4}, 51738},
    {{0x20,0x01,0x41,0xd0,0x00,0x0a,0x25,0x4b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}, 51738},
    {{0x20,0x01,0x4b,0x98,0x0d,0xc0,0x00,0x41,0x02,0x16,0x3e,0xff,0xfe,0xa0,0xba,0x2a}, 51738},
    {{0x20,0x01,0x4b,0x98,0x0d,0xc0,0x00,0x41,0x02,0x16,0x3e,0xff,0xfe,0xa3,0xad,0x23}, 51738},
    {{0x20,0x02,0x68,0xa8,0x8f,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xa8,0x8f,0x78}, 51738},
    {{0x26,0x04,0x13,0x80,0x20,0x00,0x4d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03}, 51738},
    {{0x26,0x05,0x60,0x00,0xf3,0x84,0x1a,0x01,0x1c,0x54,0x07,0x02,0x75,0xfd,0x79,0xc4}, 51738},
    {{0x26,0x07,0xfc,0xc8,0xff,0xc0,0x00,0xc1,0x41,0x21,0xc9,0x8d,0x69,0xf3,0x3d,0x33}, 51738},
    {{0x2a,0x01,0x0e,0x35,0x8a,0xaf,0x84,0x80,0xb5,0xa8,0xef,0x50,0x30,0xde,0x5f,0x44}, 51738},
    {{0x2a,0x02,0x7b,0x40,0x50,0xd0,0xe6,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}, 51738},
    {{0x2a,0x02,0x80,0x84,0x02,0x02,0xcc,0x00,0x1f,0xe7,0xc3,0x67,0xd0,0x63,0xeb,0xca}, 51738},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xe4,0x0e,0x3a,0x27,0xd7,0x62,0xb7,0x69,0x53,0xaa}, 51738},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xe4,0x70,0xd2,0x61,0xbd,0xae,0xf1,0x93,0xfc,0x2e}, 51738},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xfd,0x69,0x22,0x5f,0xc6,0xaf,0x48,0x48,0xc1,0x1a}, 51738},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x2c,0x56,0x53,0x1d,0x68,0x22,0xef,0x0d,0x34,0x58}, 51738}*/
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0x52,0x6e,0x42}, 9999},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0x52,0x6d,0x34}, 9999},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0x53,0x42,0x03}, 9999}
};

static SeedSpec6 pnSeed6_test[] = {
    /*{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x4e,0xbc,0x09}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x5d,0x73,0x84}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x5e,0x95,0x16}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x17,0x66,0xac,0x83}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe0,0xa2,0xa9}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe9,0xc7,0x24}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4c,0x4a,0xaa,0x43}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb9,0x53,0xda,0x97}, 51938}*/
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2f,0x68,0x19,0x1c}, 51958},
    //{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0x52,0x7b,0x5d}, 51958}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
