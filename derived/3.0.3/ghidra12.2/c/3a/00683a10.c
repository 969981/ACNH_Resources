
void _INIT_1013(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda940;
  if ((*PTR_DAT_04bda940 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdaf68,PTR_DAT_04bdaf70);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

