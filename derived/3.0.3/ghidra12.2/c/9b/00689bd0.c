
void FUN_00689bd0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_DAT_048607b8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    iVar5 = 0;
    lVar4 = *(long *)(param_1 + 8) + (long)iVar1 * 0x50;
    do {
      iVar6 = *(int *)(lVar4 + -0x40);
      if (0 < iVar6) {
        lVar3 = *(long *)(lVar4 + -0x48) + (long)iVar6 * 0x78;
        do {
          lVar3 = lVar3 + -0x78;
          FUN_00689cf0(lVar3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar4 + -0x40) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + -0x3c)) && (*(long *)(lVar4 + -0x48) != 0)) {
        FUN_00421f90(puVar2,*(long *)(lVar4 + -0x48),0x78,*(uint *)(lVar4 + -0x3c) & 0x3fffffff);
      }
      *(undefined8 *)(lVar4 + -0x48) = 0;
      *(undefined4 *)(lVar4 + -0x3c) = 0x80000000;
      FUN_0043be10(lVar4 + -0x50);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + -0x50;
    } while (iVar5 != iVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar2,*(long *)(param_1 + 8),0x50,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_0043be10(param_1);
  return;
}

