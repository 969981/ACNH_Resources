
void FUN_02d97e60(long param_1,int param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  undefined *puVar17;
  ushort uVar18;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  byte *pbVar27;
  long lVar28;
  uint *puVar29;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  lVar24 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  uVar7 = *(uint *)(lVar24 + 0x2f8);
  if (0 < (int)uVar7) {
    lVar1 = param_1 + 0x1c238;
    uVar23 = 0;
    puVar2 = PTR_DAT_04bc4da0 + 0x10;
    puVar3 = PTR_DAT_04bc4f00 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    pbVar27 = PTR_DAT_04bc4d98;
    puVar29 = (uint *)PTR_DAT_04bc00c8;
    do {
      puVar25 = (undefined8 *)0x0;
      uVar14 = (uint)uVar23;
      if (((-1 < (int)uVar14) && ((int)uVar14 < (int)*(uint *)(lVar24 + 0x208))) &&
         (uVar14 < *(uint *)(lVar24 + 0x208))) {
        puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0x210) + uVar23 * 8);
      }
      if (((*pbVar27 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar27), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = puVar2;
        __cxa_guard_release(pbVar27);
      }
      if (puVar25 != (undefined8 *)0x0) {
        uVar15 = (**(code **)*puVar25)(puVar25,PTR_DAT_04bc4d90);
        if ((uVar15 & 1) != 0) {
          uVar14 = *(uint *)(param_1 + 0x1c260);
          if ((int)uVar14 < 0) {
LAB_02d9800c:
            iVar12 = -1;
          }
          else {
            iVar12 = -1;
            if ((int)uVar14 < *(int *)(param_1 + 0x1c248)) {
              lVar19 = lVar1;
              if (6 < uVar14) {
                uVar21 = uVar14 + 1 & 0xfffffff8;
                do {
                  uVar21 = uVar21 - 8;
                  lVar19 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar19 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar21 != 0);
              }
              for (uVar14 = uVar14 + 1 & 7; uVar14 != 0; uVar14 = uVar14 - 1) {
                lVar19 = *(long *)(lVar19 + 8);
              }
              if (lVar19 == 0) goto LAB_02d9800c;
              lVar19 = lVar19 - *(int *)(param_1 + 0x1c24c);
              iVar12 = -1;
              if (lVar19 != 0) {
                iVar12 = *(int *)(lVar19 + 0x270);
              }
            }
          }
          local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar12);
          if (iVar12 == 0x6f) {
            if ((long)(uVar23 + (long)param_2) < (long)*(int *)(param_1 + 0x108d98)) {
              if (**(char **)(*(long *)(param_1 + 0x108da0) + (uVar23 + (long)param_2) * 8) == '\0')
              {
                FUN_030bfe80(puVar25,0);
              }
              else {
                plVar26 = (long *)puVar25[0x71];
                if (plVar26 != (long *)0x0) {
                  iVar12 = (**(code **)(*plVar26 + 0x80))(plVar26,0);
                  iVar13 = (**(code **)(*plVar26 + 0x80))(plVar26,1);
                  lVar19 = *(long *)(plVar26[0xd] +
                                    (long)(iVar12 + (int)plVar26[0xc] * iVar13) * 0x18);
                  pbVar27 = PTR_DAT_04bc4d98;
                  if (((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) &&
                     (*(char *)(puVar25[0x71] + 0x20) == '\0')) goto LAB_02d97f30;
                }
                FUN_030bffe0(puVar25,1);
              }
            }
          }
          else {
            bVar8 = 0;
            FUN_02d949c0(&local_7c,param_1);
            puVar17 = PTR_DAT_04bb43c0;
            lVar28 = *(long *)PTR_DAT_04bb43c0;
            uVar14 = FUN_0277d6c4(&local_78);
            puVar5 = PTR_DAT_04bb5ce0;
            puVar6 = PTR_DAT_04bb3170;
            lVar19 = *(long *)puVar17;
            if (lVar19 == 0) {
LAB_02d98244:
              if (local_7c == 4) {
                uVar14 = *(uint *)(param_1 + 0x1c260);
                if ((int)uVar14 < 0) {
LAB_02d982f8:
                  iVar12 = -1;
                }
                else {
                  iVar12 = -1;
                  if ((int)uVar14 < *(int *)(param_1 + 0x1c248)) {
                    lVar19 = lVar1;
                    if (6 < uVar14) {
                      uVar21 = uVar14 + 1 & 0xfffffff8;
                      do {
                        uVar21 = uVar21 - 8;
                        lVar19 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar19 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar21 != 0);
                    }
                    for (uVar14 = uVar14 + 1 & 7; uVar14 != 0; uVar14 = uVar14 - 1) {
                      lVar19 = *(long *)(lVar19 + 8);
                    }
                    if (lVar19 == 0) goto LAB_02d982f8;
                    lVar19 = lVar19 - *(int *)(param_1 + 0x1c24c);
                    iVar12 = -1;
                    if (lVar19 != 0) {
                      iVar12 = *(int *)(lVar19 + 0x270);
                    }
                  }
                }
                local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar12);
                if (iVar12 == 8) {
                  puVar17 = PTR_DAT_04bb3170;
                  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                    puVar17 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
                  }
                  FUN_007ef010(&local_98,puVar17);
                  if ((short)local_98 == *(short *)puVar6) {
                    lVar19 = *(long *)puVar5;
                    if (lVar19 == 0) {
                      iVar12 = -1;
                    }
                    else {
                      iVar12 = *(int *)(lVar19 + 0xfa8);
                    }
                    bVar11 = iVar12 != -1;
                  }
                  else {
                    bVar11 = 1;
                  }
                }
                else {
                  if (iVar12 != 9) goto LAB_02d98410;
                  puVar17 = PTR_DAT_04bb3170;
                  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                    puVar17 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
                  }
                  FUN_007ef010(&local_98,puVar17);
                  puVar17 = PTR_DAT_04bb3170;
                  lVar19 = *(long *)puVar5;
                  if ((short)local_98 == *(short *)puVar6) {
                    if (lVar19 == 0) {
                      iVar12 = -1;
                    }
                    else {
                      iVar12 = *(int *)(lVar19 + 0xf90);
                    }
                    bVar9 = iVar12 != -1;
                  }
                  else {
                    bVar9 = true;
                  }
                  puVar6 = PTR_DAT_04bb3170;
                  if (lVar19 != 0) {
                    puVar6 = (undefined *)(lVar19 + 0xe9c);
                  }
                  FUN_007ef010(&local_98,puVar6);
                  if ((short)local_98 == *(short *)puVar17) {
                    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
                      iVar12 = -1;
                    }
                    else {
                      iVar12 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf9c);
                    }
                    bVar10 = iVar12 != -1;
                  }
                  else {
                    bVar10 = true;
                  }
                  bVar11 = bVar9 | bVar10;
                  bVar8 = 2;
                  if ((bVar9 & bVar10) == 0) {
                    bVar8 = bVar9 ^ 1;
                  }
                }
              }
              else {
LAB_02d98410:
                bVar11 = 0;
              }
            }
            else {
              lVar28 = *(long *)(lVar28 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
              if ((*(uint *)(lVar28 + 0x1d8) <= uVar14) ||
                 (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar14 * 8) == 0))
              goto LAB_02d98244;
              local_88 = 0;
              local_90 = local_78;
              uStack_8c = uStack_74;
              local_98 = puVar4;
              uVar14 = FUN_0277d6c4(&local_90);
              puVar6 = PTR_DAT_04bb5ce0;
              if (*(long *)PTR_DAT_04bb43c0 == 0) {
                uVar18 = 0xbc;
              }
              else {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                uVar18 = 0xbc;
                if (uVar14 < *(uint *)(lVar19 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) == 0) {
LAB_02d983b4:
                    uVar18 = 0xbc;
                  }
                  else {
                    lVar19 = *(long *)PTR_DAT_04bc0428;
                    uVar14 = FUN_0277d6c4(&local_78);
                    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    uVar18 = 0xbc;
                    if (uVar14 < *(uint *)(lVar19 + 0x1d8)) {
                      puVar20 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8);
                      if (puVar20 == (uint *)0x0) goto LAB_02d983b4;
                      uVar14 = *puVar20;
                      uVar18 = 0;
                      if ((uVar14 != 0) && (puVar20 != (uint *)(ulong)uVar14)) {
                        puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar14);
                        uVar18 = 0;
                        if (*puVar22 != 0) {
                          uVar14 = puVar22[1];
                          if ((uVar14 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                            lVar19 = 0xc;
                            if (*(char *)((long)puVar22 + 10) != '\0') {
                              lVar19 = 0x1c;
                            }
                            lVar19 = (long)puVar22 + lVar19 + (ulong)(ushort)puVar22[2] * 8;
                            if (lVar19 != 0) {
                              uVar21 = 0;
                              if ((ulong)uVar14 != 0) {
                                uVar21 = (uint)((ulong)((long)puVar20 - lVar19) / (ulong)uVar14);
                              }
                              if (*puVar22 <= uVar21) {
                                uVar21 = 0xffffffff;
                              }
                              if ((uVar21 < *puVar29) &&
                                 (uVar18 = *(ushort *)
                                            (*(long *)(puVar29 + 2) + (long)(int)uVar21 * 2),
                                 uVar18 < 0xbd)) goto LAB_02d983b8;
                            }
                          }
                          uVar18 = 0;
                        }
                      }
                    }
                  }
                }
              }
LAB_02d983b8:
              puVar17 = PTR_DAT_04bb37e0;
              if (uVar18 != 5) {
                if (uVar18 == 4) {
                  puVar5 = PTR_DAT_04bb37e0;
                  if (*(long *)puVar6 != 0) {
                    puVar5 = (undefined *)(*(long *)puVar6 + 0xe70);
                  }
                  bVar11 = FUN_0277d7b4(&local_78,puVar5);
                  lVar19 = *(long *)puVar6;
                  if (lVar19 != 0) {
                    if (*(char *)(lVar19 + 0xe9e) != '\0') {
                      puVar17 = (undefined *)(lVar19 + 0xe94);
                    }
                  }
                  uVar15 = FUN_0277d7b4(&local_78,puVar17);
                  puVar29 = (uint *)PTR_DAT_04bc00c8;
                  if ((uVar15 & 1) != 0) {
                    bVar11 = 1;
                    bVar8 = 1;
                  }
                  goto LAB_02d98414;
                }
                goto LAB_02d98410;
              }
              if (*(long *)puVar6 != 0) {
                puVar17 = (undefined *)(*(long *)puVar6 + 0xe54);
              }
              bVar11 = FUN_0277d7b4(&local_78,puVar17);
            }
LAB_02d98414:
            if ((param_3 & 1) == 0) {
              bVar16 = bVar11 & 1;
LAB_02d984d0:
              FUN_030bfe80(puVar25,bVar16);
            }
            else {
              if ((bVar11 & 1) == 0) {
                bVar16 = 0;
                goto LAB_02d984d0;
              }
              plVar26 = (long *)puVar25[0x71];
              if (plVar26 == (long *)0x0) {
LAB_02d984ac:
                FUN_030bffe0(puVar25,1);
              }
              else {
                iVar12 = (**(code **)(*plVar26 + 0x80))(plVar26,0);
                iVar13 = (**(code **)(*plVar26 + 0x80))(plVar26,1);
                lVar19 = *(long *)(plVar26[0xd] + (long)(iVar12 + (int)plVar26[0xc] * iVar13) * 0x18
                                  );
                if (((lVar19 == 0) || (*(long *)(lVar19 + 8) == 0)) ||
                   (*(char *)(puVar25[0x71] + 0x20) != '\0')) goto LAB_02d984ac;
              }
            }
            lVar19 = 0x38;
            if (*(uint *)(puVar25 + 0x5d) < 8) {
              lVar19 = 0;
            }
            plVar26 = *(long **)(puVar25[0x5e] + lVar19);
            if (plVar26 != (long *)0x0 && ((bVar11 ^ 0xff) & 1) == 0) {
              local_90 = 0x14;
              local_98 = puVar3;
              (**(code **)(*plVar26 + 0x18))(plVar26,&local_98);
              (**(code **)(plVar26[3] + 0x158))((float)bVar8,plVar26[1]);
            }
            pbVar27 = PTR_DAT_04bc4d98;
          }
        }
      }
LAB_02d97f30:
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar7);
  }
  return;
}

