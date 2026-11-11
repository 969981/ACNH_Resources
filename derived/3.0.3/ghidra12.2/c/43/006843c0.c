
void FUN_006843c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_048607b8;
  iVar4 = *(int *)(param_1 + 0x20);
  if (0 < iVar4) {
    iVar5 = 0;
    lVar3 = *(long *)(param_1 + 0x18) + (long)iVar4 * 0x28;
    do {
      iVar6 = *(int *)(lVar3 + -0x18);
      if (0 < iVar6) {
        lVar2 = *(long *)(lVar3 + -0x20) + (long)iVar6 * 0x18;
        do {
          lVar2 = lVar2 + -0x18;
          FUN_0043be10(lVar2);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar3 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar3 + -0x14)) && (*(long *)(lVar3 + -0x20) != 0)) {
        FUN_00421f90(puVar1,*(long *)(lVar3 + -0x20),0x18,*(uint *)(lVar3 + -0x14) & 0x3fffffff);
      }
      *(undefined8 *)(lVar3 + -0x20) = 0;
      *(undefined4 *)(lVar3 + -0x14) = 0x80000000;
      FUN_0043be10(lVar3 + -0x28);
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + -0x28;
    } while (iVar5 != iVar4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x18),0x28,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0 < iVar4) {
    lVar3 = *(long *)(param_1 + 8) + (long)iVar4 * 0x18;
    do {
      lVar3 = lVar3 + -0x18;
      FUN_0043be10(lVar3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 8),0x18,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_0043be10(param_1);
  return;
}

