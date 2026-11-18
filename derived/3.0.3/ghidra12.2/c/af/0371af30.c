
/* WARNING: Removing unreachable block (ram,0x0371b8a0) */
/* WARNING: Removing unreachable block (ram,0x0371b8b0) */

void FUN_0371af30(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  ushort *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  undefined8 *puVar28;
  long *plVar29;
  void *__src;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  undefined1 *__src_00;
  long *plVar34;
  long lVar35;
  long *plVar36;
  int iVar37;
  long *plVar38;
  float fVar39;
  float fVar40;
  int local_10c;
  undefined8 local_100;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined *local_a8;
  undefined1 *puStack_a0;
  int local_98;
  undefined1 auStack_94 [7];
  undefined1 local_8d;
  undefined4 local_74;
  
  plVar38 = (long *)PTR_DAT_04bb2720;
  lVar25 = *(long *)PTR_DAT_04bb2720;
  if (lVar25 == 0) {
    puVar28 = &DAT_055c04a0;
  }
  else {
    puVar28 = &DAT_055c04a0;
    if (*(long *)(lVar25 + 0x330) != 0) {
      puVar28 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar25 + 0x338));
      iVar21 = FUN_006bd550(*puVar28,0);
      puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar21 != 0x758f7eaf) {
        puVar28 = &DAT_055c04a0;
      }
    }
  }
  iVar21 = *(int *)(puVar28 + 7);
  if (((((DAT_05ac0a90 == iVar21) || (DAT_05ac0aa0 == iVar21)) || (DAT_05ac0ab0 == iVar21)) ||
      ((DAT_05ac0ac0 == iVar21 || (DAT_05ac0ad0 == iVar21)))) ||
     ((((DAT_05ac0ae0 == iVar21 || ((DAT_05ac0af0 == iVar21 || (DAT_05ac0b00 == iVar21)))) ||
       (DAT_05ac0b10 == iVar21)) || (DAT_05ac0b20 == iVar21)))) {
    lVar25 = *plVar38;
    if (lVar25 == 0) {
      puVar28 = &DAT_055c04a0;
    }
    else {
      puVar28 = &DAT_055c04a0;
      if (*(long *)(lVar25 + 0x330) != 0) {
        puVar28 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar25 + 0x338));
        iVar21 = FUN_006bd550(*puVar28,0);
        puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar21 != 0x758f7eaf) {
          puVar28 = &DAT_055c04a0;
        }
      }
    }
    iVar21 = *(int *)(puVar28 + 7);
    if (DAT_05ac0a90 == iVar21) {
      lVar25 = 0;
    }
    else if (DAT_05ac0aa0 == iVar21) {
      lVar25 = 1;
    }
    else if (DAT_05ac0ab0 == iVar21) {
      lVar25 = 2;
    }
    else if (DAT_05ac0ac0 == iVar21) {
      lVar25 = 3;
    }
    else if (DAT_05ac0ad0 == iVar21) {
      lVar25 = 4;
    }
    else if (DAT_05ac0ae0 == iVar21) {
      lVar25 = 5;
    }
    else if (DAT_05ac0af0 == iVar21) {
      lVar25 = 6;
    }
    else if (DAT_05ac0b00 == iVar21) {
      lVar25 = 7;
    }
    else if (DAT_05ac0b10 == iVar21) {
      lVar25 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar21) goto LAB_0371b1bc;
      lVar25 = 9;
    }
    piVar1 = (int *)(param_4 + 0x123d0);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(&DAT_05ac0a98)[lVar25 * 4]);
    if ((*piVar1 == 0) && (*(int *)(param_4 + 0xe0) != 0)) {
      plVar29 = *(long **)(param_4 + 0xe8);
      plVar6 = plVar29 + *(int *)(param_4 + 0xe0);
      puVar2 = PTR_DAT_04bb6a30 + 0x10;
      puVar3 = PTR_DAT_04bb3768 + 0x10;
      do {
        lVar25 = *plVar29;
        if ((((*(int *)(lVar25 + 0xd8) != 0) &&
             (uVar22 = FUN_0376f950(*(undefined2 *)(lVar25 + 0x38)), (uVar22 & 1) == 0)) &&
            (*(int *)(lVar25 + 0xe8) == (int)local_a8)) && (*piVar1 < *(int *)(param_4 + 0x123d4)))
        {
          plVar36 = *(long **)(param_4 + 0x123e0);
          if (plVar36 != (long *)0x0) {
            *(long *)(param_4 + 0x123e0) = *plVar36;
          }
          __dest = (void *)((long)plVar36 + 0x14);
          *(undefined1 *)((long)plVar36 + 0x1b) = 0;
          *(undefined4 *)(plVar36 + 2) = 8;
          *plVar36 = (long)puVar2;
          plVar36[1] = (long)__dest;
          (**(code **)(*(long *)(lVar25 + 0x10) + 0x18))(lVar25 + 0x10);
          __src = *(void **)(lVar25 + 0x18);
          if (__dest != __src) {
            (**(code **)(*(long *)(lVar25 + 0x10) + 0x18))(lVar25 + 0x10);
            lVar26 = 0;
            do {
              if (*(char *)(*(long *)(lVar25 + 0x18) + lVar26) == '\0') goto LAB_0371b3d0;
              lVar35 = *(long *)(lVar25 + 0x18) + lVar26;
              if (*(char *)(lVar35 + 1) == '\0') {
                lVar26 = lVar26 + 1;
                goto LAB_0371b3d0;
              }
              if (*(char *)(lVar35 + 2) == '\0') {
                lVar26 = lVar26 + 2;
                goto LAB_0371b3d0;
              }
              lVar26 = lVar26 + 3;
            } while (lVar26 != 0x80001);
            lVar26 = 0;
LAB_0371b3d0:
            iVar21 = (int)lVar26;
            if ((int)plVar36[2] <= (int)lVar26) {
              iVar21 = (int)plVar36[2] + -1;
            }
            memcpy(__dest,__src,(long)iVar21);
            *(undefined1 *)((long)__dest + (long)iVar21) = 0;
          }
          *plVar36 = (long)puVar3;
          if (*piVar1 < *(int *)(param_4 + 0x123d4)) {
            *(long **)(*(long *)(param_4 + 0x123d8) + (long)*piVar1 * 8) = plVar36;
            *piVar1 = *piVar1 + 1;
          }
        }
        plVar29 = plVar29 + 1;
      } while (plVar29 != plVar6);
    }
  }
LAB_0371b1bc:
  sVar15 = *(short *)PTR_DAT_04bb6298;
  if (sVar15 != -1) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x1a);
    puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
    if (0xff < (uint)(int)sVar15) {
      puVar24 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar24 >> 0x1a & 1) != 0) {
      lVar25 = *(long *)PTR_DAT_04bb27f8;
      if ((lVar25 != 0) && ((*(byte *)(param_4 + 0x1231) >> 3 & 1) != 0)) {
        FUN_0371bdb0(param_4);
        if (*(int *)(param_4 + 0xe0) != 0) {
          puVar5 = (ushort *)(param_4 + 0xb018);
          plVar29 = *(long **)(param_4 + 0xe8);
          lVar26 = param_4 + 0x1470;
          plVar6 = plVar29 + *(int *)(param_4 + 0xe0);
          puVar2 = PTR_DAT_04bb6a30 + 0x10;
          puVar3 = PTR_DAT_04bb3768 + 0x10;
          puVar4 = PTR_DAT_04bb3750 + 0x10;
          do {
            lVar35 = *plVar29;
            if ((((*(ushort *)(lVar35 + 0x114) ^ 0xffff) & 9) == 0) &&
               (*(int *)(PTR_DAT_04bc3a80 + 0x38) == *(int *)(lVar35 + 0x100))) {
              iVar21 = (int)*(float *)(lVar35 + 0xf0);
              iVar31 = (int)*(float *)(lVar35 + 0xf8);
              FUN_035a4360(puVar5,iVar21,iVar31,0);
              FUN_035a4360(puVar5,iVar21,(uint)DAT_057763a8 + iVar31,0);
              FUN_035a4360(puVar5,(uint)DAT_057763b0 + iVar21,iVar31,0);
              FUN_035a4360(puVar5,(uint)DAT_057763b8 + iVar21,(uint)DAT_057763c0 + iVar31,0);
            }
            if (*(int *)(lVar25 + 0x14) == 6) {
              sVar15 = *(short *)(lVar35 + 0x38);
              if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                   ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0))
                 || (lVar33 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar33 == 0)) {
                sVar14 = *(short *)(lVar25 + 0x2a);
              }
              else if ((*(long **)(lVar33 + 0x60) == (long *)0x0) ||
                      (puVar28 = (undefined8 *)**(long **)(lVar33 + 0x60),
                      puVar28 == (undefined8 *)0x0)) {
                sVar14 = *(short *)(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40) + 2);
              }
              else {
                uVar22 = (**(code **)*puVar28)();
                sVar14 = *(short *)(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40) + 2);
                if ((((uVar22 & 1) != 0) && (*(long *)(lVar33 + 0x60) != 0)) &&
                   (puVar28 = *(undefined8 **)(*(long *)(lVar33 + 0x60) + 8),
                   puVar28 != (undefined8 *)0x0)) {
                  (**(code **)*puVar28)();
                }
              }
              if (sVar15 != sVar14) goto LAB_0371b600;
            }
            else {
LAB_0371b600:
              if ((*(ushort *)(lVar35 + 0x114) & 0x180) != 0) {
                local_8d = 0;
                uVar30 = *(undefined8 *)PTR_DAT_04bb27f8;
                local_98 = 8;
                plVar36 = (long *)(lVar35 + 0x10);
                local_a8 = puVar2;
                puStack_a0 = auStack_94;
                (**(code **)(*plVar36 + 0x18))(plVar36);
                __src_00 = *(undefined1 **)(lVar35 + 0x18);
                if (auStack_94 != __src_00) {
                  (**(code **)(*(long *)(lVar35 + 0x10) + 0x18))(plVar36);
                  lVar33 = 0;
                  do {
                    if (*(char *)(*(long *)(lVar35 + 0x18) + lVar33) == '\0') goto LAB_0371b6ac;
                    lVar7 = *(long *)(lVar35 + 0x18) + lVar33;
                    if (*(char *)(lVar7 + 1) == '\0') {
                      lVar33 = lVar33 + 1;
                      goto LAB_0371b6ac;
                    }
                    if (*(char *)(lVar7 + 2) == '\0') {
                      lVar33 = lVar33 + 2;
                      goto LAB_0371b6ac;
                    }
                    lVar33 = lVar33 + 3;
                  } while (lVar33 != 0x80001);
                  lVar33 = 0;
LAB_0371b6ac:
                  iVar21 = (int)lVar33;
                  if (local_98 <= (int)lVar33) {
                    iVar21 = local_98 + -1;
                  }
                  memcpy(auStack_94,__src_00,(long)iVar21);
                  auStack_94[iVar21] = 0;
                }
                local_a8 = puVar3;
                uVar22 = FUN_036e4cd0(uVar30,&local_a8);
                if (((uVar22 & 1) == 0) && (lVar33 = *(long *)PTR_DAT_04bb27c0, lVar33 != 0)) {
                  uVar27 = *(uint *)(lVar35 + 8);
                  if ((uVar27 == 0) ||
                     (((plVar34 = *(long **)(*(long *)(*(long *)(lVar33 + 0x1c0) + 8) +
                                            ((ulong)(uVar27 >> 0x11) & 0x7ff8)),
                       plVar34 == (long *)0x0 || ((*(uint *)(plVar34 + 0x49) >> 1 & 1) != 0)) ||
                      (*(uint *)(plVar34 + 0x46) != uVar27)))) {
                    plVar34 = (long *)0x0;
                  }
                  if (*(int *)(lVar33 + 0x288) == 1 || *(int *)(lVar33 + 0x288) == -1) {
                    plVar23 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                           (*(long *)PTR_DAT_04bb3350 + 0x68));
                    lVar33 = *(long *)PTR_DAT_04bb27c0;
                    iVar21 = (**(code **)(*plVar23 + 0x60))();
                    if (iVar21 < 0x11) {
                      uVar27 = 1;
                    }
                    else {
                      if (4 < *(uint *)(lVar33 + 0x5e8)) goto LAB_0371b79c;
                      uVar27 = 0x1aU >> (ulong)(*(uint *)(lVar33 + 0x5e8) & 0x1f) & 1;
                    }
                  }
                  else {
LAB_0371b79c:
                    uVar27 = 0;
                  }
                  if (plVar34 != (long *)0x0) {
                    lVar33 = plVar34[0x2a];
                    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                       (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar21 != 0)) {
                      *(undefined **)PTR_DAT_04bb37d0 = puVar4;
                      __cxa_guard_release(PTR_DAT_04bb37d8);
                    }
                    uVar22 = (**(code **)(*plVar34 + 0x20))(plVar34,PTR_DAT_04bb37d0);
                    uVar12 = 0;
                    if ((int)lVar33 == 1) {
                      uVar12 = uVar27;
                    }
                    if (((uVar22 & 1) != 0) && (uVar12 != 0)) {
                      nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                      if ((*(long *)PTR_DAT_04bb5ce0 == 0) ||
                         ((lVar33 = *plVar38, lVar33 == 0 || (*(long *)(lVar33 + 0x330) == 0)))) {
LAB_0371b870:
                        lVar33 = *(long *)PTR_DAT_04bb59d8;
                        iVar31 = *(int *)(lVar33 + 0x28);
                        iVar10 = *(int *)(lVar33 + 0x2c);
                        iVar8 = *(int *)(lVar33 + 0x38);
                        iVar11 = *(int *)(lVar33 + 0x3c);
                        local_b4 = 0.0;
                        local_a8 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
                        iVar21 = iVar11 + 1;
                        puStack_a0 = (undefined1 *)(*(long *)PTR_DAT_04bb27c8 + 0x28);
                        if (iVar21 == iVar10) goto LAB_0371bc98;
                        local_100 = 0;
                        fVar40 = -3.4028235e+38;
                        local_10c = 0;
                        iVar37 = iVar10;
                        iVar32 = iVar31;
                        do {
                          iVar17 = iVar32 - (uint)*puVar5;
                          if (-1 < iVar17) {
                            if (iVar17 < *(int *)(param_4 + 0xb024)) {
                              iVar18 = iVar37 - (uint)*(ushort *)(param_4 + 0xb01a);
                              if (-1 < iVar18) {
                                if (iVar18 < *(int *)(param_4 + 0xb028)) {
                                  iVar16 = iVar32 + -1;
                                  iVar19 = iVar16 - (uint)*puVar5;
                                  if ((-1 < iVar19) && (iVar19 < *(int *)(param_4 + 0xb024))) {
                                    iVar19 = iVar37 + -1;
                                    iVar20 = iVar19 - (uint)*(ushort *)(param_4 + 0xb01a);
                                    if (((((-1 < iVar20) &&
                                          ((iVar20 < *(int *)(param_4 + 0xb028) &&
                                           (uVar27 = iVar17 + *(int *)(*(long *)(param_4 + 0xb058) +
                                                                      0x1c) * iVar18,
                                           (*(uint *)(*(long *)(*(long *)(param_4 + 0xb058) + 0x10)
                                                     + (long)((int)uVar27 >> 5) * 4) >>
                                            (ulong)(uVar27 & 0x1f) & 1) != 0)))) &&
                                         (iVar32 <= iVar8 && iVar31 <= iVar32)) &&
                                        (((((iVar10 <= iVar37 && (iVar37 <= iVar11)) &&
                                           (uVar22 = FUN_035aa210(iVar32,iVar37,&local_a8),
                                           (uVar22 & 1) != 0)) &&
                                          ((iVar10 < iVar37 &&
                                           (uVar22 = FUN_035aa210(iVar32,iVar19,&local_a8),
                                           (uVar22 & 1) != 0)))) &&
                                         (iVar16 <= iVar8 && iVar31 < iVar32)))) &&
                                       ((uVar22 = FUN_035aa210(iVar16,iVar37,&local_a8),
                                        (uVar22 & 1) != 0 &&
                                        (uVar22 = FUN_035aa210(iVar16,iVar19,&local_a8),
                                        (uVar22 & 1) != 0)))) {
                                      lVar33 = *(long *)(param_4 + 0x1490);
                                      iVar18 = iVar32 - (uint)*(ushort *)(param_4 + 0x1470);
                                      iVar17 = *(int *)(param_4 + 0x147c) *
                                               (iVar37 - (uint)*(ushort *)(param_4 + 0x1472));
                                      bVar13 = *(byte *)(lVar33 + (long)(iVar17 + iVar18) * 0x28 + 6
                                                        );
                                      if ((bVar13 < 5) &&
                                         ((1 << (ulong)(bVar13 & 0x1f) & 0x13U) != 0)) {
                                        iVar20 = iVar16 - (uint)*(ushort *)(param_4 + 0x1470);
                                        bVar13 = *(byte *)(lVar33 + (long)(iVar17 + iVar20) * 0x28 +
                                                          6);
                                        if ((bVar13 < 5) &&
                                           ((1 << (ulong)(bVar13 & 0x1f) & 0x13U) != 0)) {
                                          iVar17 = *(int *)(param_4 + 0x147c) *
                                                   (iVar19 - (uint)*(ushort *)(param_4 + 0x1472));
                                          bVar13 = *(byte *)(lVar33 + (long)(iVar17 + iVar18) * 0x28
                                                            + 6);
                                          if ((bVar13 < 5) &&
                                             (((((1 << (ulong)(bVar13 & 0x1f) & 0x13U) != 0 &&
                                                (bVar13 = *(byte *)(lVar33 + (long)(iVar17 + iVar20)
                                                                             * 0x28 + 6), bVar13 < 5
                                                )) && ((1 << (ulong)(bVar13 & 0x1f) & 0x13U) != 0))
                                              && (uVar22 = FUN_0373a9dc(iVar16,iVar19),
                                                 (uVar22 & 1) != 0)))) {
                                            puVar24 = (uint *)nn::os::GetTlsValue(*(undefined4 *)
                                                                                   PTR_DAT_04bb39d8)
                                            ;
                                            uVar27 = *puVar24 ^ *puVar24 << 0xb;
                                            uVar12 = puVar24[3];
                                            *puVar24 = puVar24[1];
                                            puVar24[1] = puVar24[2];
                                            uVar27 = uVar27 >> 8 ^ uVar12 >> 0x13 ^ uVar27 ^ uVar12;
                                            puVar24[2] = uVar12;
                                            puVar24[3] = uVar27;
                                            fVar39 = (float)(uVar27 >> 9 | 0x3f800000) + -1.0;
                                            if (fVar40 < fVar39) {
                                              local_100 = CONCAT44(1,iVar37);
                                              fVar40 = fVar39;
                                              local_10c = iVar32;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          plVar38 = (long *)PTR_DAT_04bb2720;
                          if (iVar32 < iVar8) {
                            iVar32 = iVar32 + 1;
                          }
                          else {
                            iVar37 = iVar37 + 1;
                            iVar32 = iVar31;
                          }
                        } while ((iVar31 != iVar32) || (iVar21 != iVar37));
                        if ((local_100 & 0x100000000) == 0) goto LAB_0371bc98;
                        iVar21 = local_10c + -1;
                        iVar31 = (int)local_100 + -1;
                        FUN_035a4360(lVar26,iVar21,iVar31,0);
                        FUN_035a4360(lVar26,iVar21,iVar31 + (uint)DAT_057763a8,0);
                        FUN_035a4360(lVar26,iVar21 + (uint)DAT_057763b0,iVar31,0);
                        FUN_035a4360(lVar26,iVar21 + (uint)DAT_057763b8,iVar31 + (uint)DAT_057763c0,
                                     0);
                        local_b4 = (float)local_10c * 5.0;
                        param_2 = (float)(int)local_100 * 5.0;
                        lVar33 = *(long *)PTR_DAT_04bb27c8;
                        local_ac = param_2;
                        if (lVar33 == 0) {
                          local_b0 = -500.0;
                        }
                        else if ((*(long *)(lVar33 + 0xa8) == 0) ||
                                (*(char *)(lVar33 + 0x11c8) != '\0')) {
                          local_b0 = -500.0;
                        }
                        else {
                          local_b0 = (float)FUN_0093a950(lVar33 + 0x28,&local_b4,0);
                        }
                        if ((*(uint *)(&DAT_00001230 + param_4) >> 0xb & 1) == 0) goto LAB_0371bce8;
                      }
                      else {
                        puVar28 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar33 + 0x338));
                        iVar21 = FUN_006bd550(*puVar28,0);
                        if ((iVar21 != 0x758f7eaf) ||
                           (((*plVar38 == 0 || (lVar33 = *(long *)(*plVar38 + 0x330), lVar33 == 0))
                            || (*(int *)(lVar33 + 0x244) == 0)))) goto LAB_0371b870;
LAB_0371bc98:
                        *(uint *)(&DAT_00001230 + param_4) =
                             *(uint *)(&DAT_00001230 + param_4) & 0xfffff7ff;
LAB_0371bce8:
                        uVar22 = FUN_0371c590(param_4,&local_b4,0);
                        if ((uVar22 & 1) == 0) {
                          iVar21 = FUN_0371ccb4(lVar35);
                          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar21);
                          if (((*(ushort *)(lVar35 + 0x114) >> 7 & 1) != 0) || (iVar21 == 3))
                          goto LAB_0371b4a4;
                          local_b4 = (float)FUN_03771b40(iVar21 == 1,plVar36);
                          local_b0 = param_2;
                          local_ac = param_3;
                        }
                      }
                      puVar24 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                      uVar9 = puVar24[3];
                      uVar27 = *puVar24 ^ *puVar24 << 0xb;
                      *puVar24 = puVar24[1];
                      puVar24[1] = puVar24[2];
                      uVar12 = uVar27 ^ uVar9;
                      puVar24[2] = uVar9;
                      puVar24[3] = uVar27 >> 8 ^ uVar9 >> 0x13 ^ uVar12;
                      param_2 = 11930465.0;
                      local_74 = (undefined4)(long)((float)(uVar12 >> 0x1d) * 45.0 * 11930465.0);
                      FUN_01e39778(plVar34,&local_b4,&local_74,0);
                    }
                  }
                }
              }
            }
LAB_0371b4a4:
            plVar29 = plVar29 + 1;
          } while (plVar29 != plVar6);
        }
      }
      *(uint *)(&DAT_00001230 + param_4) = *(uint *)(&DAT_00001230 + param_4) & 0xfffff7ff;
      FUN_0371cfc0();
    }
  }
  return;
}

