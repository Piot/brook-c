/*

MIT License

Copyright (c) 2017 Peter Bjorklund

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
#ifndef brook_out_stream_h
#define brook_out_stream_h

#include <stddef.h>
#include <stdint.h>

typedef struct brook_out_stream {
	uint8_t* octets;
	uint8_t* p;
	const uint8_t* last_p;
} brook_out_stream;

void brook_out_stream_init(brook_out_stream* self, uint8_t* octets, size_t octet_count);
void brook_out_stream_write_uint8(brook_out_stream* self, uint8_t v);
void brook_out_stream_write_uint16(brook_out_stream* self, uint16_t v);
void brook_out_stream_write_uint32(brook_out_stream* self, uint32_t v);
void brook_out_stream_write_octets(brook_out_stream* self, const uint8_t* octets, size_t octet_count);
size_t brook_out_stream_flush(brook_out_stream* self);

#endif
