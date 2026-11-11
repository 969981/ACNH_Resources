
void FUN_004dbdb0(long param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar11 = *param_2;
  if ((param_2[2] & 1) != 0) {
    uVar10 = param_2[2] & 0xfffffffffffffffe;
    FUN_0043dd30(uVar10);
    FUN_0043dd50(uVar10);
  }
  iVar3 = (int)param_2[3];
  iVar2 = -iVar3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = FUN_00426fc0(param_2[1]);
  lVar12 = *param_3;
  if ((param_3[2] & 1U) != 0) {
    uVar10 = param_3[2] & 0xfffffffffffffffe;
    FUN_0043dd30(uVar10);
    FUN_0043dd50(uVar10);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = *(long *)(param_1 + 0x18);
    uVar10 = uVar11 + (long)(iVar2 * iVar3);
    lVar4 = 0;
    do {
      if (0 < *(int *)(lVar5 + lVar4 * 0x10 + 8)) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          lVar5 = *(long *)(lVar5 + lVar4 * 0x10);
          puVar1 = (ulong *)(lVar5 + lVar6);
          uVar9 = *puVar1;
          uVar8 = puVar1[3];
          if (uVar11 <= uVar9 && uVar9 < uVar10) {
            *(ulong *)(lVar5 + lVar6) = (lVar12 - uVar11) + uVar9;
          }
          if (uVar11 <= uVar8 && uVar8 < uVar10) {
            puVar1[3] = (lVar12 - uVar11) + uVar8;
          }
          lVar5 = *(long *)(param_1 + 0x18);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar7 < *(int *)(lVar5 + lVar4 * 0x10 + 8));
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return;
}

