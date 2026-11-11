
void _INIT_100(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd4bd0;
  if ((*PTR_DAT_04bd4bd0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd4bf8,PTR_DAT_04bd4c00);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

