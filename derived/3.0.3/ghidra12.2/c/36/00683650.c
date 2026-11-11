
void _INIT_1001(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda918;
  if ((*PTR_DAT_04bda918 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdaf18,PTR_DAT_04bdaf20);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

