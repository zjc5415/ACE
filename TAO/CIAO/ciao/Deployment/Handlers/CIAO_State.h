/**
 * @file CIAO_State.h
 * @author William R. Otte <wotte@dre.vanderbilt.edu>
 *
 * $Id: CIAO_State.h 94802 2011-10-20 09:46:10Z mcorino $
 */

#ifndef CIAO_STATE_H
#define CIAO_STATE_H

#include <map>
#include <string>

#include "ace/Singleton.h"
#include "ciao/Containers/Container_BaseC.h"
#include "ccm/CCM_HomeC.h"
#include "ccm/CCM_ObjectC.h"
#include "CIAO_Locality_Handler_Export.h"
#include "ciao/Deployment/Handlers/Connection_Handler.h"

namespace CIAO
{
  /**
   * @class Deployment_State
   * @brief Singleton collecting state for the instance handlers.
   *
   */
  class CIAO_Locality_Handler_Export Deployment_State
  {
  public:
    void close (void);

    void add_container (const char *id,
                        CIAO::Container_ptr container);

    void remove_container (const char *id);

    CIAO::Container_ptr fetch_container (const char *id);

    const char * instance_to_container (const char *id);

    void add_home (const char *id, const char *container_id,
                   Components::CCMHome_ptr home);

    void remove_home (const char *id);

    Components::CCMHome_ptr fetch_home (const char *id);

    void add_component (const char *id, const char *container_id,
                        Components::CCMObject_ptr component);

    void remove_component (const char *id);

    Components::CCMObject_ptr fetch_component (const char *id);

    Connection_Handler connection_handler;

  private:
    /// Container administration
    typedef std::map < std::string,
                       CIAO::Container_var > CONTAINERS;

    CONTAINERS containers_;

    TAO_SYNCH_MUTEX  container_mutex_;

    typedef std::map < std::string, std::string > INSTANCE_CONTAINER;

    /// maps instance ids to containers.
    INSTANCE_CONTAINER instance_container_;

    TAO_SYNCH_MUTEX  instance_container_mutex_;

    /// Homes administration
    typedef std::map < std::string,
      Components::CCMHome_var > HOMES;

    HOMES homes_;

    TAO_SYNCH_MUTEX  home_mutex_;

    /// Components administration
    typedef std::map < std::string,
      Components::CCMObject_var > COMPONENTS;

    COMPONENTS components_;

    TAO_SYNCH_MUTEX  component_mutex_;
  };

  typedef ACE_Singleton <Deployment_State,
                         TAO_SYNCH_MUTEX> DEPLOYMENT_STATE;
}

CIAO_LOCALITY_HANDLER_SINGLETON_DECLARE (ACE_Singleton,
                                         CIAO::Deployment_State,
                                         TAO_SYNCH_MUTEX)

#endif
