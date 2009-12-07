#ifndef _BERT_DECODER_H_
#define _BERT_DECODER_H_

#include <bert/data.h>

#include <sys/types.h>

#define BERT_DECODE_MEMORY	-3
#define BERT_DECODE_MISSING	-2
#define BERT_DECODE_INVALID	-1
#define BERT_DECODE_NONE	0
#define BERT_DECODE_DATA	1

struct bert_decoder
{
	const unsigned char *buffer;
	size_t length;

	unsigned int index;
	const unsigned char *ptr;
};
typedef struct bert_decoder bert_decoder_t;

extern void bert_decode_init(bert_decoder_t *decoder,const unsigned char *buffer,size_t buffer_length);
extern int bert_decode_data(bert_decoder_t *decoder,bert_data_t **data_ptr);

#endif
