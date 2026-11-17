
bool FUN_03088530(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_16c2 [2];
  undefined1 auStack_16c0 [5792];
  
  iVar1 = *param_3;
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else if (iVar1 == 2) {
    FUN_007ef010(auStack_16c2);
    FUN_007e4920(auStack_16c0,auStack_16c2);
    FUN_02582a24(param_1 + 0x1f8);
    uVar3 = FUN_02582d8c(param_1 + 0x1f8,1);
    if (((uVar3 < 8) &&
        (lVar5 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0,
        *(char *)(lVar5 + 0x13d4) != '\0')) && (*(int *)(lVar5 + 0x13d0) == 0)) {
      uVar3 = (uint)*(byte *)(lVar5 + 0x13d5);
    }
    else {
      uVar3 = 0xffffffff;
    }
    uVar4 = FUN_007e4d10(auStack_16c0);
    bVar2 = uVar3 != uVar4;
  }
  else if (iVar1 == 1) {
    FUN_007ef010(auStack_16c2);
    FUN_007e4920(auStack_16c0,auStack_16c2);
    FUN_02582a24(param_1 + 0x1f8);
    uVar3 = FUN_02582d8c(param_1 + 0x1f8,1);
    if (((uVar3 < 8) &&
        (lVar5 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0,
        *(char *)(lVar5 + 0x13d4) != '\0')) && (*(int *)(lVar5 + 0x13d0) == 0)) {
      uVar3 = (uint)*(byte *)(lVar5 + 0x13d5);
    }
    else {
      uVar3 = 0xffffffff;
    }
    uVar4 = FUN_007e4d10(auStack_16c0);
    bVar2 = uVar3 == uVar4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

