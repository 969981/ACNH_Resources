
uint FUN_03363a30(long *param_1,int param_2,ushort *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  if ((int)param_4 < 0) {
    param_4 = 0;
    puVar6 = param_3;
    do {
      uVar3 = *puVar6;
      if (uVar3 == 0xe) {
        uVar5 = puVar6[3] >> 1;
        puVar6 = puVar6 + 3 + uVar5;
        param_4 = param_4 + uVar5 + 3;
      }
      else if (uVar3 == 0) break;
      uVar2 = param_4 + 2;
      if (uVar3 != 0xf) {
        uVar2 = param_4;
      }
      param_4 = uVar2 + 1;
      puVar6 = puVar6 + (ulong)(uVar3 == 0xf) * 2 + 1;
    } while( true );
  }
  if (param_4 != 0) {
    iVar7 = (int)param_1[1];
    uVar2 = *(uint *)((long)param_1 + 0xc);
    iVar4 = uVar2 - param_2;
    iVar8 = iVar4;
    if (iVar7 <= (int)(uVar2 + param_4)) {
      iVar8 = (iVar7 + -1) - (param_4 + param_2);
    }
    if (iVar8 < 0) {
      if (iVar7 <= (int)(param_4 + param_2)) {
        param_4 = (iVar7 + -1) - param_2;
      }
    }
    else if (iVar8 != 0) {
      iVar7 = iVar4 - iVar8;
      iVar8 = ~uVar2 + param_2 + iVar8 + param_4;
      uVar10 = ~(long)iVar7;
      do {
        iVar7 = iVar7 + 1;
        lVar11 = uVar10 + (long)*(int *)((long)param_1 + 0xc);
        iVar1 = iVar8 + *(int *)((long)param_1 + 0xc);
        iVar8 = iVar8 + -1;
        uVar10 = uVar10 - 1;
        *(undefined2 *)(*param_1 + (long)iVar1 * 2) = *(undefined2 *)(*param_1 + lVar11 * 2);
      } while (iVar7 < iVar4);
    }
    if (0 < (int)param_4) {
      if (param_4 == 1) {
        uVar9 = 0;
      }
      else {
        lVar11 = (long)param_2 * 2;
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 2;
          *(ushort *)(*param_1 + lVar11 + uVar10 * 2) = param_3[uVar10];
          *(ushort *)(*param_1 + lVar11 + uVar10 * 2 + 2) = (param_3 + uVar10)[1];
          uVar10 = uVar9;
        } while (((ulong)param_4 & 0xfffffffe) != uVar9);
      }
      if ((param_4 & 1) != 0) {
        *(ushort *)(*param_1 + (uVar9 + (long)param_2) * 2) = param_3[uVar9];
      }
    }
    iVar8 = *(int *)((long)param_1 + 0xc) + param_4;
    *(int *)((long)param_1 + 0xc) = iVar8;
    if ((int)param_1[1] <= iVar8) {
      iVar8 = (int)param_1[1] + -1;
      *(int *)((long)param_1 + 0xc) = iVar8;
    }
    *(undefined2 *)(*param_1 + (long)iVar8 * 2) = 0;
  }
  return param_4;
}

