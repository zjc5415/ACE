# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-644/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 10 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: InheritedOp_Idl InheritedOp_Server InheritedOp_Client

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Client $(@)

.PHONY: InheritedOp_Idl
InheritedOp_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Idl all

.PHONY: InheritedOp_Server
InheritedOp_Server: InheritedOp_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Server all

.PHONY: InheritedOp_Client
InheritedOp_Client: InheritedOp_Idl InheritedOp_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.InheritedOp_Client all

project_name_list:
	@echo InheritedOp_Client
	@echo InheritedOp_Idl
	@echo InheritedOp_Server
