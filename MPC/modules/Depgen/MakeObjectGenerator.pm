package MakeObjectGenerator;

# ************************************************************
# Description   : Generates object files for generic Makefiles.
# Author        : Chad Elliott
# Create Date   : 5/23/2003
# $Id: MakeObjectGenerator.pm 2143 2013-07-09 15:14:04Z mitza $
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use ObjectGenerator;
use DirectoryManager;

use vars qw(@ISA);
@ISA = qw(ObjectGenerator);

my $dm = bless {}, 'DirectoryManager';

# ************************************************************
# Subroutine Section
# ************************************************************

sub process {
  my $noext = $dm->translate_directory($_[1]);
  my @exts  = ('o');
  my @dirs  = (defined $ENV{VDIR} ? $ENV{VDIR} : '');
  $noext =~ s/\.[^\.]+$//o;

  push(@exts, $ENV{SOEXT}) if (defined $ENV{SOEXT});
  push(@dirs, $ENV{VSHDIR}) if (defined $ENV{VSHDIR});

  my @objects;
  foreach my $dirs (@dirs) {
    foreach my $ext (@exts) {
      push(@objects, "$dirs$noext.$ext");
    }
  }

  return \@objects;
}


1;
