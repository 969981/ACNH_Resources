
void FUN_0025caf0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xc];
  *param_1 = (long)(PTR_DAT_04bcd660 + 0x10);
  if (lVar1 != 0) {
    FUN_00220f6c(lVar1);
    FUN_00285dc0(lVar1);
  }
  param_1[0x11] = 0;
  thunk_FUN_00221120(param_1);
  return;
}

