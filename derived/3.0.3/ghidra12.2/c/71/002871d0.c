
long FUN_002871d0(long param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xd8) {
    lVar4 = (long)*(int *)(param_1 + 0xec);
    lVar9 = *(long *)(param_1 + 0xe0) - lVar4;
    uVar7 = (ulong)(param_3 - 1);
    lVar5 = -lVar4;
    lVar6 = (param_1 + 0xd8) - lVar4;
    uVar8 = ~uVar7;
    if (param_4 != 0) {
      if (param_4 == 1) {
        lVar3 = 0;
        do {
          uVar10 = *(ulong *)(lVar9 + 0x18);
          if (((param_2 <= uVar10) &&
              (lVar1 = lVar9 + (ulong)*(ushort *)(lVar9 + 0x12) + 0x20,
              (param_2 - lVar1) + (lVar1 + uVar7 & uVar8) <= uVar10)) &&
             ((lVar3 == 0 || (uVar10 < *(ulong *)(lVar3 + 0x18))))) {
            lVar3 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + lVar4 + 8) + lVar5;
        } while (lVar9 != lVar6);
      }
      else if (param_4 == 2) {
        lVar3 = 0;
        do {
          uVar10 = *(ulong *)(lVar9 + 0x18);
          if (((param_2 <= uVar10) &&
              (lVar1 = lVar9 + (ulong)*(ushort *)(lVar9 + 0x12) + 0x20,
              (param_2 - lVar1) + (lVar1 + uVar7 & uVar8) <= uVar10)) &&
             ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < uVar10)))) {
            lVar3 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + lVar4 + 8) + lVar5;
        } while (lVar9 != lVar6);
      }
      else {
        lVar3 = 0;
        do {
          if (param_2 <= *(ulong *)(lVar9 + 0x18)) {
            lVar1 = lVar9 + (ulong)*(ushort *)(lVar9 + 0x12) + 0x20;
            lVar2 = lVar9;
            if (lVar3 != 0) {
              lVar2 = lVar3;
            }
            if ((param_2 - lVar1) + (lVar1 + uVar7 & uVar8) <= *(ulong *)(lVar9 + 0x18)) {
              lVar3 = lVar2;
            }
          }
          lVar9 = *(long *)(lVar9 + lVar4 + 8) + lVar5;
        } while (lVar9 != lVar6);
      }
      return lVar3;
    }
    do {
      if ((param_2 <= *(ulong *)(lVar9 + 0x18)) &&
         (lVar3 = lVar9 + (ulong)*(ushort *)(lVar9 + 0x12) + 0x20,
         (param_2 - lVar3) + (lVar3 + uVar7 & uVar8) <= *(ulong *)(lVar9 + 0x18))) {
        return lVar9;
      }
      lVar9 = *(long *)(lVar9 + lVar4 + 8) + lVar5;
    } while (lVar9 != lVar6);
  }
  return 0;
}

