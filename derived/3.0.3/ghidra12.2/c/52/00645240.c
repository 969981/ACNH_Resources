
void _INIT_830(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdb9c8;
  if ((*PTR_DAT_04bdb9c8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdbd00,PTR_DAT_04bdbd08);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

