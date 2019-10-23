
# String Hashing Functions

There are three known string hashing algorithms used by the Metal Gear and Zone of the Enders series. Each can be distinguished by the size of the integer they return.

## GV_StrCode (16-bit)

Introduced in the first iteration of LibGV written for Metal Gear Solid.

```c
/*
 * C decompilation
 */
unsigned short GV_StrCode( char *string )
{
	unsigned char c;
	unsigned char *p = (unsigned char *)string;
	unsigned short id;
	
	while ( c = *p++ )
	{
		id = (( id >> 11 ) | ( id << 5 ));
		id += c;
	}
	return id;
}
```

### Notable Behaviors

- Passing an empty string will return zero.
- Passing a single-char string will return the value of the char.
- Mutations of strings differing in only the last character will result in the lowest byte of the hash mirroring that difference.

### Warning

- Given that the digest is only 16 bits wide, this algorithm is highly prone to collisions. Check for collisions after precalculating a set of hashes intended for use at runtime. (e.g. stage data files)

## GV_StrCode (24-bit)

Introduced in the second iteration of LibGV written for Metal Gear Solid 2. The function is also used by subsequent Metal Gear titles.

```c
/*
 * C decompilation
 */
int GV_StrCode( const char *string )
{
	unsigned char c;
	unsigned char *p = (unsigned char *)string;
	unsigned int id = 0, mask = 0x00FFFFFF;
	
	while ( c = *p++ )
	{
		id = (( id << 5 ) | ( id >> 19 ));
		id += c;
		id &= mask;
	}
	return ( !id ) ? 1 : id;
}
```

### Notable Behaviors

- Passing an empty string will return one.
- Passing a single-char string will return the value of the char.
- Mutations of strings differing in only the last character will result in the lowest byte of the hash mirroring that difference.
- Mutations of strings differing by a few characters often result in only slight variations between hex values.

### Warning

- Given that the digest is only 24 bits wide, this algorithm is somewhat prone to collisions. Check for collisions after precalculating a set of hashes intended for use at runtime. (e.g. stage data files)

## FS_StrCode

Introduced Zone of the Enders' implementation of LibFS. The function is also used Anubis: Zone of the Enders.

```cpp
/*
 * C++ decompilation
 */
unsigned int FS_StrCode( char *str )
{
	unsigned int c;
	signed   int n  = 0;
	unsigned int id = 0;
	
	while ( c = *str++ )
	{
		id += (( id << ( c & 0xF )) | (( id >> 3 ) + ( c << ( n & 0xF )) + c ));
		n++;
	}
	return id;
}
```
