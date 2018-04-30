### Brook-C

Very basic octet streams. Writes and reads in network order (big endian).

For a Go version, check out [Brook-Go](https://github.com/Piot/brook-go), and .Net-version [Brook-Dotnet](https://github.com/Piot/brook-dotnet).

##### Usage

###### Writing

```c
uint8_t buf[256];
brook_out_stream stream;

brook_out_stream_init(&stream, buf, 256);
brook_out_stream_write_uint16(&stream, 0x14af);
brook_out_stream_flush(&stream);
```

##### Reading

```c
void example_read(uint8_t* buf, size_t size)
{
    brook_in_stream_init(&stream, buf, size);
    uint16_t answer = brook_in_stream_read_uint16(&stream);
}
```
