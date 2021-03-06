/* $Id: XMI.cpp 95802 2012-05-31 12:37:36Z johnnyw $
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */

// Fix for Borland compilers, which seem to have a broken
// <string> include.
#ifdef __BORLANDC__
# include <string.h>
#endif

#include "XMI.hpp"

namespace XMI
{
  // Extension
  //

  Extension::
  Extension ()
  :
  regulator__ ()
  {
  }

  Extension::
  Extension (Extension const& s)
    : XSCRT::Type (),
  id_ (s.id_.get () ? new ::XMLSchema::ID< ACE_TCHAR > (*s.id_) : 0),
  label_ (s.label_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.label_) : 0),
  uuid_ (s.uuid_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.uuid_) : 0),
  href_ (s.href_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.href_) : 0),
  idref_ (s.idref_.get () ? new ::XMLSchema::IDREF< ACE_TCHAR > (*s.idref_) : 0),
  version_ (s.version_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.version_) : 0),
  extender_ (s.extender_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.extender_) : 0),
  extenderID_ (s.extenderID_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.extenderID_) : 0),
  regulator__ ()
  {
    if (id_.get ()) id_->container (this);
    if (label_.get ()) label_->container (this);
    if (uuid_.get ()) uuid_->container (this);
    if (href_.get ()) href_->container (this);
    if (idref_.get ()) idref_->container (this);
    if (version_.get ()) version_->container (this);
    if (extender_.get ()) extender_->container (this);
    if (extenderID_.get ()) extenderID_->container (this);
  }

  Extension& Extension::
  operator= (Extension const& s)
  {
    if (s.id_.get ()) id (*(s.id_));
    else id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (0);

    if (s.label_.get ()) label (*(s.label_));
    else label_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    if (s.uuid_.get ()) uuid (*(s.uuid_));
    else uuid_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    if (s.href_.get ()) href (*(s.href_));
    else href_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    if (s.idref_.get ()) idref (*(s.idref_));
    else idref_ = ::std::auto_ptr< ::XMLSchema::IDREF< ACE_TCHAR > > (0);

    if (s.version_.get ()) version (*(s.version_));
    else version_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    if (s.extender_.get ()) extender (*(s.extender_));
    else extender_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    if (s.extenderID_.get ()) extenderID (*(s.extenderID_));
    else extenderID_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

    return *this;
  }


  // Extension
  //
  bool Extension::
  id_p () const
  {
    return id_.get () != 0;
  }

  ::XMLSchema::ID< ACE_TCHAR > const& Extension::
  id () const
  {
    return *id_;
  }

  ::XMLSchema::ID< ACE_TCHAR >& Extension::
  id ()
  {
    return *id_;
  }

  void Extension::
  id (::XMLSchema::ID< ACE_TCHAR > const& e)
  {
    if (id_.get ())
    {
      *id_ = e;
    }

    else
    {
      id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (new ::XMLSchema::ID< ACE_TCHAR > (e));
      id_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  label_p () const
  {
    return label_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  label () const
  {
    return *label_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  label ()
  {
    return *label_;
  }

  void Extension::
  label (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (label_.get ())
    {
      *label_ = e;
    }

    else
    {
      label_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      label_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  uuid_p () const
  {
    return uuid_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  uuid () const
  {
    return *uuid_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  uuid ()
  {
    return *uuid_;
  }

  void Extension::
  uuid (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (uuid_.get ())
    {
      *uuid_ = e;
    }

    else
    {
      uuid_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      uuid_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  href_p () const
  {
    return href_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  href () const
  {
    return *href_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  href ()
  {
    return *href_;
  }

  void Extension::
  href (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (href_.get ())
    {
      *href_ = e;
    }

    else
    {
      href_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      href_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  idref_p () const
  {
    return idref_.get () != 0;
  }

  ::XMLSchema::IDREF< ACE_TCHAR > const& Extension::
  idref () const
  {
    return *idref_;
  }

  ::XMLSchema::IDREF< ACE_TCHAR >& Extension::
  idref ()
  {
    return *idref_;
  }

  ::XSCRT::Type* Extension::
  idref_ptr ()
  {
      std::basic_string<ACE_TCHAR> temp (idref().id());
    return this->get_idref(temp.c_str());
  }


  void Extension::
  idref (::XMLSchema::IDREF< ACE_TCHAR > const& e)
  {
    if (idref_.get ())
    {
      *idref_ = e;
    }

    else
    {
      idref_ = ::std::auto_ptr< ::XMLSchema::IDREF< ACE_TCHAR > > (new ::XMLSchema::IDREF< ACE_TCHAR > (e));
      idref_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  version_p () const
  {
    return version_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  version () const
  {
    return *version_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  version ()
  {
    return *version_;
  }

  void Extension::
  version (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (version_.get ())
    {
      *version_ = e;
    }

    else
    {
      version_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      version_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  extender_p () const
  {
    return extender_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  extender () const
  {
    return *extender_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  extender ()
  {
    return *extender_;
  }

  void Extension::
  extender (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (extender_.get ())
    {
      *extender_ = e;
    }

    else
    {
      extender_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      extender_->container (this);
    }
  }

  // Extension
  //
  bool Extension::
  extenderID_p () const
  {
    return extenderID_.get () != 0;
  }

  ::XMLSchema::string< ACE_TCHAR > const& Extension::
  extenderID () const
  {
    return *extenderID_;
  }

  ::XMLSchema::string< ACE_TCHAR >& Extension::
  extenderID ()
  {
    return *extenderID_;
  }

  void Extension::
  extenderID (::XMLSchema::string< ACE_TCHAR > const& e)
  {
    if (extenderID_.get ())
    {
      *extenderID_ = e;
    }

    else
    {
      extenderID_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
      extenderID_->container (this);
    }
  }
}

namespace XMI
{
  // Extension
  //

  Extension::
  Extension (::XSCRT::XML::Element< ACE_TCHAR > const& e)
  :Base (e), regulator__ ()
  {

    ::XSCRT::Parser< ACE_TCHAR > p (e);

    while (p.more_attributes ())
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (p.next_attribute ());
      ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (a.name ()));
      if (n == ACE_TEXT ("id"))
      {
        ::XMLSchema::ID< ACE_TCHAR > t (a);
        id (t);
        std::basic_string<ACE_TCHAR> temp ((*id_).c_str());
        (*ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance())->
        add_id(temp, dynamic_cast<XSCRT::Type*> (this));
      }

      else if (n == ACE_TEXT ("label"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        label (t);
      }

      else if (n == ACE_TEXT ("uuid"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        uuid (t);
      }

      else if (n == ACE_TEXT ("href"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        href (t);
      }

      else if (n == ACE_TEXT ("idref"))
      {
        ::XMLSchema::IDREF< ACE_TCHAR > t (a);
        idref (t);
        std::basic_string<ACE_TCHAR> temp ((*idref_).id().c_str());

        (*ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance())->
        add_idref(temp, dynamic_cast<XSCRT::Type*> (this));
      }

      else if (n == ACE_TEXT ("version"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        version (t);
      }

      else if (n == ACE_TEXT ("extender"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        extender (t);
      }

      else if (n == ACE_TEXT ("extenderID"))
      {
        ::XMLSchema::string< ACE_TCHAR > t (a);
        extenderID (t);
      }

      else
      {
      }
    }
  }
}

namespace XMI
{
  namespace reader
  {
    ::XMI::Extension
    extension (xercesc::DOMDocument const* d)
    {
      //Initiate our Singleton as an ACE_TSS object (ensures thread
      //specific storage
      ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


      ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
      if (e.name () == ACE_TEXT("extension"))
      {
        ::XMI::Extension r (e);

        (*TSS_ID_Map)->resolve_idref();

        return r;
      }

      else
      {
        throw 1;
      }
    }
  }
}

#include "ace/XML_Utils/XMLSchema/TypeInfo.hpp"

namespace XMI
{
  namespace
  {
    ::XMLSchema::TypeInfoInitializer < ACE_TCHAR > XMLSchemaTypeInfoInitializer_ (::XSCRT::extended_type_info_map ());

    struct ExtensionTypeInfoInitializer
    {
      ExtensionTypeInfoInitializer ()
      {
        ::XSCRT::TypeId id (typeid (::XMI::Extension));
        ::XSCRT::ExtendedTypeInfo nf (id);

        nf.add_base (::XSCRT::ExtendedTypeInfo::Access::public_, false, typeid (::XSCRT::Type));
        ::XSCRT::extended_type_info_map ().insert (::std::make_pair (id, nf));
      }
    };

    ExtensionTypeInfoInitializer ExtensionTypeInfoInitializer_;
  }
}

namespace XMI
{
  namespace Traversal
  {
    // Extension
    //
    //

    void Extension::
    traverse (Type& o)
    {
      pre (o);
      if (o.id_p ()) id (o);
      else id_none (o);
      if (o.label_p ()) label (o);
      else label_none (o);
      if (o.uuid_p ()) uuid (o);
      else uuid_none (o);
      if (o.href_p ()) href (o);
      else href_none (o);
      if (o.idref_p ()) idref (o);
      else idref_none (o);
      if (o.version_p ()) version (o);
      else version_none (o);
      if (o.extender_p ()) extender (o);
      else extender_none (o);
      if (o.extenderID_p ()) extenderID (o);
      else extenderID_none (o);
      post (o);
    }

    void Extension::
    traverse (Type const& o)
    {
      pre (o);
      if (o.id_p ()) id (o);
      else id_none (o);
      if (o.label_p ()) label (o);
      else label_none (o);
      if (o.uuid_p ()) uuid (o);
      else uuid_none (o);
      if (o.href_p ()) href (o);
      else href_none (o);
      if (o.idref_p ()) idref (o);
      else idref_none (o);
      if (o.version_p ()) version (o);
      else version_none (o);
      if (o.extender_p ()) extender (o);
      else extender_none (o);
      if (o.extenderID_p ()) extenderID (o);
      else extenderID_none (o);
      post (o);
    }

    void Extension::
    pre (Type&)
    {
    }

    void Extension::
    pre (Type const&)
    {
    }

    void Extension::
    id (Type& o)
    {
      dispatch (o.id ());
    }

    void Extension::
    id (Type const& o)
    {
      dispatch (o.id ());
    }

    void Extension::
    id_none (Type&)
    {
    }

    void Extension::
    id_none (Type const&)
    {
    }

    void Extension::
    label (Type& o)
    {
      dispatch (o.label ());
    }

    void Extension::
    label (Type const& o)
    {
      dispatch (o.label ());
    }

    void Extension::
    label_none (Type&)
    {
    }

    void Extension::
    label_none (Type const&)
    {
    }

    void Extension::
    uuid (Type& o)
    {
      dispatch (o.uuid ());
    }

    void Extension::
    uuid (Type const& o)
    {
      dispatch (o.uuid ());
    }

    void Extension::
    uuid_none (Type&)
    {
    }

    void Extension::
    uuid_none (Type const&)
    {
    }

    void Extension::
    href (Type& o)
    {
      dispatch (o.href ());
    }

    void Extension::
    href (Type const& o)
    {
      dispatch (o.href ());
    }

    void Extension::
    href_none (Type&)
    {
    }

    void Extension::
    href_none (Type const&)
    {
    }

    void Extension::
    idref (Type& o)
    {
      dispatch (o.idref ());
    }

    void Extension::
    idref (Type const& o)
    {
      dispatch (o.idref ());
    }

    void Extension::
    idref_none (Type&)
    {
    }

    void Extension::
    idref_none (Type const&)
    {
    }

    void Extension::
    version (Type& o)
    {
      dispatch (o.version ());
    }

    void Extension::
    version (Type const& o)
    {
      dispatch (o.version ());
    }

    void Extension::
    version_none (Type&)
    {
    }

    void Extension::
    version_none (Type const&)
    {
    }

    void Extension::
    extender (Type& o)
    {
      dispatch (o.extender ());
    }

    void Extension::
    extender (Type const& o)
    {
      dispatch (o.extender ());
    }

    void Extension::
    extender_none (Type&)
    {
    }

    void Extension::
    extender_none (Type const&)
    {
    }

    void Extension::
    extenderID (Type& o)
    {
      dispatch (o.extenderID ());
    }

    void Extension::
    extenderID (Type const& o)
    {
      dispatch (o.extenderID ());
    }

    void Extension::
    extenderID_none (Type&)
    {
    }

    void Extension::
    extenderID_none (Type const&)
    {
    }

    void Extension::
    post (Type&)
    {
    }

    void Extension::
    post (Type const&)
    {
    }
  }
}

namespace XMI
{
  namespace Writer
  {
    // Extension
    //
    //

    Extension::
    Extension (::XSCRT::XML::Element< ACE_TCHAR >& e)
    : ::XSCRT::Writer< ACE_TCHAR > (e)
    {
    }

    Extension::
    Extension ()
    {
    }

    void Extension::
    traverse (Type const& o)
    {
      Traversal::Extension::traverse (o);
    }

    void Extension::
    id (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("id"), ACE_TEXT ("http://www.omg.org/XMI"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::id (o);
      attr_ (0);
    }

    void Extension::
    label (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("label"), ACE_TEXT ("http://www.omg.org/XMI"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::label (o);
      attr_ (0);
    }

    void Extension::
    uuid (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("uuid"), ACE_TEXT ("http://www.omg.org/XMI"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::uuid (o);
      attr_ (0);
    }

    void Extension::
    href (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("href"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::href (o);
      attr_ (0);
    }

    void Extension::
    idref (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("idref"), ACE_TEXT ("http://www.omg.org/XMI"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::idref (o);
      attr_ (0);
    }

    void Extension::
    version (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("version"), ACE_TEXT ("http://www.omg.org/XMI"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::version (o);
      attr_ (0);
    }

    void Extension::
    extender (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("extender"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::extender (o);
      attr_ (0);
    }

    void Extension::
    extenderID (Type const& o)
    {
      ::XSCRT::XML::Attribute< ACE_TCHAR > a (ACE_TEXT ("extenderID"), ACE_TEXT (""), top_ ());
      attr_ (&a);
      Traversal::Extension::extenderID (o);
      attr_ (0);
    }
  }
}

namespace XMI
{
  namespace writer
  {
    void
    extension (::XMI::Extension const& s, xercesc::DOMDocument* d)
    {
      ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
      if (e.name () != ACE_TEXT ("extension"))
      {
        throw 1;
      }

      struct W : virtual ::XMI::Writer::Extension,
      virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
      virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
      virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
      virtual ::XSCRT::Writer< ACE_TCHAR >
      {
        W (::XSCRT::XML::Element< ACE_TCHAR >& e)
        : ::XSCRT::Writer< ACE_TCHAR > (e)
        {
        }
      };

      W w (e);
      w.dispatch (s);
    }
  }
}

