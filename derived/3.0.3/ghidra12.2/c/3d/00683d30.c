
void _INIT_1023(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda9e8;
  if ((*PTR_DAT_04bda9e8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdb0b8,PTR_DAT_04bdb0c0);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

