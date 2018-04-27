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
#ifndef brook_in_stream_h
#define brook_in_stream_h

#include <stddef.h>
#include <stdint.h>

typedef struct brook_in_stream {
	const uint8_t* octets;
	const uint8_t* p;
	const uint8_t* last_p;
	size_t octet_count;
} brook_in_stream;

void brook_in_stream_init(brook_in_stream* self, const uint8_t* octets, size_t octet_count);
uint8_t brook_in_stream_read_uint8(brook_in_stream* self);
uint16_t brook_in_stream_read_uint16(brook_in_stream* self);
uint32_t brook_in_stream_read_uint32(brook_in_stream* self);
void brook_in_stream_read_internal_pointer(brook_in_stream* self, const uint8_t** p, size_t* octets_left);
void brook_in_stream_read_skip(brook_in_stream* self, size_t octet_count);
size_t brook_in_stream_octets_left(const brook_in_stream* self);
size_t brook_in_stream_octets_read(const brook_in_stream* self);

#endif
