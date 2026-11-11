
void _INIT_805(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb9a8;
  if ((*PTR_DAT_04bdb9a8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbcc0,PTR_DAT_04bdbcc8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

