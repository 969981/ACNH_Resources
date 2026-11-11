
void _INIT_801(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb9f0;
  if ((*PTR_DAT_04bdb9f0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbd50,PTR_DAT_04bdbd58);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

