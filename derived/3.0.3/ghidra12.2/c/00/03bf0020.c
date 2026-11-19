
void FUN_03bf0020(long param_1,long param_2,int param_3,long *param_4)

{
  bool bVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  int iVar19;
  undefined2 *puVar20;
  ulong uVar21;
  long lVar22;
  ushort *puVar23;
  long *plVar24;
  long lVar25;
  undefined1 local_78;
  
  lVar22 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = param_4 + 3 + *(uint *)(param_4 + 2);
  if (1 < *(uint *)(param_4 + 2)) {
    plVar4 = param_4 + 3;
  }
  lVar25 = *(long *)(*plVar4 + 0x48);
  if (*(int *)(param_2 + 8) < *(int *)(param_2 + 4)) {
    local_78 = 0;
  }
  else {
    local_78 = 0;
    uVar21 = (long)*(int *)(param_2 + 4);
    do {
      plVar4 = (long *)(lVar22 + uVar21 * 0x28);
      puVar20 = (undefined2 *)((long)plVar4 + 0x22);
      *puVar20 = 0;
      puVar23 = (ushort *)(lVar25 + uVar21 * 0x18 + 0x10);
      uVar2 = *puVar23;
      if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 3 & 1) == 0) {
          if ((uVar2 >> 4 & 1) == 0) {
            lVar6 = (**(code **)(*param_4 + 0x10))();
            uVar8 = (ulong)*(uint *)(lVar25 + uVar21 * 0x18 + 4);
            uVar15 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
            uVar7 = uVar15 + 0x100000000;
            if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
              uVar7 = uVar15;
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 == 0) {
              iVar19 = *(int *)(lVar25 + uVar21 * 0x18 + 8);
LAB_03bf04a8:
              if (iVar19 == param_3) {
LAB_03bf04b4:
                local_78 = 1;
                lVar6 = *(long *)(param_1 + 0x30);
                goto joined_r0x03bf02d4;
              }
            }
            else {
              plVar24 = (long *)(lVar6 + 0x18) + *(uint *)(lVar6 + 0x10);
              if (1 < *(uint *)(lVar6 + 0x10)) {
                plVar24 = (long *)(lVar6 + 0x18);
              }
              lVar16 = *plVar24;
              uVar8 = uVar7 - *(long *)(lVar16 + 0x28);
              lVar6 = (long)(uVar8 * 0x8000000) >> 0x20;
              if (*(uint *)(lVar16 + 0x78) <= (uint)(uVar8 >> 5)) {
                lVar6 = 0;
              }
              iVar19 = *(int *)(lVar25 + uVar21 * 0x18 + 8);
              if ((*(byte *)(*(long *)(lVar16 + 0x80) + lVar6 * 8 + 2) >> 1 & 1) == 0)
              goto LAB_03bf04a8;
              if ((iVar19 <= param_3) && (param_3 < *(int *)(lVar25 + uVar21 * 0x18 + 0xc)))
              goto LAB_03bf04b4;
            }
            if (((*puVar23 & 1) != 0) && (lVar6 = *(long *)(param_1 + 0x30), lVar6 != 0)) {
              uVar5 = *(uint *)(lVar6 + 4);
              if ((int)uVar5 <= *(int *)(lVar6 + 8)) {
                iVar19 = (*(int *)(lVar6 + 8) - uVar5) + 1;
                puVar23 = (ushort *)(lVar25 + 0x10 + (long)(int)uVar5 * 0x18);
                pcVar17 = (char *)(lVar22 + 0x23 + (long)(int)uVar5 * 0x28);
                do {
                  if (*pcVar17 == '\0') {
                    uVar15 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(puVar23 + -6);
                    uVar8 = uVar15 + 0x100000000;
                    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(puVar23 + -6)) {
                      uVar8 = uVar15;
                    }
                    if (uVar8 == uVar7) {
                      if (pcVar17[-1] != '\0') {
                        local_78 = 1;
                        *pcVar17 = '\x01';
                        if (-1 < (int)uVar5) {
                          lVar16 = lVar22 + (ulong)uVar5 * 0x28;
                          plVar24 = (long *)(lVar16 + 0x10);
                          lVar6 = *plVar24;
                          if (lVar6 != 0) {
                            uVar8 = (ulong)*(uint *)(lVar25 + uVar21 * 0x18 + 0x14);
                            uVar7 = (*(ulong *)PTR_DAT_04bb38c8 | uVar8) + 0x100000000;
                            if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
                              uVar7 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
                            }
                            FUN_03bf0c34(param_1,uVar8,plVar4);
                            FUN_03be6f00(lVar6,0,uVar7,*plVar4,plVar4[1]);
                          }
                          lVar6 = lVar22 + uVar21 * 0x28;
                          lVar11 = *plVar24;
                          *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar16 + 0x18);
                          *(long *)(lVar6 + 0x10) = lVar11;
                          *plVar24 = 0;
                          *(undefined1 *)puVar20 = 1;
                          *(undefined4 *)(lVar22 + (ulong)uVar5 * 0x28 + 0x18) = 0;
                          goto LAB_03bf0268;
                        }
                        break;
                      }
                      if ((*puVar23 & 0xc) == 8) {
                        pcVar17[-1] = '\x01';
                        pcVar17[0] = '\x01';
                        goto LAB_03bf0268;
                      }
                    }
                  }
                  uVar5 = uVar5 + 1;
                  iVar19 = iVar19 + -1;
                  puVar23 = puVar23 + 0xc;
                  pcVar17 = pcVar17 + 0x28;
                  local_78 = 1;
                } while (iVar19 != 0);
                goto LAB_03bf0160;
              }
            }
LAB_03bf0268:
            local_78 = 1;
          }
          else {
            uVar7 = (ulong)*(uint *)(lVar25 + uVar21 * 0x18 + 8);
            pbVar13 = (byte *)(*(ulong *)PTR_DAT_04bb38c8 | uVar7);
            pbVar9 = pbVar13 + 0x100000000;
            if (*(ulong *)PTR_DAT_04bb38c0 <= uVar7) {
              pbVar9 = pbVar13;
            }
            uVar5 = (uint)*pbVar9;
            if (*pbVar9 != 0) {
              uVar12 = 0xffffffff;
              do {
                pbVar9 = pbVar9 + 1;
                uVar12 = crc32b(uVar12,uVar5,0x4c11db7);
                uVar5 = (uint)*pbVar9;
              } while (uVar5 != 0);
              uVar5 = ~uVar12;
            }
            if (*(uint *)(param_1 + 0x20) == uVar5) goto LAB_03bf02d0;
          }
        }
      }
      else {
LAB_03bf02d0:
        lVar6 = *(long *)(param_1 + 0x30);
joined_r0x03bf02d4:
        if ((lVar6 != 0) && ((*puVar23 & 1) != 0)) {
          uVar5 = *(uint *)(lVar6 + 4);
          if ((int)uVar5 <= *(int *)(lVar6 + 8)) {
            iVar19 = (*(int *)(lVar6 + 8) - uVar5) + 1;
            puVar23 = (ushort *)(lVar25 + 0x10 + (long)(int)uVar5 * 0x18);
            pcVar17 = (char *)(lVar22 + 0x23 + (long)(int)uVar5 * 0x28);
LAB_03bf0444:
            if (*pcVar17 != '\0') goto LAB_03bf0430;
            uVar8 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(puVar23 + -6);
            uVar7 = uVar8 + 0x100000000;
            if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(puVar23 + -6)) {
              uVar7 = uVar8;
            }
            uVar15 = (ulong)*(uint *)(lVar25 + uVar21 * 0x18 + 4);
            uVar18 = *(ulong *)PTR_DAT_04bb38c8 | uVar15;
            uVar8 = uVar18 + 0x100000000;
            if (*(ulong *)PTR_DAT_04bb38c0 <= uVar15) {
              uVar8 = uVar18;
            }
            if (uVar7 != uVar8) goto LAB_03bf0430;
            if (pcVar17[-1] == '\0') {
              if ((*puVar23 & 0xc) != 8) goto LAB_03bf0430;
              pcVar17[-1] = '\x01';
              pcVar17[0] = '\x01';
            }
            else {
              *pcVar17 = '\x01';
              if (-1 < (int)uVar5) {
                lVar6 = lVar22 + (ulong)uVar5 * 0x28;
                plVar24 = (long *)(lVar6 + 0x10);
                lVar16 = *plVar24;
                if (lVar16 != 0) {
                  uVar8 = (ulong)*(uint *)(lVar25 + uVar21 * 0x18 + 0x14);
                  uVar7 = (*(ulong *)PTR_DAT_04bb38c8 | uVar8) + 0x100000000;
                  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
                    uVar7 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
                  }
                  plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x30)
                                                           + 0x18) + 0x10))();
                  uVar15 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar8);
                  if ((uVar15 & 1) != 0) {
                    pcVar17 = (char *)(**(code **)(*plVar3 + 0x28))(plVar3,uVar8);
                    lVar11 = *(long *)(param_1 + 8);
                    if (*pcVar17 != '\0') {
                      lVar11 = (**(code **)(**(long **)(lVar11 + 0x38) + 0x10))
                                         (*(long **)(lVar11 + 0x38),pcVar17);
                      *plVar4 = lVar11;
                      *(undefined1 *)(plVar4 + 1) = 1;
                      if (lVar11 != 0) goto LAB_03bf0628;
                      lVar11 = *(long *)(param_1 + 8);
                    }
                    lVar10 = *(long *)(lVar11 + 0x40);
                    *(undefined1 *)(plVar4 + 1) = *(undefined1 *)(lVar11 + 0x48);
                    *plVar4 = lVar10;
                  }
LAB_03bf0628:
                  lVar11 = *plVar4;
                  lVar10 = plVar4[1];
                  *(undefined4 *)(lVar16 + 0x38) = 0;
                  *(char *)(lVar16 + 0x50) = (char)lVar10;
                  *(ulong *)(lVar16 + 0x40) = uVar7;
                  *(long *)(lVar16 + 0x48) = lVar11;
                  if (*(long *)(lVar16 + 0x68) != lVar16 + 0x60) {
                    lVar11 = (long)*(int *)(lVar16 + 0x74);
                    plVar4 = (long *)(*(long *)(lVar16 + 0x68) - lVar11);
                    do {
                      lVar10 = *(long *)(lVar16 + 0x48);
                      uVar14 = *(undefined8 *)(lVar16 + 0x50);
                      plVar4[7] = *(long *)(lVar16 + 0x40);
                      plVar4[8] = lVar10;
                      *(char *)(plVar4 + 9) = (char)uVar14;
                      (**(code **)(*plVar4 + 0x68))(plVar4);
                      plVar4 = (long *)(*(long *)((long)plVar4 + lVar11 + 8) - lVar11);
                    } while (plVar4 != (long *)((lVar16 + 0x60) - lVar11));
                  }
                  if (*(long *)(lVar16 + 0x80) != lVar16 + 0x78) {
                    lVar11 = (long)*(int *)(lVar16 + 0x8c);
                    plVar4 = (long *)(*(long *)(lVar16 + 0x80) - lVar11);
                    do {
                      lVar10 = *(long *)(lVar16 + 0x48);
                      uVar14 = *(undefined8 *)(lVar16 + 0x50);
                      plVar4[7] = *(long *)(lVar16 + 0x40);
                      plVar4[8] = lVar10;
                      *(char *)(plVar4 + 9) = (char)uVar14;
                      (**(code **)(*plVar4 + 0x68))(plVar4);
                      plVar4 = (long *)(*(long *)((long)plVar4 + lVar11 + 8) - lVar11);
                    } while (plVar4 != (long *)((lVar16 + 0x78) - lVar11));
                  }
                }
                lVar16 = lVar22 + uVar21 * 0x28;
                lVar11 = *plVar24;
                *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
                *(long *)(lVar16 + 0x10) = lVar11;
                *plVar24 = 0;
                *(undefined4 *)(lVar22 + (ulong)uVar5 * 0x28 + 0x18) = 0;
                goto LAB_03bf0158;
              }
            }
          }
        }
LAB_03bf02f0:
        uVar5 = (uint)uVar21;
        lVar6 = *(long *)(*(uint **)(param_1 + 0x10) + 2) + (long)(int)uVar5 * 0x28;
        if (**(uint **)(param_1 + 0x10) <= uVar5) {
          lVar6 = 0;
        }
        lVar16 = *(long *)(lVar6 + 0x10);
        if ((lVar16 != 0) && (*(int *)(lVar16 + 0x20) == *(int *)(lVar6 + 0x18))) {
          *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) | 0x10;
          if ((*(long *)(lVar16 + 0x28) != 0) && (*(long *)(lVar16 + 0x58) != 0)) {
            plVar4 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar16 + 0x28) + 0x30) +
                                                     0x18) + 0x20))();
            plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
            (**(code **)(*plVar4 + 0x10))();
            (**(code **)(**(long **)(lVar16 + 0x58) + 0x30))();
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined4 *)(lVar6 + 0x18) = 0;
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18);
        DataMemoryBarrier(2,1);
        DataMemoryBarrier(2,1);
        plVar4 = (long *)(lVar6 + 0x18);
        uVar12 = *(uint *)(lVar6 + 0x10);
        plVar24 = plVar4 + uVar12;
        if (1 < uVar12) {
          plVar24 = plVar4;
        }
        if (((*(ushort *)(*(long *)(*plVar24 + 0x48) + (uVar21 & 0xffffffff) * 0x18 + 0x10) & 1) ==
             0) || (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)(int)uVar5 * 0x28 +
                             0x22) == '\0')) {
          lVar6 = *(long *)(*plVar24 + 0x48) + (uVar21 & 0xffffffff) * 0x18;
          uVar8 = (ulong)*(uint *)(lVar6 + 4);
          uVar15 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
          uVar7 = uVar15 + 0x100000000;
          if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
            uVar7 = uVar15;
          }
          FUN_03bf0af0(param_1,0,uVar21 & 0xffffffff,*(undefined4 *)(lVar6 + 0x14),uVar7);
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)(int)uVar5 * 0x28 + 0x22)
               = 1;
        }
LAB_03bf0158:
        *(undefined1 *)puVar20 = 1;
      }
LAB_03bf0160:
      bVar1 = (long)uVar21 < (long)*(int *)(param_2 + 8);
      uVar21 = uVar21 + 1;
    } while (bVar1);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    iVar19 = *(int *)(lVar6 + 4);
    if (iVar19 <= *(int *)(lVar6 + 8)) {
      lVar6 = (long)iVar19 << 0x20;
      puVar23 = (ushort *)(lVar25 + (long)iVar19 * 0x18 + 0x10);
      uVar21 = (long)iVar19;
      pcVar17 = (char *)(lVar22 + (long)iVar19 * 0x28 + 0x23);
      do {
        if (*pcVar17 == '\0') {
          uVar2 = *puVar23;
          iVar19 = (int)((ulong)lVar6 >> 0x20);
          lVar22 = *(long *)(*(uint **)(param_1 + 0x10) + 2) + (long)iVar19 * 0x28;
          if (**(uint **)(param_1 + 0x10) <= (uint)uVar21) {
            lVar22 = 0;
          }
          lVar25 = *(long *)(lVar22 + 0x10);
          if ((lVar25 != 0) && (*(int *)(lVar25 + 0x20) == *(int *)(lVar22 + 0x18))) {
            *(uint *)(lVar25 + 8) = *(uint *)(lVar25 + 8) | 0x10;
            if ((*(long *)(lVar25 + 0x28) != 0) && (*(long *)(lVar25 + 0x58) != 0)) {
              plVar4 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar25 + 0x28) + 0x30) +
                                                       0x18) + 0x20))();
              plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
              (**(code **)(*plVar4 + 0x10))();
              (**(code **)(**(long **)(lVar25 + 0x58) + 0x30))();
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            *(undefined8 *)(lVar22 + 0x10) = 0;
            *(undefined4 *)(lVar22 + 0x18) = 0;
          }
          if ((uVar2 & 0xc) == 8) {
            lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18);
            DataMemoryBarrier(2,1);
            DataMemoryBarrier(2,1);
            plVar4 = (long *)(lVar22 + 0x18);
            uVar5 = *(uint *)(lVar22 + 0x10);
            plVar24 = plVar4 + uVar5;
            if (1 < uVar5) {
              plVar24 = plVar4;
            }
            if (((*(ushort *)(*(long *)(*plVar24 + 0x48) + (uVar21 & 0xffffffff) * 0x18 + 0x10) & 1)
                 == 0) ||
               (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)iVar19 * 0x28 + 0x22) ==
                '\0')) {
              lVar22 = *(long *)(*plVar24 + 0x48) + (uVar21 & 0xffffffff) * 0x18;
              uVar8 = (ulong)*(uint *)(lVar22 + 4);
              uVar15 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
              uVar7 = uVar15 + 0x100000000;
              if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
                uVar7 = uVar15;
              }
              FUN_03bf0af0(param_1,0,uVar21 & 0xffffffff,*(undefined4 *)(lVar22 + 0x14),uVar7);
              *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)iVar19 * 0x28 + 0x22)
                   = 1;
            }
          }
        }
        lVar6 = lVar6 + 0x100000000;
        puVar23 = puVar23 + 0xc;
        bVar1 = (long)uVar21 < (long)*(int *)(*(long *)(param_1 + 0x30) + 8);
        uVar21 = uVar21 + 1;
        pcVar17 = pcVar17 + 0x28;
      } while (bVar1);
    }
  }
  *(long *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x38) = local_78;
  return;
LAB_03bf0430:
  uVar5 = uVar5 + 1;
  iVar19 = iVar19 + -1;
  puVar23 = puVar23 + 0xc;
  pcVar17 = pcVar17 + 0x28;
  if (iVar19 == 0) goto LAB_03bf02f0;
  goto LAB_03bf0444;
}

