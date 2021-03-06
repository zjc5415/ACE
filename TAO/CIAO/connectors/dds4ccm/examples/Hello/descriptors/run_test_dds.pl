eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id: run_test_dds.pl 88099 2009-12-10 20:03:11Z msmit $
# -*- perl -*-

use lib "$ENV{'ACE_ROOT'}/bin";
use PerlACE::TestTarget;

$CIAO_ROOT = "$ENV{'CIAO_ROOT'}";

$tg_sender = PerlACE::TestTarget::create_target (1) || die "Create target for EM failed\n";
$tg_receiver = PerlACE::TestTarget::create_target (1) || die "Create target for EM failed\n";


print "Start receiver\n";
$R = $tg_receiver->CreateProcess ("$CIAO_ROOT/connectors/dds4ccm/examples/Hello/DDS_Receiver/DDS_receiver", "");
$R->Spawn();
print "Start sender\n";
$S = $tg_sender->CreateProcess ("$CIAO_ROOT/connectors/dds4ccm/examples/Hello/DDS_Sender/DDS_Sender",
                        "-i 10000 -t -s \"Hello, World\"");
$S->SpawnWaitKill ($tg_sender->ProcessStartWaitInterval ());
$R->Kill ();

exit 0;
