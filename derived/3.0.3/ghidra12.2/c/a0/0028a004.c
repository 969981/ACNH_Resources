
void FUN_0028a004(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bcdca8 + 0x10);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      return;
    }
    FUN_002890dc(lVar1,param_1);
  }
  param_1[1] = 1;
  return;
}

