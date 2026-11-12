
undefined8 FUN_006b8e90(long param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_4 + 0x35) != '\0') {
    lVar14 = 0;
    uVar15 = 0;
    uVar12 = 0;
    iVar17 = 0;
    uVar9 = (ulong)*(ushort *)(param_1 + 2);
    uVar11 = 0;
    iVar8 = 0;
    iVar13 = 0;
    lVar1 = *(long *)(param_4 + 8) + *(long *)(param_1 + 0x10);
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    iVar19 = 0;
    do {
      lVar22 = *param_3;
      bVar4 = *(byte *)(param_4 + 0x3a + uVar15);
      iVar18 = iVar19;
      if ((bVar4 >> 2 & 1) == 0) {
        if ((bVar4 >> 3 & 1) == 0) {
          if ((bVar4 >> 5 & 1) == 0) {
LAB_006b9614:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl();
          }
          iVar16 = (int)uVar12;
          if ((bVar4 & 1) == 0) {
            if ((bVar4 >> 1 & 1) == 0) goto LAB_006b9614;
            uVar25 = *(ulong *)(lVar22 + lVar14 + 8);
            if (uVar25 >> 0x10 == 0) {
              lVar22 = (long)iVar16 * 4;
              uVar12 = (ulong)(iVar16 + 1);
              *(char *)((long)&local_80 + lVar22) = (char)uVar15;
              *(char *)((long)&local_80 + lVar22 + 1) = (char)iVar19;
              *(char *)((long)&local_80 + lVar22 + 2) = (char)iVar8;
              *(char *)((long)&local_80 + lVar22 + 3) = (char)iVar13;
            }
            else {
              uVar23 = *(ulong *)(lVar22 + lVar14);
              uVar7 = 0;
              if ((char)bVar4 < '\0') {
                uVar7 = 3;
              }
              if ((bVar4 & 0x40) != 0) {
                uVar7 = 1;
              }
              iVar18 = (uint)*(byte *)(*param_2 + 0x15) + (int)((ulong)((long)iVar19 * 0xc) >> 2);
              *(int *)(param_2[1] + (long)iVar18 * 4) = (int)uVar25;
              *(int *)(param_2[1] + (long)(iVar18 + 1) * 4) = (int)uVar23;
              *(uint *)(param_2[1] + (long)(iVar18 + 2) * 4) =
                   (uint)(uVar25 >> 8) & 0xf000000 | uVar7 | (uint)(uVar23 >> 4) & 0xf0000000 |
                   (uint)(uVar23 >> 0x22) & 0x1c;
              *(undefined4 *)
               (param_2[1] + (long)(int)(iVar8 * 2 + (uint)*(byte *)(*param_2 + 0x18)) * 4) = 0;
              *(undefined4 *)
               (param_2[1] + (long)(int)((uint)*(byte *)(*param_2 + 0x18) + iVar8 * 2 + 1) * 4) = 0;
            }
            iVar8 = iVar8 + 1;
            iVar13 = ((bVar4 >> 4 ^ 0xffffffff) & 1) + iVar13;
            iVar18 = iVar19 + 1;
          }
          else {
            uVar25 = *(ulong *)(lVar22 + lVar14 + 8);
            if (uVar25 >> 0x10 == 0) {
              lVar22 = (long)iVar16 * 4;
              uVar12 = (ulong)(iVar16 + 1);
              *(char *)((long)&local_80 + lVar22) = (char)uVar15;
              *(char *)((long)&local_80 + lVar22 + 1) = (char)iVar17;
              *(char *)((long)&local_80 + lVar22 + 2) = (char)uVar11;
            }
            else {
              uVar23 = *(ulong *)(lVar22 + lVar14);
              uVar7 = 0;
              if ((char)bVar4 < '\0') {
                uVar7 = 3;
              }
              if ((bVar4 & 0x40) != 0) {
                uVar7 = 1;
              }
              iVar19 = (uint)*(byte *)(*param_2 + 0x14) + (int)((ulong)((long)iVar17 * 0xc) >> 2);
              *(int *)(param_2[1] + (long)iVar19 * 4) = (int)uVar25;
              *(int *)(param_2[1] + (long)(iVar19 + 1) * 4) = (int)uVar23;
              *(uint *)(param_2[1] + (long)(iVar19 + 2) * 4) =
                   (uint)(uVar25 >> 8) & 0xf000000 | uVar7 | (uint)(uVar23 >> 4) & 0xf0000000 |
                   (uint)(uVar23 >> 0x22) & 0x1c;
              *(uint *)(param_2[1] + (long)(int)(uVar11 * 2 + (uint)*(byte *)(*param_2 + 0x13)) * 4)
                   = uVar11 & 0xe3f;
              *(undefined4 *)
               (param_2[1] + (long)(int)((uint)*(byte *)(*param_2 + 0x13) + uVar11 * 2 + 1) * 4) = 0
              ;
            }
            uVar11 = uVar11 + 1;
            iVar17 = iVar17 + 1;
          }
        }
        else {
          lVar26 = *(long *)(lVar22 + lVar14 + 8);
          uVar25 = lVar26 + 0xfU & 0xfffffffffffffff0;
          bVar5 = uVar9 < uVar25;
          uVar9 = uVar9 - uVar25;
          if (bVar5) {
            return 0x11a0b;
          }
          if ((bVar4 & 1) == 0) {
            if ((bVar4 >> 1 & 1) == 0) goto LAB_006b9614;
            uVar24 = *(undefined8 *)(lVar22 + lVar14);
            iVar19 = iVar8 * 2;
            iVar8 = iVar8 + 1;
            *(int *)(param_2[1] + (long)(int)(iVar19 + (uint)*(byte *)(*param_2 + 0x18)) * 4) =
                 (int)uVar24;
            *(uint *)(param_2[1] + (long)(int)((uint)*(byte *)(*param_2 + 0x18) + iVar19 + 1) * 4) =
                 (uint)((ulong)uVar24 >> 0x20) & 0xffff | (uint)((ulong)(lVar26 << 0x30) >> 0x20);
            if ((bVar4 >> 4 & 1) == 0) {
              uVar25 = *(ulong *)(lVar22 + lVar14 + 8);
              if (uVar25 >> 0x10 != 0) {
                return 0x20b;
              }
              *(short *)(lVar1 + (long)iVar13 * 2) = (short)uVar25;
              iVar13 = iVar13 + 1;
            }
          }
          else {
            uVar25 = *(ulong *)(lVar22 + lVar14);
            uVar7 = uVar11 & 0xe3f;
            iVar19 = uVar11 * 2;
            uVar11 = uVar11 + 1;
            *(uint *)(param_2[1] + (long)(int)(iVar19 + (uint)*(byte *)(*param_2 + 0x13)) * 4) =
                 uVar7 | (int)lVar26 << 0x10 |
                 (uint)(uVar25 >> 0x14) & 0xf000 | (uint)(uVar25 >> 0x1e) & 0x1c0;
            *(int *)(param_2[1] + (long)(int)((uint)*(byte *)(*param_2 + 0x13) + iVar19 + 1) * 4) =
                 (int)uVar25;
          }
        }
      }
      else {
        if ((bVar4 & 1) == 0) {
          if ((bVar4 >> 1 & 1) == 0) goto LAB_006b9614;
          uVar25 = *(ulong *)(lVar22 + lVar14);
          uVar23 = ((ulong *)(lVar22 + lVar14))[1];
          uVar7 = 0;
          if ((char)bVar4 < '\0') {
            uVar7 = 3;
          }
          if ((bVar4 & 0x40) != 0) {
            uVar7 = 1;
          }
          lVar22 = param_2[1];
          uVar7 = (uint)(uVar25 >> 4) & 0xf0000000 | uVar7;
          bVar4 = *(byte *)(*param_2 + 0x15);
          uVar27 = (uint)(uVar25 >> 0x22) & 0x1c | (uint)(uVar23 >> 8) & 0xf000000;
          iVar16 = iVar17;
          iVar18 = iVar19 + 1;
          iVar17 = iVar19;
        }
        else {
          uVar25 = *(ulong *)(lVar22 + lVar14);
          uVar23 = ((ulong *)(lVar22 + lVar14))[1];
          uVar7 = 0;
          if ((char)bVar4 < '\0') {
            uVar7 = 3;
          }
          if ((bVar4 & 0x40) != 0) {
            uVar7 = 1;
          }
          lVar22 = param_2[1];
          uVar7 = (uint)(uVar25 >> 4) & 0xf0000000 | uVar7;
          bVar4 = *(byte *)(*param_2 + 0x14);
          uVar27 = (uint)(uVar25 >> 0x22) & 0x1c | (uint)(uVar23 >> 8) & 0xf000000;
          iVar16 = iVar17 + 1;
        }
        iVar17 = (uint)bVar4 + (int)((ulong)((long)iVar17 * 0xc) >> 2);
        *(int *)(lVar22 + (long)iVar17 * 4) = (int)uVar23;
        *(int *)(param_2[1] + (long)(iVar17 + 1) * 4) = (int)uVar25;
        *(uint *)(param_2[1] + (long)(iVar17 + 2) * 4) = uVar7 | uVar27;
        iVar17 = iVar16;
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x10;
      iVar19 = iVar18;
    } while (uVar15 < *(byte *)(param_4 + 0x35));
    if (0 < (int)uVar12) {
      lVar14 = uVar12 << 2;
      do {
        lVar14 = lVar14 + -4;
        lVar22 = *param_3;
        iVar13 = (int)uVar12;
        pbVar10 = (byte *)&local_80;
        if (iVar13 != 1) {
          uVar15 = local_80 & 0xff;
          pbVar6 = (byte *)((ulong)&local_80 | 4);
          pbVar10 = (byte *)&local_80;
          lVar26 = lVar14;
          do {
            if (*(long *)(lVar22 + (ulong)*pbVar6 * 0x10 + 8) !=
                *(long *)(lVar22 + uVar15 * 0x10 + 8)) {
              pbVar10 = pbVar6;
              uVar15 = (ulong)*pbVar6;
            }
            pbVar6 = pbVar6 + 4;
            lVar26 = lVar26 + -4;
          } while (lVar26 != 0);
        }
        puVar2 = (ulong *)(lVar22 + (ulong)*pbVar10 * 0x10);
        puVar21 = puVar2 + 1;
        uVar15 = *puVar21 + 0xf & 0xfffffffffffffff0;
        bVar5 = uVar9 < uVar15;
        uVar9 = uVar9 - uVar15;
        if (bVar5) {
          if (iVar13 < 1) {
            return 0;
          }
          pbVar10 = (byte *)((ulong)&local_80 | 2);
          do {
            puVar2 = (ulong *)(*param_3 + (ulong)pbVar10[-2] * 0x10);
            bVar4 = *(byte *)(param_4 + (ulong)pbVar10[-2] + 0x3a);
            uVar11 = 0;
            if ((char)bVar4 < '\0') {
              uVar11 = 3;
            }
            uVar15 = *puVar2;
            uVar9 = puVar2[1];
            if ((bVar4 & 0x40) != 0) {
              uVar11 = 1;
            }
            uVar11 = (uint)(uVar15 >> 4) & 0xf0000000 | (uint)(uVar15 >> 0x22) & 0x1c | uVar11 |
                     (uint)(uVar9 >> 8) & 0xf000000;
            uVar20 = (undefined4)uVar9;
            if ((bVar4 & 1) == 0) {
              lVar14 = (ulong)*(byte *)(*param_2 + 0x15) + (ulong)pbVar10[-1] * 3;
              iVar13 = (int)lVar14;
              *(undefined4 *)(param_2[1] + lVar14 * 4) = uVar20;
              *(int *)(param_2[1] + (ulong)(iVar13 + 1) * 4) = (int)uVar15;
              *(uint *)(param_2[1] + (ulong)(iVar13 + 2) * 4) = uVar11;
              uVar15 = (ulong)*pbVar10 * 2;
              *(undefined4 *)(param_2[1] + (uVar15 + *(byte *)(*param_2 + 0x18)) * 4) = 0;
              pbVar6 = (byte *)(*param_2 + 0x18);
            }
            else {
              lVar14 = (ulong)pbVar10[-1] * 3 + (ulong)*(byte *)(*param_2 + 0x14);
              iVar13 = (int)lVar14;
              *(undefined4 *)(param_2[1] + lVar14 * 4) = uVar20;
              *(int *)(param_2[1] + (ulong)(iVar13 + 1) * 4) = (int)uVar15;
              *(uint *)(param_2[1] + (ulong)(iVar13 + 2) * 4) = uVar11;
              uVar15 = (ulong)*pbVar10 * 2;
              *(uint *)(param_2[1] + (uVar15 + *(byte *)(*param_2 + 0x13)) * 4) = *pbVar10 & 0x3f;
              pbVar6 = (byte *)(*param_2 + 0x13);
            }
            pbVar10 = pbVar10 + 4;
            uVar12 = uVar12 - 1;
            *(undefined4 *)(param_2[1] + ((uVar15 | 1) + (ulong)*pbVar6) * 4) = 0;
          } while (uVar12 != 0);
          return 0;
        }
        bVar4 = *(byte *)(param_4 + (ulong)*pbVar10 + 0x3a);
        uVar20 = 0;
        if ((char)bVar4 < '\0') {
          uVar20 = 3;
        }
        if ((bVar4 & 0x40) != 0) {
          uVar20 = 1;
        }
        if ((bVar4 & 1) == 0) {
          lVar22 = (ulong)*(byte *)(*param_2 + 0x15) + (ulong)pbVar10[1] * 3;
          iVar8 = (int)lVar22;
          *(undefined4 *)(param_2[1] + lVar22 * 4) = 0;
          *(undefined4 *)(param_2[1] + (ulong)(iVar8 + 1) * 4) = 0;
          *(undefined4 *)(param_2[1] + (ulong)(iVar8 + 2) * 4) = uVar20;
          uVar25 = *puVar2;
          uVar15 = *puVar21;
          bVar3 = pbVar10[2];
          *(int *)(param_2[1] + ((ulong)bVar3 * 2 + (ulong)*(byte *)(*param_2 + 0x18)) * 4) =
               (int)uVar25;
          *(uint *)(param_2[1] + ((ulong)*(byte *)(*param_2 + 0x18) + (ulong)bVar3 * 2) * 4 + 4) =
               (uint)(uVar25 >> 0x20) & 0xffff | (uint)((uVar15 << 0x30) >> 0x20);
          if ((bVar4 >> 4 & 1) == 0) {
            *(short *)(lVar1 + (ulong)pbVar10[3] * 2) = (short)*puVar21;
            uVar15 = (long)pbVar10 - (long)&local_80 >> 2;
            uVar25 = uVar12 - 1 & 0xffffffff;
            if (uVar15 != uVar25) {
LAB_006b94b0:
              *(undefined4 *)((long)&local_80 + uVar15 * 4) =
                   *(undefined4 *)((long)&local_80 + uVar25 * 4);
            }
          }
          else {
            uVar15 = (long)pbVar10 - (long)&local_80 >> 2;
            uVar25 = uVar12 - 1 & 0xffffffff;
            if (uVar15 != uVar25) goto LAB_006b94b0;
          }
        }
        else {
          lVar22 = (ulong)pbVar10[1] * 3 + (ulong)*(byte *)(*param_2 + 0x14);
          iVar8 = (int)lVar22;
          *(undefined4 *)(param_2[1] + lVar22 * 4) = 0;
          *(undefined4 *)(param_2[1] + (ulong)(iVar8 + 1) * 4) = 0;
          *(undefined4 *)(param_2[1] + (ulong)(iVar8 + 2) * 4) = uVar20;
          uVar15 = *puVar2;
          lVar22 = (ulong)pbVar10[2] * 2;
          *(uint *)(param_2[1] + (lVar22 + (ulong)*(byte *)(*param_2 + 0x13)) * 4) =
               (uint)(uVar15 >> 0x14) & 0xf000 | pbVar10[2] & 0x3f | (uint)(uVar15 >> 0x1e) & 0x1c0
               | (int)*puVar21 << 0x10;
          *(int *)(param_2[1] + ((ulong)*(byte *)(*param_2 + 0x13) + lVar22) * 4 + 4) = (int)uVar15;
          uVar15 = (long)pbVar10 - (long)&local_80 >> 2;
          uVar25 = uVar12 - 1 & 0xffffffff;
          if (uVar15 != uVar25) goto LAB_006b94b0;
        }
        uVar12 = uVar12 - 1;
      } while (1 < iVar13);
    }
  }
  return 0;
}

