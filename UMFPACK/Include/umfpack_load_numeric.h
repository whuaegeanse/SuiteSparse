/* ========================================================================== */
/* === umfpack_load_numeric ================================================= */
/* ========================================================================== */

/* -------------------------------------------------------------------------- */
/* Copyright (c) 2005-2012 by Timothy A. Davis, http://www.suitesparse.com.   */
/* All Rights Reserved.  See ../Doc/License.txt for License.                  */
/* -------------------------------------------------------------------------- */

UMFPACK_EXPORT
int umfpack_di_load_numeric
(
    void **Numeric,
    char *filename
) ;

UMFPACK_EXPORT
SuiteSparse_long umfpack_dl_load_numeric
(
    void **Numeric,
    char *filename
) ;

UMFPACK_EXPORT
int umfpack_zi_load_numeric
(
    void **Numeric,
    char *filename
) ;

UMFPACK_EXPORT
SuiteSparse_long umfpack_zl_load_numeric
(
    void **Numeric,
    char *filename
) ;

/*
double int Syntax:

    #include "umfpack.h"
    int status ;
    char *filename ;
    void *Numeric ;
    status = umfpack_di_load_numeric (&Numeric, filename) ;

double SuiteSparse_long Syntax:

    #include "umfpack.h"
    SuiteSparse_long status ;
    char *filename ;
    void *Numeric ;
    status = umfpack_dl_load_numeric (&Numeric, filename) ;

complex int Syntax:

    #include "umfpack.h"
    int status ;
    char *filename ;
    void *Numeric ;
    status = umfpack_zi_load_numeric (&Numeric, filename) ;

complex SuiteSparse_long Syntax:

    #include "umfpack.h"
    SuiteSparse_long status ;
    char *filename ;
    void *Numeric ;
    status = umfpack_zl_load_numeric (&Numeric, filename) ;

Purpose:

    Loads a Numeric object from a file created by umfpack_*_save_numeric.  The
    Numeric handle passed to this routine is overwritten with the new object.
    If that object exists prior to calling this routine, a memory leak will
    occur.  The contents of Numeric are ignored on input.

Returns:

    UMFPACK_OK if successful.
    UMFPACK_ERROR_out_of_memory if not enough memory is available.
    UMFPACK_ERROR_file_IO if an I/O error occurred.

Arguments:

    void **Numeric ;	    Output argument.

	**Numeric is the address of a (void *) pointer variable in the user's
	calling routine (see Syntax, above).  On input, the contents of this
	variable are not defined.  On output, this variable holds a (void *)
	pointer to the Numeric object (if successful), or (void *) NULL if
	a failure occurred.

    char *filename ;	    Input argument, not modified.

	A string that contains the filename from which to read the Numeric
	object.
*/
