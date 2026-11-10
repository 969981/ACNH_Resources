
void FUN_0027ab44(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_04bcdb98 + 0x10);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  param_1[0x12] = (long)(PTR_DAT_04bcba18 + 0x10);
  FUN_0021f584(param_1 + 0x13);
  thunk_FUN_00221120(param_1);
  return;
}

