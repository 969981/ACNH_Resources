
long * FUN_00433a10(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 1);
    lVar9 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar2) {
      lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x18,*param_1,(int)param_1[1]);
      *param_1 = lVar4;
    }
    uVar10 = *(uint *)(param_1 + 1);
    iVar7 = uVar10 - uVar2;
    if (0 < iVar7) {
      lVar4 = *param_1 + (long)(int)uVar10 * 0x18;
      do {
        if (*(long *)(lVar4 + -8) != 0) {
          FUN_004435c0();
        }
        FUN_0043be10(lVar4 + -0x10);
        FUN_0043be10(lVar4 + -0x18);
        iVar7 = iVar7 + -1;
        lVar4 = lVar4 + -0x18;
      } while (iVar7 != 0);
      uVar10 = *(uint *)(param_1 + 1);
    }
    lVar4 = *param_1;
    uVar1 = uVar10;
    if ((int)uVar2 <= (int)uVar10) {
      uVar1 = uVar2;
    }
    if ((lVar4 != lVar9) && (0 < (int)uVar1)) {
      uVar11 = (ulong)uVar1;
      lVar6 = lVar9 + 8;
      lVar4 = lVar4 + 8;
      do {
        FUN_0043c080(lVar4 + -8,lVar6 + -8);
        FUN_0043c080(lVar4,lVar6);
        lVar8 = *(long *)(lVar6 + 8);
        if (lVar8 != 0) {
          FUN_004435a0(lVar8);
        }
        lVar5 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar8;
        if (lVar5 != 0) {
          FUN_004435c0();
        }
        uVar11 = uVar11 - 1;
        lVar6 = lVar6 + 0x18;
        lVar4 = lVar4 + 0x18;
      } while (uVar11 != 0);
      lVar4 = *param_1;
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
      if ((int)uVar3 < (int)~uVar10) {
        uVar3 = ~uVar10;
      }
      lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
      iVar7 = uVar2 + uVar3 + 1;
      do {
        FUN_0043bd50(lVar4,lVar9);
        FUN_0043bd50(lVar4 + 8,lVar9 + 8);
        lVar6 = *(long *)(lVar9 + 0x10);
        *(long *)(lVar4 + 0x10) = lVar6;
        if (lVar6 != 0) {
          FUN_004435a0();
        }
        iVar7 = iVar7 + -1;
        lVar4 = lVar4 + 0x18;
        lVar9 = lVar9 + 0x18;
      } while (iVar7 != 0);
    }
    *(uint *)(param_1 + 1) = uVar2;
  }
  return param_1;
}

