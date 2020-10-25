# Zone of the Enders 2

Anubis: Zone of the Enders -- titled Zone of the Enders: The 2nd Runner outside of Japan -- is the sequel to Zone of the Enders. While the codebase is primarily built upon ZOE's, it also incorproated the file archive and stream formats of MGS2.

## Archive Files

Two 32-bit digests, calculated with the function ``FS_StrCode``, are stored in place of filenames. One is a hash of the original filename, and the other is a hash of only the original filename's extension.

```
Filename  : 0xef8e8758
Extension : 0x000863be

0xef8e8758 = "jehuty.scx"
0x000863be = "scx"

* The double quotations are not part of the string used to generate the hash.
```

### Filename Extensions

StrCode ID     | Extension | Notes
-------------- | --------- | -----
``0x62877d7f`` | ``bin``   |
``0x00cb3b7a`` | ``cvz``   |
``0x00037e6b`` | ``eft``   |
``0x0688d9eb`` | ``ene``   |
``0x066e60c1`` | ``flw``   |
``0x03696528`` | ``fnt``   |
``0x0010abbd`` | ``hz2``   |
``0x0037b1e7`` | ``hzt``   |
``0x001ced17`` | ``lit``   |
``0x003b12fb`` | ``mdz``   |
``0x038ab1d7`` | ``mfl``   |
``0x00ed22c7`` | ``mtl``   |
``0x0000856a`` | ``mts``   |
``0x003b530d`` | ``mtz``   |
``0x000054d5`` | ``o2d``   |
``0x00104639`` | ``ric``   | PlayStation 2 icon format
``0x398168e9`` | ``row``   |
``0x0000321e`` | ``rpd``   |
``0x000863be`` | ``scx``   |
``0x001e5452`` | ``tex``   |
``0x001373d8`` | ``trz``   |
``0x00000e56`` | ``var``   |

Filename extensions from data not found in ``stage.dat``:

StrCode ID     | Extension | Notes
-------------- | --------- | -----
``0x00004b0e`` | ``atr``   |
``0x002216e1`` | ``brk``   |
``0x00ec22b5`` | ``mdl``   |
``0x03799c56`` | ``nhz``   | listed in the executable
``0x000ffdf4`` | ``pic``   | Softimage PIC format
