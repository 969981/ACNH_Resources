
void FUN_0025f310(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_04bcd930 + 0x10);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    FUN_00285dc0();
    param_1[0xe] = 0;
  }
  param_1[0x10] = 0;
  thunk_FUN_00221120(param_1);
  return;
}

