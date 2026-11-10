
void FUN_0027fee4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xd];
  *param_1 = (long)(PTR_DAT_04bcdc20 + 0x10);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
  }
  thunk_FUN_00221120(param_1);
  return;
}

