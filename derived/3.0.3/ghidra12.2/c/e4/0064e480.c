
void _INIT_870(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd9cd8;
  if ((*PTR_DAT_04bd9cd8 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bda000,PTR_DAT_04bda008);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

