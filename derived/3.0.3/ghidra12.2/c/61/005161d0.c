
void FUN_005161d0(long *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar7 = *(uint *)(param_1 + 2);
  iVar3 = param_3 + 0x1f >> 5;
  *(int *)(param_1 + 2) = param_3;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar3) {
    lVar13 = FUN_00426720(PTR_DAT_048607b8,iVar3,4,*param_1,(int)param_1[1]);
    *param_1 = lVar13;
    iVar8 = (int)param_1[1];
  }
  else {
    iVar8 = (int)param_1[1];
  }
  if (iVar8 == iVar3) {
    uVar2 = *(uint *)(param_1 + 2) & (int)*(uint *)(param_1 + 2) >> 0x1f;
  }
  else {
    *(int *)(param_1 + 1) = iVar3;
    uVar2 = *(uint *)(param_1 + 2) & (int)*(uint *)(param_1 + 2) >> 0x1f;
  }
  if ((int)param_2 < (int)uVar2) {
    uVar6 = -1 << (ulong)(param_2 & 0x1f);
    uVar9 = -1 << (ulong)(uVar2 & 0x1f);
    lVar13 = *param_1;
    uVar4 = (int)param_2 >> 5;
    uVar5 = (int)uVar2 >> 5;
    uVar10 = ~uVar9;
    uVar11 = -param_4;
    if (uVar5 == uVar4) {
      uVar6 = uVar6 & uVar10;
      if (uVar6 != 0) {
        uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(uint *)(lVar13 + uVar12) =
             *(uint *)(lVar13 + uVar12) & (uVar6 ^ 0xffffffff) | uVar6 & uVar11;
      }
    }
    else {
      uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
      *(uint *)(lVar13 + uVar12) =
           *(uint *)(lVar13 + uVar12) & (uVar6 ^ 0xffffffff) | uVar6 & uVar11;
      if ((uVar2 & 0x1f) != 0) {
        uVar12 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        *(uint *)(lVar13 + uVar12) = *(uint *)(lVar13 + uVar12) & uVar9 | uVar10 & uVar11;
      }
      FUN_0043aa50(lVar13 + (long)(int)uVar4 * 4 + 4,uVar11,(long)(int)(uVar5 + ~uVar4));
    }
  }
  if ((int)uVar7 <= (int)param_2) {
    uVar7 = param_2;
  }
  uVar2 = (int)param_1[2] + 0x1f;
  if ((int)uVar7 < (int)(uVar2 & 0xffffffe0)) {
    uVar6 = (int)uVar7 >> 5;
    uVar2 = (int)uVar2 >> 5;
    if (uVar2 != uVar6) {
      uVar7 = -1 << (ulong)(uVar7 & 0x1f);
      puVar1 = (uint *)(*param_1 + (long)(int)uVar6 * 4);
      *puVar1 = *puVar1 & (uVar7 ^ 0xffffffff) | uVar7 & -param_4;
      FUN_0043aa50(puVar1 + 1,-param_4,(long)(int)(uVar2 + ~uVar6));
      return;
    }
  }
  return;
}

