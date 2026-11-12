
long FUN_00687520(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  FUN_0043c080();
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 8) + (long)iVar6 * 0x10;
    do {
      FUN_00687730(lVar5);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar6 != 0);
  }
  else if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 8) + (long)iVar6 * 0x10;
    do {
      if (*(long *)(lVar5 + -8) != 0) {
        FUN_004435c0();
      }
      FUN_0043be10(lVar5 + -0x10);
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -0x10;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 != 0) && (0 < iVar6)) {
    iVar2 = *(int *)(param_1 + 0x10);
    lVar5 = *(long *)(param_2 + 8);
    iVar1 = iVar2 + iVar6;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar1) {
      lVar3 = FUN_00426720(PTR_DAT_048607b8,iVar1,0x10,*(undefined8 *)(param_1 + 8),iVar2,
                           param_1 + 0x14);
      *(long *)(param_1 + 8) = lVar3;
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
    }
    if (0 < iVar2) {
      FUN_0043aa30(lVar3 + (long)iVar6 * 0x10,lVar3,(long)iVar2 << 4);
    }
    do {
      FUN_0043bd50(lVar3,lVar5);
      lVar4 = *(long *)(lVar5 + 8);
      *(long *)(lVar3 + 8) = lVar4;
      if (lVar4 != 0) {
        FUN_004435a0();
      }
      iVar6 = iVar6 + -1;
      lVar3 = lVar3 + 0x10;
      lVar5 = lVar5 + 0x10;
    } while (iVar6 != 0);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return param_1;
}

