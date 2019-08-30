
# Metal Gear Solid: The Twin Snakes

Metal Gear Solid: The Twin Snakes is a GameCube port of Metal Gear Solid 2's codebase, modified to serve as a remake of Metal Gear Solid.

## Filename Extensions (Archive)

The Twin Snakes handles extension IDs in the same manner as MGS2.

Only the first character of the extension is hashed. ``0x61`` (the value of ``a`` in ASCII encoding) is then subtracted from the hash. The final result should always be no more than 8 bits wide.

This method ensures that any given extensions beginning with the same character will collide.

**Note:** In most cases, only one file extension is used per lowercase alphabetic character. These have been mapped to their corresponding IDs in the table below.

ID       | Extension(s) | Notes
-------- | ------------ | -----
``0x00`` | ``a*``       | Unused
``0x01`` | ``b*``       | Unused
``0x02`` | ``c*``       | Unconfirmed: known ``cv*`` variations are ``cv2``, ``cvy``, ``cvd``, & ``cvz``
``0x03`` | ``d*``       | Unused
``0x04`` | ``e*``       | Unused
``0x05`` | ``f*``       | Unconfirmed: likely ``far`` from MGS2
``0x06`` | ``gcx``      |
``0x07`` | ``hzx``      |
``0x08`` | ``i*``       | Unused
``0x09`` | ``j*``       | Unused
``0x0a`` | ``kmx``      |
``0x0b`` | ``l*``       | Unconfirmed: likely ``lt2`` from MGS2
``0x0c`` | ``mar``      |
``0x0d`` | ``n*``       | Unused
``0x0e`` | ``o*``       | Unconfirmed: likely ``o2d`` from MGS2
``0x0f`` | ``p*``       | Unused
``0x10`` | ``q*``       | Unused
``0x11`` | ``r*``       | Undefined: There are many ``r*`` formats in MGS2.
``0x12`` | ``sar``      |
``0x13`` | ``tri``      |
``0x14`` | ``u*``       | Unused
``0x15`` | ``var``      |
``0x16`` | ``w*``       | Unused
``0x17`` | ``x*``       | Unused
``0x18`` | ``y*``       | Unused
``0x19`` | ``z*``       | Unused

Although no version of The Twin Snakes has released with an unpacked ``stage.dat`` or ``face.dat`` archive, a single ``data.cnf`` file from the ``preview`` stage was included on both discs of the North American and Japanese builds.

- ``shared/stage/preview/data.cnf``
```
.nocache
.cache
@cache.qar
stage.hzx
cache.dar
scenerio.gcx
human_out_cold.tri
human_out_cold.kmx
motion2.mar
prev.var
prev.sar
motion.mar
null.kmx
dummy000.kmx
```

# Filename Extensions (Stream)

**The filenames of streams within the ``*.dat`` files have been completely discarded, making them unrecoverable without extra information.**

File          | Extension(s) | Notes
------------- | ------------ | -----
``codec.dat`` | (unknown)    |
``demo.dat``  | (unknown)    |
``movie.dat`` | (unknown)    |
``vox.dat``   | (unknown)    |
