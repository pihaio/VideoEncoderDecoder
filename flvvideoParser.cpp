#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAG_TYPE_SCRIPT 10
#define TAG_TYPE_SCRIPT 8
#define TAG_TYPE_SCRIPT 9

typedef unsigned char byte;
typedef unsigned int uint;

typedef struct {
	byte Signature[3];
	byte Version;
	byte Flags;
	uint DataOffset;
} FLV_HEADER;

typedef struct {
	byte TagType;
	byte DataSize[3];
	byte Timestamp[3];
	uint Reserved;
} TAG_HEADER;

int parserFLV_simple(char *url)
{
	// whether output audio/video stream
	int output_a = 1;
	int output_v = 1;

	FILE *ifh = NULL;
	FILE *vfh = NULL;
	FILE *afh = NULL;

	FILE *myout = stdout;

	FLV_HEADER flv;
	TAG_HEADER tagHeader;

	uint previousTagsize;
	uint previousTagsizeo_z = 0;

	uint ts = 0;
	uint ts_new = 0;

	ifh = fopen(url, "rb+");
	if ( ifh == NULL ) {
		printf("Failed to open files!");
		return -1;
	}

	//FLV file header
	fread((char *)&flv, 1, sizeof(FLV_HEADER), ifh);

	fprintf(myout, "===========FLV HEADER==========\n");
	fprintf(myout, "Sig===========FLV HEADER==========\n");
	fprintf(myout, "===========FLV HEADER==========\n");
	fprintf(myout, "===========FLV HEADER==========\n");
	fprintf(myout, "===========FLV HEADER==========\n");

}
