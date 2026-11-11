
void _INIT_180(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd6e90;
  if ((*PTR_DAT_04bd6e90 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd7f70,PTR_DAT_04bd7f78);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

