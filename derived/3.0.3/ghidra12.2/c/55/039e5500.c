
void FUN_039e5500(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  
  *(byte *)(param_1 + 0x659) = param_2;
  uVar3 = *(ushort *)(param_1 + 0x65a);
  iVar7 = *(int *)(param_1 + 0x650);
  iVar5 = (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(param_1 + 0x620);
  iVar6 = (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(param_1 + 0x620);
  iVar8 = *(int *)(param_1 + 0x638);
  lVar11 = 0;
  if (*(long *)(param_1 + 0x640) != 0) {
    lVar11 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  uVar1 = (uint)param_2;
  *(ulong *)(param_1 + 0x630) =
       lVar11 + (ulong)(iVar8 + uVar1 * uVar3 * ((iVar7 + iVar5) - 1U & -iVar6));
  uVar2 = *(uint *)(param_1 + 0x698);
  if ((uint)*(byte *)(param_1 + 0x2a1) <= *(uint *)(param_1 + 0x698)) {
    uVar2 = (uint)*(byte *)(param_1 + 0x2a1);
  }
  if (uVar2 != 0) {
    uVar15 = 0;
    lVar11 = *(long *)(param_1 + 0x6a0);
    do {
      plVar13 = (long *)(lVar11 + (long)(int)uVar15 * 0x78);
      uVar3 = *(ushort *)((long)plVar13 + 0x3a);
      lVar14 = plVar13[6];
      *(byte *)((long)plVar13 + 0x39) = param_2;
      iVar7 = (**(code **)(*plVar13 + 0x20))(plVar13);
      iVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
      lVar4 = plVar13[3];
      lVar12 = 0;
      if (plVar13[4] != 0) {
        lVar12 = (*DAT_04c61fd0)();
      }
      *(ulong *)(lVar11 + (long)(int)uVar15 * 0x78 + 0x10) =
           lVar12 + (ulong)((int)lVar4 + uVar1 * uVar3 * (((int)lVar14 + iVar7) - 1U & -iVar8));
      uVar15 = uVar15 + 1;
    } while (uVar2 != uVar15);
  }
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 != 0) {
    lVar11 = *(long *)(param_1 + 0x180);
    iVar8 = 0;
    do {
      lVar14 = lVar11 + (long)iVar8 * 0x620;
      uVar3 = *(ushort *)(lVar14 + 0x5e2);
      iVar5 = *(int *)(lVar14 + 0x5d8);
      *(byte *)(lVar14 + 0x5e1) = param_2;
      iVar9 = (**(code **)(*(long *)(lVar14 + 0x5a8) + 0x20))(lVar14 + 0x5a8);
      iVar10 = (**(code **)(*(long *)(lVar14 + 0x5a8) + 0x20))(lVar14 + 0x5a8);
      iVar6 = *(int *)(lVar14 + 0x5c0);
      lVar12 = 0;
      if (*(long *)(lVar14 + 0x5c8) != 0) {
        lVar12 = (*DAT_04c61fd0)();
      }
      *(ulong *)(lVar11 + (long)iVar8 * 0x620 + 0x5b8) =
           lVar12 + (ulong)(iVar6 + uVar1 * uVar3 * ((iVar5 + iVar9) - 1U & -iVar10));
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar8);
  }
  return;
}

