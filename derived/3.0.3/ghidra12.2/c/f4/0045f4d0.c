
void FUN_0045f4d0(long param_1,long *param_2,long *param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *param_2;
  lVar1 = param_2[1];
  uVar11 = param_2[2];
  if ((uVar11 & 1) == 0) {
    lVar10 = *param_3;
    lVar2 = param_3[1];
    uVar7 = param_3[2];
  }
  else {
    FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
    lVar10 = *param_3;
    lVar2 = param_3[1];
    uVar7 = param_3[2];
  }
  if ((uVar7 & 1) == 0) {
    puVar3 = PTR_DAT_048607b8;
  }
  else {
    FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
    puVar3 = PTR_DAT_048607b8;
  }
  PTR_DAT_048607b8 = puVar3;
  if (param_6 < 1) {
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    }
    if ((uVar11 & 1) != 0) {
      FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
      return;
    }
  }
  else {
    do {
      plVar8 = *(long **)(param_1 + 0x290);
      uVar4 = *(uint *)(plVar8 + 1);
      if (uVar4 == (*(uint *)((long)plVar8 + 0xc) & 0x3fffffff)) {
        FUN_00426990(puVar3,plVar8,0x30);
        uVar4 = *(uint *)(plVar8 + 1);
      }
      lVar6 = *plVar8;
      plVar5 = (long *)(lVar6 + (long)(int)uVar4 * 0x30);
      plVar5[2] = uVar11;
      *plVar5 = lVar9;
      plVar5[1] = lVar1;
      if ((uVar11 & 1) != 0) {
        FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
      }
      lVar6 = lVar6 + (long)(int)uVar4 * 0x30;
      *(ulong *)(lVar6 + 0x28) = uVar7;
      *(long *)(lVar6 + 0x18) = lVar10;
      *(long *)(lVar6 + 0x20) = lVar2;
      if ((uVar7 & 1) != 0) {
        FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      }
      *(uint *)(plVar8 + 1) = uVar4 + 1;
      if ((uVar11 & 1) != 0) {
        FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
      }
      lVar9 = lVar9 + param_4;
      lVar10 = lVar10 + param_5;
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
      }
      param_6 = param_6 + -1;
      uVar7 = uVar7 & 0xfffffffffffffffe;
      uVar11 = uVar11 & 0xfffffffffffffffe;
    } while (param_6 != 0);
  }
  return;
}

