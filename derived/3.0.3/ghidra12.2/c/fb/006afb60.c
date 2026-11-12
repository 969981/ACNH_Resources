
undefined8
FUN_006afb60(long *param_1,uint param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  int iVar17;
  ulong *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (0 < (int)param_2) {
    uVar7 = 0;
    uVar4 = 0;
    iVar9 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar14 = 0;
    iVar17 = 0;
    iVar3 = 0;
    local_80 = 0;
    uStack_78 = 0;
    puVar18 = (ulong *)(param_3 + 8);
    iVar13 = 0;
    do {
      uVar22 = *(uint *)(param_4 + uVar7 * 4);
      iVar12 = iVar13;
      if ((uVar22 >> 2 & 1) == 0) {
        if ((uVar22 >> 3 & 1) == 0) {
          if ((uVar22 >> 5 & 1) == 0) {
LAB_006b0298:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl();
          }
          iVar8 = (int)uVar4;
          if ((uVar22 & 1) == 0) {
            if ((uVar22 >> 1 & 1) == 0) goto LAB_006b0298;
            uVar20 = *puVar18;
            if (uVar20 >> 0x10 == 0) {
              lVar5 = (long)iVar8 * 4;
              uVar4 = (ulong)(iVar8 + 1);
              *(char *)((long)&local_80 + lVar5) = (char)uVar7;
              *(char *)((long)&local_80 + lVar5 + 1) = (char)iVar13;
              *(char *)((long)&local_80 + lVar5 + 2) = (char)iVar17;
              *(char *)((long)&local_80 + lVar5 + 3) = (char)iVar3;
            }
            else {
              uVar21 = puVar18[-1];
              uVar19 = -(uVar22 >> 7 & 1) & 3;
              if ((uVar22 & 0x40) != 0) {
                uVar19 = 1;
              }
              iVar12 = (uint)*(byte *)(*param_1 + 0x15) + (int)((ulong)((long)iVar13 * 0xc) >> 2);
              *(int *)(param_1[1] + (long)iVar12 * 4) = (int)uVar20;
              *(int *)(param_1[1] + (long)(iVar12 + 1) * 4) = (int)uVar21;
              *(uint *)(param_1[1] + (long)(iVar12 + 2) * 4) =
                   (uint)(uVar20 >> 8) & 0xf000000 | (uint)(uVar21 >> 4) & 0xf0000000 | uVar19 |
                   (uint)(uVar21 >> 0x22) & 0x1c;
              *(undefined4 *)
               (param_1[1] + (long)(int)(iVar17 * 2 + (uint)*(byte *)(*param_1 + 0x18)) * 4) = 0;
              *(undefined4 *)
               (param_1[1] + (long)(int)((uint)*(byte *)(*param_1 + 0x18) + iVar17 * 2 + 1) * 4) = 0
              ;
            }
            iVar17 = iVar17 + 1;
            iVar3 = ((uVar22 >> 4 ^ 0xffffffff) & 1) + iVar3;
            iVar12 = iVar13 + 1;
          }
          else {
            uVar20 = *puVar18;
            if (uVar20 >> 0x10 == 0) {
              lVar5 = (long)iVar8 * 4;
              uVar4 = (ulong)(iVar8 + 1);
              *(char *)((long)&local_80 + lVar5) = (char)uVar7;
              *(char *)((long)&local_80 + lVar5 + 1) = (char)iVar9;
              *(char *)((long)&local_80 + lVar5 + 2) = (char)uVar14;
            }
            else {
              uVar21 = puVar18[-1];
              uVar19 = -(uVar22 >> 7 & 1) & 3;
              if ((uVar22 & 0x40) != 0) {
                uVar19 = 1;
              }
              iVar13 = (uint)*(byte *)(*param_1 + 0x14) + (int)((ulong)((long)iVar9 * 0xc) >> 2);
              *(int *)(param_1[1] + (long)iVar13 * 4) = (int)uVar20;
              *(int *)(param_1[1] + (long)(iVar13 + 1) * 4) = (int)uVar21;
              *(uint *)(param_1[1] + (long)(iVar13 + 2) * 4) =
                   (uint)(uVar20 >> 8) & 0xf000000 | (uint)(uVar21 >> 4) & 0xf0000000 | uVar19 |
                   (uint)(uVar21 >> 0x22) & 0x1c;
              *(uint *)(param_1[1] + (long)(int)(uVar14 * 2 + (uint)*(byte *)(*param_1 + 0x13)) * 4)
                   = uVar14 & 0xe3f;
              *(undefined4 *)
               (param_1[1] + (long)(int)((uint)*(byte *)(*param_1 + 0x13) + uVar14 * 2 + 1) * 4) = 0
              ;
            }
            uVar14 = uVar14 + 1;
            iVar9 = iVar9 + 1;
          }
        }
        else {
          uVar20 = *puVar18;
          uVar21 = uVar20 + 0xf & 0xfffffffffffffff0;
          bVar2 = param_5 < uVar21;
          param_5 = param_5 - uVar21;
          if (bVar2) {
            return 0x11a0b;
          }
          if ((uVar22 & 1) == 0) {
            if ((uVar22 >> 1 & 1) == 0) goto LAB_006b0298;
            uVar21 = puVar18[-1];
            iVar13 = iVar17 * 2;
            iVar17 = iVar17 + 1;
            *(int *)(param_1[1] + (long)(int)(iVar13 + (uint)*(byte *)(*param_1 + 0x18)) * 4) =
                 (int)uVar21;
            *(uint *)(param_1[1] + (long)(int)((uint)*(byte *)(*param_1 + 0x18) + iVar13 + 1) * 4) =
                 (uint)(uVar21 >> 0x20) & 0xffff | (uint)((uVar20 << 0x30) >> 0x20);
            if ((uVar22 >> 4 & 1) == 0) {
              if (*puVar18 >> 0x10 != 0) {
                return 0x20b;
              }
              *(short *)(param_1[1] + (ulong)*(byte *)(*param_1 + 0x17) * 4 + param_6 +
                        (long)iVar3 * 2) = (short)*puVar18;
              iVar3 = iVar3 + 1;
            }
          }
          else {
            uVar21 = puVar18[-1];
            uVar22 = uVar14 & 0xe3f;
            iVar13 = uVar14 * 2;
            uVar14 = uVar14 + 1;
            *(uint *)(param_1[1] + (long)(int)(iVar13 + (uint)*(byte *)(*param_1 + 0x13)) * 4) =
                 uVar22 | (int)uVar20 << 0x10 | (uint)(uVar21 >> 0x14) & 0xf000 |
                 (uint)(uVar21 >> 0x1e) & 0x1c0;
            *(int *)(param_1[1] + (long)(int)((uint)*(byte *)(*param_1 + 0x13) + iVar13 + 1) * 4) =
                 (int)uVar21;
          }
        }
      }
      else {
        if ((uVar22 & 1) == 0) {
          if ((uVar22 >> 1 & 1) == 0) goto LAB_006b0298;
          uVar20 = puVar18[-1];
          uVar21 = *puVar18;
          uVar19 = -(uVar22 >> 7 & 1) & 3;
          if ((uVar22 & 0x40) != 0) {
            uVar19 = 1;
          }
          lVar5 = param_1[1];
          bVar1 = *(byte *)(*param_1 + 0x15);
          uVar19 = (uint)(uVar20 >> 4) & 0xf0000000 | (uint)(uVar20 >> 0x22) & 0x1c | uVar19;
          uVar22 = (uint)(uVar21 >> 8);
          iVar8 = iVar9;
          iVar12 = iVar13 + 1;
          iVar9 = iVar13;
        }
        else {
          uVar20 = puVar18[-1];
          uVar21 = *puVar18;
          uVar19 = -(uVar22 >> 7 & 1) & 3;
          if ((uVar22 & 0x40) != 0) {
            uVar19 = 1;
          }
          lVar5 = param_1[1];
          bVar1 = *(byte *)(*param_1 + 0x14);
          uVar19 = (uint)(uVar20 >> 4) & 0xf0000000 | (uint)(uVar20 >> 0x22) & 0x1c | uVar19;
          uVar22 = (uint)(uVar21 >> 8);
          iVar8 = iVar9 + 1;
        }
        iVar9 = (uint)bVar1 + (int)((ulong)((long)iVar9 * 0xc) >> 2);
        *(int *)(lVar5 + (long)iVar9 * 4) = (int)uVar21;
        *(int *)(param_1[1] + (long)(iVar9 + 1) * 4) = (int)uVar20;
        *(uint *)(param_1[1] + (long)(iVar9 + 2) * 4) = uVar19 | uVar22 & 0xf000000;
        iVar9 = iVar8;
      }
      uVar7 = uVar7 + 1;
      puVar18 = puVar18 + 2;
      iVar13 = iVar12;
    } while (param_2 != uVar7);
    if (0 < (int)uVar4) {
      lVar5 = uVar4 << 2;
      do {
        lVar5 = lVar5 + -4;
        iVar3 = (int)uVar4;
        pbVar6 = (byte *)&local_80;
        if (iVar3 != 1) {
          uVar7 = local_80 & 0xff;
          pbVar6 = (byte *)&local_80;
          lVar16 = lVar5;
          pbVar11 = (byte *)((ulong)&local_80 | 4);
          do {
            if (*(long *)(param_3 + (ulong)*pbVar11 * 0x10 + 8) !=
                *(long *)(param_3 + uVar7 * 0x10 + 8)) {
              pbVar6 = pbVar11;
              uVar7 = (ulong)*pbVar11;
            }
            pbVar11 = pbVar11 + 4;
            lVar16 = lVar16 + -4;
          } while (lVar16 != 0);
        }
        puVar18 = (ulong *)(param_3 + (ulong)*pbVar6 * 0x10);
        puVar15 = puVar18 + 1;
        uVar7 = *puVar15 + 0xf & 0xfffffffffffffff0;
        bVar2 = param_5 < uVar7;
        param_5 = param_5 - uVar7;
        if (bVar2) {
          if (iVar3 < 1) {
            return 0;
          }
          pbVar6 = (byte *)((ulong)&local_80 | 2);
          do {
            puVar18 = (ulong *)(param_3 + (ulong)pbVar6[-2] * 0x10);
            uVar22 = *(uint *)(param_4 + (ulong)pbVar6[-2] * 4);
            uVar7 = *puVar18;
            uVar20 = puVar18[1];
            uVar14 = -(uVar22 >> 7 & 1) & 3;
            if ((uVar22 & 0x40) != 0) {
              uVar14 = 1;
            }
            uVar14 = (uint)(uVar7 >> 4) & 0xf0000000 | uVar14 |
                     (uint)(uVar7 >> 0x22) & 0x1c | (uint)(uVar20 >> 8) & 0xf000000;
            uVar10 = (undefined4)uVar20;
            if ((uVar22 & 1) == 0) {
              lVar5 = (ulong)*(byte *)(*param_1 + 0x15) + (ulong)pbVar6[-1] * 3;
              iVar3 = (int)lVar5;
              *(undefined4 *)(param_1[1] + lVar5 * 4) = uVar10;
              *(int *)(param_1[1] + (ulong)(iVar3 + 1) * 4) = (int)uVar7;
              *(uint *)(param_1[1] + (ulong)(iVar3 + 2) * 4) = uVar14;
              uVar7 = (ulong)*pbVar6 * 2;
              *(undefined4 *)(param_1[1] + (uVar7 + *(byte *)(*param_1 + 0x18)) * 4) = 0;
              pbVar11 = (byte *)(*param_1 + 0x18);
            }
            else {
              lVar5 = (ulong)pbVar6[-1] * 3 + (ulong)*(byte *)(*param_1 + 0x14);
              iVar3 = (int)lVar5;
              *(undefined4 *)(param_1[1] + lVar5 * 4) = uVar10;
              *(int *)(param_1[1] + (ulong)(iVar3 + 1) * 4) = (int)uVar7;
              *(uint *)(param_1[1] + (ulong)(iVar3 + 2) * 4) = uVar14;
              uVar7 = (ulong)*pbVar6 * 2;
              *(uint *)(param_1[1] + (uVar7 + *(byte *)(*param_1 + 0x13)) * 4) = *pbVar6 & 0x3f;
              pbVar11 = (byte *)(*param_1 + 0x13);
            }
            pbVar6 = pbVar6 + 4;
            uVar4 = uVar4 - 1;
            *(undefined4 *)(param_1[1] + ((uVar7 | 1) + (ulong)*pbVar11) * 4) = 0;
          } while (uVar4 != 0);
          return 0;
        }
        uVar22 = *(uint *)(param_4 + (ulong)*pbVar6 * 4);
        uVar14 = -(uVar22 >> 7 & 1) & 3;
        if ((uVar22 & 0x40) != 0) {
          uVar14 = 1;
        }
        if ((uVar22 & 1) == 0) {
          lVar16 = (ulong)*(byte *)(*param_1 + 0x15) + (ulong)pbVar6[1] * 3;
          iVar17 = (int)lVar16;
          *(undefined4 *)(param_1[1] + lVar16 * 4) = 0;
          *(undefined4 *)(param_1[1] + (ulong)(iVar17 + 1) * 4) = 0;
          *(uint *)(param_1[1] + (ulong)(iVar17 + 2) * 4) = uVar14;
          uVar7 = *puVar18;
          uVar20 = *puVar15;
          bVar1 = pbVar6[2];
          *(int *)(param_1[1] + ((ulong)bVar1 * 2 + (ulong)*(byte *)(*param_1 + 0x18)) * 4) =
               (int)uVar7;
          *(uint *)(param_1[1] + ((ulong)*(byte *)(*param_1 + 0x18) + (ulong)bVar1 * 2) * 4 + 4) =
               (uint)(uVar7 >> 0x20) & 0xffff | (uint)((uVar20 << 0x30) >> 0x20);
          if ((uVar22 >> 4 & 1) == 0) {
            *(short *)(param_1[1] + (ulong)*(byte *)(*param_1 + 0x17) * 4 + param_6 +
                      (ulong)pbVar6[3] * 2) = (short)*puVar15;
            uVar7 = (long)pbVar6 - (long)&local_80 >> 2;
            uVar20 = uVar4 - 1 & 0xffffffff;
            if (uVar7 != uVar20) {
LAB_006b0140:
              *(undefined4 *)((long)&local_80 + uVar7 * 4) =
                   *(undefined4 *)((long)&local_80 + uVar20 * 4);
            }
          }
          else {
            uVar7 = (long)pbVar6 - (long)&local_80 >> 2;
            uVar20 = uVar4 - 1 & 0xffffffff;
            if (uVar7 != uVar20) goto LAB_006b0140;
          }
        }
        else {
          lVar16 = (ulong)pbVar6[1] * 3 + (ulong)*(byte *)(*param_1 + 0x14);
          iVar17 = (int)lVar16;
          *(undefined4 *)(param_1[1] + lVar16 * 4) = 0;
          *(undefined4 *)(param_1[1] + (ulong)(iVar17 + 1) * 4) = 0;
          *(uint *)(param_1[1] + (ulong)(iVar17 + 2) * 4) = uVar14;
          uVar7 = *puVar18;
          lVar16 = (ulong)pbVar6[2] * 2;
          *(uint *)(param_1[1] + (lVar16 + (ulong)*(byte *)(*param_1 + 0x13)) * 4) =
               (uint)(uVar7 >> 0x14) & 0xf000 | pbVar6[2] & 0x3f | (uint)(uVar7 >> 0x1e) & 0x1c0 |
               (int)*puVar15 << 0x10;
          *(int *)(param_1[1] + ((ulong)*(byte *)(*param_1 + 0x13) + lVar16) * 4 + 4) = (int)uVar7;
          uVar7 = (long)pbVar6 - (long)&local_80 >> 2;
          uVar20 = uVar4 - 1 & 0xffffffff;
          if (uVar7 != uVar20) goto LAB_006b0140;
        }
        uVar4 = uVar4 - 1;
      } while (1 < iVar3);
    }
  }
  return 0;
}

