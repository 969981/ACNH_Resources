
void FUN_033638b0(long *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar5 = 0;
  iVar6 = *(int *)((long)param_1 + 0xc);
  puVar8 = param_2;
  do {
    uVar3 = *puVar8;
    if (uVar3 == 0xe) {
      uVar4 = puVar8[3] >> 1;
      puVar8 = puVar8 + 3 + uVar4;
      uVar5 = uVar5 + uVar4 + 3;
    }
    else if (uVar3 == 0) {
      if (uVar5 != 0) {
        iVar1 = (int)param_1[1];
        iVar7 = uVar5 + iVar6;
        iVar9 = 0;
        if (iVar1 <= iVar7) {
          iVar9 = (iVar1 + -1) - iVar7;
        }
        if (iVar9 < 0) {
          if (iVar1 <= iVar7) {
            uVar5 = (iVar1 + -1) - iVar6;
          }
        }
        else if (iVar9 != 0) {
          iVar7 = -1;
          if (iVar9 < 1) {
            iVar7 = -iVar9;
          }
          iVar9 = iVar9 + -1;
          do {
            iVar1 = iVar9 + *(int *)((long)param_1 + 0xc);
            iVar9 = iVar9 + -1;
            *(undefined2 *)(*param_1 + (long)(int)(iVar1 + uVar5) * 2) =
                 *(undefined2 *)(*param_1 + (long)iVar1 * 2);
          } while (iVar7 + 1 + iVar9 != -1);
        }
        if (0 < (int)uVar5) {
          if (uVar5 == 1) {
            uVar10 = 0;
          }
          else {
            lVar12 = (long)iVar6 * 2;
            uVar11 = 0;
            do {
              uVar10 = uVar11 + 2;
              *(ushort *)(*param_1 + lVar12 + uVar11 * 2) = param_2[uVar11];
              *(ushort *)(*param_1 + lVar12 + uVar11 * 2 + 2) = (param_2 + uVar11)[1];
              uVar11 = uVar10;
            } while (((ulong)uVar5 & 0xfffffffe) != uVar10);
          }
          if ((uVar5 & 1) != 0) {
            *(ushort *)(*param_1 + (uVar10 + (long)iVar6) * 2) = param_2[uVar10];
          }
        }
        iVar6 = *(int *)((long)param_1 + 0xc) + uVar5;
        *(int *)((long)param_1 + 0xc) = iVar6;
        if ((int)param_1[1] <= iVar6) {
          iVar6 = (int)param_1[1] + -1;
          *(int *)((long)param_1 + 0xc) = iVar6;
        }
        *(undefined2 *)(*param_1 + (long)iVar6 * 2) = 0;
      }
      return;
    }
    uVar2 = uVar5 + 2;
    if (uVar3 != 0xf) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2 + 1;
    puVar8 = puVar8 + (ulong)(uVar3 == 0xf) * 2 + 1;
  } while( true );
}

