// $Id: LF_Event_Binder.cpp 91628 2010-09-07 11:11:12Z johnnyw $

#include "tao/LF_Event_Binder.h"

#if !defined (__ACE_INLINE__)
# include "tao/LF_Event_Binder.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_LF_Event_Binder::~TAO_LF_Event_Binder (void)
{
  this->event_->unbind (follower_);
}

TAO_END_VERSIONED_NAMESPACE_DECL
