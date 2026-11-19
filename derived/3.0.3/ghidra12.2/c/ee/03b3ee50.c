
void FUN_03b3ee50(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *__src;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  size_t __size;
  long lVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  undefined4 *puVar18;
  short *psVar19;
  int iVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  short *psVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *__dest;
  long lVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  uint *puStack_a0;
  undefined8 local_98;
  long lStack_90;
  
  puVar21 = (uint *)param_2[1];
  if (puVar21 == (uint *)0x0) {
    return;
  }
  if ((*puVar21 & 0xfe) != 0xc0) {
    return;
  }
  uVar10 = *puVar21 >> 8;
  if (*(short *)*param_2 == 0x5942) {
    uVar10 = uVar10 & 0xff00 | *puVar21 >> 0x18 | (uVar10 & 0xff) << 0x10;
  }
  if (uVar10 == 0) {
    return;
  }
  __size = (ulong)uVar10 * 0xe0;
  uVar14 = uVar10 << 1;
  uVar27 = (ulong)uVar14;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    pvVar17 = malloc(__size);
joined_r0x03b3ef3c:
    if (pvVar17 == (void *)0x0) {
LAB_03b3efd8:
      uVar26 = (ulong)(uVar10 << 3);
      lVar28 = *(long *)PTR_DAT_04bb2698;
      if (lVar28 == 0) {
LAB_03b3f07c:
        pvVar17 = malloc(uVar26);
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_03b3f00c;
        plVar16 = param_3;
LAB_03b3f038:
        pvVar17 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,uVar26,8);
      }
      if (pvVar17 != (void *)0x0) {
        *(void **)(param_1 + 0x30) = pvVar17;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(uint *)(param_1 + 0x2c) = uVar10;
      }
    }
    else {
      uVar25 = uVar10 - 1;
      *(void **)(param_1 + 0x18) = pvVar17;
      if (1 < uVar10) {
        if (uVar25 == 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          plVar16 = (long *)((long)pvVar17 + 0xd8);
          do {
            uVar26 = uVar26 + 2;
            plVar16[-0x1b] = (long)plVar16;
            *plVar16 = (long)(plVar16 + 0x1b);
            plVar16 = plVar16 + 0x36;
          } while (((ulong)uVar25 & 0xfffffffe) != uVar26);
        }
        if ((uVar25 & 1) != 0) {
          plVar16 = (long *)((long)pvVar17 + uVar26 * 0xd8);
          *plVar16 = (long)(plVar16 + 0x1b);
        }
      }
      *(undefined8 *)((long)pvVar17 + (long)(int)(uVar25 * 0x1b) * 8) = 0;
      *(void **)(param_1 + 0x20) = pvVar17;
      if ((uVar10 != 0) &&
         (pvVar17 = (void *)((long)pvVar17 + (ulong)uVar10 * 0xd8), pvVar17 != (void *)0x0)) {
        *(void **)(param_1 + 0x10) = pvVar17;
        *(undefined4 *)(param_1 + 8) = 0;
        *(uint *)(param_1 + 0xc) = uVar10;
        goto LAB_03b3efd8;
      }
      if (uVar10 != 0) goto LAB_03b3efd8;
    }
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) goto LAB_03b3f0ec;
    if (param_3 == (long *)0x0) {
LAB_03b3f0a0:
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar28 + 8);
      if (lVar15 != 0) {
        plVar16 = (long *)(lVar15 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) goto LAB_03b3f164;
    }
    else {
      plVar16 = param_3;
    }
    puVar18 = (undefined4 *)(**(code **)(*plVar16 + 0x30))(plVar16,uVar27 << 3,8);
  }
  else {
    plVar16 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03b3ef18:
      pvVar17 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,8);
      goto joined_r0x03b3ef3c;
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar16 = (long *)(lVar28 + 8);
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 0xa8);
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) goto LAB_03b3ef18;
    uVar26 = (ulong)(uVar10 << 3);
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) goto LAB_03b3f07c;
LAB_03b3f00c:
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar16 = (long *)(lVar28 + 8);
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 0xa8);
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) goto LAB_03b3f038;
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 != 0) goto LAB_03b3f0a0;
LAB_03b3f0ec:
    puVar18 = malloc(uVar27 << 3);
  }
  if (puVar18 != (undefined4 *)0x0) {
    uVar26 = uVar27 & 7;
    puVar23 = puVar18;
    if ((uVar14 & 7) != 0) {
      puVar22 = puVar18;
      do {
        uVar26 = uVar26 - 1;
        puVar23 = puVar22 + 2;
        *puVar22 = 0;
        puVar22 = puVar23;
      } while (uVar26 != 0);
    }
    if (6 < (uVar27 - 1 & 0x1fffffffffffffff)) {
      do {
        *puVar23 = 0;
        puVar23[2] = 0;
        puVar23[4] = 0;
        puVar23[6] = 0;
        puVar23[8] = 0;
        puVar23[10] = 0;
        puVar23[0xc] = 0;
        puVar23[0xe] = 0;
        puVar23 = puVar23 + 0x10;
      } while (puVar23 != puVar18 + uVar27 * 2);
    }
    *(undefined4 **)(param_1 + 0x38) = puVar18;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(uint *)(param_1 + 0x44) = uVar14;
  }
LAB_03b3f164:
  uVar27 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bd2210 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    auVar33 = FUN_03b36a34(param_2,uVar27 & 0xffffffff);
    psVar19 = auVar33._0_8_;
    local_e8 = auVar33;
    if (((psVar19 != (short *)0x0) && (puVar21 = (uint *)param_2[1], puVar21 != (uint *)0x0)) &&
       ((char)*puVar21 == -0x3f)) {
      uVar14 = *puVar21 >> 8;
      psVar24 = (short *)*param_2;
      sVar9 = *psVar24;
      if (sVar9 == 0x5942) {
        uVar14 = uVar14 & 0xff00 | *puVar21 >> 0x18 | (uVar14 & 0xff) << 0x10;
      }
      if (uVar27 < uVar14) {
        uVar14 = *(uint *)(psVar24 + 2);
        uVar25 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        if (sVar9 == 0x5942) {
          uVar14 = uVar25 >> 0x10 | uVar25 << 0x10;
        }
        if (uVar14 != 0) {
          uVar25 = puVar21[uVar27 * 2 + 1];
          if (sVar9 == 0x5942) {
            uVar25 = uVar25 & 0xff00 | (uVar25 & 0xff) << 0x10 | uVar25 >> 0x10 & 0xff;
          }
          else {
            uVar25 = uVar25 & 0xffffff;
          }
          lVar28 = (long)(int)uVar14;
          puVar29 = *(undefined8 **)(param_1 + 0x18);
          uVar14 = *(uint *)((long)psVar24 + (ulong)uVar25 * 4 + lVar28 + 4);
          uVar25 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          if (sVar9 == 0x5942) {
            uVar14 = uVar25 >> 0x10 | uVar25 << 0x10;
          }
          if (puVar29 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar29;
          }
          __dest = (undefined1 *)((long)puVar29 + 0x1c);
          *__dest = 0;
          __src = (undefined1 *)((long)psVar24 + (ulong)uVar14 + lVar28);
          *(undefined1 *)((long)puVar29 + 0x5b) = 0;
          *(undefined1 *)(puVar29 + 0xd) = 0;
          *(undefined8 *)((long)puVar29 + 0x6c) = 0;
          puVar29[0xc] = puVar2;
          *(undefined4 *)(puVar29 + 3) = 0x40;
          *puVar29 = &PTR_LAB_04b761e8;
          *(undefined8 *)((long)puVar29 + 0x71) = 0;
          *(undefined4 *)((long)puVar29 + 0x7c) = 0;
          puVar29[0x14] = 0;
          *(undefined2 *)(puVar29 + 0x15) = 0;
          *(undefined1 *)(puVar29 + 0x16) = 0;
          *(undefined8 *)((long)puVar29 + 0xb4) = 0;
          *(undefined4 *)(puVar29 + 0x18) = 0;
          puVar29[0x19] = 0;
          puVar29[1] = puVar1;
          puVar29[2] = __dest;
          puVar29[0x12] = puVar29 + 0x11;
          puVar29[0x13] = 0x4000000000;
          puVar29[0x10] = puVar29;
          puVar29[0x11] = puVar29 + 0x11;
          *(undefined4 *)(puVar29 + 0x1a) = 0x3f800000;
          if (__dest != __src) {
            lVar15 = 0;
            lVar28 = lVar28 + (ulong)uVar14 + 1;
            do {
              lVar12 = lVar15 + lVar28;
              if (*(char *)((long)psVar24 + lVar12 + -1) == '\0') goto LAB_03b3f35c;
              if (*(char *)((long)psVar24 + lVar15 + lVar28) == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_03b3f35c;
              }
              if (*(char *)((long)psVar24 + lVar12 + 1) == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_03b3f35c;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_03b3f35c:
            iVar20 = (int)lVar15;
            if (0x3e < iVar20) {
              iVar20 = 0x3f;
            }
            memcpy(__dest,__src,(long)iVar20);
            __dest[iVar20] = 0;
          }
          *(undefined1 *)((long)puVar29 + 0xa9) = 1;
          if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar29;
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          }
          if (*(char *)(puVar29 + 0xd) == '\0') {
            puVar29[0x14] = 0;
            *(undefined4 *)((long)puVar29 + 0x7c) = 0;
            *(undefined1 *)(puVar29 + 0xd) = 1;
          }
          local_98 = (short *)((ulong)local_98 & 0xffffff0000000000);
          uVar26 = FUN_03b36b40(local_e8,&local_98,"DuckerParams");
          if ((uVar26 & 1) == 0) {
LAB_03b3f444:
            bVar13 = false;
            uVar31 = 0;
            uVar32 = 0;
            local_98 = (short *)0x0;
            lStack_90 = 0;
            uVar30 = 0;
          }
          else {
            if (local_98._4_1_ - 0xc0 < 2) {
              lStack_90 = (long)psVar19 + ((ulong)local_98 & 0xffffffff);
            }
            else {
              if (local_98._4_1_ != 0xff) goto LAB_03b3f444;
              lStack_90 = 0;
            }
            local_a8 = (short *)((ulong)local_a8 & 0xffffff0000000000);
            local_98 = psVar19;
            uVar26 = FUN_03b36b40(&local_98,&local_a8,"StartDelayTime");
            if (((uVar26 & 1) == 0) || (local_a8._4_1_ != -0x2e)) {
              uVar30 = 0;
            }
            else {
              uVar30 = (int)local_a8;
            }
            local_a8 = (short *)((ulong)local_a8 & 0xffffff0000000000);
            uVar26 = FUN_03b36b40(&local_98,&local_a8,"EndDelayTime");
            if (((uVar26 & 1) == 0) || (local_a8._4_1_ != -0x2e)) {
              uVar31 = 0;
            }
            else {
              uVar31 = (int)local_a8;
            }
            local_a8 = (short *)((ulong)local_a8 & 0xffffff0000000000);
            uVar26 = FUN_03b36b40(&local_98,&local_a8,"ForceEndTime");
            if (((uVar26 & 1) == 0) || (local_a8._4_1_ != -0x2e)) {
              uVar32 = 0;
            }
            else {
              uVar32 = (int)local_a8;
            }
            local_a8 = (short *)((ulong)local_a8 & 0xffffff0000000000);
            uVar26 = FUN_03b36b40(&local_98,&local_a8,"EnableStartInForceEndRecover");
            if (((uVar26 & 1) == 0) || (local_a8._4_1_ != -0x30)) {
              bVar13 = false;
            }
            else {
              bVar13 = (int)local_a8 != 0;
            }
          }
          *(undefined4 *)((long)puVar29 + 0x6c) = uVar30;
          *(undefined4 *)(puVar29 + 0xe) = uVar31;
          *(undefined4 *)((long)puVar29 + 0x74) = uVar32;
          *(bool *)(puVar29 + 0xf) = bVar13;
          local_a8 = (short *)((ulong)local_a8 & 0xffffff0000000000);
          uVar26 = FUN_03b36b40(local_e8,&local_a8,"Targets");
          if ((((uVar26 & 1) != 0) && (local_a8._4_1_ - 0xc0 < 2)) &&
             (puStack_a0 = (uint *)((long)psVar19 + ((ulong)local_a8 & 0xffffffff)),
             local_a8 = psVar19, (*puStack_a0 & 0xfe) == 0xc0)) {
            uVar14 = *puStack_a0 >> 8;
            if (*psVar19 == 0x5942) {
              uVar14 = uVar14 & 0xff00 | *puStack_a0 >> 0x18 | (uVar14 & 0xff) << 0x10;
            }
            if (uVar14 != 0) {
              lVar28 = *(long *)PTR_DAT_04bb2698;
              if (lVar28 == 0) {
                pvVar17 = malloc((ulong)uVar14 << 2);
LAB_03b3f658:
                if (pvVar17 != (void *)0x0) {
                  *(uint *)(puVar29 + 0x18) = uVar14;
                  puVar29[0x19] = pvVar17;
                }
              }
              else {
                plVar16 = param_3;
                if (param_3 != (long *)0x0) {
LAB_03b3f5dc:
                  pvVar17 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,(ulong)uVar14 << 2,8);
                  goto LAB_03b3f658;
                }
                lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar16 = (long *)(lVar28 + 8);
                if (lVar15 != 0) {
                  plVar16 = (long *)(lVar15 + 0xa8);
                }
                plVar16 = (long *)*plVar16;
                if (plVar16 != (long *)0x0) goto LAB_03b3f5dc;
              }
              uVar25 = 0;
              do {
                auVar33 = FUN_03b36a34(&local_a8,uVar25);
                psVar19 = auVar33._0_8_;
                local_b8 = auVar33;
                if (psVar19 != (short *)0x0) {
                  local_d8 = (undefined *)((ulong)local_d8 & 0xffffff0000000000);
                  local_c8 = 0x3f800000;
                  local_c0 = 0;
                  uVar26 = FUN_03b36b40(local_b8,&local_d8,"TargetGroupName");
                  if (((uVar26 & 1) != 0) && (bVar13 = local_d8._4_1_ == -0x60, bVar13)) {
                    uVar5 = *(uint *)(psVar19 + 4);
                    uVar11 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
                    if (*psVar19 != 0x5942) {
                      uVar11 = uVar5;
                    }
                    if (uVar11 != 0) {
                      uVar6 = *(uint *)((long)psVar19 +
                                       (long)(int)local_d8 * 4 + (long)(int)uVar11 + 4);
                      local_d8 = (undefined *)((ulong)local_d8 & 0xffffff0000000000);
                      uVar5 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
                      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                      if (*psVar19 != 0x5942) {
                        uVar5 = uVar6;
                      }
                      uVar26 = FUN_03b36b40(local_b8,&local_d8,"Volume");
                      if (((uVar26 & 1) != 0) && (local_d8._4_1_ == -0x2e)) {
                        uVar6 = uVar25;
                        if (*(uint *)(puVar29 + 0x18) <= uVar25) {
                          uVar6 = 0;
                        }
                        local_c8 = CONCAT44(local_c8._4_4_,(int)local_d8);
                        *(int *)(puVar29[0x19] + (ulong)uVar6 * 4) = (int)local_d8;
                      }
                      local_d8 = (undefined *)((ulong)local_d8 & 0xffffff0000000000);
                      uVar26 = FUN_03b36b40(local_b8,&local_d8,"DuckInTime");
                      if (((uVar26 & 1) != 0) && (local_d8._4_1_ == -0x2e)) {
                        local_c8 = CONCAT44((int)local_d8,(undefined4)local_c8);
                      }
                      local_d8 = (undefined *)((ulong)local_d8 & 0xffffff0000000000);
                      uVar26 = FUN_03b36b40(local_b8,&local_d8,"DuckOutTime");
                      if (((uVar26 & 1) != 0) && (local_d8._4_1_ == -0x2e)) {
                        local_c0 = CONCAT44(local_c0._4_4_,(int)local_d8);
                      }
                      local_d8 = (undefined *)((ulong)local_d8 & 0xffffff0000000000);
                      uVar26 = FUN_03b36b40(local_b8,&local_d8,"FadeType");
                      if (((uVar26 & 1) != 0) && (local_d8._4_1_ == -0x60)) {
                        uVar7 = *(uint *)(psVar19 + 4);
                        uVar6 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                        if (*psVar19 != 0x5942) {
                          uVar6 = uVar7;
                        }
                        if (uVar6 != 0) {
                          uVar8 = *(uint *)((long)psVar19 +
                                           (long)(int)local_d8 * 4 + (long)(int)uVar6 + 4);
                          uVar7 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
                          if (*psVar19 != 0x5942) {
                            uVar7 = uVar8;
                          }
                          pcVar4 = (char *)((long)psVar19 + (ulong)uVar7 + (long)(int)uVar6);
                          if ((pcVar4 == s_Linear_04b76230) ||
                             (((((*pcVar4 == 'L' && (pcVar4[1] == 'i')) && (pcVar4[2] == 'n')) &&
                               ((pcVar4[3] == 'e' && (pcVar4[4] == 'a')))) &&
                              ((pcVar4[5] == 'r' && (pcVar4[6] == '\0')))))) {
                            uVar30 = 0;
                          }
                          else if (pcVar4 == s_Square_04b76238) {
LAB_03b3f93c:
                            uVar30 = 1;
                          }
                          else {
                            if (*pcVar4 == 'S') {
                              if (pcVar4[1] == 'q') {
                                if (((pcVar4[2] == 'u') && (pcVar4[3] == 'a')) &&
                                   ((pcVar4[4] == 'r' && ((pcVar4[5] == 'e' && (pcVar4[6] == '\0')))
                                    ))) goto LAB_03b3f93c;
                                if ((pcVar4 == &DAT_04b76240) ||
                                   (((pcVar4[2] == 'r' && (pcVar4[3] == 't')) && (pcVar4[4] == '\0')
                                    ))) goto LAB_03b3f9ac;
                              }
                              else if (pcVar4 == &DAT_04b76240) goto LAB_03b3f9ac;
                              if ((pcVar4 != &DAT_04b76246) &&
                                 (((pcVar4[1] != 'i' || (pcVar4[2] != 'n')) || (pcVar4[3] != '\0')))
                                 ) goto LAB_03b3f9b4;
                            }
                            else {
                              if (pcVar4 == &DAT_04b76240) {
LAB_03b3f9ac:
                                uVar30 = 2;
                                goto LAB_03b3f9b0;
                              }
                              if (pcVar4 != &DAT_04b76246) goto LAB_03b3f9b4;
                            }
                            uVar30 = 3;
                          }
LAB_03b3f9b0:
                          local_c0 = CONCAT44(uVar30,(undefined4)local_c0);
                        }
                      }
LAB_03b3f9b4:
                      lStack_d0 = (long)psVar19 + (ulong)uVar5 + (long)(int)uVar11;
                      local_d8 = puVar3;
                      if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
                         (lVar28 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18), lVar28 != 0)) {
                        lVar28 = FUN_03ba4630(lVar28,&local_d8);
                        if (lVar28 != 0) {
                          FUN_03ba7040(puVar29 + 0xc,lVar28,&local_c8,param_3);
                        }
                      }
                    }
                  }
                }
                uVar25 = uVar25 + 1;
              } while (uVar14 != uVar25);
            }
          }
          uVar14 = FUN_006bd550(__src,0);
          if (uVar14 != 0) {
            uVar25 = *(uint *)(param_1 + 0x44);
            uVar11 = 0;
            if (uVar25 != 0) {
              uVar11 = uVar14 / uVar25;
            }
            uVar11 = uVar14 - uVar11 * uVar25;
            uVar5 = uVar11;
            do {
              uVar6 = *(uint *)(*(long *)(param_1 + 0x38) +
                               (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3));
              if (uVar6 == 0) {
                puVar21 = (uint *)(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 8);
                *puVar21 = uVar14;
                puVar21[1] = (uint)uVar27;
                *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
                break;
              }
              if (uVar6 == uVar14) break;
              uVar6 = 0;
              if ((int)(uVar5 + 1) < (int)uVar25) {
                uVar6 = uVar5 + 1;
              }
              uVar5 = uVar6;
            } while (uVar6 != uVar11);
          }
        }
      }
    }
    uVar27 = uVar27 + 1;
    if (uVar27 == uVar10) {
      return;
    }
  } while( true );
}

