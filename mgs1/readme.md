# Metal Gear Solid

Metal Gear Solid for PlayStation is 3D reimagining of and sequel to Konami's final MSX2 title, Metal Gear 2: Solid Snake. Its codebase would become the basis of most subsequent Metal Gear titles as well as the console entries in the Zone of the Enders series.

## Archive Data

In place of filename strings, files are identified with 24-bit values consisting of a 16-bit hash of the filename (sans extension), calculated using ``GV_StrCode()``, and an 8-bit ID representing the extension.

### Filename Extensions

Only the first character of the extension is hashed. The result is simply the identity of the ASCII character passed to the function, and can safely be clamped to 8-bits.

**Note:** This method ensures that any given extensions beginning with the same character will collide.

ID       | Extension(s)              | Notes
-------- | ------------------------- | -----
``0x61`` | ``aar``, ``azm``          |
``0x62`` | ``bin``                   |
``0x63`` | ``con``                   | ``data.cnf`` is only used for loading files from the ``stage`` directory. ``stage.dir`` instead contains equivalent data in each stage block's header.
``0x64`` | ``d*``                    | ``dar`` file IDs in ``stage.dir`` are handled specially.
``0x65`` | ``efx``                   |
``0x66`` | ``f*``                    | Unused
``0x67`` | ``gcx``                   |
``0x68`` | ``hzm``                   |
``0x69`` | ``img``                   |
``0x6A`` | ``j*``                    | Unused
``0x6B`` | ``kmd``                   |
``0x6C`` | ``lit``                   |
``0x6D`` | ``mdx``, ``mt3``          |
``0x6E`` | ``n*``                    | Unconfirmed<br>A ``nar`` format is hinted at, see below.
``0x6F`` | ``oar``                   |
``0x70`` | ``pcc``, ``pcx``          | ``pcc`` is an alternate extension for PCX images.
``0x71`` | ``q*``                    | Unknown<br>PlayStation TIM-format image ``test.q*``
``0x72`` | ``rar``, ``res``, ``rpk`` |
``0x73`` | ``sgt``                   |
``0x74`` | ``t*``                    | Unused
``0x75`` | ``u*``                    | Unused
``0x76`` | ``v*``                    | Unused
``0x77`` | ``wvx``                   |
``0x78`` | ``x*``                    | Unused
``0x79`` | ``y*``                    | Unused
``0x7A`` | ``zmd``                   |

The presence of ``nar`` data in any released build is currently undetermined, however, function prototypes from a portion of the game's source code accidentally written into the overlays reveal that it at least existed at one point in development.
```c
extern int DG_LoadInitKmd( void *, int ) ;
extern int DG_LoadInitNar( DG_NARS *, int ) ;
extern int DG_LoadInitOar( DG_OAR *, int ) ;
extern int DG_LoadInitImg( DG_IMG *, int ) ;
```

Currently, all file names within face.dat are unknown as it has never appeared unpacked.

## Stream Files

**The filenames of streams within the ``*.dat`` files have been completely discarded, making them unrecoverable without external information.**

### Filename Extensions

File          | Extension(s)     | Notes
------------- | ---------------- | -----
``brf.dat``   | ``dbl``, ``pcx`` | A table of ``dbl`` filenames can be found with the code for the ``brf`` stage.
``demo.dat``  | ``dmo``          |
``radio.dat`` | (Unknown)        |
``vox.dat``   | ``vox``          |
