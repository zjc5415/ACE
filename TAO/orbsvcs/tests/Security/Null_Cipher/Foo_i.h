// -*- C++ -*-

//=============================================================================
/**
 * @file Foo_i.h
 *
 * $Id: Foo_i.h 90222 2010-05-21 17:23:45Z mesnier_p $
 *
 * Implementation header for the Null_Cipher test.
 *
 * @author Ossama Othman <ossama@uci.edu>
 */
//=============================================================================

#ifndef NULL_CIPHER_FOO_I_H
#define NULL_CIPHER_FOO_I_H

#include "FooS.h"

class Foo_i : public virtual POA_Foo
{
public:

  /// Constructor.
  Foo_i (CORBA::ORB_ptr);

  virtual void shutdown (void);

private:

  /// Reference to the ORB.
  CORBA::ORB_var orb_;

};

#endif  /* NULL_CIPHER_FOO_I_H */