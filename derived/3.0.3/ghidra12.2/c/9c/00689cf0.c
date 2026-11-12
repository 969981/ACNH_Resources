
void FUN_00689cf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x70);
  if (0 < iVar3) {
    lVar2 = *(long *)(param_1 + 0x68) + (long)iVar3 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x68),8,*(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  FUN_0043be10(param_1 + 0x60);
  FUN_0043be10(param_1 + 0x58);
  FUN_0043be10(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 8),0x60,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}

