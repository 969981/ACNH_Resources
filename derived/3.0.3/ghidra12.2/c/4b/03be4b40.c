
void FUN_03be4b40(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  byte bVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined8 local_a0;
  undefined8 uStack_98;
  ushort local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  byte *pbStack_68;
  
  iVar3 = *(int *)(*param_2 + 0x70);
  if (iVar3 == 0) {
    return;
  }
  lVar14 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0xf0);
  if (lVar14 != 0) {
    iVar5 = *(int *)(lVar14 + 0xd0) + *(int *)(lVar14 + 0xcc) + -1;
    iVar17 = 0;
    if (*(int *)(lVar14 + 200) <= iVar5) {
      iVar17 = *(int *)(lVar14 + 200);
    }
    plVar21 = (long *)(*(long *)(lVar14 + 0xc0) + (long)(iVar5 - iVar17) * 8);
    if ((*plVar21 != 0) && (0 < *(int *)(*plVar21 + 8))) goto LAB_03be4bc0;
  }
  plVar21 = (long *)(*(long *)PTR_DAT_04bc3ee8 + 0x128);
LAB_03be4bc0:
  uVar4 = *(uint *)(param_2[1] + 8);
  if (uVar4 != 0) {
    uVar23 = 0;
    lVar14 = *(long *)(*param_2 + 0x48);
    do {
      local_70 = &PTR_LAB_048f9770;
      pbStack_68 = (byte *)&DAT_0407ebb1;
      lVar18 = param_2[5] + uVar23 * 0x20;
      if ((*(ushort *)(lVar18 + 6) & 1) == 0) {
        lVar22 = (long)(int)uVar23;
        lVar1 = lVar22;
        if (*(uint *)(param_2 + 0xf) <= uVar23) {
          lVar1 = 0;
        }
        lVar1 = param_2[0x10] + lVar1 * 8;
        *(byte *)(lVar1 + 2) = *(byte *)(lVar1 + 2) & 0xfe;
        uVar8 = (ulong)*(uint *)(lVar18 + 0x18);
        puVar12 = (undefined8 *)(DAT_04c4bf50 | uVar8);
        puVar2 = puVar12 + 0x20000000;
        if (DAT_04c4bf48 <= uVar8) {
          puVar2 = puVar12;
        }
        uVar13 = (uint)*puVar2;
        if (((uVar13 >> 0x11 & 1) == 0) ||
           (uVar6 = (uVar13 & 0x3ffff) - (uVar13 >> 1 & 0x15555),
           uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
           uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f, uVar6 = uVar6 + (uVar6 >> 8),
           (*(uint *)(lVar14 + ((ulong)*(uint *)((long)puVar2 +
                                                (long)(int)((uVar6 + (uVar6 >> 0x10) & 0x3f) - 1) *
                                                4 + 8) & 0xffffff) * 4) >> 6 & 1) == 0)) {
          lVar18 = lVar22;
          if (*(uint *)(param_2 + 0xf) <= uVar23) {
            lVar18 = 0;
          }
          pbVar9 = (byte *)(param_2[0x10] + lVar18 * 8 + 2);
          if ((*pbVar9 >> 2 & 1) == 0) {
            if ((uVar13 >> 1 & 1) == 0) {
              if (1 < *(uint *)(param_3 + 4)) {
                uVar13 = *(uint *)(*(long *)(param_3 + 0x18) + 0x14);
                goto LAB_03be4d70;
              }
            }
            else {
              uVar13 = (uVar13 & 3) - ((uVar13 & 3) >> 1);
              uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
              uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
              uVar13 = uVar13 + (uVar13 >> 8);
              uVar13 = (*(uint *)((long)puVar2 +
                                 (long)(int)((uVar13 + (uVar13 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                       0xffffff) + iVar3;
LAB_03be4d70:
              pbVar16 = (byte *)(DAT_04c4bf50 | uVar13);
              pbStack_68 = pbVar16 + 0x100000000;
              if (DAT_04c4bf48 <= uVar13) {
                pbStack_68 = pbVar16;
              }
            }
            bVar11 = *pbStack_68;
            uVar13 = (uint)bVar11;
            if (pbStack_68 != &DAT_040c7913 && bVar11 != 0) {
              if (bVar11 == 0x40) {
                lVar18 = 0x7fffe;
                pbVar16 = &DAT_040c7916;
                pbVar7 = pbStack_68;
                do {
                  if (pbVar7[1] != pbVar16[-2]) goto LAB_03be4e00;
                  if (pbVar7[1] == 0) break;
                  if (pbVar7[2] != pbVar16[-1]) goto LAB_03be4e00;
                  if (pbVar7[2] == 0) break;
                  if ((lVar18 == 0) || (bVar11 = pbVar7[3], bVar11 != *pbVar16)) goto LAB_03be4e00;
                  pbVar16 = pbVar16 + 3;
                  lVar18 = lVar18 + -3;
                  pbVar7 = pbVar7 + 3;
                } while (bVar11 != 0);
              }
              else {
LAB_03be4e00:
                lVar18 = *plVar21;
                if (lVar18 != 0) {
                  uVar6 = *(uint *)(lVar18 + 8);
                  uVar8 = (ulong)uVar6;
                  if (0 < (int)uVar6) {
                    uVar19 = 0xffffffff;
                    do {
                      pbStack_68 = pbStack_68 + 1;
                      uVar19 = crc32b(uVar19,uVar13,0x4c11db7);
                      uVar13 = (uint)*pbStack_68;
                    } while (uVar13 != 0);
                    uVar15 = (ulong)(uVar6 >> 1);
                    uVar19 = ~uVar19;
                    uVar13 = *(uint *)(lVar18 + uVar15 * 4 + 0xc);
                    if (uVar13 != uVar19) {
                      uVar20 = 0;
                      do {
                        if (uVar13 < uVar19) {
                          iVar17 = (int)uVar20;
                          uVar20 = uVar15;
                        }
                        else {
                          iVar17 = (int)uVar8;
                          uVar8 = uVar15;
                        }
                        if (iVar17 == (int)uVar15) {
                          bVar11 = 0;
                          goto LAB_03be4f24;
                        }
                        uVar15 = (ulong)((uint)((int)uVar20 + (int)uVar8) >> 1);
                        uVar13 = *(uint *)(lVar18 + uVar15 * 4 + 0xc);
                      } while (uVar13 != uVar19);
                    }
                    bVar11 = 1;
LAB_03be4f24:
                    *pbVar9 = *pbVar9 & 0xfe | bVar11;
                    goto LAB_03be4c50;
                  }
                }
                local_a0 = 0;
                uStack_98 = 0;
                local_90 = 0xff;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
                ppuVar10 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                if ((param_4 != (undefined8 *)0x0) && (*pbStack_68 != 0)) {
                  uVar8 = (**(code **)*param_4)(param_4,&local_a0,&local_70);
                  if ((uVar8 & 1) != 0) {
                    if (*(uint *)(param_2 + 0xf) <= uVar23) {
                      lVar22 = 0;
                    }
                    lVar18 = param_2[0x10] + lVar22 * 8;
                    *(byte *)(lVar18 + 2) = *(byte *)(lVar18 + 2) & 0xfe | (local_90 & 0x2100) != 0;
                    goto LAB_03be4c50;
                  }
                  ppuVar10 = local_70;
                }
                (*(code *)ppuVar10[3])(&local_70);
              }
            }
          }
        }
        else {
          if (*(uint *)(param_2 + 0xf) <= uVar23) {
            lVar22 = 0;
          }
          lVar18 = param_2[0x10] + lVar22 * 8;
          *(byte *)(lVar18 + 2) = *(byte *)(lVar18 + 2) | 1;
        }
      }
LAB_03be4c50:
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar4);
  }
  return;
}

