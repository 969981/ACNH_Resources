
void FUN_004cb350(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar2 = *(long *)(lVar1 + 8) + (long)iVar3 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_004cb350(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(lVar1 + 0x14)) && (*(long *)(lVar1 + 8) != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,*(long *)(lVar1 + 8),8,*(uint *)(lVar1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x14) = 0x80000000;
  FUN_0043be10(lVar1);
  FUN_00438870(lVar1,0x20);
  return;
}

