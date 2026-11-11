
void FUN_004732e0(long param_1,int param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  do {
    uVar5 = *(ulong *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 8);
    uVar4 = (ulong)param_3;
    iVar11 = param_2;
    do {
      while( true ) {
        iVar3 = (int)uVar4;
        puVar1 = (ulong *)(param_1 + (long)iVar11 * 8);
        iVar2 = (iVar11 + -1) - iVar3;
        do {
          iVar7 = iVar2;
          iVar12 = iVar11;
          puVar6 = puVar1;
          iVar11 = iVar12 + 1;
          puVar1 = puVar6 + 1;
          iVar2 = iVar7 + 1;
        } while (*puVar6 < uVar5);
        lVar8 = 0;
        do {
          uVar9 = *(ulong *)(param_1 + (long)iVar3 * 8 + lVar8 * 8);
          lVar8 = lVar8 + -1;
          iVar7 = iVar7 + 1;
        } while (uVar5 < uVar9);
        uVar4 = lVar8 + uVar4 + 1;
        uVar10 = (uint)uVar4;
        if (iVar12 <= (int)uVar10) break;
        uVar4 = uVar4 & 0xffffffff;
        iVar11 = iVar12;
        if ((int)uVar10 < iVar12) goto LAB_0047339c;
      }
      if (iVar7 != 0) {
        *(ulong *)(param_1 + (long)iVar3 * 8 + lVar8 * 8 + 8) = *puVar6;
        *puVar6 = uVar9;
      }
      uVar10 = iVar3 + (int)lVar8;
      uVar4 = (ulong)uVar10;
      iVar12 = iVar11;
    } while (iVar11 <= (int)uVar10);
LAB_0047339c:
    if (param_2 < (int)uVar10) {
      FUN_004732e0(param_1);
    }
    param_2 = iVar12;
    if ((int)param_3 <= iVar12) {
      return;
    }
  } while( true );
}

