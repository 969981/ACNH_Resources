# R67 exact ACNH 3.0.3 ELF SHA: 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180
# Before sourcing: use a real game debug session with the matching 3.0.3 ELF.
# Obtain the actual module base from debugger maps; define:
#   set $main_base = 0xYOUR_VERIFIED_MODULE_BASE
# Never run against an unverified game build or zero module base.
# All breakpoints below inspect only and continue, no memory writes.
break *($main_base + 0x19f756c)
commands
  silent
  printf "R67 GardeningIcon, stack pair before call to 0x672610\n"
  x/2gx $sp
  x/s *(char **)($sp + 8)
  info registers x0 x1 x2 x8 x9
  bt 10
  continue
end
break *($main_base + 0x19f6dfc)
commands
  silent
  printf "R67 DIYRecipeIcon, X1 argument before call to 0x3F04470\n"
  x/s $x1
  info registers x0 x1 x2 x8 x22 x23
  bt 10
  continue
end
# This script does not assert the call target is a resource loader.
