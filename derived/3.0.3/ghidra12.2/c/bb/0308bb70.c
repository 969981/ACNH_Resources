
undefined8 FUN_0308bb70(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_2d7a [2];
  undefined1 auStack_2d78 [5792];
  int local_16d8;
  undefined1 auStack_16d2 [2];
  undefined1 auStack_16d0 [5792];
  
  FUN_007ef010(auStack_2d7a,param_1);
  FUN_007e4920(auStack_2d78,auStack_2d7a);
  uVar2 = FUN_007e4bb0(auStack_2d78);
  if ((uVar2 & 1) != 0) {
    FUN_007ef010(auStack_16d2,param_1);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    uVar2 = FUN_007e4bb0(auStack_16d0);
    if ((((uVar2 & 1) == 0) || (local_16d8 = FUN_007e68d0(auStack_16d0), local_16d8 == 0)) ||
       (local_16d8 == 1)) {
      return 0;
    }
    uVar2 = FUN_0344ca60(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_007ef010(auStack_16d2,param_1);
      FUN_007e4920(auStack_16d0,auStack_16d2);
      uVar1 = FUN_007e68d0(auStack_16d0);
      if (0x19 < uVar1) {
        return 0;
      }
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x3038000U) == 0) {
        return 0;
      }
    }
  }
  return 1;
}

