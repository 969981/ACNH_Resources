
void FUN_002bc4b8(long *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x48))();
  if (param_1[0xb] != 0) {
    FUN_00285dc0();
    param_1[0xb] = 0;
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[10] = 0;
  }
  return;
}

