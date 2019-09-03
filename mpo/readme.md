
# Metal Gear Solid: Portable Ops

Metal Gear Solid: Portable Ops and its expansion Portable Ops Plus comprise the second iteration of the MGS engine for PlayStation Portable. Built upon the codebase of the AC!D series, MPO incorporated even more code originally written for MGS3, such as the slot file system.

## Archive Files

As with AC!D, MPO does not use the ``stage.dat`` archive format of the MGS engine's console variants. Instead, ``stage`` is left in directory configuration.

Within each stage subdirectory is a zlib-compressed ``dar`` archive named ``_zar``, which is used to store all files that would normally be found in the root of the subdirectory, excluding PRX modules.

### Filename Extensions

MPO inherited the extension ID system of MGS3.

**These have not yet been paired with their IDs.**

- MPO extensions (from EBOOT.BIN)
```
bgp,  bin,  cap,  cddl, cnf,  cv2,  cvd,  dar,  eft,  fcx,
gcx,  geom, img,  kms,  la2,  lt2,  mdb,  mdc,  mdh,  mdl,
mdp,  mdpb, mds,  mgm,  mtar, mtcm, mtfa, mtra, mtsq, mtst,
nav,  ola,  pcmp, png,  prx,  psq,  ptcp, qar,  rat,  rcm,
rlc,  row,  rpd,  sep,  slot, tri,  txp,  vib,  zon
```

## Stream Files

**The filenames of streams within the ``*.dat`` files have been completely discarded, making them unrecoverable without extra information.**

### Filename Extensions

File      | Extension(s) | Notes
--------- | ------------ | -----
codec.dat | (unknown)    |
slot.dat  | (unknown)    | ``slot.dat`` is a concatenation of several ``slot`` archives; The individual archives within likely bore the ``.slot`` extension.
