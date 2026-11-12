
void FUN_007b71f8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = DAT_05694df8;
  if (*(int *)(param_1 + 0x18) == 5) {
    if ((DAT_05694df8 != 0) && (lVar3 = *(long *)(DAT_05694df8 + 8), lVar3 != 0)) {
      iVar1 = *(int *)(lVar3 + 0x1b0);
      if (iVar1 == 2 || iVar1 == 4) {
        return;
      }
      iVar6 = *(int *)(lVar3 + 0x324);
      if (iVar1 == 3 && iVar6 == 0xf) {
        uVar4 = FUN_02e29f0c();
        if ((uVar4 & 1) == 0) {
          return;
        }
        iVar6 = *(int *)(*(long *)(lVar2 + 8) + 0x324);
      }
      uVar5 = 6;
      if ((iVar1 != 3) || (iVar6 != 0x20)) goto LAB_007b72f4;
      uVar4 = FUN_02e29f0c();
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    uVar5 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 2) {
      return;
    }
    if ((DAT_05694df8 != 0) && (lVar3 = *(long *)(DAT_05694df8 + 8), lVar3 != 0)) {
      iVar1 = *(int *)(lVar3 + 0x1b0);
      if (iVar1 == 2 || iVar1 == 4) {
        return;
      }
      iVar6 = *(int *)(lVar3 + 0x324);
      if (iVar1 == 3 && iVar6 == 0xf) {
        uVar4 = FUN_02e29f0c();
        if ((uVar4 & 1) == 0) {
          return;
        }
        iVar6 = *(int *)(*(long *)(lVar2 + 8) + 0x324);
      }
      uVar5 = 3;
      if ((iVar1 != 3) || (iVar6 != 0x20)) goto LAB_007b72f4;
      uVar4 = FUN_02e29f0c();
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    uVar5 = 3;
  }
LAB_007b72f4:
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  DAT_055c11c0 = 0;
  return;
}

