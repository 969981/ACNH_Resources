
bool FUN_0308bab0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_16c2 [2];
  undefined1 auStack_16c0 [5792];
  
  FUN_007ef010(auStack_16c2);
  FUN_007e4920(auStack_16c0,auStack_16c2);
  FUN_02582a24(param_1);
  uVar1 = FUN_02582d8c(param_1,1);
  if (((uVar1 < 8) &&
      (lVar3 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
      ) && (*(int *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 0)) {
    uVar1 = (uint)*(byte *)(lVar3 + (ulong)uVar1 * 0x13f0 + 0x13d5);
  }
  else {
    uVar1 = 0xffffffff;
  }
  uVar2 = FUN_007e4d10(auStack_16c0);
  return uVar1 == uVar2;
}

