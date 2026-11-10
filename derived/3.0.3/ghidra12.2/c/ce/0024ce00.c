
void thunk_FUN_0025f5b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xc];
  *param_1 = (long)(PTR_DAT_04bcd940 + 0x10);
  if (lVar1 != 0) {
    FUN_00220f6c(lVar1);
    FUN_00285dc0(lVar1);
  }
  param_1[0xd] = 0;
  thunk_FUN_00221120(param_1);
  return;
}

