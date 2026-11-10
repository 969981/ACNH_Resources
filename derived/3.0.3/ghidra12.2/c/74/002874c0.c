
long FUN_002874c0(long param_1,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0xd8);
  lVar6 = *plVar2;
  lVar3 = 0;
  lVar5 = (long)*(int *)(param_1 + 0xec);
  if (*(int *)(param_1 + 0xe8) < 1) {
    lVar6 = 0;
  }
  lVar8 = lVar6 - lVar5;
  if (lVar6 != 0 && lVar8 != 0) {
    lVar6 = -lVar5;
    uVar1 = param_3 - 1;
    iVar7 = 0x20 - (int)param_2;
    lVar3 = lVar8;
    if (param_4 == 0) {
      while ((uVar9 = *(ulong *)(lVar3 + 0x18), uVar9 < param_2 ||
             (uVar9 < (iVar7 + (int)lVar3 + (int)uVar9 + (uint)*(ushort *)(lVar3 + 0x12) & uVar1) +
                      param_2))) {
        if (*(long **)(lVar3 + lVar5) == plVar2) {
          return 0;
        }
        lVar3 = (long)*(long **)(lVar3 + lVar5) + lVar6;
        if (lVar3 == 0) {
          return 0;
        }
      }
    }
    else if (param_4 == 1) {
      lVar3 = 0;
      do {
        uVar9 = *(ulong *)(lVar8 + 0x18);
        if (((param_2 <= uVar9) &&
            ((iVar7 + (int)lVar8 + (int)uVar9 + (uint)*(ushort *)(lVar8 + 0x12) & uVar1) + param_2
             <= uVar9)) && ((lVar3 == 0 || (uVar9 < *(ulong *)(lVar3 + 0x18))))) {
          lVar3 = lVar8;
        }
      } while ((*(long **)(lVar8 + lVar5) != plVar2) &&
              (lVar8 = (long)*(long **)(lVar8 + lVar5) + lVar6, lVar8 != 0));
    }
    else if (param_4 == 2) {
      lVar3 = 0;
      do {
        uVar9 = *(ulong *)(lVar8 + 0x18);
        if (((param_2 <= uVar9) &&
            ((iVar7 + (int)lVar8 + (int)uVar9 + (uint)*(ushort *)(lVar8 + 0x12) & uVar1) + param_2
             <= uVar9)) && ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < uVar9)))) {
          lVar3 = lVar8;
        }
      } while ((*(long **)(lVar8 + lVar5) != plVar2) &&
              (lVar8 = (long)*(long **)(lVar8 + lVar5) + lVar6, lVar8 != 0));
    }
    else {
      lVar4 = 0;
      do {
        uVar9 = *(ulong *)(lVar8 + 0x18);
        lVar3 = lVar4;
        if (((param_2 <= uVar9) &&
            ((iVar7 + (int)lVar8 + (int)uVar9 + (uint)*(ushort *)(lVar8 + 0x12) & uVar1) + param_2
             <= uVar9)) && (lVar3 = lVar8, lVar4 != 0)) {
          lVar3 = lVar4;
        }
        if (*(long **)(lVar8 + lVar5) == plVar2) break;
        lVar8 = (long)*(long **)(lVar8 + lVar5) + lVar6;
        lVar4 = lVar3;
      } while (lVar8 != 0);
    }
  }
  return lVar3;
}

