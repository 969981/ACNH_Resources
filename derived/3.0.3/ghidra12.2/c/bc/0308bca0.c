
undefined8 FUN_0308bca0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_2d7a [2];
  undefined1 auStack_2d78 [5798];
  undefined1 auStack_16d2 [2];
  undefined1 auStack_16d0 [5792];
  
  FUN_007ef010(auStack_2d7a,param_1);
  FUN_007e4920(auStack_2d78,auStack_2d7a);
  uVar2 = FUN_007e4bb0(auStack_2d78);
  if ((uVar2 & 1) != 0) {
    FUN_007ef010(auStack_16d2,param_1);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    iVar1 = FUN_007e68d0(auStack_16d0);
    if (iVar1 - 0x1bU < 3) {
      return 1;
    }
  }
  return 0;
}

