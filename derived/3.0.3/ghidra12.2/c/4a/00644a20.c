
void _INIT_804(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb9b0;
  if ((*PTR_DAT_04bdb9b0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbcd0,PTR_DAT_04bdbcd8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

