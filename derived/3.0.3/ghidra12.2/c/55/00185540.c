
void FUN_00185540(long param_1,long param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar11 = 0;
    iVar8 = 0;
    uVar17 = 0xffffffff;
    iVar12 = 0x8a;
    if (uVar2 != 0) {
      iVar12 = 7;
    }
    iVar15 = 3;
    if (uVar2 != 0) {
      iVar15 = 4;
    }
    do {
      uVar14 = (ulong)uVar2;
      uVar11 = uVar11 + 1;
      iVar9 = iVar8 + 1;
      uVar3 = *(ushort *)(param_2 + uVar11 * 4 + 2);
      uVar7 = (uint)uVar2;
      uVar13 = (uint)uVar3;
      if ((iVar9 < iVar12) && (uVar7 == uVar13)) {
        iVar8 = iVar9;
      }
      else {
        if (iVar9 < iVar15) {
          uVar10 = *(uint *)(param_1 + 0x1734);
          lVar18 = param_1 + uVar14 * 4;
          do {
            while( true ) {
              uVar16 = (uint)*(ushort *)(lVar18 + 0xabe);
              uVar2 = *(ushort *)(lVar18 + 0xabc);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar10 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              if ((int)uVar10 <= (int)(0x10 - uVar16)) break;
              lVar19 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar19 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar19) = (char)uVar5;
              lVar19 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar19 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar19) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar10 = (uVar16 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) =
                   uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              iVar9 = iVar9 + -1;
              *(uint *)(param_1 + 0x1734) = uVar10;
              if (iVar9 == 0) goto LAB_00185678;
            }
            uVar10 = uVar10 + uVar16;
            iVar9 = iVar9 + -1;
            *(uint *)(param_1 + 0x1734) = uVar10;
          } while (iVar9 != 0);
LAB_00185678:
          bVar1 = uVar3 == 0;
joined_r0x00185a4c:
          if (bVar1) goto LAB_00185a50;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x1734);
          if (uVar7 == 0) {
            if (iVar8 < 10) {
              uVar2 = *(ushort *)(param_1 + 0xb02);
              uVar4 = *(ushort *)(param_1 + 0xb00);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
              uVar6 = (ushort)uVar5;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
                lVar18 = *(long *)(param_1 + 0x28);
                *(ushort *)(param_1 + 0x1730) = uVar6;
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar5;
                lVar18 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar6 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar5 = (uint)uVar6;
                uVar10 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(uint *)(param_1 + 0x1734) = uVar10;
                uVar16 = iVar8 + 0xfffe << (ulong)(uVar10 & 0x1f);
                uVar2 = (ushort)uVar16;
              }
              else {
                uVar10 = uVar10 + uVar2;
                *(uint *)(param_1 + 0x1734) = uVar10;
                uVar16 = iVar8 + 0xfffe << (ulong)(uVar10 & 0x1f);
                uVar2 = (ushort)uVar16;
              }
              if ((int)uVar10 < 0xe) {
                *(ushort *)(param_1 + 0x1730) = uVar6 | uVar2;
                *(uint *)(param_1 + 0x1734) = uVar10 + 3;
                goto joined_r0x001857ac;
              }
              lVar18 = *(long *)(param_1 + 0x28);
              *(short *)(param_1 + 0x1730) = (short)(uVar5 | uVar16);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)(uVar5 | uVar16);
              lVar18 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(short *)(param_1 + 0x1730) =
                   (short)((iVar8 + 0xfffeU & 0xffff) >>
                          (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xd;
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xb06);
              uVar4 = *(ushort *)(param_1 + 0xb04);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
              uVar6 = (ushort)uVar5;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
                lVar18 = *(long *)(param_1 + 0x28);
                *(ushort *)(param_1 + 0x1730) = uVar6;
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar5;
                lVar18 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar6 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
                uVar5 = (uint)uVar6;
                uVar10 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(uint *)(param_1 + 0x1734) = uVar10;
                uVar16 = iVar8 + 0xfff6 << (ulong)(uVar10 & 0x1f);
                uVar2 = (ushort)uVar16;
              }
              else {
                uVar10 = uVar10 + uVar2;
                *(uint *)(param_1 + 0x1734) = uVar10;
                uVar16 = iVar8 + 0xfff6 << (ulong)(uVar10 & 0x1f);
                uVar2 = (ushort)uVar16;
              }
              if (9 < (int)uVar10) {
                lVar18 = *(long *)(param_1 + 0x28);
                *(short *)(param_1 + 0x1730) = (short)(uVar5 | uVar16);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)(uVar5 | uVar16);
                lVar18 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar8 + 0xfff6U & 0xffff) >>
                            (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
                *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -9;
                bVar1 = uVar13 == 0;
                goto joined_r0x00185a4c;
              }
              *(ushort *)(param_1 + 0x1730) = uVar6 | uVar2;
              *(uint *)(param_1 + 0x1734) = uVar10 + 7;
            }
            if (uVar13 == 0) goto LAB_00185a50;
          }
          else {
            if (uVar7 != (uint)uVar17) {
              lVar18 = param_1 + uVar14 * 4;
              uVar2 = *(ushort *)(lVar18 + 0xabe);
              uVar4 = *(ushort *)(lVar18 + 0xabc);
              uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
                lVar18 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar5;
                lVar18 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar18 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar10 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
                *(ushort *)(param_1 + 0x1730) =
                     uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              }
              else {
                uVar10 = uVar10 + uVar2;
              }
              *(uint *)(param_1 + 0x1734) = uVar10;
              iVar9 = iVar8;
            }
            uVar2 = *(ushort *)(param_1 + 0xafe);
            uVar4 = *(ushort *)(param_1 + 0xafc);
            uVar5 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
            uVar6 = (ushort)uVar5;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
              lVar18 = *(long *)(param_1 + 0x28);
              *(ushort *)(param_1 + 0x1730) = uVar6;
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar5;
              lVar18 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar6 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar5 = (uint)uVar6;
              uVar10 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(uint *)(param_1 + 0x1734) = uVar10;
            }
            else {
              uVar10 = uVar10 + uVar2;
              *(uint *)(param_1 + 0x1734) = uVar10;
            }
            if ((int)uVar10 < 0xf) {
              *(ushort *)(param_1 + 0x1730) =
                   uVar6 | (ushort)(iVar9 + 0xfffd << (ulong)(uVar10 & 0x1f));
              *(uint *)(param_1 + 0x1734) = uVar10 + 2;
            }
            else {
              lVar18 = *(long *)(param_1 + 0x28);
              uVar5 = uVar5 | iVar9 + 0xfffdU << (ulong)(uVar10 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar5;
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar5;
              lVar18 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(short *)(param_1 + 0x1730) =
                   (short)((iVar9 + 0xfffdU & 0xffff) >>
                          (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xe;
            }
joined_r0x001857ac:
            if (uVar3 == 0) {
LAB_00185a50:
              iVar15 = 3;
              iVar12 = 0x8a;
              uVar17 = uVar14;
              iVar8 = 0;
              goto LAB_001855a4;
            }
          }
        }
        iVar15 = 3;
        if (uVar7 != uVar13) {
          iVar15 = 4;
        }
        iVar12 = 6;
        if (uVar7 != uVar13) {
          iVar12 = 7;
        }
        uVar17 = uVar14;
        iVar8 = 0;
      }
LAB_001855a4:
      uVar2 = uVar3;
    } while (uVar11 != param_3 + 1);
  }
  return;
}

