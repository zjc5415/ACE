// -*- C++ -*-
// $Id: LF_Follower_Auto_Adder.inl 94002 2011-04-26 12:22:19Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO_LF_Follower_Auto_Adder::
    TAO_LF_Follower_Auto_Adder (TAO_Leader_Follower &lf,
                                TAO_LF_Follower *follower)
  : leader_follower_ (lf)
  , follower_ (follower)
{
  (void) this->leader_follower_.add_follower (this->follower_);
}

TAO_END_VERSIONED_NAMESPACE_DECL
