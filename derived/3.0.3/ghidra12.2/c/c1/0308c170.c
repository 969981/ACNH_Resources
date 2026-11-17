
undefined8 FUN_0308c170(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_16d0 [5792];
  undefined1 auStack_12 [2];
  
  FUN_007ef010(auStack_12);
  FUN_007e4920(auStack_16d0,auStack_12);
  uVar4 = FUN_007e85b0(auStack_16d0);
  if ((((uVar4 & 1) == 0) && (uVar4 = FUN_0344cc40(param_2), (uVar4 & 1) == 0)) &&
     ((uVar4 = FUN_0308b800(param_2), (uVar4 & 1) != 0 ||
      (uVar4 = FUN_0308b8e0(param_1,param_2), (uVar4 & 1) != 0)))) {
    FUN_007ef010(auStack_12,param_2);
    FUN_007e4920(auStack_16d0,auStack_12);
    iVar1 = FUN_007e4d10(auStack_16d0);
    if (iVar1 != -1) {
      FUN_007ef010(auStack_12,param_2);
      FUN_007e4920(auStack_16d0,auStack_12);
      FUN_02582a24(param_1);
      uVar2 = FUN_02582d8c(param_1,1);
      if (((uVar2 < 8) &&
          (lVar6 = *(long *)PTR_DAT_04bb4fb8,
          *(char *)(lVar6 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(int *)(lVar6 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 0)) {
        uVar2 = (uint)*(byte *)(lVar6 + (ulong)uVar2 * 0x13f0 + 0x13d5);
      }
      else {
        uVar2 = 0xffffffff;
      }
      uVar3 = FUN_007e4d10(auStack_16d0);
      if (uVar2 != uVar3) goto LAB_0308c1bc;
    }
    uVar5 = 1;
  }
  else {
LAB_0308c1bc:
    uVar5 = 0;
  }
  return uVar5;
}

