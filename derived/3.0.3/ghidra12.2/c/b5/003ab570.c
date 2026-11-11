
void FUN_003ab570(long param_1,long param_2)

{
  char *pcVar1;
  short *psVar2;
  long *plVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  
  plVar3 = (long *)(param_1 + 0x58);
  FUN_003a9620(plVar3,*(undefined2 *)(param_2 + 0x6c));
  FUN_003a96c0(plVar3,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20));
  uVar5 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar5 != 0) {
    uVar11 = 0;
    iVar12 = 0;
    do {
      uVar16 = (ulong)*(uint *)(*plVar3 + uVar11 * 4) & 0x7fff;
      if ((int)uVar16 != 0x7fff) {
        lVar17 = *(long *)(param_1 + 0x70) + uVar11 * 0x40;
        uVar6 = *(ushort *)(lVar17 + 0x32);
        if (uVar6 == 0) {
          uVar14 = 0;
          uVar18 = 0;
          uVar6 = *(ushort *)(lVar17 + 0x34);
          uVar13 = uVar14;
          if (uVar6 == 0) goto LAB_003ab61c;
LAB_003ab6d8:
          lVar19 = *(long *)(lVar17 + 0x10);
          if (uVar6 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            lVar9 = (long)(int)(uVar13 + iVar12) * 2;
            do {
              lVar10 = uVar8 * 2;
              uVar8 = uVar8 + 2;
              *(short *)(*(long *)(param_1 + 0x88) + lVar9 + lVar10) =
                   (short)*(char *)(lVar19 + 0xc);
              cVar4 = *(char *)(lVar19 + 0xc);
              *(short *)(*(long *)(param_1 + 0x88) + lVar9 + lVar10 + 2) =
                   (short)*(char *)(lVar19 + 0x1c);
              uVar14 = 0x10000;
              if (cVar4 != -1) {
                uVar14 = 1;
              }
              pcVar1 = (char *)(lVar19 + 0x1c);
              lVar19 = lVar19 + 0x20;
              uVar15 = 0x10000;
              if (*pcVar1 != -1) {
                uVar15 = 1;
              }
              uVar18 = uVar15 | uVar14 | uVar18;
            } while (((ulong)uVar6 & 0xfffe) != uVar8);
          }
          if ((uVar6 & 1) != 0) {
            *(short *)(*(long *)(param_1 + 0x88) + (uVar8 + (long)(int)(uVar13 + iVar12)) * 2) =
                 (short)*(char *)(lVar19 + 0xc);
            uVar13 = 0x10000;
            if (*(char *)(lVar19 + 0xc) != -1) {
              uVar13 = 1;
            }
            uVar18 = uVar13 | uVar18;
          }
          iVar12 = iVar12 + (uint)*(ushort *)(lVar17 + 0x32) + (uint)*(ushort *)(lVar17 + 0x34);
        }
        else {
          lVar19 = *(long *)(lVar17 + 8);
          if (uVar6 == 1) {
            uVar8 = 0;
            uVar18 = 0;
          }
          else {
            uVar8 = 0;
            uVar18 = 0;
            lVar9 = (long)iVar12 * 2;
            do {
              lVar10 = uVar8 * 2;
              uVar8 = uVar8 + 2;
              *(undefined2 *)(*(long *)(param_1 + 0x88) + lVar9 + lVar10) =
                   *(undefined2 *)(lVar19 + 0x12);
              sVar7 = *(short *)(lVar19 + 0x12);
              *(undefined2 *)(*(long *)(param_1 + 0x88) + lVar9 + lVar10 + 2) =
                   *(undefined2 *)(lVar19 + 0x2a);
              uVar13 = 0x10000;
              if (sVar7 != -1) {
                uVar13 = 1;
              }
              psVar2 = (short *)(lVar19 + 0x2a);
              lVar19 = lVar19 + 0x30;
              uVar14 = 0x10000;
              if (*psVar2 != -1) {
                uVar14 = 1;
              }
              uVar18 = uVar14 | uVar13 | uVar18;
            } while (((ulong)uVar6 & 0xfffe) != uVar8);
          }
          if ((uVar6 & 1) != 0) {
            *(undefined2 *)(*(long *)(param_1 + 0x88) + (uVar8 + (long)iVar12) * 2) =
                 *(undefined2 *)(lVar19 + 0x12);
            uVar13 = 0x10000;
            if (*(short *)(lVar19 + 0x12) != -1) {
              uVar13 = 1;
            }
            uVar18 = uVar13 | uVar18;
          }
          uVar14 = (uint)*(ushort *)(lVar17 + 0x32);
          uVar6 = *(ushort *)(lVar17 + 0x34);
          uVar13 = (uint)*(ushort *)(lVar17 + 0x32);
          if (uVar6 != 0) goto LAB_003ab6d8;
LAB_003ab61c:
          iVar12 = iVar12 + uVar14;
        }
        if (uVar18 == 0x10000) {
          lVar17 = uVar16 * 4;
          *(uint *)(*plVar3 + uVar11 * 4) = *(uint *)(*plVar3 + uVar11 * 4) | 0xc0007fff;
          *(uint *)(*plVar3 + lVar17) = *(uint *)(*plVar3 + lVar17) | 0x3fff8000;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar5);
  }
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  *(undefined4 *)(param_1 + 0x40) = DAT_04135420;
  if ((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38))) {
    lVar19 = 0;
    lVar17 = 0;
    do {
      lVar17 = lVar17 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar19) = 0x7f800000;
      lVar19 = lVar19 + 0xc;
    } while (lVar17 < *(int *)(param_1 + 0x3c));
  }
  return;
}

