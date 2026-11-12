
void FUN_0081d270(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  ulong uVar21;
  int iVar22;
  float fVar23;
  long *plVar24;
  undefined8 uVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  byte bVar29;
  char cVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  byte *pbVar35;
  long *plVar36;
  undefined1 (*pauVar37) [12];
  long lVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [12];
  float local_1d4;
  char *local_198;
  undefined *local_120;
  char *pcStack_118;
  undefined *local_110;
  char *local_108;
  undefined4 local_100 [18];
  byte local_b8 [4];
  byte local_b4 [20];
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar34 = *(long *)(param_2 + 0x18);
  lVar32 = *(long *)(*(long *)(lVar34 + 0x30) + 0x18) + 0x28;
  if ((*(ushort *)(lVar4 + 6) & 1) == 0) {
    pcVar14 = (char *)FUN_03be9dd0(lVar32,"CtrlRumblePattern",lVar4);
    pcVar20 = *(char **)(PTR_PTR_04bb2238 + 8);
    if (pcVar14 != (char *)0x0) {
      pcVar20 = pcVar14;
    }
    cVar30 = *pcVar20;
  }
  else {
    cVar30 = **(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (cVar30 != '\0') {
    plVar1 = (long *)(param_1 + 0x6c8);
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    do {
      while (*plVar1 == 0) {
        cVar30 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar15;
          cVar30 = ExclusiveMonitorsStatus();
        }
        if (cVar30 == '\0') {
          iVar22 = 1;
          goto LAB_0081d36c;
        }
      }
      ClearExclusiveLocal();
    } while (*plVar1 != lVar15);
    iVar22 = *(int *)(param_1 + 0x6d0) + 1;
LAB_0081d36c:
    *(int *)(param_1 + 0x6d0) = iVar22;
    lVar31 = *(long *)(lVar34 + 0x40);
    lVar15 = -0x6c0;
    do {
      lVar28 = param_1 + lVar15;
      if ((((*(char *)(lVar28 + 0x6d8) != '\0') && (*(long *)(lVar28 + 0x6e8) != 0)) &&
          (*(long *)(lVar28 + 0x6e8) == lVar31)) &&
         (((*(long *)(lVar28 + 0x6f0) != 0 && (*(long *)(lVar28 + 0x6f0) == lVar4)) &&
          ((*(ushort *)(lVar4 + 6) & 1) == 0)))) {
        *(undefined1 *)(lVar28 + 0x700) = 1;
        if (*(char *)(lVar28 + 0x702) != '\0') {
          uVar39 = FUN_03be9248(lVar32,3,lVar4,lVar34);
          *(undefined4 *)(lVar28 + 0x6dc) = uVar39;
        }
        if (*(char *)(lVar28 + 0x703) != '\0') {
          fVar44 = (float)FUN_03be9248(lVar32,4,lVar4,lVar34);
          lVar17 = *(long *)(lVar28 + 0x6c8);
          if ((lVar17 != 0) && (*(int *)(lVar28 + 0x6d0) == *(int *)(lVar17 + 0x10))) {
            fVar40 = 0.01;
            if (0.01 <= fVar44) {
              fVar40 = fVar44;
            }
            *(float *)(lVar17 + 0x7c) = fVar40;
          }
        }
        if (*(char *)(lVar28 + 0x709) == '\0') {
          fVar44 = *(float *)(lVar31 + 0xc);
          fVar40 = *(float *)(lVar31 + 0x1c);
          fVar43 = *(float *)(lVar31 + 0x2c);
        }
        else {
          lVar17 = *(long *)(param_2 + 0x30);
          if ((*(uint *)(lVar17 + 0x188) >> 2 & 1) == 0) {
            fVar44 = 0.0;
            fVar40 = 0.0;
            fVar43 = 0.0;
            if ((*(uint *)(lVar17 + 0x188) >> 3 & 1) != 0) {
              fVar44 = *(float *)(lVar17 + 0xcc);
              fVar40 = *(float *)(lVar17 + 0xdc);
              fVar43 = *(float *)(lVar17 + 0xec);
            }
          }
          else {
            fVar44 = *(float *)(lVar17 + 0xa8);
            fVar40 = *(float *)(lVar17 + 0xac);
            fVar43 = *(float *)(lVar17 + 0xb0);
          }
        }
        pfVar16 = (float *)FUN_0251b3b0(lVar28 + 0x708,0);
        local_110 = &DAT_049179e8;
        local_108 = DAT_04ccf5a0;
        iVar22 = *(int *)(lVar28 + 0x704);
        local_100[0] = DAT_04ccf5a8;
        if (iVar22 == 3) {
          local_108 = DAT_04ccf5d0;
          local_100[0] = DAT_04ccf5d8;
          fVar46 = 200.0;
        }
        else if (iVar22 == 2) {
          fVar46 = 30.0;
          local_108 = DAT_04ccf5b8;
          local_100[0] = DAT_04ccf5c0;
        }
        else {
          fVar46 = 60.0;
        }
        fVar48 = *(float *)(lVar28 + 0x6dc) * *(float *)(lVar28 + 0x6e0) +
                 *(float *)(lVar28 + 0x6e4);
        if ((pfVar16 != (float *)0x0) && (0 < iVar22)) {
          fVar40 = SQRT((pfVar16[1] - fVar40) * (pfVar16[1] - fVar40) +
                        (*pfVar16 - fVar44) * (*pfVar16 - fVar44) +
                        (pfVar16[2] - fVar43) * (pfVar16[2] - fVar43));
          fVar44 = 0.0;
          if (fVar40 < fVar46) {
            fVar44 = (float)(**(code **)(PTR_PTR_04bb4f80 + (ulong)(byte)local_100[0] * 8))
                                      ((fVar40 + -10.0) / (fVar46 + -10.0),local_100,local_108);
          }
          fVar48 = fVar48 * fVar44;
        }
        lVar17 = *(long *)(lVar28 + 0x6c8);
        if ((lVar17 != 0) && (*(int *)(lVar28 + 0x6d0) == *(int *)(lVar17 + 0x10))) {
          fVar44 = 0.0;
          if (0.0 <= fVar48) {
            fVar44 = fVar48;
          }
          *(float *)(lVar17 + 0x74) = fVar44;
        }
      }
      lVar15 = lVar15 + 0x48;
    } while (lVar15 != 0);
    lVar32 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    if ((*plVar1 == lVar32) &&
       (iVar22 = *(int *)(param_1 + 0x6d0) + -1, *(int *)(param_1 + 0x6d0) = iVar22, iVar22 == 0)) {
      do {
        cVar30 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          cVar30 = ExclusiveMonitorsStatus();
        }
      } while (cVar30 != '\0');
    }
  }
  lVar32 = *(long *)(param_2 + 0x10);
  if ((*(ushort *)(lVar32 + 6) & 1) == 0) {
    lVar34 = *(long *)(*(long *)(param_2 + 0x18) + 0x40);
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0x18) + 0x28;
    pcVar14 = (char *)FUN_03be9dd0(lVar4,"CtrlRumblePattern",lVar32);
    pcVar20 = *(char **)(PTR_PTR_04bb2238 + 8);
    if (pcVar14 != (char *)0x0) {
      pcVar20 = pcVar14;
    }
    if (*pcVar20 != '\0') {
      plVar1 = (long *)(param_1 + 0x990);
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      do {
        while (*plVar1 == 0) {
          cVar30 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar15;
            cVar30 = ExclusiveMonitorsStatus();
          }
          if (cVar30 == '\0') {
            iVar22 = 1;
            goto LAB_0081d6c0;
          }
        }
        ClearExclusiveLocal();
      } while (*plVar1 != lVar15);
      iVar22 = *(int *)(param_1 + 0x998) + 1;
LAB_0081d6c0:
      *(int *)(param_1 + 0x998) = iVar22;
      uVar12 = *(uint *)(param_1 + 0x6e8);
      if (uVar12 != 0) {
        uVar33 = 0;
        uVar26 = 0;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          iVar22 = *(int *)(param_1 + 0x6e4) + uVar26;
          iVar11 = 0;
          if (*(int *)(param_1 + 0x6e0) <= iVar22) {
            iVar11 = *(int *)(param_1 + 0x6e0);
          }
          iVar22 = iVar22 - iVar11;
          lVar31 = *(long *)(param_1 + 0x6d8) + (long)iVar22 * 0x38;
          lVar15 = *(long *)(lVar31 + 0x28);
          if ((lVar15 != 0 && lVar15 == lVar34) &&
             (lVar15 = *(long *)(*(long *)(param_1 + 0x6d8) + (long)iVar22 * 0x38 + 0x30),
             lVar15 != 0 && lVar15 == lVar32)) {
            if (*(char *)(lVar31 + 0x21) == '\0') {
              fVar40 = *(float *)(lVar34 + 0xc);
              fVar44 = *(float *)(lVar34 + 0x1c);
              fVar43 = *(float *)(lVar34 + 0x2c);
            }
            else {
              lVar15 = *(long *)(param_2 + 0x30);
              if ((*(uint *)(lVar15 + 0x188) >> 2 & 1) == 0) {
                fVar43 = 0.0;
                fVar44 = 0.0;
                fVar40 = 0.0;
                if ((*(uint *)(lVar15 + 0x188) >> 3 & 1) != 0) {
                  fVar40 = *(float *)(lVar15 + 0xcc);
                  fVar44 = *(float *)(lVar15 + 0xdc);
                  fVar43 = *(float *)(lVar15 + 0xec);
                }
              }
              else {
                fVar40 = *(float *)(lVar15 + 0xa8);
                fVar44 = *(float *)(lVar15 + 0xac);
                fVar43 = *(float *)(lVar15 + 0xb0);
              }
            }
            if (**(char **)(lVar31 + 8) != '\0') {
              iVar22 = *(int *)(lVar31 + 0x1c);
              lVar15 = *(long *)(lVar31 + 0x28);
              uVar5 = *(undefined8 *)(lVar31 + 0x30);
              local_1d4 = *(float *)(lVar31 + 0x18);
              fVar48 = *(float *)(lVar31 + 0x10);
              fVar46 = *(float *)(lVar31 + 0x14);
              if (iVar22 < 1) {
                fVar40 = 0.0;
                fVar44 = 0.0;
                fVar43 = 0.0;
              }
              plVar24 = *(long **)(param_2 + 0x20);
              bVar9 = FUN_03bea040(lVar4,3,lVar32);
              bVar10 = FUN_03bea040(lVar4,4,lVar32);
              iVar11 = FUN_03be90c0(lVar4,1,lVar32);
              lVar28 = DAT_04ccf5e8;
              if (DAT_04ccf5e8 != 0) {
                bVar6 = *(byte *)(lVar31 + 0x20);
                uVar7 = *(undefined1 *)(lVar31 + 0x21);
                uVar25 = *(undefined8 *)(lVar31 + 8);
                FUN_02507c6c(local_b4,1,1,1,0);
                if (local_b4[0] < 8) {
                  if (0.01 <= local_1d4) {
                    local_1d4 = 1.0 / local_1d4;
                  }
                  else {
                    local_1d4 = 100.0;
                  }
                  plVar3 = (long *)(lVar28 + 0x6c8);
                  lVar31 = lVar28 + 8;
                  fVar41 = 0.01;
                  if (0.01 <= fVar46) {
                    fVar41 = fVar46;
                  }
                  do {
                    local_b8[0] = local_b4[0];
                    if ((iVar11 == 0) || (bVar6 < 8 && bVar6 == local_b4[0])) {
                      pfVar16 = (float *)FUN_0251b3b0(local_b8,0);
                      uVar12 = FUN_02582d8c(local_b8,1);
                      uVar39 = 0xffffffff;
                      if ((uVar12 < 8) &&
                         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) !=
                          '\0')) {
                        uVar39 = *(undefined4 *)
                                  (*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d8);
                      }
                      lVar17 = FUN_009b56e8(*(undefined8 *)PTR_DAT_04bb3960,uVar39);
                      if (lVar17 != 0) {
                        plVar36 = *(long **)(lVar17 + 0xc20);
                        if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
                           (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar13 != 0)) {
                          *(undefined ***)PTR_DAT_04bb4f30 = &PTR_LAB_04917a18;
                          __cxa_guard_release(PTR_DAT_04bb4f38);
                        }
                        fVar46 = 1.0;
                        if (plVar36 != (long *)0x0) {
                          uVar18 = (**(code **)*plVar36)(plVar36,PTR_DAT_04bb4f30);
                          fVar46 = 1.0;
                          if ((uVar18 & 1) != 0) {
                            uVar18 = (**(code **)(*plVar36 + 0x30))(plVar36);
                            fVar46 = 1.0;
                            if (((uVar18 & 1) != 0) &&
                               (fVar46 = 0.6, *(char *)((long)plVar36 + 0x17d) != '\x01')) {
                              fVar46 = 1.0;
                            }
                          }
                        }
                        local_110 = &DAT_049179e8;
                        local_108 = DAT_04ccf5a0;
                        local_100[0] = DAT_04ccf5a8;
                        if (iVar22 == 3) {
                          local_108 = DAT_04ccf5d0;
                          local_100[0] = DAT_04ccf5d8;
                          fVar23 = 200.0;
                        }
                        else if (iVar22 == 2) {
                          fVar23 = 30.0;
                          local_108 = DAT_04ccf5b8;
                          local_100[0] = DAT_04ccf5c0;
                        }
                        else {
                          fVar23 = 60.0;
                        }
                        fVar47 = fVar48 * fVar46 + 0.0;
                        if ((iVar22 < 1) || (pfVar16 == (float *)0x0)) {
                          fVar42 = 1.0;
                        }
                        else {
                          fVar45 = SQRT((pfVar16[1] - fVar44) * (pfVar16[1] - fVar44) +
                                        (*pfVar16 - fVar40) * (*pfVar16 - fVar40) +
                                        (pfVar16[2] - fVar43) * (pfVar16[2] - fVar43));
                          fVar42 = 0.0;
                          if (fVar45 < fVar23) {
                            fVar42 = (float)(**(code **)(PTR_PTR_04bb4f80 +
                                                        (ulong)(byte)local_100[0] * 8))
                                                      ((fVar45 + -10.0) / (fVar23 + -10.0),local_100
                                                       ,local_108);
                          }
                          fVar47 = fVar47 * fVar42;
                        }
                        if ((0.001 <= fVar47) || ((bVar9 & 1 & fVar42 < 1.0) != 0)) {
                          FUN_0071b954(&local_110,"%s.bnvib",uVar25);
                          lVar19 = nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                          do {
                            while (*plVar3 == 0) {
                              cVar30 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar8) {
                                *plVar3 = lVar19;
                                cVar30 = ExclusiveMonitorsStatus();
                              }
                              if (cVar30 == '\0') {
                                iVar13 = 1;
                                goto LAB_0081dcf0;
                              }
                            }
                            ClearExclusiveLocal();
                          } while (*plVar3 != lVar19);
                          iVar13 = *(int *)(lVar28 + 0x6d0) + 1;
LAB_0081dcf0:
                          *(int *)(lVar28 + 0x6d0) = iVar13;
                          if (*(char *)(lVar28 + 0x18) == '\0') {
                            lVar19 = 0;
                            local_198 = (char *)(lVar28 + 0x18);
LAB_0081de78:
                            pauVar37 = (undefined1 (*) [12])(lVar31 + lVar19 * 0x48);
                            lVar38 = *(long *)PTR_DAT_04bb2740;
                            (**(code **)(local_110 + 0x18))(&local_110);
                            pcStack_118 = local_108;
                            local_120 = puVar2;
                            auVar49 = FUN_03c3c090(*(undefined8 *)(lVar38 + 0x238),&local_120,
                                                   *(undefined4 *)(lVar17 + 0xbe0),2);
                            lVar17 = auVar49._0_8_;
                            *pauVar37 = auVar49;
                            if (lVar17 != 0) {
                              iVar13 = *(int *)(lVar17 + 0x10);
                              if (iVar13 == auVar49._8_4_) {
                                fVar23 = 0.0;
                                if (0.0 <= fVar47) {
                                  fVar23 = fVar47;
                                }
                                *(float *)(lVar17 + 0x74) = fVar23;
                                lVar17 = *(long *)*pauVar37;
                                if (lVar17 == 0) goto LAB_0081df44;
                                iVar13 = *(int *)(lVar17 + 0x10);
                              }
                              iVar27 = *(int *)(*pauVar37 + 8);
                              if (iVar27 == iVar13) {
                                *(float *)(lVar17 + 0x7c) = fVar41;
                                lVar17 = *(long *)*pauVar37;
                                if (lVar17 == 0) goto LAB_0081df44;
                                iVar27 = *(int *)(*pauVar37 + 8);
                                iVar13 = *(int *)(lVar17 + 0x10);
                              }
                              if (((iVar27 == iVar13) &&
                                  (*(float *)(lVar17 + 0x80) = local_1d4, 0.0 < local_1d4)) &&
                                 (*(long *)(lVar17 + 0x250) != 0)) {
                                *(float *)(*(long *)(lVar17 + 0x250) + 0xd0) = local_1d4;
                              }
                            }
LAB_0081df44:
                            if (((plVar24 == (long *)0x0) || (*plVar24 == 0)) ||
                               ((int)plVar24[1] != *(int *)(*plVar24 + 0x34))) {
                              lVar17 = *(long *)*pauVar37;
                              if (lVar17 != 0) {
                                if (*(int *)(*pauVar37 + 8) == *(int *)(lVar17 + 0x10)) {
                                  if (*(int *)(lVar17 + 0x20) == 1) {
                                    (**(code **)(*(long *)(*(long *)(lVar17 + 0x38) + 0x1a8) + 0xf0)
                                    )(*(long *)(lVar17 + 0x38) + 0x1a8);
                                  }
                                  else if ((*(int *)(lVar17 + 0x20) == 0) &&
                                          (*(long *)(lVar17 + 0x250) != 0)) {
                                    nn::hid::VibrationPlayer::IsLoop();
                                  }
                                }
                                bVar8 = false;
                                goto LAB_0081e014;
                              }
                              bVar8 = false;
                            }
                            else {
                              lVar17 = FUN_00322a20(plVar24);
                              cVar30 = *(char *)(lVar17 + 0x18);
                              lVar17 = *(long *)*pauVar37;
                              if ((lVar17 != 0) &&
                                 (*(int *)(*pauVar37 + 8) == *(int *)(lVar17 + 0x10))) {
                                if (*(int *)(lVar17 + 0x20) == 1) {
                                  (**(code **)(*(long *)(*(long *)(lVar17 + 0x38) + 0x1a8) + 0xf0))
                                            (*(long *)(lVar17 + 0x38) + 0x1a8);
                                }
                                else if ((*(int *)(lVar17 + 0x20) == 0) &&
                                        (*(long *)(lVar17 + 0x250) != 0)) {
                                  nn::hid::VibrationPlayer::IsLoop();
                                }
                              }
                              bVar8 = false;
                              if (cVar30 != '\0') {
                                cVar30 = *DAT_04ccf590;
                                if (cVar30 == '\0') {
                                  bVar8 = true;
                                }
                                else {
                                  pcVar20 = local_108;
                                  pcVar14 = DAT_04ccf590;
                                  do {
                                    pcVar14 = pcVar14 + 1;
                                    bVar8 = *pcVar20 == cVar30;
                                    if (!bVar8) break;
                                    cVar30 = *pcVar14;
                                    pcVar20 = pcVar20 + 1;
                                  } while (cVar30 != '\0');
                                }
                              }
LAB_0081e014:
                              lVar17 = *(long *)*pauVar37;
                              if ((((lVar17 != 0) &&
                                   (*(int *)(*pauVar37 + 8) == *(int *)(lVar17 + 0x10))) &&
                                  (*(int *)(lVar17 + 0x20) == 0)) &&
                                 (*(long *)(lVar17 + 0x250) != 0)) {
                                nn::hid::VibrationPlayer::SetLoop
                                          (SUB81(*(long *)(lVar17 + 0x250),0));
                              }
                            }
                            *local_198 = '\x01';
                            lVar17 = lVar31 + lVar19 * 0x48;
                            *(undefined1 *)(lVar17 + 0x38) = 1;
                            *(float *)(lVar17 + 0x14) = fVar48;
                            *(float *)(lVar17 + 0x18) = fVar46;
                            *(undefined4 *)(lVar17 + 0x1c) = 0;
                            *(long *)(lVar17 + 0x20) = lVar15;
                            *(undefined8 *)(lVar17 + 0x28) = uVar5;
                            if (bVar8 != false) goto LAB_0081e084;
                            lVar17 = *(long *)*pauVar37;
                            plVar36 = (long *)0x0;
                            if (lVar17 != 0) {
                              if (*(int *)(*pauVar37 + 8) != *(int *)(lVar17 + 0x10))
                              goto LAB_0081e104;
                              iVar13 = *(int *)(lVar17 + 0x20);
                              if (iVar13 == 2) {
LAB_0081e084:
                                plVar36 = plVar24;
                              }
                              else {
                                if (iVar13 == 1) {
                                  pcVar20 = (char *)(**(code **)(*(long *)(*(long *)(lVar17 + 0x38)
                                                                          + 0x1a8) + 0xf0))
                                                              (*(long *)(lVar17 + 0x38) + 0x1a8);
                                  if (*pcVar20 != '\0') goto LAB_0081e084;
                                }
                                else if (((iVar13 == 0) && (*(long *)(lVar17 + 0x250) != 0)) &&
                                        (uVar18 = nn::hid::VibrationPlayer::IsLoop(),
                                        (uVar18 & 1) != 0)) goto LAB_0081e084;
LAB_0081e104:
                                plVar36 = (long *)0x0;
                              }
                            }
                            lVar17 = lVar31 + lVar19 * 0x48;
                            *(long **)(lVar17 + 0x30) = plVar36;
                            *(bool *)(lVar17 + 0x39) = bVar8;
                            *(byte *)(lVar17 + 0x3a) = bVar9 & 1;
                            *(byte *)(lVar17 + 0x3b) = bVar10 & 1;
                            iVar13 = 0;
                            if (pfVar16 != (float *)0x0) {
                              iVar13 = iVar22;
                            }
                            *(int *)(lVar17 + 0x3c) = iVar13;
                            bVar29 = local_b8[0];
                            if (7 < local_b8[0]) {
                              bVar29 = 0xff;
                            }
                            *(byte *)(lVar17 + 0x40) = bVar29;
                            *(undefined1 *)(lVar17 + 0x41) = uVar7;
                          }
                          else {
                            if (*(char *)(lVar28 + 0x60) == '\0') {
                              lVar19 = 1;
                              local_198 = (char *)(lVar28 + 0x60);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0xa8) == '\0') {
                              lVar19 = 2;
                              local_198 = (char *)(lVar28 + 0xa8);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0xf0) == '\0') {
                              lVar19 = 3;
                              local_198 = (char *)(lVar28 + 0xf0);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x138) == '\0') {
                              lVar19 = 4;
                              local_198 = (char *)(lVar28 + 0x138);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x180) == '\0') {
                              lVar19 = 5;
                              local_198 = (char *)(lVar28 + 0x180);
                              goto LAB_0081de58;
                            }
                            if (*(char *)(lVar28 + 0x1c8) == '\0') {
                              lVar19 = 6;
                              local_198 = (char *)(lVar28 + 0x1c8);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x210) == '\0') {
                              lVar19 = 7;
                              local_198 = (char *)(lVar28 + 0x210);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 600) == '\0') {
                              lVar19 = 8;
                              local_198 = (char *)(lVar28 + 600);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x2a0) == '\0') {
                              lVar19 = 9;
                              local_198 = (char *)(lVar28 + 0x2a0);
LAB_0081de58:
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x2e8) == '\0') {
                              lVar19 = 10;
                              local_198 = (char *)(lVar28 + 0x2e8);
                              goto LAB_0081de58;
                            }
                            if (*(char *)(lVar28 + 0x330) == '\0') {
                              lVar19 = 0xb;
                              local_198 = (char *)(lVar28 + 0x330);
                              goto LAB_0081de58;
                            }
                            if (*(char *)(lVar28 + 0x378) == '\0') {
                              lVar19 = 0xc;
                              local_198 = (char *)(lVar28 + 0x378);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x3c0) == '\0') {
                              lVar19 = 0xd;
                              local_198 = (char *)(lVar28 + 0x3c0);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x408) == '\0') {
                              lVar19 = 0xe;
                              local_198 = (char *)(lVar28 + 0x408);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x450) == '\0') {
                              lVar19 = 0xf;
                              local_198 = (char *)(lVar28 + 0x450);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x498) == '\0') {
                              lVar19 = 0x10;
                              local_198 = (char *)(lVar28 + 0x498);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x4e0) == '\0') {
                              lVar19 = 0x11;
                              local_198 = (char *)(lVar28 + 0x4e0);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x528) == '\0') {
                              lVar19 = 0x12;
                              local_198 = (char *)(lVar28 + 0x528);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x570) == '\0') {
                              lVar19 = 0x13;
                              local_198 = (char *)(lVar28 + 0x570);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x5b8) == '\0') {
                              lVar19 = 0x14;
                              local_198 = (char *)(lVar28 + 0x5b8);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x600) == '\0') {
                              lVar19 = 0x15;
                              local_198 = (char *)(lVar28 + 0x600);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x648) == '\0') {
                              lVar19 = 0x16;
                              local_198 = (char *)(lVar28 + 0x648);
                              goto LAB_0081de78;
                            }
                            if (*(char *)(lVar28 + 0x690) == '\0') {
                              lVar19 = 0x17;
                              local_198 = (char *)(lVar28 + 0x690);
                              goto LAB_0081de78;
                            }
                          }
                          lVar17 = nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                          if ((*plVar3 == lVar17) &&
                             (iVar13 = *(int *)(lVar28 + 0x6d0) + -1,
                             *(int *)(lVar28 + 0x6d0) = iVar13, iVar13 == 0)) {
                            do {
                              cVar30 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                              if (bVar8) {
                                *plVar3 = 0;
                                cVar30 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar30 != '\0');
                          }
                        }
                      }
                    }
                    bVar29 = local_b4[0];
                    uVar18 = (ulong)local_b4[0];
                    if ((7 < local_b4[0]) || (uVar18 + 1 == 8)) break;
                    pbVar35 = PTR_DAT_04bb5038 + uVar18 + 1;
                    uVar21 = FUN_02507924(local_b4,pbVar35);
                    if ((uVar21 & 1) == 0) {
                      if (uVar18 + 2 == 8) break;
                      pbVar35 = PTR_DAT_04bb5038 + uVar18 + 2;
                      uVar21 = FUN_02507924(local_b4,pbVar35);
                      if ((uVar21 & 1) == 0) {
                        if (uVar18 + 3 == 8) break;
                        pbVar35 = PTR_DAT_04bb5038 + uVar18 + 3;
                        uVar21 = FUN_02507924(local_b4,pbVar35);
                        if ((uVar21 & 1) == 0) {
                          if (uVar18 + 4 == 8) break;
                          pbVar35 = PTR_DAT_04bb5038 + uVar18 + 4;
                          uVar21 = FUN_02507924(local_b4,pbVar35);
                          if ((uVar21 & 1) == 0) {
                            if (uVar18 + 5 == 8) break;
                            pbVar35 = PTR_DAT_04bb5038 + uVar18 + 5;
                            uVar21 = FUN_02507924(local_b4,pbVar35);
                            if ((uVar21 & 1) == 0) {
                              if (uVar18 + 6 == 8) break;
                              pbVar35 = PTR_DAT_04bb5038 + uVar18 + 6;
                              uVar21 = FUN_02507924(local_b4,pbVar35);
                              if ((uVar21 & 1) == 0) {
                                if (uVar18 + 7 == 8) break;
                                pbVar35 = PTR_DAT_04bb5038 + uVar18 + 7;
                                uVar21 = FUN_02507924(local_b4,pbVar35);
                                if ((uVar21 & 1) == 0) {
                                  if (bVar29 == 0) break;
                                  pbVar35 = PTR_DAT_04bb5038 + uVar18 + 8;
                                  FUN_02507924(local_b4,pbVar35);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if (7 < *pbVar35) break;
                    local_b4[0] = *pbVar35;
                  } while( true );
                }
              }
              uVar12 = *(uint *)(param_1 + 0x6e8);
            }
            if ((((int)uVar33 < (int)uVar12) && (-1 < (int)uVar33)) &&
               (uVar26 = uVar12 - 1, 0 < (int)uVar12)) {
              uVar12 = uVar26;
              if (uVar33 < uVar26) {
                lVar15 = (long)(int)uVar33;
                do {
                  iVar27 = *(int *)(param_1 + 0x6e4);
                  iVar22 = (int)lVar15 + iVar27;
                  iVar13 = *(int *)(param_1 + 0x6e0);
                  iVar11 = 0;
                  if (iVar13 <= iVar22 + 1) {
                    iVar11 = iVar13;
                  }
                  lVar31 = *(long *)(param_1 + 0x6d8) +
                           (lVar15 + ((long)iVar27 - (long)iVar11)) * 0x38;
                  iVar11 = 0;
                  if (iVar13 <= iVar22) {
                    iVar11 = iVar13;
                  }
                  lVar28 = lVar15 + ((long)iVar27 - (long)iVar11);
                  lVar15 = lVar15 + 1;
                  lVar28 = *(long *)(param_1 + 0x6d8) + lVar28 * 0x38;
                  *(undefined8 *)(lVar28 + 8) = *(undefined8 *)(lVar31 + 0x40);
                  uVar5 = *(undefined8 *)(lVar31 + 0x50);
                  *(undefined8 *)(lVar28 + 0x10) = *(undefined8 *)(lVar31 + 0x48);
                  *(undefined8 *)(lVar28 + 0x18) = uVar5;
                  bVar9 = *(byte *)(lVar31 + 0x58);
                  *(undefined1 *)(lVar28 + 0x21) = *(undefined1 *)(lVar31 + 0x59);
                  if (7 < bVar9) {
                    bVar9 = 0xff;
                  }
                  *(byte *)(lVar28 + 0x20) = bVar9;
                  uVar5 = *(undefined8 *)(lVar31 + 0x68);
                  *(undefined8 *)(lVar28 + 0x28) = *(undefined8 *)(lVar31 + 0x60);
                  *(undefined8 *)(lVar28 + 0x30) = uVar5;
                  uVar12 = *(int *)(param_1 + 0x6e8) - 1;
                } while ((int)lVar15 < (int)uVar12);
              }
              *(uint *)(param_1 + 0x6e8) = uVar12;
            }
            uVar26 = 0;
            if (uVar33 <= uVar12) {
              uVar26 = uVar33;
            }
            if (uVar26 == uVar12) break;
            uVar33 = uVar33 - 1;
          }
          uVar26 = uVar26 + 1;
          uVar33 = uVar33 + 1;
        } while (uVar26 != uVar12);
      }
      lVar32 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      if ((*plVar1 == lVar32) &&
         (iVar22 = *(int *)(param_1 + 0x998) + -1, *(int *)(param_1 + 0x998) = iVar22, iVar22 == 0))
      {
        do {
          cVar30 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = 0;
            cVar30 = ExclusiveMonitorsStatus();
          }
        } while (cVar30 != '\0');
      }
    }
  }
  return;
}

