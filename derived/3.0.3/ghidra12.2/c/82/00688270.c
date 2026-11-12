
void FUN_00688270(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar1 = *(long *)(param_1 + 0x18) + (long)iVar2 * 0x18;
    do {
      lVar1 = lVar1 + -0x18;
      FUN_0043be10(lVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,*(long *)(param_1 + 0x18),0x18,
                 *(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_0043be10(param_1);
  return;
}

