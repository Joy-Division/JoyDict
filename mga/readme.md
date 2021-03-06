# Metal Gear AC!D & AC!D<sup>2</sup>

Metal Gear AC!D and its sequel Metal Gear AC!D<sup>2</sup> comprise the first iteration of the MGS engine for PlayStation Portable. Metal Gear AC!D was forked from the codebase of MGS3 during the game's development.

## Archive Files

The AC!D games do not use the ``stage.dat`` archive format of the MGS engine's console variants. Instead, ``stage`` is left in directory configuration.

Within each stage subdirectory is a zlib-compressed ``dar`` archive named ``_zar``, which is used to store all files that would normally be found in the root of the subdirectory, excluding ``psq`` sound archives and PRX modules.

### Filename Extensions

The AC!D games inherited the extension ID system of MGS3.

**These have not yet been paired with their IDs.**

- Metal Gear AC!D extensions (from EBOOT.BIN)
```
bin,  cv2,  cvd,  dar,  eft,  fcx,  gcx,  geom, img,  kms,
la2,  lt2,  mdb,  mdc,  mdh,  mdl,  mdp,  mds,  mgm,  mtar,
mtcm, mtfa, mtra, mtsq, mtst, nav,  ola,  prx,  psq,  qar,
rat,  rcm,  rlc,  row,  rpd,  slot, tri,  txp,  vib,  zon
```

- Metal Gear AC!D<sup>2</sup> extensions (from EBOOT.BIN)
```
bin,  cap,  cddl, cv2,  cvd,  dar,  eft,  fcx,  gcx,  geom,
img,  kms,  la2,  lt2,  mdb,  mdc,  mdh,  mdl,  mdp,  mds,
mgm,  mtar, mtcm, mtfa, mtra, mtsq, mtst, nav,  ola,  png,
prx,  psq,  ptcp, qar,  rat,  rcm,  rlc,  row,  rpd,  slot,
tri,  txp,  vib,  zon
```
