// $Id: MessengerClient.cpp 87540 2009-11-13 09:21:51Z dbudko $

#include "MessengerC.h"
#include <iostream>
#include "ace/Get_Opt.h"

const ACE_TCHAR *ior = ACE_TEXT ("file://test.ior");

int
parse_args (int argc, ACE_TCHAR *argv[])
{
  ACE_Get_Opt get_opts (argc, argv, ACE_TEXT("k:"));
  int c;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'k':
        ior = get_opts.opt_arg ();
        break;

      case '?':
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s "
                           "-k <ior> "
                           "\n",
                           argv [0]),
                          -1);
      }
  // Indicates successful parsing of the command line
  return 0;
}

int ACE_TMAIN (int argc, ACE_TCHAR *argv [])
{
  try {
    // Initialize the ORB
    CORBA::ORB_var orb = CORBA::ORB_init (argc, argv);

    if (parse_args (argc, argv) != 0)
        return 1;

    // Converts the contents of the file to an object reference
    CORBA::Object_var obj = orb->string_to_object (ior);
    if (CORBA::is_nil (obj.in())) {
      std::cerr << "Nill Messenger reference" << std::endl;
      return 1;
    }

    // Narrow the object reference to a Messenger object reference
    Messenger_var messenger = Messenger::_narrow(obj.in());
    if (CORBA::is_nil (messenger.in())) {
      std::cerr << "Not a Messenger object reference" << std::endl;
      return 1;
    }

    // Create a message and send it to the Messenger
    CORBA::String_var message = CORBA::string_dup("Hello!");
    messenger->send_message ("TAO User", "TAO Test", message.inout());

    orb->destroy();
    std::cout << "Message was sent" << std::endl;
  }
  catch(const CORBA::Exception& ex) {
    std::cerr << "Client Caught a CORBA exception: " << ex << std::endl;
    return 1;
  }
  std::cout << "Message was sent" << std::endl;
  return 0;
}
