# ACNH 3.0.3 original ELF only; 3.0.3 SHA=83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180
# GDB: attach debugger to OWN authorized local game session; read-only observations.
# Determine real executable module load address from the debugger's maps.
# Manually assign after verifying the loaded BuildID / matching 3.0.3 ELF:
# set $main_base = 0x<actual_module_base>
# Do not paste '<actual_module_base>' literally; no breakpoint is active yet.
# Suggested breakpoints use AFTER ADRP+ADD so the register contains candidate literal VA.

# GardeningIcon  original code at 0x19f754c
# Upon known correct module base:
# break *($main_base + 0x19f7554)
# commands
#   silent
#   printf "Observed UI family candidate at 0x19f7554\n"
#   x/s $x9
#   info registers x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
#   bt 8
#   continue
# end

# DIYRecipeIcon  original code at 0x19f6d54
# Upon known correct module base:
# break *($main_base + 0x19f6d5c)
# commands
#   silent
#   printf "Observed UI family candidate at 0x19f6d5c\n"
#   x/s $x8
#   info registers x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
#   bt 8
#   continue
# end

# DIYRecipeIcon  original code at 0x19f6d6c
# Upon known correct module base:
# break *($main_base + 0x19f6d74)
# commands
#   silent
#   printf "Observed UI family candidate at 0x19f6d74\n"
#   x/s $x1
#   info registers x0 x1 x2 x3 x4 x5 x6 x7 x8 x9
#   bt 8
#   continue
# end

# No runtime logs have been collected in this research run.
# Do not identify nearby BL/BLR targets as verified loader functions.
# Re-check each register at the hit before treating it as a string pointer.
