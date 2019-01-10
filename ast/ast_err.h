/*
 * C error define file for facility AST (1521)
 * Generated by the MESSGEN utility
 */

#ifndef AST_ERROR_DEFINED
#define AST_ERROR_DEFINED

/* attribute getting error */
enum { AST__ATGER           	= 233933154 };	/* messid=300 */

/* attribute setting error */
enum { AST__ATSER           	= 233933162 };	/* messid=301 */

/* attribute value invalid */
enum { AST__ATTIN           	= 233933170 };	/* messid=302 */

/* axis index invalid */
enum { AST__AXIIN           	= 233933178 };	/* messid=303 */

/* bad attribute name */
enum { AST__BADAT           	= 233933186 };	/* messid=304 */

/* zero-sized box given */
enum { AST__BADBX           	= 233933194 };	/* messid=305 */

/* bad input data */
enum { AST__BADIN           	= 233933202 };	/* messid=306 */

/* bad number of input coordinates */
enum { AST__BADNI           	= 233933210 };	/* messid=307 */

/* bad number of output coordinates */
enum { AST__BADNO           	= 233933218 };	/* messid=308 */

/* PolyMap contains illegal power value */
enum { AST__BADPW           	= 233933226 };	/* messid=309 */

/* ShiftMap contains no shift information */
enum { AST__BADSM           	= 233933234 };	/* messid=310 */

/* WinMap contains no bounds information */
enum { AST__BADWM           	= 233933242 };	/* messid=311 */

/* bad break index */
enum { AST__BDBRK           	= 233933250 };	/* messid=312 */

/* bad field specifier */
enum { AST__BDFMT           	= 233933258 };	/* messid=313 */

/* invalid FITS keyword value found */
enum { AST__BDFTS           	= 233933266 };	/* messid=314 */

/* inappropriate Object supplied */
enum { AST__BDOBJ           	= 233933274 };	/* messid=315 */

/* wrong number of clipping axes */
enum { AST__CLPAX           	= 233933282 };	/* messid=316 */

/* range of coordinates invalid */
enum { AST__CORNG           	= 233933290 };	/* messid=317 */

/* too many breaks in a curve */
enum { AST__CVBRK           	= 233933298 };	/* messid=318 */

/* array dimensions invalid */
enum { AST__DIMIN           	= 233933306 };	/* messid=319 */

/* date/time error */
enum { AST__DTERR           	= 233933314 };	/* messid=320 */

/* invalid use of astEnd */
enum { AST__ENDIN           	= 233933322 };	/* messid=321 */

/* end of input Channel encountered */
enum { AST__EOCHN           	= 233933330 };	/* messid=322 */

/* attempt to export Object pointer from level zero */
enum { AST__EXPIN           	= 233933338 };	/* messid=323 */

/* corrupted FitsChan supplied */
enum { AST__FCRPT           	= 233933346 };	/* messid=324 */

/* error while formatting coordinate value */
enum { AST__FMTER           	= 233933354 };	/* messid=325 */

/* Frame index invalid */
enum { AST__FRMIN           	= 233933362 };	/* messid=326 */

/* FrameSet invalid */
enum { AST__FRSIN           	= 233933370 };	/* messid=327 */

/* cannot convert FITS data value type */
enum { AST__FTCNV           	= 233933378 };	/* messid=328 */

/* low level graphics error */
enum { AST__GRFER           	= 233933386 };	/* messid=329 */

/* invalid Handle */
enum { AST__INHAN           	= 233933394 };	/* messid=330 */

/* incompatible numbers of coordinates */
enum { AST__INNCO           	= 233933402 };	/* messid=331 */

/* internal programming error */
enum { AST__INTER           	= 233933410 };	/* messid=332 */

/* incompatible transformation directions */
enum { AST__INTRD           	= 233933418 };	/* messid=333 */

/* circular dependency between KeyMaps */
enum { AST__KYCIR           	= 233933426 };	/* messid=334 */

/* class loader error */
enum { AST__LDERR           	= 233933434 };	/* messid=335 */

/* invalid lookup table increment */
enum { AST__LUTII           	= 233933442 };	/* messid=336 */

/* invalid number of lookup table elements */
enum { AST__LUTIN           	= 233933450 };	/* messid=337 */

/* requested memory size invalid */
enum { AST__MEMIN           	= 233933458 };	/* messid=338 */

/* not a 2d or 3d MatrixMap */
enum { AST__MTR23           	= 233933466 };	/* messid=339 */

/* null rotation axis supplied */
enum { AST__MTRAX           	= 233933474 };	/* messid=340 */

/* bad matrix shapes for multiplication */
enum { AST__MTRML           	= 233933482 };	/* messid=341 */

/* null matrix supplied */
enum { AST__MTRMT           	= 233933490 };	/* messid=342 */

/* number of axes invalid */
enum { AST__NAXIN           	= 233933498 };	/* messid=343 */

/* number of characters invalid */
enum { AST__NCHIN           	= 233933506 };	/* messid=344 */

/* number of coordinates invalid */
enum { AST__NCOIN           	= 233933514 };	/* messid=345 */

/* number of coordinates per point invalid */
enum { AST__NCPIN           	= 233933522 };	/* messid=346 */

/* number of array elements invalid */
enum { AST__NELIN           	= 233933530 };	/* messid=347 */

/* number of output coordinates too small */
enum { AST__NOCTS           	= 233933538 };	/* messid=348 */

/* transformation not defined */
enum { AST__NODEF           	= 233933546 };	/* messid=349 */

/* required FITS keywords missing */
enum { AST__NOFTS           	= 233933554 };	/* messid=350 */

/* unable to allocate memory */
enum { AST__NOMEM           	= 233933562 };	/* messid=351 */

/* number of output points too small */
enum { AST__NOPTS           	= 233933570 };	/* messid=352 */

/* attribute is read-only */
enum { AST__NOWRT           	= 233933578 };	/* messid=353 */

/* number of points invalid */
enum { AST__NPTIN           	= 233933586 };	/* messid=354 */

/* Object invalid */
enum { AST__OBJIN           	= 233933594 };	/* messid=355 */

/* invalid Plot option */
enum { AST__OPT             	= 233933602 };	/* messid=356 */

/* points data structure invalid */
enum { AST__PDSIN           	= 233933610 };	/* messid=357 */

/* no numerical labels can be produced */
enum { AST__PLFMT           	= 233933618 };	/* messid=358 */

/* permutation invalid */
enum { AST__PRMIN           	= 233933626 };	/* messid=359 */

/* pointer invalid */
enum { AST__PTRIN           	= 233933634 };	/* messid=360 */

/* range of points invalid */
enum { AST__PTRNG           	= 233933642 };	/* messid=361 */

/* read error */
enum { AST__RDERR           	= 233933650 };	/* messid=362 */

/* invalid or corrupted Region structure supplied */
enum { AST__REGIN           	= 233933658 };	/* messid=363 */

/* invalid attempt to remove last Frame */
enum { AST__REMIN           	= 233933666 };	/* messid=364 */

/* sky coordinate system invalid */
enum { AST__SCSIN           	= 233933674 };	/* messid=365 */

/* axis selection invalid */
enum { AST__SELIN           	= 233933682 };	/* messid=366 */

/* bad SLALIB transformation type */
enum { AST__SLAIN           	= 233933690 };	/* messid=367 */

/* coordinate transformation not defined */
enum { AST__TRNND           	= 233933698 };	/* messid=368 */

/* unmatched quotes */
enum { AST__UNMQT           	= 233933706 };	/* messid=369 */

/* valid area too small */
enum { AST__VSMAL           	= 233933714 };	/* messid=370 */

/* non-existent longitude or latitude axis */
enum { AST__WCSAX           	= 233933722 };	/* messid=371 */

/* too few mapping coordinates */
enum { AST__WCSNC           	= 233933730 };	/* messid=372 */

/* invalid projection parameters */
enum { AST__WCSPA           	= 233933738 };	/* messid=373 */

/* unknown projection type */
enum { AST__WCSTY           	= 233933746 };	/* messid=374 */

/* too many Objects in use at once */
enum { AST__XSOBJ           	= 233933754 };	/* messid=375 */

/* zoom factor invalid */
enum { AST__ZOOMI           	= 233933762 };	/* messid=376 */

/* bad coordinate index */
enum { AST__BADCI           	= 233933770 };	/* messid=377 */

/* FrameSet integrity lost */
enum { AST__ILOST           	= 233933778 };	/* messid=378 */

/* error in IntraMap transformation function */
enum { AST__ITFER           	= 233933786 };	/* messid=379 */

/* IntraMap transformation function name invalid */
enum { AST__ITFNI           	= 233933794 };	/* messid=380 */

/* Mapping bounding box not found */
enum { AST__MBBNF           	= 233933802 };	/* messid=381 */

/* multiple registration of IntraMap transformation function */
enum { AST__MRITF           	= 233933810 };	/* messid=382 */

/* Object class unknown */
enum { AST__OCLUK           	= 233933818 };	/* messid=383 */

/* error while unformatting a coordinate value */
enum { AST__UNFER           	= 233933826 };	/* messid=384 */

/* unregistered IntraMap transformation function */
enum { AST__URITF           	= 233933834 };	/* messid=385 */

/* grid bounds invalid */
enum { AST__GBDIN           	= 233933842 };	/* messid=386 */

/* number of grid dimensions invalid */
enum { AST__NGDIN           	= 233933850 };	/* messid=387 */

/* positional accuracy tolerance invalid */
enum { AST__PATIN           	= 233933858 };	/* messid=388 */

/* sub-pixel interpolation scheme invalid */
enum { AST__SISIN           	= 233933866 };	/* messid=389 */

/* scale size in pixels invalid */
enum { AST__SSPIN           	= 233933874 };	/* messid=390 */

/* error in user-supplied sub-pixel interpolation function */
enum { AST__UINER           	= 233933882 };	/* messid=391 */

/* error in user-supplied 1-d sub-pixel interpolation kernel */
enum { AST__UK1ER           	= 233933890 };	/* messid=392 */

/* invalid comma in expression */
enum { AST__COMIN           	= 233933898 };	/* messid=393 */

/* invalid constant in expression */
enum { AST__CONIN           	= 233933906 };	/* messid=394 */

/* duplicate variable name */
enum { AST__DUVAR           	= 233933914 };	/* messid=395 */

/* invalid number of transformation functions */
enum { AST__INNTF           	= 233933922 };	/* messid=396 */

/* missing or invalid operand in expression */
enum { AST__MIOPA           	= 233933930 };	/* messid=397 */

/* missing or invalid operator in expression */
enum { AST__MIOPR           	= 233933938 };	/* messid=398 */

/* missing variable name */
enum { AST__MISVN           	= 233933946 };	/* messid=399 */

/* missing left parenthesis in expression */
enum { AST__MLPAR           	= 233933954 };	/* messid=400 */

/* missing right parenthesis in expression */
enum { AST__MRPAR           	= 233933962 };	/* messid=401 */

/* missing right hand side in function */
enum { AST__NORHS           	= 233933970 };	/* messid=402 */

/* undefined variable or function in expression */
enum { AST__UDVOF           	= 233933978 };	/* messid=403 */

/* variable name invalid */
enum { AST__VARIN           	= 233933986 };	/* messid=404 */

/* wrong number of function arguments in expression */
enum { AST__WRNFA           	= 233933994 };	/* messid=405 */

/* invalid units specification */
enum { AST__BADUN           	= 233934002 };	/* messid=406 */

/* no rest frequency is defined */
enum { AST__NORSF           	= 233934010 };	/* messid=407 */

/* no standard of rest is defined */
enum { AST__NOSOR           	= 233934018 };	/* messid=408 */

/* invalid SpecMap */
enum { AST__SPCIN           	= 233934026 };	/* messid=409 */

/* invalid XML name or prefix */
enum { AST__XMLNM           	= 233934034 };	/* messid=410 */

/* invalid XML comment text */
enum { AST__XMLCM           	= 233934042 };	/* messid=411 */

/* invalid XML processing instruction target text */
enum { AST__XMLPT           	= 233934050 };	/* messid=412 */

/* invalid XML content item index */
enum { AST__XMLIT           	= 233934058 };	/* messid=413 */

/* supplied XML document is not well formed */
enum { AST__XMLWF           	= 233934066 };	/* messid=414 */

/* Range of log axis scale includes zero */
enum { AST__ZERAX           	= 233934074 };	/* messid=415 */

/* Invalid parameters for offset sky coordinate system */
enum { AST__BADOC           	= 233934082 };	/* messid=416 */

/* error getting a named value from a KeyMap */
enum { AST__MPGER           	= 233934090 };	/* messid=417 */

/* invalid integer index supplied for a KeyMap entry */
enum { AST__MPIND           	= 233934098 };	/* messid=418 */

/* region cannot be re-centred */
enum { AST__REGCN           	= 233934106 };	/* messid=419 */

/* attribute has no usable value */
enum { AST__NOVAL           	= 233934114 };	/* messid=420 */

/* incompatible time scales */
enum { AST__INCTS           	= 233934122 };	/* messid=421 */

/* invalid TimeMap */
enum { AST__TIMIN           	= 233934130 };	/* messid=422 */

/* cannot use supplied AstroCoords info */
enum { AST__STCKEY          	= 233934138 };	/* messid=423 */

/* invalid AstroCoords index */
enum { AST__STCIND          	= 233934146 };	/* messid=424 */

/* cannot conserve flux whilst resampling an array of data */
enum { AST__CNFLX           	= 233934154 };	/* messid=425 */

/* Unknown AST tuning parameter name supplied */
enum { AST__TUNAM           	= 233934162 };	/* messid=426 */

/* Bad value supplied for a public function parameter */
enum { AST__BDPAR           	= 233934170 };	/* messid=427 */

/* Supplied FrameSet does not contain any independent axes */
enum { AST__3DFSET          	= 233934178 };	/* messid=428 */

/* Attempt to delete original Plot3D base Frame */
enum { AST__PXFRRM          	= 233934186 };	/* messid=429 */

/* Illegal syntax for string substitution template */
enum { AST__BADSUB          	= 233934194 };	/* messid=430 */

/* Incompatible flags for re-sampling or re-binning */
enum { AST__BADFLG          	= 233934202 };	/* messid=431 */

/* Error locking or unlocking an AST Object */
enum { AST__LCKERR          	= 233934210 };	/* messid=432 */

/* FITS keyword had undefined value */
enum { AST__FUNDEF          	= 233934218 };	/* messid=433 */

/* invalid integer index supplied for a KeyMap vector element */
enum { AST__MPVIN           	= 233934226 };	/* messid=434 */

/* operation specifier invalid */
enum { AST__OPRIN           	= 233934234 };	/* messid=435 */

/* no inside point found */
enum { AST__NONIN           	= 233934242 };	/* messid=436 */

/* requested key not found in KeyMap */
enum { AST__MPKER           	= 233934250 };	/* messid=437 */

/* error putting a named value into a KeyMap */
enum { AST__MPPER           	= 233934258 };	/* messid=438 */

/* Attempt made to add an entry to a locked KeyMap */
enum { AST__BADKEY          	= 233934266 };	/* messid=439 */

/* Bad data type */
enum { AST__BADTYP          	= 233934274 };	/* messid=440 */

/* Column already exists with different properties */
enum { AST__OLDCOL          	= 233934282 };	/* messid=441 */

/* Bad null value for a FITS table column */
enum { AST__BADNULL         	= 233934290 };	/* messid=442 */

/* Key string is too long */
enum { AST__BIGKEY          	= 233934298 };	/* messid=443 */

/* No such column exists in the table */
enum { AST__BADCOL          	= 233934306 };	/* messid=444 */

/* Table is too large */
enum { AST__BIGTAB          	= 233934314 };	/* messid=445 */

/* Invalid array size */
enum { AST__BADSIZ          	= 233934322 };	/* messid=446 */

/* Error reading WCS from FITS binary table */
enum { AST__BADTAB          	= 233934330 };	/* messid=447 */

/* Cannot access FITS binary table */
enum { AST__NOTAB           	= 233934338 };	/* messid=448 */

/* Error in levmar Levenberg-Marquardt code */
enum { AST__LEVMAR          	= 233934346 };	/* messid=449 */

/* Fit failed */
enum { AST__NOFIT           	= 233934354 };	/* messid=450 */

/* A transformation generated one or more NaN values */
enum { AST__ISNAN           	= 233934362 };	/* messid=451 */

/* write error */
enum { AST__WRERR           	= 233934370 };	/* messid=452 */

/* Bad variant Mapping name */
enum { AST__BDVNM           	= 233934378 };	/* messid=453 */

/* Attempt to add a variant Mapping to a mirror Frame */
enum { AST__MIRRO           	= 233934386 };	/* messid=454 */

/* Error in cminpack Levenberg-Marquardt code */
enum { AST__MNPCK           	= 233934394 };	/* messid=455 */

/* Supplied array has too many pixels */
enum { AST__EXSPIX          	= 233934402 };	/* messid=456 */

/* No mapping found between coordinate systems */
enum { AST__NOCNV           	= 233934410 };	/* messid=457 */

/* Attempt to change an immutable attribute */
enum { AST__IMMUT           	= 233934418 };	/* messid=458 */

/* No bounding box available */
enum { AST__NOBOX           	= 233934426 };	/* messid=459 */

/* Supplied Frame has no sky coordinate axes */
enum { AST__NOSKY           	= 233934434 };	/* messid=460 */

/* Sky axes cannot be separated from other axes */
enum { AST__BDSKY           	= 233934442 };	/* messid=461 */

/* Wrong class of object supplied */
enum { AST__BDCLS           	= 233934450 };	/* messid=462 */

/* Class does not implement the invoked method */
enum { AST__NOIMP           	= 233934458 };	/* messid=463 */

/* Normalised MOC is too big */
enum { AST__BGMOC           	= 233934466 };	/* messid=464 */

/* Invalid argument value supplied to an AST method */
enum { AST__INVAR           	= 233934474 };	/* messid=465 */


#endif	/* AST_ERROR_DEFINED */
