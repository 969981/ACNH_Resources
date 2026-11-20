
void FUN_03f58c0c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bdf1e8 + 0x10);
  puVar1 = PTR_DAT_04bdf328;
  if (param_1[3] != 0) {
    (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
    param_1[4] = 0;
  }
  return;
}

