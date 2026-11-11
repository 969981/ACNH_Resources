
void _INIT_90(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd4b38;
  if ((*PTR_DAT_04bd4b38 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd4b48,PTR_DAT_04bd4b50);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

