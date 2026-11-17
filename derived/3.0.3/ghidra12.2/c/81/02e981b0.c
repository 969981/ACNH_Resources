
void FUN_02e981b0(long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  byte bVar16;
  undefined *puVar17;
  ushort uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar8 = PTR_DAT_04bc4d98;
  puVar7 = PTR_DAT_04bc4d90;
  lVar24 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  uVar5 = *(uint *)(lVar24 + 0x2f8);
  if (0 < (int)uVar5) {
    uVar22 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    plVar27 = (long *)PTR_DAT_04bb5ce0;
    do {
      if ((long)uVar22 < (long)(int)*(uint *)(lVar24 + 0x208) && uVar22 < *(uint *)(lVar24 + 0x208))
      {
        puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0x210) + uVar22 * 8);
      }
      else {
        puVar25 = (undefined8 *)0x0;
      }
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
        *(undefined **)puVar7 = puVar1;
        __cxa_guard_release(puVar8);
      }
      if (puVar25 != (undefined8 *)0x0) {
        uVar15 = (**(code **)*puVar25)(puVar25,puVar7);
        if ((uVar15 & 1) != 0) {
          bVar6 = 0;
          FUN_02e8ef00(&local_7c,param_1,(int)uVar22 + param_2);
          puVar4 = PTR_DAT_04bb43c0;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar12 = FUN_0277d6c4(&local_78);
          puVar17 = PTR_DAT_04bb3170;
          lVar23 = *(long *)puVar4;
          if (lVar23 == 0) {
LAB_02e98460:
            if (local_7c == 4) {
              uVar12 = *(uint *)(param_1 + 0x1c1f8);
              if ((int)uVar12 < 0) {
LAB_02e984fc:
                iVar13 = -1;
              }
              else {
                iVar13 = -1;
                if ((int)uVar12 < *(int *)(param_1 + 0x1c1e0)) {
                  lVar23 = param_1 + 0x1c1d0;
                  if (6 < uVar12) {
                    uVar20 = uVar12 + 1 & 0xfffffff8;
                    do {
                      uVar20 = uVar20 - 8;
                      lVar23 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar23 + 8) + 8) + 8) + 8) + 8) + 8) +
                                                  8) + 8);
                    } while (uVar20 != 0);
                  }
                  for (uVar12 = uVar12 + 1 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                    lVar23 = *(long *)(lVar23 + 8);
                  }
                  if (lVar23 == 0) goto LAB_02e984fc;
                  lVar23 = lVar23 - *(int *)(param_1 + 0x1c1e4);
                  iVar13 = -1;
                  if (lVar23 != 0) {
                    iVar13 = *(int *)(lVar23 + 0x270);
                  }
                }
              }
              local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar13);
              if (iVar13 == 8) {
                puVar4 = PTR_DAT_04bb3170;
                if (*plVar27 != 0) {
                  puVar4 = (undefined *)(*plVar27 + 0xe5c);
                }
                FUN_007ef010(&local_98,puVar4);
                if ((short)local_98 == *(short *)puVar17) {
                  if (*plVar27 == 0) {
                    iVar13 = -1;
                  }
                  else {
                    iVar13 = *(int *)(*plVar27 + 0xfa8);
                  }
                  bVar11 = iVar13 != -1;
                }
                else {
                  bVar11 = 1;
                }
              }
              else {
                if (iVar13 != 9) goto LAB_02e985f4;
                puVar4 = PTR_DAT_04bb3170;
                if (*plVar27 != 0) {
                  puVar4 = (undefined *)(*plVar27 + 0xe78);
                }
                FUN_007ef010(&local_98,puVar4);
                puVar4 = PTR_DAT_04bb3170;
                lVar23 = *plVar27;
                if ((short)local_98 == *(short *)puVar17) {
                  if (lVar23 == 0) {
                    iVar13 = -1;
                  }
                  else {
                    iVar13 = *(int *)(lVar23 + 0xf90);
                  }
                  bVar9 = iVar13 != -1;
                }
                else {
                  bVar9 = true;
                }
                puVar17 = PTR_DAT_04bb3170;
                if (lVar23 != 0) {
                  puVar17 = (undefined *)(lVar23 + 0xe9c);
                }
                FUN_007ef010(&local_98,puVar17);
                if ((short)local_98 == *(short *)puVar4) {
                  if (*plVar27 == 0) {
                    iVar13 = -1;
                  }
                  else {
                    iVar13 = *(int *)(*plVar27 + 0xf9c);
                  }
                  bVar10 = iVar13 != -1;
                }
                else {
                  bVar10 = true;
                }
                bVar11 = bVar9 | bVar10;
                bVar6 = 2;
                if ((bVar9 & bVar10) == 0) {
                  bVar6 = bVar9 ^ 1;
                }
              }
            }
            else {
LAB_02e985f4:
              bVar11 = 0;
            }
          }
          else {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((*(uint *)(lVar26 + 0x1d8) <= uVar12) ||
               (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
            goto LAB_02e98460;
            local_88 = 0;
            local_90 = local_78;
            uStack_8c = uStack_74;
            local_98 = puVar3;
            uVar12 = FUN_0277d6c4(&local_90);
            if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02e98598:
              uVar18 = 0xbc;
            }
            else {
              lVar23 = *(long *)(lVar23 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              uVar18 = 0xbc;
              if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) == 0)
                goto LAB_02e98598;
                lVar23 = *(long *)PTR_DAT_04bc0428;
                uVar12 = FUN_0277d6c4(&local_78);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                uVar18 = 0xbc;
                if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
                  puVar19 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8);
                  if (puVar19 == (uint *)0x0) goto LAB_02e98598;
                  uVar12 = *puVar19;
                  uVar18 = 0;
                  if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
                    puVar21 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
                    uVar18 = 0;
                    if (*puVar21 != 0) {
                      uVar12 = puVar21[1];
                      if ((uVar12 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                        lVar23 = 0xc;
                        if (*(char *)((long)puVar21 + 10) != '\0') {
                          lVar23 = 0x1c;
                        }
                        lVar23 = (long)puVar21 + lVar23 + (ulong)(ushort)puVar21[2] * 8;
                        if (lVar23 != 0) {
                          uVar20 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar20 = (uint)((ulong)((long)puVar19 - lVar23) / (ulong)uVar12);
                          }
                          if (*puVar21 <= uVar20) {
                            uVar20 = 0xffffffff;
                          }
                          if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar18 = *(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                             uVar18 < 0xbd)) goto LAB_02e9859c;
                        }
                      }
                      uVar18 = 0;
                    }
                  }
                }
              }
            }
LAB_02e9859c:
            puVar17 = PTR_DAT_04bb37e0;
            if (uVar18 != 5) {
              if (uVar18 == 4) {
                puVar4 = PTR_DAT_04bb37e0;
                if (*plVar27 != 0) {
                  puVar4 = (undefined *)(*plVar27 + 0xe70);
                }
                bVar11 = FUN_0277d7b4(&local_78,puVar4);
                lVar23 = *plVar27;
                if (lVar23 != 0) {
                  if (*(char *)(lVar23 + 0xe9e) != '\0') {
                    puVar17 = (undefined *)(lVar23 + 0xe94);
                  }
                }
                uVar15 = FUN_0277d7b4(&local_78,puVar17);
                if ((uVar15 & 1) != 0) {
                  bVar11 = 1;
                  bVar6 = 1;
                }
                goto LAB_02e985f8;
              }
              goto LAB_02e985f4;
            }
            if (*plVar27 != 0) {
              puVar17 = (undefined *)(*plVar27 + 0xe54);
            }
            bVar11 = FUN_0277d7b4(&local_78,puVar17);
          }
LAB_02e985f8:
          if ((param_3 & 1) == 0) {
            bVar16 = bVar11 & 1;
LAB_02e9868c:
            FUN_030bfe80(puVar25,bVar16);
          }
          else {
            if ((bVar11 & 1) == 0) {
              bVar16 = 0;
              goto LAB_02e9868c;
            }
            plVar27 = (long *)puVar25[0x71];
            if (plVar27 == (long *)0x0) {
LAB_02e98668:
              FUN_030bffe0(puVar25,1);
            }
            else {
              iVar13 = (**(code **)(*plVar27 + 0x80))(plVar27,0);
              iVar14 = (**(code **)(*plVar27 + 0x80))(plVar27,1);
              lVar23 = *(long *)(plVar27[0xd] + (long)(iVar13 + (int)plVar27[0xc] * iVar14) * 0x18);
              if (((lVar23 == 0) || (*(long *)(lVar23 + 8) == 0)) ||
                 (*(char *)(puVar25[0x71] + 0x20) != '\0')) goto LAB_02e98668;
            }
          }
          plVar27 = *(long **)(puVar25[0x5e] + (ulong)(8 < *(uint *)(puVar25 + 0x5d)) * 0x40);
          if (plVar27 != (long *)0x0 && ((bVar11 ^ 0xff) & 1) == 0) {
            local_90 = 0x14;
            local_98 = puVar2;
            (**(code **)(*plVar27 + 0x18))(plVar27,&local_98);
            (**(code **)(plVar27[3] + 0x158))((float)bVar6,plVar27[1]);
          }
          plVar27 = (long *)PTR_DAT_04bb5ce0;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar5);
  }
  return;
}

