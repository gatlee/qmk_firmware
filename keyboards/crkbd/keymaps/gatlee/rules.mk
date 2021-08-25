# copied from users/manna-harbour_miryoku/rules.mk
# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku
# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift
OLED_DRIVER_ENABLE = yes
WPM_ENABLE = yes
LTO_ENABLE = yes

# alternative layouts:

# alphas
OPT_DEFS += -DMIRYOKU_ALPHAS_QWERTY

# nav
OPT_DEFS += -DMIRYOKU_NAV_VI

# clipboard
ifneq ($(strip $(MIRYOKU_CLIPBOARD)),)
  OPT_DEFS += -DMIRYOKU_CLIPBOARD_$(MIRYOKU_CLIPBOARD)
endif

# layers
ifneq ($(strip $(MIRYOKU_LAYERS)),)
  OPT_DEFS += -DMIRYOKU_LAYERS_$(MIRYOKU_LAYERS)
endif

# subset mappings
ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif
