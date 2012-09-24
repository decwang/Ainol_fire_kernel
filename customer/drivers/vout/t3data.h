

#define T103ADDR_TCON   	  (0x6E)
#define T103ADDR_DBL	   	  (0x6c)

unsigned char Dith_Table[12][64] =
{
{	
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},
{
	0x08, 0x05, 0x02, 0x0A, 0x05, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x05, 0x02, 
        0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 
        0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 
        0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00 
},
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},	
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},	
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},
{	
	0x08, 0x05, 0x02, 0x0A, 0x05, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x05, 0x02, 
        0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 
        0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 
        0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00 
},	
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},	
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},	
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x01,0x04,0x02,0x01,0x04,0x02,0x08,0x04,0x02,0x08,0x01,0x02,0x08,0x01,0x04,
	0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0x0F,0x00,0x0F,
	0x0E,0x0D,0x0B,0x07,0x0D,0x0B,0x07,0x0E,0x0B,0x07,0x0E,0x0D,0x07,0x0E,0x0D,0x0B,
},
{	
	0x08, 0x05, 0x02, 0x0A, 0x05, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x02, 0x0A, 0x08, 0x05, 0x02, 
        0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 0x0E, 0x01, 0x0E, 0x01, 0x01, 0x0E, 0x01, 0x0E, 
        0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 0x0F, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x0F, 
        0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x02, 0x02, 0x00, 0x07, 0x00 
}
};

unsigned char DBL_BANK_GAMMA_TABLE[4][64]=
{
{                                                                                                       
	0x00, 0x08, 0x10, 0x18, 0x1E, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x36, 0x3A, 0x3D, 0x41, 0x44, 0x47,
	0x4B, 0x4E, 0x52, 0x56, 0x5A, 0x5E, 0x61, 0x65, 0x6A, 0x6F, 0x74, 0x79, 0x7E, 0x83, 0x87, 0x8B,
	0x8E, 0x92, 0x96, 0x9A, 0x9E, 0xA2, 0xA6, 0xA9, 0xAC, 0xB0, 0xB3, 0xB7, 0xBB, 0xBF, 0xC3, 0xC7,
	0xCB, 0xCE, 0xD2, 0xD5, 0xD8, 0xDB, 0xDE, 0xE1, 0xE4, 0xE7, 0xEA, 0xED, 0xF0, 0xF3, 0xF7, 0xFB 
},                                                                                                       
{                                                                                                       
	0x00, 0x08, 0x10, 0x18, 0x1E, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x36, 0x3A, 0x3D, 0x41, 0x44, 0x47,
	0x4B, 0x4E, 0x52, 0x56, 0x5A, 0x5E, 0x61, 0x65, 0x6A, 0x6F, 0x74, 0x79, 0x7E, 0x83, 0x87, 0x8B,
	0x8E, 0x92, 0x96, 0x9A, 0x9E, 0xA2, 0xA6, 0xA9, 0xAC, 0xB0, 0xB3, 0xB7, 0xBB, 0xBF, 0xC3, 0xC7,
	0xCB, 0xCE, 0xD2, 0xD5, 0xD8, 0xDB, 0xDE, 0xE1, 0xE4, 0xE7, 0xEA, 0xED, 0xF0, 0xF3, 0xF7, 0xFB 
},                                                                                                      
{                                                                                                       
	0x00, 0x08, 0x10, 0x18, 0x1E, 0x23, 0x27, 0x2B, 0x2F, 0x33, 0x36, 0x3A, 0x3D, 0x41, 0x44, 0x47, 
	0x4B, 0x4E, 0x52, 0x56, 0x5A, 0x5E, 0x61, 0x65, 0x6A, 0x6F, 0x74, 0x79, 0x7E, 0x83, 0x87, 0x8B, 
	0x8E, 0x92, 0x96, 0x9A, 0x9E, 0xA2, 0xA6, 0xA9, 0xAC, 0xB0, 0xB3, 0xB7, 0xBB, 0xBF, 0xC3, 0xC7, 
	0xCB, 0xCE, 0xD2, 0xD5, 0xD8, 0xDB, 0xDE, 0xE1, 0xE4, 0xE7, 0xEA, 0xED, 0xF0, 0xF3, 0xF7, 0xFB  
},
{
	0,    39,    53,    64,    73,    80,    87,    94,
    	99,   105,   110,   115,   120,   124,   128,   132,
   	136,   140,   144,   147,   151,   154,   158,   161,
   	164,   167,   170,   173,   176,   179,   181,   184,
  	187,   189,   192,   195,   197,   200,   202,   204,
   	207,   209,   211,   214,   216,   218,   220,   222,
   	225,   227,   229,   231,   233,   235,   237,   239,
   	241,   243,   245,   247,   249,   250,   252,   254,	      
}
};

unsigned char DBL_BANK_GAMMA_TABLE_DBL[4][64]=
{
{
	0x00, 0x02, 0x04, 0x07, 0x09, 0x0C, 0x0F, 0x12, 0x15, 0x18, 0x1C, 0x1F, 0x22, 0x26, 0x29, 0x2D, 
        0x31, 0x34, 0x38, 0x3C, 0x3F, 0x43, 0x47, 0x4B, 0x4F, 0x53, 0x57, 0x5B, 0x5F, 0x63, 0x67, 0x6B, 
        0x6F, 0x74, 0x78, 0x7C, 0x80, 0x85, 0x89, 0x8D, 0x92, 0x96, 0x99, 0x9F, 0xA3, 0xA8, 0xAC, 0xB2, 
        0xB6, 0xB8, 0xC1, 0xC9, 0xCF, 0xD2, 0xD6, 0xD9, 0xDD, 0xE1, 0xE4, 0xE9, 0xEB, 0xEE, 0xF0, 0xF3  
},
{
	0x00, 0x02, 0x04, 0x07, 0x09, 0x0C, 0x0F, 0x12, 0x15, 0x18, 0x1C, 0x1F, 0x22, 0x26, 0x29, 0x2D, 
        0x31, 0x34, 0x38, 0x3C, 0x3F, 0x43, 0x47, 0x4B, 0x4F, 0x53, 0x57, 0x5B, 0x5F, 0x63, 0x67, 0x6B, 
        0x6F, 0x74, 0x78, 0x7C, 0x80, 0x85, 0x89, 0x8D, 0x92, 0x96, 0x99, 0x9F, 0xA3, 0xA8, 0xAC, 0xB2, 
        0xB6, 0xB8, 0xC1, 0xC9, 0xCF, 0xD2, 0xD6, 0xD9, 0xDD, 0xE1, 0xE4, 0xE9, 0xEB, 0xEE, 0xF0, 0xF3 
},
{
	0x00, 0x02, 0x04, 0x07, 0x09, 0x0C, 0x0F, 0x12, 0x15, 0x18, 0x1C, 0x1F, 0x22, 0x26, 0x29, 0x2D, 
        0x31, 0x34, 0x38, 0x3C, 0x3F, 0x43, 0x47, 0x4B, 0x4F, 0x53, 0x57, 0x5B, 0x5F, 0x63, 0x67, 0x6B, 
        0x6F, 0x74, 0x78, 0x7C, 0x80, 0x85, 0x89, 0x8D, 0x92, 0x96, 0x99, 0x9F, 0xA3, 0xA8, 0xAC, 0xB2, 
        0xB6, 0xB8, 0xC1, 0xC9, 0xCF, 0xD2, 0xD6, 0xD9, 0xDD, 0xE1, 0xE4, 0xE9, 0xEB, 0xEE, 0xF0, 0xF3 
},
{
	0,    39,    53,    64,    73,    80,    87,    94,
    	99,   105,   110,   115,   120,   124,   128,   132,
   	136,   140,   144,   147,   151,   154,   158,   161,
   	164,   167,   170,   173,   176,   179,   181,   184,
  	187,   189,   192,   195,   197,   200,   202,   204,
   	207,   209,   211,   214,   216,   218,   220,   222,
   	225,   227,   229,   231,   233,   235,   237,   239,
   	241,   243,   245,   247,   249,   250,   252,   254,	      
}
};

//TTL in  miniLVDS out init
#define MAX_TC103_LEN_TCON  (38)		//t3 
unsigned char TC103_INIT_TBL_TCON[MAX_TC103_LEN_TCON][2]=
{
       {0xa0,0x00},{0xa1,0x00},{0xa2,0x00},{0xa3,0x12},{0xa4,0x00},{0xa5,0x00},{0x41,0xe4},{0x02,0x08},
       {0x03,0x02},{0x04,0x05},{0x05,0xfc},{0xb0,0x20},{0xb2,0x0f},{0xb3,0xff},{0x08,0x88},{0x06,0x22},
       {0x07,0xa1},{0x09,0xc2},{0x0d,0xff},{0x0e,0x01},{0x0f,0x07},{0xa7,0x3b},{0xa8,0x80},{0xaa,0x80},
       {0xa9,0x00},{0x40,0xff},{0x1b,0x00},{0xa6,0x00},{0x10,0x01},{0x0e,0x0f},{0x40,0x3f},{0xa6,0x07},
       {0x93,0x01},{0x94,0x01},{0x95,0x01},{0x9d,0x99},{0x99,0x10},{0x9a,0x40},
};	

//背光初始化
#define MAX_TC103_LEN_DBL  (17)
unsigned char TC103_INIT_TBL_DBL[MAX_TC103_LEN_DBL][2]=
{
	{0x00,0x00},{0x01,0x08},{0x02,0x1f},{0x40,0x02},{0x41,0x09},{0x42,0x01},{0x43,0x00},{0x44,0x00},
	{0x45,0x80},{0x46,0x04},{0x47,0x99},{0x48,0x40},{0x49,0x00},{0x4e,0x00},{0x01,0x08},
        {0x02,0x1f},{0x00,0x01},
};


	



