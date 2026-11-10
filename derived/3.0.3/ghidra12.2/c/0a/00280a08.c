
void FUN_00280a08(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *param_1 = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[1] = 0;
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[2] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[3] = 0;
  }
  if ((*(char *)((long)param_1 + 0x4c) != '\0') && (lVar1 = param_1[4], lVar1 != 0)) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[4] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[5] = 0;
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    param_1[10] = 0;
  }
  return;
}

