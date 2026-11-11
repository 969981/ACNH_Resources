
void _INIT_808(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdba80;
  if ((*PTR_DAT_04bdba80 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbe70,PTR_DAT_04bdbe78);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

