
# Guy Savage (ZOE3)

Guys Savage is a rejected concept for a third Zone of the Enders title (also known as "Anubis 2"). It was later repurposed as a secret minigame for Metal Gear Solid 3: Snake Eater. The engine seems to have utilized code from both MGS3 and ZOE2.

## Filename Extensions (Archive)

Guy Savage inherited the extension ID system of MGS3, though some modifications have been made to the table.

ID       | Extension(s) | Shared w/ MGS3? | Notes
-------- | ------------ | --------------- | -----
``0x01`` | ``bin``      | Yes             |
``0x02`` | ``gcx``      | Yes             |
``0x03`` | ``tri``      | Yes             |
``0x06`` | ``lt2``      | Yes             |
``0x08`` | ``mtar``     | Yes             |
``0x0d`` | ``mdc``      | Conflict        | MGS3 ``0x0d`` is ``mdl``, ``mdb``, & ``mdc``
``0x0e`` | ``mdb``      | Conflict        |
``0x14`` | ?            | No              | MGS3 ``0x14`` is undefined
``0x16`` | ?            | No              | MGS3 ``0x16`` is undefined
``0x1d`` | ``cvd``      | Conflict        | MGS3 ``cvd`` is ``0x10``
``0x20`` | ?            | No              | MGS3 ``0x20`` is undefined
``0x22`` | ``rcm``      | Conflict        | MGS3 ``rcm`` is ``0x6c``

Debug prints found in the binary suggest that the HZ2 and HZT formats from the Zone of the Enders series are utilized. **These have not yet been paired with their IDs.**

- ``hz2``
- ``hzt``

## Filename Extensions (Stream)

**The filenames of streams within the ``*.dat`` files have been completely discarded, making them unrecoverable without extra information.**

File        | Extension(s) | Notes
----------- | ------------ | -----
``vox.dat`` | (unknown)    | MTAF-format stream