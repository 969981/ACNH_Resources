
undefined4 FUN_006923c0(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0x806db;
  lVar1 = FUN_001429c4();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_00147344();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      FUN_00142be4(param_1[1]);
      param_1[1] = 0;
      return 0x806db;
    }
    FUN_00149a00(lVar1,7,1);
    uVar2 = 0;
  }
  return uVar2;
}

