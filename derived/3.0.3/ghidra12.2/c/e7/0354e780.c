
void FUN_0354e780(long param_1,int param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  ushort uVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar10 = PTR_DAT_04bc4d98;
  puVar8 = PTR_DAT_04bb37e0;
  lVar31 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  uVar6 = *(uint *)(lVar31 + 0x2f8);
  if (0 < (int)uVar6) {
    uVar27 = 0;
    lVar1 = param_1 + 0x1c260;
    puVar2 = PTR_DAT_04bc4da0 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bc4f00 + 0x10;
    plVar30 = (long *)PTR_DAT_04bc4d90;
    do {
      puVar28 = (undefined8 *)0x0;
      uVar16 = (uint)uVar27;
      if (((-1 < (int)uVar16) && ((int)uVar16 < (int)*(uint *)(lVar31 + 0x208))) &&
         (uVar16 < *(uint *)(lVar31 + 0x208))) {
        puVar28 = *(undefined8 **)(*(long *)(lVar31 + 0x210) + uVar27 * 8);
      }
      if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
        *plVar30 = (long)puVar2;
        __cxa_guard_release(puVar10);
      }
      if (puVar28 != (undefined8 *)0x0) {
        uVar18 = (**(code **)*puVar28)(puVar28,plVar30);
        if ((uVar18 & 1) != 0) {
          bVar7 = 0;
          uVar18 = uVar27 + (long)param_2;
          uVar16 = *(uint *)(param_1 + 0x1c288);
          uVar29 = (uint)uVar18;
          if (((int)uVar16 < 0) || (*(int *)(param_1 + 0x1c270) <= (int)uVar16)) {
LAB_0354eac4:
            FUN_0354bdb0(&local_7c,param_1,uVar18 & 0xffffffff);
            puVar5 = PTR_DAT_04bb43c0;
            lVar23 = *(long *)PTR_DAT_04bb43c0;
            uVar16 = FUN_0277d6c4(&local_78);
            puVar9 = PTR_DAT_04bb5ce0;
            puVar20 = PTR_DAT_04bb3170;
            lVar22 = *(long *)puVar5;
            if (lVar22 == 0) {
LAB_0354ec50:
              if (local_7c != 4) goto LAB_0354ee28;
              uVar16 = *(uint *)(param_1 + 0x1c288);
              if ((int)uVar16 < 0) {
                iVar15 = -1;
              }
              else {
                iVar15 = -1;
                if ((int)uVar16 < *(int *)(param_1 + 0x1c270)) {
                  lVar22 = lVar1;
                  if (6 < uVar16) {
                    uVar29 = uVar16 + 1 & 0xfffffff8;
                    do {
                      uVar29 = uVar29 - 8;
                      lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar22 + 8) + 8) + 8) + 8) + 8) + 8) +
                                                  8) + 8);
                    } while (uVar29 != 0);
                  }
                  for (uVar16 = uVar16 + 1 & 7; uVar16 != 0; uVar16 = uVar16 - 1) {
                    lVar22 = *(long *)(lVar22 + 8);
                  }
                  if (lVar22 == 0) {
                    iVar15 = -1;
                  }
                  else {
                    lVar22 = lVar22 - *(int *)(param_1 + 0x1c274);
                    iVar15 = -1;
                    if (lVar22 != 0) {
                      iVar15 = *(int *)(lVar22 + 0x270);
                    }
                  }
                }
              }
              local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar15);
              if (iVar15 == 8) {
                puVar5 = PTR_DAT_04bb3170;
                if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                  puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
                }
                FUN_007ef010(&local_98,puVar5);
                if ((short)local_98 == *(short *)puVar20) {
                  lVar22 = *(long *)puVar9;
                  if (lVar22 == 0) {
                    iVar15 = -1;
                  }
                  else {
                    iVar15 = *(int *)(lVar22 + 0xfa8);
                  }
                  bVar14 = iVar15 != -1;
                }
                else {
                  bVar14 = 1;
                }
              }
              else {
                if (iVar15 != 9) goto LAB_0354ee28;
                puVar5 = PTR_DAT_04bb3170;
                if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                  puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
                }
                FUN_007ef010(&local_98,puVar5);
                lVar22 = *(long *)puVar9;
                if ((short)local_98 == *(short *)puVar20) {
                  if (lVar22 == 0) {
                    iVar15 = -1;
                  }
                  else {
                    iVar15 = *(int *)(lVar22 + 0xf90);
                  }
                  bVar12 = iVar15 != -1;
                }
                else {
                  bVar12 = true;
                }
                puVar5 = puVar20;
                if (lVar22 != 0) {
                  puVar5 = (undefined *)(lVar22 + 0xe9c);
                }
                FUN_007ef010(&local_98,puVar5);
                if ((short)local_98 == *(short *)puVar20) {
                  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
                    iVar15 = -1;
                  }
                  else {
                    iVar15 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf9c);
                  }
                  bVar13 = iVar15 != -1;
                }
                else {
                  bVar13 = true;
                }
                bVar14 = bVar12 | bVar13;
                bVar7 = 2;
                if ((bVar12 & bVar13) == 0) {
                  bVar7 = bVar12 ^ 1;
                }
              }
            }
            else {
              lVar23 = *(long *)(lVar23 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((*(uint *)(lVar23 + 0x1d8) <= uVar16) ||
                 (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
              goto LAB_0354ec50;
              local_88 = 0;
              local_90 = local_78;
              uStack_8c = uStack_74;
              local_98 = puVar3;
              uVar16 = FUN_0277d6c4(&local_90);
              if (*(long *)PTR_DAT_04bb43c0 == 0) {
                uVar21 = 0xbc;
              }
              else {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                uVar21 = 0xbc;
                if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
LAB_0354edb4:
                    uVar21 = 0xbc;
                  }
                  else {
                    lVar22 = *(long *)PTR_DAT_04bc0428;
                    uVar16 = FUN_0277d6c4(&local_78);
                    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                    uVar21 = 0xbc;
                    if (uVar16 < *(uint *)(lVar22 + 0x1d8)) {
                      puVar24 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8);
                      if (puVar24 == (uint *)0x0) goto LAB_0354edb4;
                      uVar16 = *puVar24;
                      uVar21 = 0;
                      if ((uVar16 != 0) && (puVar24 != (uint *)(ulong)uVar16)) {
                        puVar26 = (uint *)((long)puVar24 - (long)(ulong)uVar16);
                        uVar21 = 0;
                        if (*puVar26 != 0) {
                          uVar16 = puVar26[1];
                          if ((uVar16 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                            lVar22 = 0xc;
                            if (*(char *)((long)puVar26 + 10) != '\0') {
                              lVar22 = 0x1c;
                            }
                            lVar22 = (long)puVar26 + lVar22 + (ulong)(ushort)puVar26[2] * 8;
                            if (lVar22 != 0) {
                              uVar29 = 0;
                              if ((ulong)uVar16 != 0) {
                                uVar29 = (uint)((ulong)((long)puVar24 - lVar22) / (ulong)uVar16);
                              }
                              if (*puVar26 <= uVar29) {
                                uVar29 = 0xffffffff;
                              }
                              if ((uVar29 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (uVar21 = *(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar29 * 2
                                            ), uVar21 < 0xbd)) goto LAB_0354edb8;
                            }
                          }
                          uVar21 = 0;
                        }
                      }
                    }
                  }
                }
              }
LAB_0354edb8:
              puVar20 = PTR_DAT_04bb5ce0;
              if (uVar21 == 5) {
                puVar20 = puVar8;
                if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                  puVar20 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
                }
                bVar14 = FUN_0277d7b4(&local_78,puVar20);
                goto joined_r0x0354ea80;
              }
              if (uVar21 == 4) {
                puVar5 = puVar8;
                if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                  puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
                }
                bVar14 = FUN_0277d7b4(&local_78,puVar5);
                lVar22 = *(long *)puVar20;
                puVar20 = puVar8;
                if ((lVar22 != 0) && (*(char *)(lVar22 + 0xe9e) != '\0')) {
                  puVar20 = (undefined *)(lVar22 + 0xe94);
                }
                uVar18 = FUN_0277d7b4(&local_78,puVar20);
                if ((uVar18 & 1) != 0) {
                  bVar14 = 1;
                  bVar7 = 1;
                }
                goto joined_r0x0354ea80;
              }
LAB_0354ee28:
              bVar14 = 0;
            }
joined_r0x0354ea80:
            bVar12 = false;
joined_r0x0354ea80:
            if ((param_3 & 1) == 0) goto LAB_0354efdc;
            if ((bVar14 & 1) == 0) {
LAB_0354efa0:
              FUN_030bfe80(puVar28,0);
              bVar14 = 0;
            }
            else {
              plVar30 = (long *)puVar28[0x71];
              if (plVar30 != (long *)0x0) {
                iVar15 = (**(code **)(*plVar30 + 0x80))(plVar30,0);
                iVar17 = (**(code **)(*plVar30 + 0x80))(plVar30,1);
                lVar22 = *(long *)(plVar30[0xd] + (long)(iVar15 + (int)plVar30[0xc] * iVar17) * 0x18
                                  );
                if (((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) &&
                   (*(char *)(puVar28[0x71] + 0x20) == '\0')) {
                  bVar14 = 1;
                  goto LAB_0354efe8;
                }
              }
              bVar14 = 1;
              FUN_030bffe0(puVar28,1);
            }
          }
          else {
            lVar22 = lVar1;
            if (6 < uVar16) {
              uVar25 = uVar16 + 1 & 0xfffffff8;
              do {
                uVar25 = uVar25 - 8;
                lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar22 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar25 != 0);
            }
            for (uVar16 = uVar16 + 1 & 7; uVar16 != 0; uVar16 = uVar16 - 1) {
              lVar22 = *(long *)(lVar22 + 8);
            }
            if ((((lVar22 == 0) || (lVar22 = lVar22 - *(int *)(param_1 + 0x1c274), lVar22 == 0)) ||
                (*(int *)(lVar22 + 0x270) != 0x77)) ||
               (lVar22 = *(long *)PTR_DAT_04bb27f8, lVar22 == 0)) goto LAB_0354eac4;
            lVar23 = *(long *)PTR_DAT_04bb2720;
            if (lVar23 == 0) {
              puVar19 = &DAT_055c04a0;
            }
            else if (*(long *)(lVar23 + 0x330) == 0) {
              puVar19 = &DAT_055c04a0;
            }
            else {
              puVar19 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
              iVar15 = FUN_006bd550(*puVar19,0);
              puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar15 != 0x758f7eaf) {
                puVar19 = &DAT_055c04a0;
              }
            }
            iVar15 = *(int *)(puVar19 + 7);
            if (((((DAT_05ac0a90 != iVar15) && (DAT_05ac0aa0 != iVar15)) &&
                 ((DAT_05ac0ab0 != iVar15 && ((DAT_05ac0ac0 != iVar15 && (DAT_05ac0ad0 != iVar15))))
                 )) && (DAT_05ac0ae0 != iVar15)) &&
               ((((DAT_05ac0af0 != iVar15 && (DAT_05ac0b00 != iVar15)) && (DAT_05ac0b10 != iVar15))
                && (DAT_05ac0b20 != iVar15)))) {
              if ((long)*(int *)(lVar22 + 0x40) <= (long)uVar18) goto LAB_0354eac4;
              bVar14 = *(byte *)(param_1 + 0x10c2f8) >> (ulong)(uVar29 & 0x1f) & 1;
              goto joined_r0x0354ea80;
            }
            puVar24 = (uint *)FUN_036e50d0(lVar22);
            if ((long)(int)*puVar24 <= (long)uVar18) goto LAB_0354eac4;
            iVar15 = *(int *)(param_1 + 0x10a50c) + uVar29;
            iVar17 = 0;
            if (*(int *)(param_1 + 0x10a508) <= iVar15) {
              iVar17 = *(int *)(param_1 + 0x10a508);
            }
            if (uVar29 < *puVar24) {
              lVar22 = *(long *)(*(long *)(puVar24 + 2) + uVar18 * 8);
            }
            else {
              lVar22 = 0;
            }
            uVar16 = *(uint *)(*(long *)(param_1 + 0x10a500) + (long)(iVar15 - iVar17) * 0x778 +
                              0x770);
            if ((int)*(char *)(lVar22 + 0xc) <= (int)uVar16) {
              bVar14 = *(byte *)(lVar22 + 0xd);
              bVar12 = true;
              bVar13 = false;
              bVar11 = true;
              if ('\0' < (char)bVar14) {
                bVar13 = (int)(uVar16 - bVar14) < 0;
                bVar11 = uVar16 == bVar14;
              }
              bVar14 = bVar11 || bVar13 != ('\0' < (char)bVar14 && SBORROW4(uVar16,(uint)bVar14));
              goto joined_r0x0354ea80;
            }
            bVar12 = true;
            if ((param_3 & 1) != 0) goto LAB_0354efa0;
            bVar14 = 0;
LAB_0354efdc:
            FUN_030bfe80(puVar28,bVar14 & 1);
          }
LAB_0354efe8:
          lVar22 = 0x38;
          if (*(uint *)(puVar28 + 0x5d) < 8) {
            lVar22 = 0;
          }
          if (((bVar14 & 1) != 0) &&
             (plVar30 = *(long **)(puVar28[0x5e] + lVar22), plVar30 != (long *)0x0)) {
            local_90 = 0x14;
            local_98 = puVar4;
            (**(code **)(*plVar30 + 0x18))(plVar30,&local_98);
            (**(code **)(plVar30[3] + 0x158))((float)bVar7,plVar30[1]);
          }
          if (bVar12) {
            lVar22 = 0x48;
            if (*(uint *)(puVar28 + 0x5d) < 10) {
              lVar22 = 0;
            }
            plVar30 = *(long **)(puVar28[0x5e] + lVar22);
            if (plVar30 != (long *)0x0) {
              local_98 = PTR_DAT_04bc4f00 + 0x10;
              local_90 = 0x14;
              (**(code **)(*plVar30 + 0x18))(plVar30,&local_98);
              (**(code **)(plVar30[3] + 0x158))((float)(bVar14 & 1),plVar30[1]);
            }
          }
          plVar30 = (long *)PTR_DAT_04bc4d90;
        }
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar6);
  }
  return;
}

