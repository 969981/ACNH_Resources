
void FUN_00204858(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[5];
  *param_1 = (long)(PTR_DAT_04bccba8 + 0x10);
  if (lVar1 != 0) {
    FUN_001f9c08(lVar1);
    FUN_00185ac4(lVar1);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_002070dc(lVar1);
    FUN_00185ac4(lVar1);
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  FUN_001f87d0();
  FUN_002045b0(param_1);
  return;
}

