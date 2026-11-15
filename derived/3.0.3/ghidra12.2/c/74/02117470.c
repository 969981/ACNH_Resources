
/* WARNING: Removing unreachable block (ram,0x02117724) */
/* WARNING: Removing unreachable block (ram,0x02117698) */
/* WARNING: Removing unreachable block (ram,0x02117674) */
/* WARNING: Removing unreachable block (ram,0x02117680) */
/* WARNING: Removing unreachable block (ram,0x021176a4) */
/* WARNING: Removing unreachable block (ram,0x02117734) */

void FUN_02117470(long param_1)

{
  bool bVar1;
  float *pfVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  long *plVar22;
  float *pfVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  char *pcVar33;
  ulong uVar34;
  long *plVar35;
  uint uVar36;
  char *pcVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long *plVar43;
  uint uVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_5720;
  uint local_571c;
  uint local_56a4;
  ushort local_56a0;
  undefined1 auStack_569e [2];
  ushort uStack_569c;
  ushort uStack_569a;
  ushort local_5698;
  ushort local_5696;
  undefined1 local_5694 [12];
  ulong local_5688;
  undefined1 *local_5680;
  undefined8 local_5678;
  undefined **appuStack_5670 [3];
  undefined1 local_5658 [8];
  undefined1 auStack_5650 [8];
  undefined8 local_5648 [3];
  undefined1 local_5630 [8];
  undefined1 local_5628 [8];
  undefined8 local_5620 [3];
  undefined1 local_5608 [8];
  undefined1 local_5600 [8];
  undefined8 local_55f8 [3];
  undefined1 local_55e0 [8];
  undefined1 auStack_55d8 [8];
  undefined8 local_55d0 [3];
  undefined1 local_55b8 [8];
  undefined1 local_55b0 [8];
  undefined8 local_55a8 [3];
  undefined1 local_5590 [8];
  undefined *local_5588 [2600];
  undefined *local_448;
  undefined8 local_440;
  undefined1 *local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 auStack_400 [72];
  undefined1 auStack_3b8 [528];
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 auStack_184 [68];
  ushort *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  uint local_e0;
  uint local_dc;
  undefined1 local_d8;
  char local_c8;
  undefined6 uStack_c7;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 local_b8 [24];
  
  puVar4 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar26 = *(long *)PTR_DAT_04bb2720;
    if (lVar26 == 0) {
LAB_02117538:
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar21 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar19 = FUN_006bd550(*puVar21,0);
        uVar28 = 0;
        if (iVar19 == 0x758f7eaf) {
          if ((*(long *)puVar4 == 0) || (lVar26 = *(long *)(*(long *)puVar4 + 0x330), lVar26 == 0))
          goto LAB_02117538;
          uVar28 = *(uint *)(lVar26 + 0x248);
        }
      }
    }
  }
  else {
    uVar28 = 7;
  }
  local_5680 = auStack_5650;
  local_5694._0_8_ = 0x1500000019;
  appuStack_5670[2] = &local_448;
  local_5658[0] = 0;
  local_5688 = 0x20d;
  local_5678 = 0;
  appuStack_5670[0] = (undefined **)0x0;
  appuStack_5670[1] = (undefined **)0x0;
  lVar26 = 0x50;
  do {
    *(undefined4 *)(auStack_569e + lVar26 + 1) = 0;
    ppuVar3 = (undefined **)((long)local_5588 + lVar26);
    *(undefined4 *)(auStack_569e + lVar26 + -2) = 0;
    *(undefined8 *)(local_5694 + lVar26 + -4) = 0;
    *(undefined8 *)(local_5694 + lVar26 + 4) = 0;
    *(undefined8 *)(local_5694 + lVar26 + 0xc) = 0;
    *(undefined1 *)((long)appuStack_5670 + lVar26 + -0x10) = 0;
    *(undefined4 *)((long)appuStack_5670 + lVar26 + -8) = 0;
    *(undefined4 *)((long)appuStack_5670 + lVar26 + -5) = 0;
    *(undefined8 *)((long)appuStack_5670 + lVar26 + 0x10) = 0;
    local_5658[lVar26] = 0;
    *(undefined4 *)(auStack_5650 + lVar26) = 0;
    *(undefined4 *)(auStack_5650 + lVar26 + 3) = 0;
    local_5630[lVar26] = 0;
    *(undefined8 *)((long)local_5648 + lVar26) = 0;
    *(undefined4 *)(local_5628 + lVar26 + 3) = 0;
    *(undefined4 *)(local_5628 + lVar26) = 0;
    *(undefined8 *)((long)local_5620 + lVar26 + 0x10) = 0;
    local_5608[lVar26] = 0;
    *(undefined4 *)(local_5600 + lVar26) = 0;
    *(undefined4 *)(local_5600 + lVar26 + 3) = 0;
    *(undefined8 *)((long)local_55f8 + lVar26 + 0x10) = 0;
    local_55e0[lVar26] = 0;
    *(undefined4 *)(auStack_55d8 + lVar26) = 0;
    *(undefined4 *)(auStack_55d8 + lVar26 + 3) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26) = 0;
    local_55b8[lVar26] = 0;
    *(undefined4 *)(local_55b0 + lVar26 + 3) = 0;
    *(undefined4 *)(local_55b0 + lVar26) = 0;
    local_5590[lVar26] = 0;
    *(undefined8 *)((long)local_55a8 + lVar26) = 0;
    *(undefined8 *)((long)appuStack_5670 + lVar26) = 0;
    *(undefined8 *)((long)appuStack_5670 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_5648 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_5648 + lVar26 + 0x10) = 0;
    *(undefined8 *)((long)local_5620 + lVar26) = 0;
    *(undefined8 *)((long)local_5620 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55f8 + lVar26) = 0;
    *(undefined8 *)((long)local_55f8 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55d0 + lVar26 + 0x10) = 0;
    *(undefined8 *)((long)local_55a8 + lVar26 + 8) = 0;
    *(undefined8 *)((long)local_55a8 + lVar26 + 0x10) = 0;
    lVar26 = lVar26 + 0x118;
  } while (ppuVar3 != appuStack_5670[2]);
  local_420 = 0;
  local_438 = auStack_400;
  uStack_569c = 0x20;
  uStack_569a = 0x20;
  local_5698 = 0xe7;
  local_5696 = 0xcb;
  local_448 = PTR_DAT_04bc1998 + 0x10;
  local_440 = 0x110000020d;
  local_56a0 = 0x20;
  local_418 = 0;
  local_430 = 0x19ffffffff;
  auStack_569e = (undefined1  [2])0x20;
  local_428 = 0x15;
  local_410 = 0;
  local_408 = 0;
  memset(auStack_3b8,0,0x20d);
  local_1a0 = 0x110000020d;
  local_190 = 0x19ffffffff;
  local_188 = 0x15;
  puStack_1a8 = PTR_DAT_04bb96d8 + 0x10;
  local_198 = auStack_184;
  FUN_02124e34(&local_56a0);
  FUN_02124e34(&local_56a0);
  uVar14 = local_56a0;
  local_130 = &local_f8;
  local_f8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_128 = PTR_DAT_04bbc1a0 + 0x10;
  local_120 = PTR_DAT_04bb2010 + 0x10;
  uStack_118 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_138 = &local_56a0;
  local_140 = (ushort *)(PTR_DAT_04bc1990 + 0x10);
  local_110 = local_120;
  if (local_5688 != 0) {
    uVar34 = 0;
    iVar19 = local_5694._0_4_ + (uint)local_56a0;
    uVar39 = (uint)(ushort)auStack_569e;
    uVar30 = local_5688;
    uVar20 = (uint)local_56a0;
    do {
      iVar24 = uVar20 - local_56a0;
      if (-1 < iVar24) {
        if (iVar24 < (int)local_5694._0_4_) {
          iVar12 = uVar39 - (ushort)auStack_569e;
          if (-1 < iVar12) {
            if ((iVar12 < (int)local_5694._4_4_) && (local_5680 != (undefined1 *)0x0)) {
              (**(code **)local_140)
                        (&local_140,local_5680 + (long)(iVar24 + local_5694._0_4_ * iVar12) * 0x28);
              uVar30 = local_5688;
            }
          }
        }
      }
      uVar34 = uVar34 + 1;
      bVar18 = uVar20 + 1 == iVar19;
      if (bVar18) {
        uVar39 = uVar39 + 1;
      }
      uVar36 = (uint)uVar14;
      if (!bVar18) {
        uVar36 = uVar20 + 1;
      }
      uVar20 = uVar36;
    } while (uVar34 < uVar30);
  }
  FUN_02146570(&local_56a0,PTR_DAT_04bb3238,PTR_DAT_04bb3238,0);
  uVar39 = (uint)uStack_569c;
  uVar20 = (uint)local_5698;
  local_e8 = (ushort *)CONCAT44(local_e8._4_4_,(uint)local_e8);
  if (uStack_569c < uVar20) {
    uVar36 = (uint)uStack_569a;
    uVar41 = (uint)local_5696;
    local_e8 = (ushort *)CONCAT44(local_e8._4_4_,(uint)local_e8);
    if (uVar36 < uVar41) {
      do {
        uVar38 = uVar36;
        do {
          *(undefined4 *)((undefined8 *)((ulong)local_b8 | 3) + 1) = 0;
          *(undefined8 *)((ulong)local_b8 | 3) = 0;
          local_c8 = '\0';
          local_d8 = 0;
          local_e0 = uVar39;
          local_dc = uVar38;
          local_e8 = &local_56a0;
          FUN_02124950(&local_c8,&local_e8);
          if (local_c8 == '\0') {
            FUN_035a4360(&local_56a0,uVar39,uVar38,0);
          }
          uVar38 = uVar38 + 1;
        } while (uVar41 != (uVar38 & 0xffff));
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar20);
    }
  }
  iVar19 = *(int *)(param_1 + 0x1e8);
  if (iVar19 != 0) {
    plVar35 = *(long **)(param_1 + 0x1f0);
    if (uVar28 < 8) {
      lVar26 = (long)iVar19 << 3;
      do {
        lVar27 = *plVar35 + 8;
        if (*(char *)(lVar27 + (ulong)uVar28 * 0x1c) != '\0') {
          iVar19 = *(int *)(lVar27 + (ulong)uVar28 * 0x1c + 0x14);
          local_140 = (ushort *)CONCAT44(local_140._4_4_,iVar19);
          if (iVar19 == 0) {
            lVar27 = lVar27 + (ulong)uVar28 * 0x1c;
            fVar46 = *(float *)(lVar27 + 4) + -2.5;
            fVar48 = *(float *)(lVar27 + 0xc) + -2.5;
            uVar39 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0) & 0xffff;
            uVar20 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0) & 0xffff;
            FUN_035a4360(&local_56a0,uVar39,uVar20,0);
            FUN_035a4360(&local_56a0,uVar39,uVar20 + DAT_057763a8,0);
            FUN_035a4360(&local_56a0,uVar39 + DAT_057763b0,uVar20,0);
            FUN_035a4360(&local_56a0,uVar39 + DAT_057763b8,uVar20 + DAT_057763c0,0);
          }
        }
        plVar35 = plVar35 + 1;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
    else {
      lVar26 = (long)iVar19 << 3;
      do {
        lVar27 = *plVar35;
        if (*(char *)(lVar27 + 8) != '\0') {
          local_140 = (ushort *)CONCAT44(local_140._4_4_,*(int *)(lVar27 + 0x1c));
          if (*(int *)(lVar27 + 0x1c) == 0) {
            fVar46 = *(float *)(lVar27 + 0xc) + -2.5;
            fVar48 = *(float *)(lVar27 + 0x14) + -2.5;
            uVar39 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0) & 0xffff;
            uVar20 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0) & 0xffff;
            FUN_035a4360(&local_56a0,uVar39,uVar20,0);
            FUN_035a4360(&local_56a0,uVar39,uVar20 + DAT_057763a8,0);
            FUN_035a4360(&local_56a0,uVar39 + DAT_057763b0,uVar20,0);
            FUN_035a4360(&local_56a0,uVar39 + DAT_057763b8,uVar20 + DAT_057763c0,0);
          }
        }
        plVar35 = plVar35 + 1;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
  }
  uVar39 = (uint)uStack_569c;
  uVar20 = (uint)local_5698;
  if (uStack_569c < uVar20) {
    uVar36 = (uint)uStack_569a;
    uVar41 = (uint)local_5696;
    if (uVar36 < uVar41) {
      bVar18 = false;
      do {
        uVar38 = uVar36;
        puVar13 = local_e8;
        do {
          local_e8._4_4_ = (undefined4)((ulong)puVar13 >> 0x20);
          local_e8._0_4_ = (uint)puVar13;
          *(undefined4 *)((undefined8 *)((ulong)&local_c8 | 3) + 1) = 0;
          *(undefined8 *)((ulong)&local_c8 | 3) = 0;
          local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
          local_138 = (ushort *)CONCAT44(uVar38,uVar39);
          local_130._1_3_ = (uint3)CONCAT61(uStack_c7,local_c8);
          local_130._0_4_ = (uint)local_130._1_3_ << 8;
          local_130._4_4_ = (float)((uint6)uStack_c7 >> 0x10);
          local_128._0_4_ = (float)CONCAT71(uStack_c0,uStack_c1);
          local_128._4_4_ = (float)((uint7)uStack_c0 >> 0x18);
          local_140 = &local_56a0;
          FUN_02124950(&local_e8,&local_140);
          if ((char)local_e8 == '\0') {
            FUN_035a4360(&local_56a0,uVar39,uVar38,0);
          }
          else {
            bVar18 = true;
          }
          uVar38 = uVar38 + 1;
          puVar13 = local_e8;
        } while (uVar41 != (uVar38 & 0xffff));
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar20);
      goto LAB_02117bec;
    }
  }
  bVar18 = false;
LAB_02117bec:
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar35 = *(long **)(param_1 + 0x1f0);
    plVar7 = plVar35 + *(int *)(param_1 + 0x1e8);
    puVar4 = PTR_DAT_04bb3750 + 0x10;
    plVar43 = (long *)PTR_DAT_04bb27c0;
    do {
      lVar26 = *plVar35;
      pcVar37 = (char *)(lVar26 + 8);
      pcVar33 = pcVar37 + (ulong)uVar28 * 0x1c;
      if (7 < uVar28) {
        pcVar33 = pcVar37;
      }
      if (*pcVar33 == '\0') {
        lVar27 = *plVar43;
        if (lVar27 != 0) {
          uVar39 = *(uint *)(lVar26 + 0xe8);
          if ((((uVar39 == 0) ||
               (plVar32 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                    ((ulong)(uVar39 >> 0x11) & 0x7ff8)), plVar32 == (long *)0x0)) ||
              ((*(uint *)(plVar32 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar32 + 0x46) != uVar39))
          {
            plVar32 = (long *)0x0;
          }
          if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
            plVar22 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar27 = *plVar43;
            iVar19 = (**(code **)(*plVar22 + 0x60))();
            if (iVar19 < 0x11) {
              uVar39 = 1;
            }
            else if (*(uint *)(lVar27 + 0x5e8) < 5) {
              uVar39 = 0x1aU >> (ulong)(*(uint *)(lVar27 + 0x5e8) & 0x1f) & 1;
            }
            else {
              uVar39 = 0;
            }
          }
          else {
            uVar39 = 0;
          }
          if (plVar32 != (long *)0x0) {
            if ((*PTR_DAT_04bb37d8 & 1) == 0) {
              iVar19 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
              if (iVar19 != 0) {
                *(undefined **)PTR_DAT_04bb37d0 = puVar4;
                __cxa_guard_release(PTR_DAT_04bb37d8);
              }
            }
            uVar20 = (**(code **)(*plVar32 + 0x20))(plVar32,PTR_DAT_04bb37d0);
            if ((uVar39 & uVar20) == 1) {
              if (bVar18) {
                local_f0 = local_f0 & 0xffffffff00000000;
                local_f8 = 0;
                uVar39 = *(uint *)(param_1 + 0x1518);
                if (uVar39 < 8) {
                  fVar46 = *(float *)(pcVar37 + (ulong)uVar39 * 0x1c + 4);
                  local_5720 = *(float *)(pcVar37 + (ulong)uVar39 * 0x1c + 8);
                  fVar48 = *(float *)(pcVar37 + (ulong)uVar39 * 0x1c + 0xc);
                  local_571c = *(uint *)(pcVar37 + (ulong)uVar39 * 0x1c + 0x10);
                }
                else {
                  if (((*(long *)PTR_DAT_04bb5ce0 != 0) &&
                      (lVar26 = *(long *)PTR_DAT_04bb2720, lVar26 != 0)) &&
                     (*(long *)(lVar26 + 0x330) != 0)) {
                    puVar21 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338))
                    ;
                    iVar19 = FUN_006bd550(*puVar21,0);
                    if (((iVar19 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
                       ((lVar26 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar26 != 0 &&
                        (*(int *)(lVar26 + 0x244) != 0)))) {
                      lVar26 = *(long *)PTR_DAT_04bb5ce0;
                      if (lVar26 == 0) {
                        local_571c = 0;
                        local_5720 = 0.0;
                        fVar48 = 40.0;
                        fVar46 = 40.0;
                      }
                      else {
                        fVar46 = *(float *)(lVar26 + 0xd74);
                        local_571c = 0;
                        local_5720 = *(float *)(lVar26 + 0xd78);
                        fVar48 = *(float *)(lVar26 + 0xd7c);
                      }
                      goto LAB_02117ef4;
                    }
                  }
                  pfVar23 = (float *)FUN_0252d9bc(0);
                  local_571c = 0;
                  pfVar2 = (float *)PTR_DAT_04bb2150;
                  if (pfVar23 != (float *)0x0) {
                    pfVar2 = pfVar23;
                  }
                  fVar48 = pfVar2[2];
                  fVar46 = *pfVar2;
                  local_5720 = pfVar2[1];
                }
LAB_02117ef4:
                uVar17 = local_5696;
                uVar16 = local_5698;
                uVar15 = uStack_569a;
                uVar14 = uStack_569c;
                uVar34 = (ulong)local_5698;
                uVar39 = (int)((float)(int)(fVar46 + -2.5) / 5.0) - (uint)(fVar46 + -2.5 < 0.0) &
                         0xffff;
                uVar30 = (ulong)local_5696;
                uVar20 = (int)((float)(int)(fVar48 + -2.5) / 5.0) - (uint)(fVar48 + -2.5 < 0.0) &
                         0xffff;
                FUN_0252dec4(0);
                iVar19 = uVar14 - uVar39;
                iVar24 = uVar15 - uVar20;
                uVar36 = 0;
                if (iVar24 <= iVar19) {
                  iVar19 = iVar24;
                }
                uVar40 = 0;
                bVar18 = false;
                uVar41 = uVar20 + 1;
                lVar26 = 1;
                pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(local_571c >> 0x18) * 0x10);
                uVar38 = uVar39 + 1;
                fVar47 = (float)(local_571c & 0xffffff) * 5.9604645e-08;
                fVar29 = -3.4028235e+38;
                uVar31 = (ulong)uVar39;
                iVar24 = 1;
                do {
                  uVar42 = (uint)uVar14;
                  uVar44 = (uint)uVar15;
                  uVar8 = uVar41;
                  if ((int)uVar41 <= (int)uVar44) {
                    uVar8 = uVar44;
                  }
                  uVar25 = (ulong)uVar8;
                  uVar8 = uVar38;
                  if ((int)uVar38 <= (int)uVar42) {
                    uVar8 = uVar42;
                  }
                  if (bVar18) break;
                  bVar18 = false;
                  uVar5 = iVar24 + uVar20;
                  uVar6 = uVar39 + (int)lVar26;
                  uVar9 = uVar5;
                  if ((int)uVar5 <= (int)uVar44) {
                    uVar9 = uVar44;
                  }
                  if ((int)(uint)uVar16 <= (int)uVar6) {
                    uVar6 = (uint)uVar16;
                  }
                  uVar44 = uVar20 + (int)lVar26;
                  uVar10 = uVar44;
                  if ((int)(uint)uVar17 <= (int)uVar44) {
                    uVar10 = (uint)uVar17;
                  }
                  uVar11 = iVar24 + uVar39;
                  if ((int)(iVar24 + uVar39) <= (int)uVar42) {
                    uVar11 = uVar42;
                  }
                  if ((uVar9 < uVar10) && (uVar11 < uVar6)) {
                    bVar18 = false;
                    pcVar37 = local_5680 +
                              (((long)(int)local_5694._0_4_ * (uVar25 - (ushort)auStack_569e) -
                               (ulong)local_56a0) + (ulong)uVar8) * 0x28 + 6;
                    do {
                      fVar49 = ((float)(int)(uint)uVar25 * 5.0 + 2.5) - fVar48;
                      pcVar33 = pcVar37;
                      uVar45 = (ulong)uVar8;
                      do {
                        if (((((uVar25 == uVar5) || (uVar38 == uVar45)) || (uVar31 == uVar45)) ||
                            (uVar25 == uVar44 - 1)) && (*pcVar33 != '\x03')) {
                          fVar50 = ((float)(int)(uint)uVar45 * 5.0 + 2.5) - fVar46;
                          if ((fVar50 <= 1.1920929e-07 && -1.1920929e-07 <= fVar50) &&
                              (fVar49 <= 1.1920929e-07 && -1.1920929e-07 <= fVar49)) {
                            fVar50 = -3.4028235e+38;
                            if (fVar29 < -3.4028235e+38) goto LAB_021180ec;
                          }
                          else {
                            fVar51 = 0.0;
                            fVar52 = SQRT(fVar50 * fVar50 + 0.0 + fVar49 * fVar49);
                            if (fVar52 <= 0.0) {
                              fVar52 = fVar49;
                            }
                            else {
                              fVar52 = 1.0 / fVar52;
                              fVar50 = fVar50 * fVar52;
                              fVar51 = fVar52 * 0.0;
                              fVar52 = fVar49 * fVar52;
                            }
                            fVar50 = fVar51 * 0.0 + fVar50 * (*pfVar2 + fVar47 * pfVar2[1]) +
                                     fVar52 * (pfVar2[2] + fVar47 * pfVar2[3]);
                            if (fVar29 < fVar50) {
LAB_021180ec:
                              fVar29 = fVar50;
                              uVar36 = (uint)uVar45 & 0xffff;
                              bVar18 = true;
                              uVar40 = (uint)uVar25 & 0xffff;
                            }
                          }
                        }
                        uVar45 = uVar45 + 1;
                        pcVar33 = pcVar33 + 0x28;
                      } while (uVar45 < uVar6);
                      uVar25 = uVar25 + 1;
                      pcVar37 = pcVar37 + (long)(int)local_5694._0_4_ * 0x28;
                    } while (uVar25 < uVar10);
                  }
                  iVar12 = iVar24 + -1;
                  lVar26 = lVar26 + 1;
                  uVar38 = uVar38 - 1;
                  uVar41 = uVar41 - 1;
                  uVar31 = (ulong)((int)uVar31 + 1);
                  bVar1 = iVar19 < iVar24;
                  iVar24 = iVar12;
                } while (((bVar1) || (lVar26 + (ulong)uVar39 < uVar34)) ||
                        (lVar26 + (ulong)uVar20 < uVar30));
                local_138 = (ushort *)CONCAT44(uVar40,uVar36);
                local_130._0_4_ = CONCAT31(local_130._1_3_,1);
                local_dc = 0;
                local_e8._4_4_ = 0;
                local_e0 = 0;
                local_128._0_4_ = local_5720;
                local_140 = &local_56a0;
                local_130._4_4_ = fVar46;
                local_128._4_4_ = fVar48;
                FUN_02124950(&local_e8,&local_140);
                local_f8 = CONCAT44(local_e0,local_e8._4_4_);
                local_f0 = CONCAT44(local_f0._4_4_,local_dc);
                local_56a4 = local_571c;
                FUN_01e39778(plVar32,&local_f8,&local_56a4,0);
                uVar39 = (int)((float)(int)((float)local_f8 + -2.5) / 5.0) -
                         (uint)((float)local_f8 + -2.5 < 0.0) & 0xffff;
                uVar20 = (int)((float)(int)((float)local_f0 + -2.5) / 5.0) -
                         (uint)((float)local_f0 + -2.5 < 0.0) & 0xffff;
                FUN_035a4360(&local_56a0,uVar39,uVar20,0);
                FUN_035a4360(&local_56a0,uVar39,uVar20 + DAT_057763a8,0);
                FUN_035a4360(&local_56a0,uVar39 + DAT_057763b0,uVar20,0);
                FUN_035a4360(&local_56a0,uVar39 + DAT_057763b8,uVar20 + DAT_057763c0,0);
                uVar39 = (uint)uStack_569c;
                bVar18 = false;
                uVar20 = (uint)local_5698;
                local_130 = (undefined8 *)CONCAT44(local_130._4_4_,(int)local_130);
                local_128 = (undefined *)CONCAT44(local_128._4_4_,(float)local_128);
                local_e8 = (ushort *)CONCAT44(local_e8._4_4_,(uint)local_e8);
                if (uStack_569c < uVar20) {
                  uVar36 = (uint)local_5696;
                  uVar41 = (uint)uStack_569a;
                  local_130 = (undefined8 *)CONCAT44(local_130._4_4_,(int)local_130);
                  local_128 = (undefined *)CONCAT44(local_128._4_4_,(float)local_128);
                  local_e8 = (ushort *)CONCAT44(local_e8._4_4_,(uint)local_e8);
                  if (uVar41 < uVar36) {
                    bVar18 = false;
                    do {
                      uVar38 = uVar41;
                      do {
                        *(undefined4 *)((undefined8 *)((ulong)&local_c8 | 3) + 1) = 0;
                        *(undefined8 *)((ulong)&local_c8 | 3) = 0;
                        local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
                        local_138 = (ushort *)CONCAT44(uVar38,uVar39);
                        local_130._1_3_ = (uint3)CONCAT61(uStack_c7,local_c8);
                        local_130._0_4_ = (uint)local_130._1_3_ << 8;
                        local_130._4_4_ = (float)((uint6)uStack_c7 >> 0x10);
                        local_128._0_4_ = (float)CONCAT71(uStack_c0,uStack_c1);
                        local_128._4_4_ = (float)((uint7)uStack_c0 >> 0x18);
                        local_140 = &local_56a0;
                        FUN_02124950(&local_e8,&local_140);
                        if ((char)local_e8 == '\0') {
                          FUN_035a4360(&local_56a0,uVar39,uVar38,0);
                        }
                        else {
                          bVar18 = true;
                        }
                        uVar38 = uVar38 + 1;
                      } while (uVar36 != (uVar38 & 0xffff));
                      uVar39 = uVar39 + 1;
                    } while (uVar39 != uVar20);
                  }
                }
              }
              else {
                *(undefined1 *)(lVar26 + 0x1d8) = 1;
                FUN_006fb3d0(plVar32);
                bVar18 = false;
              }
            }
          }
          plVar43 = (long *)PTR_DAT_04bb27c0;
        }
      }
      plVar35 = plVar35 + 1;
    } while (plVar35 != plVar7);
  }
  return;
}

