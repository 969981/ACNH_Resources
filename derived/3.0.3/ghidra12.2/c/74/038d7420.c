
void FUN_038d7420(long param_1,long *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort uVar11;
  undefined2 uVar12;
  int iVar13;
  
  pbVar6 = &DAT_041a15ba;
  if (param_3 != (byte *)0x0) {
    pbVar6 = param_3;
  }
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      uVar9 = 0xffffffff;
      pbVar10 = pbVar6;
      do {
        bVar2 = *pbVar10;
        uVar9 = (ulong)((int)uVar9 + 1);
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
    else {
      uVar9 = 0;
      if ((*pbVar6 != 0) && (uVar1 = *(uint *)(param_1 + 0x28), uVar1 != 0)) {
        uVar9 = 0;
        do {
          lVar3 = uVar9 + 1;
          uVar9 = uVar9 + 1;
          bVar4 = false;
          bVar5 = false;
          if (pbVar6[lVar3] != 0) {
            bVar5 = (uint)uVar9 <= uVar1;
            bVar4 = uVar1 == (uint)uVar9;
          }
        } while (bVar5 && !bVar4);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar8 = (uint)uVar9;
    iVar7 = uVar8 - uVar1;
    if (uVar8 < uVar1) {
      uVar12 = 0x20;
      if ((*(uint *)(param_1 + 0x20) & 4) != 0) {
        uVar12 = 0x30;
      }
      if (uVar1 != uVar8) {
        iVar13 = *(int *)((long)param_2 + 0xc);
        do {
          if ((int)param_2[1] <= iVar13) {
            *(undefined1 *)(param_2 + 2) = 1;
            if (uVar8 == 0) {
              return;
            }
            goto LAB_038d7570;
          }
          bVar4 = iVar7 != -1;
          iVar7 = iVar7 + 1;
          *(undefined2 *)(*param_2 + (long)iVar13 * 2) = uVar12;
          iVar13 = *(int *)((long)param_2 + 0xc) + 1;
          *(int *)((long)param_2 + 0xc) = iVar13;
        } while (bVar4);
      }
    }
    if (uVar8 != 0) {
LAB_038d7570:
      iVar7 = *(int *)((long)param_2 + 0xc);
      if ((int)param_2[1] <= iVar7) {
LAB_038d76e0:
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
      uVar9 = uVar9 & 0xffffffff;
      do {
        if (iVar7 < (int)param_2[1]) {
          *(ushort *)(*param_2 + (long)iVar7 * 2) = (ushort)*pbVar6;
          iVar7 = *(int *)((long)param_2 + 0xc) + 1;
          *(int *)((long)param_2 + 0xc) = iVar7;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
        }
        uVar9 = uVar9 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar9 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      uVar11 = (ushort)*pbVar6;
      pbVar10 = pbVar6;
      if (*pbVar6 != 0) {
        iVar7 = *(int *)((long)param_2 + 0xc);
        if (iVar7 < (int)param_2[1]) {
          do {
            while (iVar7 < (int)param_2[1]) {
              *(ushort *)(*param_2 + (long)iVar7 * 2) = uVar11;
              iVar7 = *(int *)((long)param_2 + 0xc) + 1;
              *(int *)((long)param_2 + 0xc) = iVar7;
              pbVar10 = pbVar10 + 1;
              uVar11 = (ushort)*pbVar10;
              if (uVar11 == 0) goto LAB_038d768c;
            }
            *(undefined1 *)(param_2 + 2) = 1;
            pbVar10 = pbVar10 + 1;
            uVar11 = (ushort)*pbVar10;
          } while (uVar11 != 0);
        }
        else {
          do {
            *(undefined1 *)(param_2 + 2) = 1;
            pbVar10 = pbVar10 + 1;
          } while (*pbVar10 != 0);
        }
      }
LAB_038d768c:
      uVar9 = (ulong)(uint)((int)pbVar10 - (int)pbVar6);
    }
    else {
      uVar11 = (ushort)*pbVar6;
      uVar9 = 0;
      if ((*pbVar6 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        iVar7 = *(int *)((long)param_2 + 0xc);
        if (iVar7 < (int)param_2[1]) {
          uVar9 = 0;
          do {
            if (iVar7 < (int)param_2[1]) {
              *(ushort *)(*param_2 + (long)iVar7 * 2) = uVar11;
              iVar7 = *(int *)((long)param_2 + 0xc) + 1;
              *(int *)((long)param_2 + 0xc) = iVar7;
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
            }
            uVar11 = (ushort)pbVar6[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while ((uVar11 != 0) && ((uint)uVar9 < *(uint *)(param_1 + 0x28)));
        }
        else {
          uVar9 = 0;
          do {
            *(undefined1 *)(param_2 + 2) = 1;
            lVar3 = uVar9 + 1;
            uVar9 = uVar9 + 1;
            bVar4 = false;
            bVar5 = false;
            if (pbVar6[lVar3] != 0) {
              bVar5 = (uint)uVar9 <= *(uint *)(param_1 + 0x28);
              bVar4 = *(uint *)(param_1 + 0x28) == (uint)uVar9;
            }
          } while (bVar5 && !bVar4);
        }
      }
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar8 = (uint)uVar9;
    iVar7 = uVar8 - uVar1;
    if ((uVar8 < uVar1) && (uVar1 != uVar8)) {
      iVar13 = *(int *)((long)param_2 + 0xc);
      do {
        if ((int)param_2[1] <= iVar13) goto LAB_038d76e0;
        bVar4 = iVar7 != -1;
        iVar7 = iVar7 + 1;
        *(undefined2 *)(*param_2 + (long)iVar13 * 2) = 0x20;
        iVar13 = *(int *)((long)param_2 + 0xc) + 1;
        *(int *)((long)param_2 + 0xc) = iVar13;
      } while (bVar4);
    }
  }
  return;
}

