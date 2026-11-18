
uint FUN_03363c80(long *param_1,int param_2,int param_3,ushort *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  iVar8 = *(int *)((long)param_1 + 0xc);
  if (iVar8 != 0) {
    iVar7 = iVar8 - param_2;
    if (param_3 + param_2 <= iVar8) {
      iVar7 = param_3;
    }
    iVar1 = iVar7 + param_2;
    uVar4 = iVar8 - iVar1;
    if (0 < (int)uVar4) {
      if (uVar4 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        lVar11 = (long)iVar1 * 2;
        lVar12 = (long)param_2 * 2;
        do {
          lVar13 = uVar10 * 2;
          uVar10 = uVar10 + 2;
          *(undefined2 *)(*param_1 + lVar12 + lVar13) = *(undefined2 *)(*param_1 + lVar11 + lVar13);
          *(undefined2 *)(*param_1 + lVar12 + lVar13 + 2) =
               *(undefined2 *)(*param_1 + lVar11 + lVar13 + 2);
        } while (((ulong)uVar4 & 0xfffffffe) != uVar10);
      }
      if ((uVar4 & 1) != 0) {
        *(undefined2 *)(*param_1 + (uVar10 + (long)param_2) * 2) =
             *(undefined2 *)(*param_1 + (uVar10 + (long)iVar1) * 2);
      }
      iVar8 = *(int *)((long)param_1 + 0xc);
    }
    *(int *)((long)param_1 + 0xc) = iVar8 - iVar7;
    *(undefined2 *)(*param_1 + (long)(iVar8 - iVar7) * 2) = 0;
  }
  if ((int)param_5 < 0) {
    param_5 = 0;
    puVar6 = param_4;
    do {
      uVar3 = *puVar6;
      if (uVar3 == 0xe) {
        uVar5 = puVar6[3] >> 1;
        puVar6 = puVar6 + 3 + uVar5;
        param_5 = param_5 + uVar5 + 3;
      }
      else if (uVar3 == 0) break;
      uVar4 = param_5 + 2;
      if (uVar3 != 0xf) {
        uVar4 = param_5;
      }
      param_5 = uVar4 + 1;
      puVar6 = puVar6 + (ulong)(uVar3 == 0xf) * 2 + 1;
    } while( true );
  }
  if (param_5 != 0) {
    iVar7 = (int)param_1[1];
    uVar4 = *(uint *)((long)param_1 + 0xc);
    iVar1 = uVar4 - param_2;
    iVar8 = iVar1;
    if (iVar7 <= (int)(uVar4 + param_5)) {
      iVar8 = (iVar7 + -1) - (param_5 + param_2);
    }
    if (iVar8 < 0) {
      if (iVar7 <= (int)(param_5 + param_2)) {
        param_5 = (iVar7 + -1) - param_2;
      }
    }
    else if (iVar8 != 0) {
      iVar7 = iVar1 - iVar8;
      iVar8 = ~uVar4 + param_2 + iVar8 + param_5;
      uVar10 = ~(long)iVar7;
      do {
        iVar7 = iVar7 + 1;
        lVar11 = uVar10 + (long)*(int *)((long)param_1 + 0xc);
        iVar2 = iVar8 + *(int *)((long)param_1 + 0xc);
        iVar8 = iVar8 + -1;
        uVar10 = uVar10 - 1;
        *(undefined2 *)(*param_1 + (long)iVar2 * 2) = *(undefined2 *)(*param_1 + lVar11 * 2);
      } while (iVar7 < iVar1);
    }
    if (0 < (int)param_5) {
      if (param_5 == 1) {
        uVar9 = 0;
      }
      else {
        lVar11 = (long)param_2 * 2;
        uVar10 = 0;
        do {
          uVar9 = uVar10 + 2;
          *(ushort *)(*param_1 + lVar11 + uVar10 * 2) = param_4[uVar10];
          *(ushort *)(*param_1 + lVar11 + uVar10 * 2 + 2) = (param_4 + uVar10)[1];
          uVar10 = uVar9;
        } while (((ulong)param_5 & 0xfffffffe) != uVar9);
      }
      if ((param_5 & 1) != 0) {
        *(ushort *)(*param_1 + (uVar9 + (long)param_2) * 2) = param_4[uVar9];
      }
    }
    iVar8 = *(int *)((long)param_1 + 0xc) + param_5;
    *(int *)((long)param_1 + 0xc) = iVar8;
    if ((int)param_1[1] <= iVar8) {
      iVar8 = (int)param_1[1] + -1;
      *(int *)((long)param_1 + 0xc) = iVar8;
    }
    *(undefined2 *)(*param_1 + (long)iVar8 * 2) = 0;
  }
  return param_5;
}

