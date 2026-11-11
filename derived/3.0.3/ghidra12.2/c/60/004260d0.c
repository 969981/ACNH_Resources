
void _INIT_40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd4990;
  if ((*PTR_DAT_04bd4990 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd4a00,PTR_DAT_04bd4a08);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

