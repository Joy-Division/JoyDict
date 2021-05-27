# Metal Gear Solid 2

Metal Gear Solid 2: Sons of Liberty is the sequel to Metal Gear Solid.

## Archive Data

In place of filename strings, files are identified with a 32-bit value consisting of a 24-bit hash of the filename (sans extension), calculated using ``GV_StrCode()``, and an 8-bit ID representing the extension.

### Filename Extensions

Only the first character of the extension is hashed; this results in an ID which is simply the value of the ASCII character passed to the function. The result should always be no more than 8 bits wide.

**Note:** This method ensures that any given extensions beginning with the same character will collide.

Certain data formats and their respective extenions differ between the PlayStation 2 and DirectX (Xbox, Win32) versions of the engine.

ID       | PlayStation2 | DirectX Version | Notes
-------- | ------------ | --------------- | -----
``0x00`` | ``anm``      | (No Change)     |
``0x01`` | ``bin``      | (No Change)     | Unused
``0x02`` | ``cv2``      | ``cvy``         | ``cm2`` possibly exists within ``tri``
``0x03`` | ``d*``       | (No Change)     | Unused
``0x04`` | ``evm``      | ``evx``         |
``0x05`` | ``far``      | (No Change)     |
``0x06`` | ``gcx``      | (No Change)     |
``0x07`` | ``hzx``      | (No Change)     |
``0x08`` | ``i*``       | (No Change)     | Unused
``0x09`` | ``j*``       | (No Change)     | Unused
``0x0A`` | ``kms``      | ``kmy``         |
``0x0B`` | ``lt2``      | (No Change)     |
``0x0C`` | ``m*``       | (No Change)     | See below
``0x0D`` | ``n*``       | (No Change)     | Unused
``0x0E`` | ``o2d``      | (No Change)     |
``0x0F`` | ``p*``       | (No Change)     | Unused
``0x10`` | ``q*``       | (No Change)     | Unused
``0x11`` | ``r*``       | (No Change)     | See below
``0x12`` | ``sar``      | (No Change)     |
``0x13`` | ``tri``      | (Unused)        | Changed to ``xti`` for DirectX
``0x14`` | ``u*``       | (No Change)     | Unused
``0x15`` | ``var``      | (No Change)     |
``0x16`` | ``w*``       | (No Change)     | Unused
``0x17`` | ``x*``       | ``xti``         | Changed from ``tri`` for PS2
``0x18`` | ``y*``       | (No Change)     | Unused
``0x19`` | ``zms``      | (Unused)        |

#### m-Extensions

Extension | DirectX Version | Notes
--------- | --------------- | -----
``mar``   | (No Change)     | ``MARa``
``mdl``   | (No Change)     | ``Physics 3D Model file 8020.0002``

#### r-Extensions

PlayStation2 | DirectX Version | Notes
------------ | --------------- | -----
``rat``      | (No Change)     |
``raw``      | (No Change)     |
``ric``      | (Unused)        | PlayStation 2 ``ico`` format
``rim``      | ``rix``         | ``reflact02.rim`` leftover in Win32 stage ``a31b``
``rmt``      | (No Change)     |
``rol``      | (No Change)     |
``row``      | (No Change)     | some ``.row`` files don't exist on PlayStation 2
``rpd``      | (No Change)     |
``rpt``      | (No Change)     | ``RPT Version 2.00 ( 2000/07/13 )``<br>At least one ``mdl`` file exists mislabeled ``.rpt``
``rtx``      | (No Change)     | photo terminal text script
(Unknown)    | ``rwv``         | PlayStation 2 data is different

## Stream Data

**The filenames of streams within the ``*.dat`` files have been completely discarded, making them unrecoverable without external information.**

**Note:** All stream files were given the extension ``.sdt`` in the HD Edition, however, it's doubtful that ``.sdt`` is the original extension as Bluepoint elected to work with data extracted from the original PlayStation 2 retail builds.
