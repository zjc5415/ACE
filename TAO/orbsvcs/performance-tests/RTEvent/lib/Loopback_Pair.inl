/**
 * @file Loopback_Pair.inl
 *
 * $Id: Loopback_Pair.inl 43763 2002-03-02 00:00:38Z coryan $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

ACE_INLINE
Loopback_Pair::Loopback_Pair (void)
{
}

ACE_INLINE Loopback_Supplier *
Loopback_Pair::loopback_supplier (void) const
{
  return this->loopback_supplier_.in ();
}

ACE_INLINE Loopback_Consumer *
Loopback_Pair::loopback_consumer (void) const
{
  return this->loopback_consumer_.in ();
}
