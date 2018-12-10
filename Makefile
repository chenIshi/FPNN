CONFIG_FILE=config_log

ALL : 
# check if not configured yet
ifeq (,$(wildcard $(CONFIG_FILE)))
	@echo "Failed to Makefile: No configured yet."
else
	@echo "Makefile success."
endif