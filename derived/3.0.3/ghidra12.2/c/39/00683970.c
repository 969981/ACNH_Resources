
void _INIT_1011(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda968;
  if ((*PTR_DAT_04bda968 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdafb8,PTR_DAT_04bdafc0);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

