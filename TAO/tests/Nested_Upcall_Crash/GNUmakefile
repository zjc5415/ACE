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

all: Nested_Upcall_Crash_Idl Nested_Upcall_Crash_Server Nested_Upcall_Crash_Client Nested_Upcall_Crash_Scavenger

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Scavenger $(@)

.PHONY: Nested_Upcall_Crash_Idl
Nested_Upcall_Crash_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Idl all

.PHONY: Nested_Upcall_Crash_Server
Nested_Upcall_Crash_Server: Nested_Upcall_Crash_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Server all

.PHONY: Nested_Upcall_Crash_Client
Nested_Upcall_Crash_Client: Nested_Upcall_Crash_Idl Nested_Upcall_Crash_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Client all

.PHONY: Nested_Upcall_Crash_Scavenger
Nested_Upcall_Crash_Scavenger: Nested_Upcall_Crash_Idl Nested_Upcall_Crash_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Nested_Upcall_Crash_Scavenger all

project_name_list:
	@echo Nested_Upcall_Crash_Client
	@echo Nested_Upcall_Crash_Idl
	@echo Nested_Upcall_Crash_Scavenger
	@echo Nested_Upcall_Crash_Server
