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

all: CPUAffinity_idl_gen CPUAffinity_stub CPUAffinity_lem_gen CPUAffinity_lem_stub CPUAffinity_exec CPUAffinity_svnt CommandlinePassage_idl_gen CommandlinePassage_stub CommandlinePassage_lem_gen CommandlinePassage_lem_stub CommandlinePassage_exec CommandlinePassage_svnt UnexpectedShutdown_idl_gen UnexpectedShutdown_stub UnexpectedShutdown_lem_gen UnexpectedShutdown_lem_stub UnexpectedShutdown_exec UnexpectedShutdown_svnt

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_idl_gen $(@)
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_stub $(@)
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_lem_gen $(@)
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_lem_stub $(@)
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_exec $(@)
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_svnt $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_idl_gen $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_stub $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_lem_gen $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_lem_stub $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_exec $(@)
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_svnt $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_idl_gen $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_stub $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_lem_gen $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_lem_stub $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_exec $(@)
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_svnt $(@)

.PHONY: CPUAffinity_idl_gen
CPUAffinity_idl_gen:
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_idl_gen all

.PHONY: CPUAffinity_stub
CPUAffinity_stub: CPUAffinity_idl_gen
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_stub all

.PHONY: CPUAffinity_lem_gen
CPUAffinity_lem_gen: CPUAffinity_idl_gen
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_lem_gen all

.PHONY: CPUAffinity_lem_stub
CPUAffinity_lem_stub: CPUAffinity_stub CPUAffinity_lem_gen
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_lem_stub all

.PHONY: CPUAffinity_exec
CPUAffinity_exec: CPUAffinity_stub CPUAffinity_lem_stub
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_exec all

.PHONY: CPUAffinity_svnt
CPUAffinity_svnt: CPUAffinity_lem_stub
	$(KEEP_GOING)@cd CPUAffinity && $(MAKE) -f GNUmakefile.CPUAffinity_svnt all

.PHONY: CommandlinePassage_idl_gen
CommandlinePassage_idl_gen:
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_idl_gen all

.PHONY: CommandlinePassage_stub
CommandlinePassage_stub: CommandlinePassage_idl_gen
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_stub all

.PHONY: CommandlinePassage_lem_gen
CommandlinePassage_lem_gen: CommandlinePassage_idl_gen
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_lem_gen all

.PHONY: CommandlinePassage_lem_stub
CommandlinePassage_lem_stub: CommandlinePassage_stub CommandlinePassage_lem_gen
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_lem_stub all

.PHONY: CommandlinePassage_exec
CommandlinePassage_exec: CommandlinePassage_stub CommandlinePassage_lem_stub
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_exec all

.PHONY: CommandlinePassage_svnt
CommandlinePassage_svnt: CommandlinePassage_lem_stub
	$(KEEP_GOING)@cd CommandlinePassage && $(MAKE) -f GNUmakefile.CommandlinePassage_svnt all

.PHONY: UnexpectedShutdown_idl_gen
UnexpectedShutdown_idl_gen:
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_idl_gen all

.PHONY: UnexpectedShutdown_stub
UnexpectedShutdown_stub: UnexpectedShutdown_idl_gen
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_stub all

.PHONY: UnexpectedShutdown_lem_gen
UnexpectedShutdown_lem_gen: UnexpectedShutdown_idl_gen
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_lem_gen all

.PHONY: UnexpectedShutdown_lem_stub
UnexpectedShutdown_lem_stub: UnexpectedShutdown_stub UnexpectedShutdown_lem_gen
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_lem_stub all

.PHONY: UnexpectedShutdown_exec
UnexpectedShutdown_exec: UnexpectedShutdown_stub UnexpectedShutdown_lem_stub
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_exec all

.PHONY: UnexpectedShutdown_svnt
UnexpectedShutdown_svnt: UnexpectedShutdown_lem_stub
	$(KEEP_GOING)@cd UnexpectedShutdown && $(MAKE) -f GNUmakefile.UnexpectedShutdown_svnt all

project_name_list:
	@echo CPUAffinity_exec
	@echo CPUAffinity_idl_gen
	@echo CPUAffinity_lem_gen
	@echo CPUAffinity_lem_stub
	@echo CPUAffinity_stub
	@echo CPUAffinity_svnt
	@echo CommandlinePassage_exec
	@echo CommandlinePassage_idl_gen
	@echo CommandlinePassage_lem_gen
	@echo CommandlinePassage_lem_stub
	@echo CommandlinePassage_stub
	@echo CommandlinePassage_svnt
	@echo UnexpectedShutdown_exec
	@echo UnexpectedShutdown_idl_gen
	@echo UnexpectedShutdown_lem_gen
	@echo UnexpectedShutdown_lem_stub
	@echo UnexpectedShutdown_stub
	@echo UnexpectedShutdown_svnt
