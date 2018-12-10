CONFIG_FILE=config_log
CC=gcc
INCLUDE_PATH=./include

ALL : 
# check if not configured yet
ifeq (,$(wildcard $(CONFIG_FILE)))
	@echo "Failed to Makefile: No configured yet."
else
	@echo "Makefile success."
endif

% :　%.c
	$(CC) %< -o %@ -I $(INCLUDE_PATH)