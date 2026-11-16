
undefined8 FUN_0283bf14(void)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  if (DAT_05574040 != 0) {
    bVar3 = *(int *)(DAT_05574040 + 0xd4) == 2;
    iVar2 = *(int *)(DAT_05574040 + 0xf4);
    bVar4 = *(int *)(DAT_05574040 + 0xdc) == 2;
    bVar5 = *(int *)(DAT_05574040 + 0xe4) == 2;
    bVar6 = *(int *)(DAT_05574040 + 0xec) == 2;
    bVar7 = *(int *)(DAT_05574040 + 0xfc) == 2;
    if ((bVar7 || (iVar2 == 2 || (bVar6 || (bVar5 || (bVar3 || bVar4))))) ||
       (*(int *)(DAT_05574040 + 0x104) == 2)) {
      uVar1 = 2;
      if (*(int *)(DAT_05574040 + 0xe4) != 2) {
        uVar1 = 3;
      }
      uVar11 = (ulong)(*(int *)(DAT_05574040 + 0xd4) != 2);
      if (!bVar3 && !bVar4) {
        uVar11 = uVar1;
      }
      uVar1 = 4;
      if (iVar2 != 2) {
        uVar1 = 5;
      }
      if (!bVar6 && (!bVar5 && (!bVar3 && !bVar4))) {
        uVar11 = uVar1;
      }
      if (!bVar7 && (iVar2 != 2 && (!bVar6 && (!bVar5 && (!bVar3 && !bVar4))))) {
        uVar11 = 6;
      }
      lVar10 = *(long *)(DAT_05574040 + 0x10);
    }
    else {
      if (*(int *)(DAT_05574040 + 0x10c) != 2) {
        return 0;
      }
      uVar11 = 7;
      lVar10 = *(long *)(DAT_05574040 + 0x10);
    }
    if ((lVar10 != 0) && (plVar8 = *(long **)(lVar10 + uVar11 * 8 + 0xa0), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0283bfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar8 + 0x18))();
      return uVar9;
    }
  }
  return 0;
}

