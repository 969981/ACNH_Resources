
void _INIT_200(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd6638;
  if ((*PTR_DAT_04bd6638 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd66b0,PTR_DAT_04bd66b8);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

