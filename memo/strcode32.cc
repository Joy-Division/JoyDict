#include <stdint.h>

//!
//! @brief      3rd-generation string-hashing function.
//!             Originally from "ZONE OF THE ENDERS" (2001).
//!
//! Returns a 32-bit hash of a given string, or "string code."
//! This algorithm is used for referencing various resoureces in place of
//! direct string comparisons, helping to optimize memory accesses.
//!
//! @param      str         NULL-terminated string.
//!
//! @retval     0           if @p string is empty.
//! @retval     non-zero    32-bit hash of @p string.
//!
uint32_t FS_StrCode( char *str )
{
    uint32_t c;
    int32_t  n = 0;
    uint32_t id = 0;

    while (( c = *str++ ))
    {
        id += ((id << (c & 0x0f)) | ((id >> 3) + (c << (n & 0x0f)) + c));
        n++;
    }
    return id;
}
