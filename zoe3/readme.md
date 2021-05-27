# Guy Savage

Guys Savage is a rejected concept for ZOE3 (a.k.a. Anubis 2). It was repurposed as a secret minigame in Metal Gear Solid 3: Snake Eater. The engine seems to have utilized code from both MGS3 and ZOE2.

## Archive Data

A 24-bit hash of the filename (sans extension) is calulcated with ``GV_StrCode()``, accompanied by an 8-bit extension ID.

### Filename Extensions

Guy Savage inherited the extension ID system of MGS3, though the mapping has been changed somewhat.

ID       | Extension(s) | Shared w/ MGS3? | Notes
-------- | ------------ | --------------- | -----
``0x01`` | ``bin``      | Yes             |
``0x02`` | ``gcx``      | Yes             |
``0x03`` | ``tri``      | Yes             |
``0x06`` | ``lt2``      | Yes             |
``0x08`` | ``mtar``     | Yes             |
``0x0D`` | ``mdc``      | Conflict        | MGS3 ``0x0d`` == ``mdl`` / ``mdb`` / ``mdc``
``0x0E`` | ``mdb``      | Conflict        | See above.
``0x14`` | ``row``      | No              |
``0x16`` | (UNKNOWN)    | No              |
``0x1D`` | ``cvd``      | Conflict        | MGS3 ``cvd`` == ``0x10``
``0x20`` | (UNKNOWN)    | No              |
``0x22`` | ``rcm``      | Conflict        | MGS3 ``rcm`` == ``0x6C``

**Note:** Debug strings found in the binary suggest that the HZ2 & HZT formats from ZOE/ZOE2 are utilized.
