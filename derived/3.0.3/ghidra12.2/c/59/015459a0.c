
/* WARNING: Removing unreachable block (ram,0x0154611c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_015459a0(long *param_1,uint param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  long *plVar30;
  short *psVar31;
  long *plVar32;
  undefined **ppuVar33;
  long lVar34;
  uint *puVar35;
  undefined *puVar36;
  byte *pbVar37;
  byte *pbVar38;
  uint uVar39;
  ushort uVar40;
  int iVar41;
  ulong uVar42;
  bool bVar43;
  int iVar44;
  uint uVar45;
  undefined8 *puVar46;
  long *plVar47;
  long lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float local_230;
  float local_22c;
  int *local_200;
  long *local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178;
  int local_174;
  long *local_170;
  int local_168;
  int iStack_164;
  uint local_160;
  undefined1 local_15c;
  byte local_15b;
  undefined1 local_15a;
  undefined *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  undefined *puStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  
  local_b8 = 0;
  lVar34 = *(long *)PTR_DAT_04bb2720;
  if (lVar34 == 0) {
    puVar46 = &DAT_055c04a0;
  }
  else {
    puVar46 = &DAT_055c04a0;
    if (*(long *)(lVar34 + 0x330) != 0) {
      puVar46 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar34 + 0x338));
      iVar20 = FUN_006bd550(*puVar46,0);
      puVar46 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar20 != 0x758f7eaf) {
        puVar46 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar46 + 7);
  local_b0 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb43c0;
  local_b0 = local_b0 & 1;
  puStack_c0 = PTR_DAT_04bb3140 + 0x10;
  local_d8 = PTR_DAT_04bc0510 + 0x10;
  local_c8 = (uint *)0x0;
  local_d0 = (undefined4)*param_1;
  uStack_cc = *(undefined4 *)((long)param_1 + 4);
  lVar34 = *(long *)PTR_DAT_04bb43c0;
  uVar21 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar2 == 0) {
LAB_01545b28:
    iVar20 = *(int *)((long)param_1 + 0x14);
    if (local_c8 != (uint *)0x0) goto LAB_01545b40;
    uVar40 = 0;
    bVar43 = true;
  }
  else {
    lVar34 = *(long *)(lVar34 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((*(uint *)(lVar34 + 0x1d8) <= uVar21) ||
       (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8) == 0)) goto LAB_01545b28;
    lVar34 = *(long *)PTR_DAT_04bc0428;
    uVar21 = FUN_0277d6c4(param_1);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
    if ((*(uint *)(lVar34 + 0x1d8) <= uVar21) ||
       (puVar35 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar21 * 8),
       puVar35 == (uint *)0x0)) goto LAB_01545b28;
    iVar20 = *(int *)((long)param_1 + 0x14);
    local_c8 = puVar35;
LAB_01545b40:
    uVar21 = *local_c8;
    uVar40 = 0;
    if ((uVar21 != 0) && (local_c8 != (uint *)(ulong)uVar21)) {
      puVar35 = (uint *)((long)local_c8 - (long)(ulong)uVar21);
      uVar40 = 0;
      if (*puVar35 != 0) {
        uVar21 = puVar35[1];
        if ((uVar21 != 0) && ((ulong)(ushort)puVar35[2] != 0)) {
          lVar34 = 0xc;
          if (*(char *)((long)puVar35 + 10) != '\0') {
            lVar34 = 0x1c;
          }
          lVar34 = (long)puVar35 + lVar34 + (ulong)(ushort)puVar35[2] * 8;
          if (lVar34 != 0) {
            uVar7 = 0;
            if ((ulong)uVar21 != 0) {
              uVar7 = (uint)((ulong)((long)local_c8 - lVar34) / (ulong)uVar21);
            }
            if (*puVar35 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if (uVar7 < *(uint *)PTR_DAT_04bc0048) {
              uVar40 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2);
              if (0x51 < uVar40) {
                bVar43 = false;
                uVar40 = 0;
                goto LAB_01545be8;
              }
              goto LAB_01545be4;
            }
          }
        }
        uVar40 = 0;
      }
    }
LAB_01545be4:
    bVar43 = false;
  }
LAB_01545be8:
  local_200 = (int *)((long)param_1 + 0x14);
  iVar41 = 0x20000000;
  if (uVar40 != 0x4a) {
    iVar41 = -0x60000000;
  }
  uVar42 = (ulong)((float)(iVar20 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar42 >> 0x18 & 0xff) * 0x10);
  fVar49 = (float)((uint)uVar42 & 0xffffff) * 5.9604645e-08;
  fVar53 = *pfVar1;
  fVar56 = pfVar1[1];
  fVar50 = pfVar1[2];
  fVar51 = pfVar1[3];
  local_190._0_4_ = 0;
  if (((!bVar43) && (uVar21 = *local_c8, uVar21 != 0)) && (local_c8 != (uint *)(ulong)uVar21)) {
    puVar35 = (uint *)((long)local_c8 - (long)(ulong)uVar21);
    local_190._0_4_ = 0;
    if (*puVar35 != 0) {
      uVar21 = puVar35[1];
      if ((uVar21 != 0) && ((ulong)(ushort)puVar35[2] != 0)) {
        lVar34 = 0xc;
        if (*(char *)((long)puVar35 + 10) != '\0') {
          lVar34 = 0x1c;
        }
        lVar34 = (long)puVar35 + lVar34 + (ulong)(ushort)puVar35[2] * 8;
        if (lVar34 != 0) {
          uVar7 = 0;
          if ((ulong)uVar21 != 0) {
            uVar7 = (uint)((ulong)((long)local_c8 - lVar34) / (ulong)uVar21);
          }
          if (*puVar35 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
             (local_190._0_4_ =
                   (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
             (uint)local_190 < 0x52)) goto LAB_01545cf8;
        }
      }
      local_190._0_4_ = 0;
    }
  }
LAB_01545cf8:
  local_f0 = 0;
  uVar7 = (uint)local_190 - 0x37;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  uVar21 = 0;
  if (4 < uVar7) {
    uVar21 = (uint)(iVar41 + iVar20) >> 0x1e;
  }
  local_e0 = 0;
  local_100 = puVar2;
  puStack_f8 = puVar3;
  local_e8 = puVar3;
  FUN_01afb7fc(&local_d8,&local_100);
  puVar14 = PTR_DAT_04bb32e0;
  local_22c = 0.0;
  local_230 = 0.0;
  uVar27 = *local_200 + 0x20000000U >> 0x1e;
  local_190 = (long *)CONCAT44(local_190._4_4_,uVar27);
  switch(uVar27) {
  case 0:
    local_230 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5;
    goto LAB_01545dfc;
  case 1:
    local_22c = (float)(((int)local_e0 - (int)local_f0) + 1) * 0.5 * 5.0;
    break;
  case 2:
    local_230 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * -0.5;
LAB_01545dfc:
    local_230 = local_230 * 5.0;
    local_22c = 0.0;
    break;
  case 3:
    local_22c = (float)(((int)local_e0 - (int)local_f0) + 1) * -0.5 * 5.0;
  }
  fVar53 = (fVar53 + fVar49 * fVar56) * 5.0;
  plVar4 = param_1 + 0x2f;
  fVar49 = (fVar50 + fVar49 * fVar51) * 5.0;
  plVar5 = (long *)(PTR_DAT_04bc0510 + 0x10);
  puVar6 = PTR_DAT_04bb3290 + 0x10;
  bVar43 = true;
  do {
    if ((uVar7 < 5) || (bVar43)) goto LAB_01545fc0;
    uVar21 = *local_200 + 0x60000000U >> 0x1e;
    FUN_01afb7fc(&local_d8,&local_100);
    uVar27 = *local_200 + 0x20000000U >> 0x1e;
    local_190 = (long *)CONCAT44((int)((ulong)local_190 >> 0x20),uVar27);
    switch(uVar27) {
    case 0:
      local_230 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 0.5;
      break;
    case 1:
      local_22c = (float)(((int)local_e0 - (int)local_f0) + 1) * 0.5;
      goto LAB_01545fb0;
    case 2:
      local_230 = (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * -0.5;
      break;
    case 3:
      local_22c = (float)(((int)local_e0 - (int)local_f0) + 1) * -0.5;
LAB_01545fb0:
      local_22c = local_22c * 5.0;
      local_230 = 0.0;
      goto LAB_01545fc0;
    default:
      goto LAB_01545fc0;
    }
    local_230 = local_230 * 5.0;
    local_22c = 0.0;
LAB_01545fc0:
    iVar20 = 1;
    do {
      uVar27 = 0;
      iVar41 = 0;
      do {
        plVar47 = param_1 + (long)iVar41 * 6 + 4;
        if (iVar20 + -1 == 0) {
          plVar30 = (long *)FUN_01a5190c(&puStack_c0,0,plVar47 + 1,0);
          local_190 = (long *)*plVar30;
          uVar42 = FUN_01aef228(&local_190,*local_200 + 0x20000000U >> 0x1e);
          if ((uVar42 & 1) != 0) goto LAB_01546084;
        }
        else {
          if (iVar20 == 0) {
            iVar23 = FUN_01aee3b4(&local_d8);
            local_190 = (long *)CONCAT44(local_190._4_4_,iVar23);
            if (iVar23 != 6) {
              iVar23 = FUN_01aee3b4(&local_d8);
              local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar23);
              if (iVar23 != 7) {
                if (((*(long *)PTR_DAT_04bb27c8 == 0) ||
                    (lVar34 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar34 == 0)) ||
                   (uVar42 = FUN_00971f80(lVar34,plVar47,0), (uVar42 & 1) == 0)) goto LAB_01545ff0;
                local_190 = plVar47 + 1;
                local_188 = plVar47 + 3;
                uVar22 = *(uint *)(plVar47 + 2);
                local_174 = *(int *)((long)plVar47 + 0x14);
                local_180 = PTR_DAT_04bb2010 + 0x10;
                iVar23 = *(int *)((long)plVar47 + 0x24) + 1;
                local_178 = uVar22;
                if (iVar23 != local_174) {
                  do {
                    uVar42 = FUN_0097abd0(&local_180,1);
                    if ((uVar42 & 1) != 0) goto LAB_01545ff0;
                    if ((int)local_178 < (int)local_188[1]) {
                      local_178 = local_178 + 1;
                    }
                    else {
                      local_174 = local_174 + 1;
                      local_178 = *(uint *)(local_190 + 1);
                    }
                  } while (uVar22 != local_178 || iVar23 != local_174);
                }
              }
            }
            bVar16 = true;
          }
          else {
LAB_01546084:
            bVar16 = false;
          }
          if ((((param_2 & 1) == 0) || (uVar27 == 0)) &&
             ((char)param_1[(long)iVar41 * 6 + 9] != '\0')) {
            bVar18 = false;
            bVar17 = false;
            bVar19 = true;
            do {
              puVar36 = PTR_DAT_04bb43c0;
              if (iVar20 == 1 && 3 < uVar27) {
                psVar31 = (short *)FUN_01a5190c(&puStack_c0,0,plVar47 + 1,0);
                local_108 = *(undefined4 *)psVar31;
                local_104 = *(undefined4 *)(psVar31 + 2);
                if (*psVar31 != -2) {
                  uVar42 = FUN_0277e294(&local_108);
                  puVar36 = PTR_DAT_04bb43c0;
                  if ((uVar42 & 1) != 0) {
                    local_180 = (undefined *)0x0;
                    local_188 = (long *)CONCAT44(local_104,local_108);
                    lVar34 = *(long *)PTR_DAT_04bb43c0;
                    local_190 = plVar5;
                    uVar22 = FUN_0277d6c4(&local_188);
                    if (*(long *)puVar36 != 0) {
                      lVar34 = *(long *)(lVar34 + 0x57e58);
                      uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
                      if ((uVar22 < *(uint *)(lVar34 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                        lVar34 = *(long *)PTR_DAT_04bc0428;
                        uVar22 = FUN_0277d6c4(&local_108);
                        uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
                        if (uVar22 < *(uint *)(lVar34 + 0x1d8)) {
                          puVar36 = *(undefined **)
                                     (*(long *)(lVar34 + 0x1e0) + (long)(int)uVar22 * 8);
                          if (puVar36 != (undefined *)0x0) {
                            local_180 = puVar36;
                          }
                        }
                      }
                    }
                    iVar23 = FUN_01ae7550(&local_190);
                    local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar23);
                    if (iVar23 - 1U < 6) {
                      puVar35 = (uint *)FUN_014fbd50(&puStack_c0,0,plVar47 + 1);
                      uVar22 = *puVar35;
                      if ((uVar22 != 0) && (lVar34 = *(long *)PTR_DAT_04bb27c0, lVar34 != 0)) {
                        plVar30 = *(long **)(*(long *)(*(long *)(lVar34 + 0x1c0) + 8) +
                                            ((ulong)(uVar22 >> 0x11) & 0x7ff8));
                        if ((plVar30 == (long *)0x0) ||
                           (((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0 ||
                            (*(uint *)(plVar30 + 0x46) != uVar22)))) {
                          plVar30 = (long *)0x0;
                        }
                        if ((*(int *)(lVar34 + 0x288) == 1) || (*(int *)(lVar34 + 0x288) == -1)) {
                          plVar32 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                                 (*(long *)PTR_DAT_04bb3350 + 0x68))
                          ;
                          lVar34 = *(long *)PTR_DAT_04bb27c0;
                          iVar23 = (**(code **)(*plVar32 + 0x60))();
                          if (iVar23 < 0x11) {
                            uVar22 = 1;
                          }
                          else {
                            if (4 < *(uint *)(lVar34 + 0x5e8)) goto LAB_015465a0;
                            uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar34 + 0x5e8) & 0x1f) & 1;
                          }
                        }
                        else {
LAB_015465a0:
                          uVar22 = 0;
                        }
                        if (plVar30 != (long *)0x0) {
                          lVar34 = plVar30[0x2a];
                          uVar12 = *(uint *)(plVar30 + 0x49);
                          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                             (iVar23 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar23 != 0)) {
                            *(undefined **)PTR_DAT_04bb5920 = puVar6;
                            __cxa_guard_release(PTR_DAT_04bb5928);
                          }
                          uVar26 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb5920);
                          if ((((int)lVar34 == 1) && ((uVar26 & uVar22) != 0)) &&
                             ((uVar12 >> 4 & 1) != 0)) {
                            local_120 = 0;
                            local_110 = 0;
                            local_130 = puVar2;
                            puStack_128 = puVar3;
                            local_118 = puVar3;
                            FUN_01470a84(plVar30,&local_130);
                            iVar23 = local_110._4_4_ + 1;
                            if (iVar23 != local_120._4_4_) {
                              iVar10 = (int)local_120;
                              iVar29 = local_120._4_4_;
                              iVar25 = (int)local_120;
                              do {
                                local_148 = 0;
                                local_158 = PTR_DAT_04bbc1a0 + 0x10;
                                puStack_150 = PTR_DAT_04bb2010 + 0x10;
                                local_138 = 0;
                                local_140 = puStack_150;
                                FUN_01afb7fc(&local_d8,&local_158,uVar21);
                                uVar22 = (int)local_148 + iVar25;
                                uVar12 = local_148._4_4_ + iVar29;
                                local_138._0_4_ = (int)local_138 + iVar25;
                                local_138._4_4_ = local_138._4_4_ + iVar29;
                                local_148 = CONCAT44(uVar12,uVar22);
                                if (local_138._4_4_ + 1U != uVar12) {
                                  uVar26 = uVar12;
                                  uVar45 = uVar22;
                                  do {
                                    if (((uVar26 < 0x100) && (uVar45 < 0x120)) &&
                                       ((*(uint *)(PTR_DAT_04bbcc10 +
                                                  (ulong)(uVar45 + uVar26 * 0x120 >> 5) * 4 + 8) >>
                                         (ulong)(uVar45 & 0x1f) & 1) != 0)) goto LAB_01546eb4;
                                    if ((int)uVar45 < (int)local_138) {
                                      uVar45 = uVar45 + 1;
                                    }
                                    else {
                                      uVar26 = uVar26 + 1;
                                      uVar45 = uVar22;
                                    }
                                  } while ((uVar22 != uVar45) || (local_138._4_4_ + 1U != uVar26));
                                }
                                if (((int)uVar22 <= (int)plVar47[2]) &&
                                   ((((int)plVar47[4] <= (int)local_138 &&
                                     ((int)uVar12 <= *(int *)((long)plVar47 + 0x14))) &&
                                    (*(int *)((long)plVar47 + 0x24) <= local_138._4_4_)))) {
                                  local_15a = 0;
                                  local_180 = (undefined *)CONCAT44(uVar12,uVar22);
                                  local_15c = 1;
                                  local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                  local_190 = (long *)*param_1;
                                  local_174 = 1;
                                  local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                                              (uint)(*(float *)(param_1 + 1) < 0.0);
                                  iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                                               (uint)(*(float *)(param_1 + 2) < 0.0);
                                  local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                                  lVar34 = *(long *)PTR_DAT_04bb39b0;
                                  pbVar38 = puVar14;
                                  if (lVar34 == 0) {
                                    if (7 < (byte)*puVar14) goto LAB_01546e10;
LAB_01546e88:
                                    local_15b = *pbVar38;
                                    if (7 < local_15b) {
                                      local_15b = 0xff;
                                    }
                                  }
                                  else {
                                    if (*(int *)(lVar34 + 0x15c) != 0) {
                                      pbVar38 = (byte *)(lVar34 + 0x158);
                                    }
                                    if ((*pbVar38 < 8) ||
                                       (((*(int *)(lVar34 + 0x15c) != 0 &&
                                         (*(long *)PTR_DAT_04bb4718 != 0)) &&
                                        (pbVar38 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5),
                                        *pbVar38 < 8)))) goto LAB_01546e88;
LAB_01546e10:
                                    pbVar38 = PTR_DAT_04bb5038;
                                    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0)
                                    goto LAB_01546e88;
                                    lVar34 = **(long **)PTR_DAT_04bb27d0;
                                    bVar8 = *(byte *)(lVar34 + 0x473);
                                    pbVar37 = PTR_DAT_04bb5038;
                                    if ((long)(char)bVar8 != 0xffffffffffffffff) {
                                      puVar35 = (uint *)(lVar34 + 0x48) +
                                                ((long)(char)bVar8 & 0xffffffffU) * 0x20;
                                      if (7 < bVar8) {
                                        puVar35 = (uint *)(lVar34 + 0x48);
                                      }
                                      if ((*puVar35 & 8) != 0) {
                                        pbVar37 = (byte *)(lVar34 + 0x471);
                                      }
                                    }
                                    local_15b = *pbVar37;
                                    if (7 < local_15b) goto LAB_01546e88;
                                  }
                                  if (7 < local_15b) {
                                    local_15b = 0xff;
                                  }
                                  local_178 = uVar21;
                                  local_170 = local_188;
                                  iVar28 = FUN_0148e51c(plVar4,&local_190);
                                  if (iVar28 == 9) goto LAB_015475e4;
                                }
LAB_01546eb4:
                                if (iVar25 < (int)local_110) {
                                  iVar25 = iVar25 + 1;
                                }
                                else {
                                  iVar29 = iVar29 + 1;
                                  iVar25 = (int)local_120;
                                }
                              } while ((iVar10 != iVar25) || (iVar23 != iVar29));
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto joined_r0x01546b58;
              }
              iVar10 = local_f0._4_4_;
              iVar23 = ((int)local_e0 - (int)local_f0) + 1;
              iVar29 = local_e0._4_4_ + 1;
              iVar25 = iVar29 - local_f0._4_4_;
              fVar50 = ((local_22c - fVar53) +
                       fVar53 * (float)bVar17 +
                       ((float)(int)plVar47[2] * 5.0 + (float)(int)plVar47[4] * 5.0 + 5.0) * 0.5) -
                       ((float)iVar23 * 0.5 * 5.0 + -2.5);
              fVar51 = ((local_230 - fVar49) +
                       fVar49 * (float)bVar17 +
                       ((float)*(int *)((long)plVar47 + 0x14) * 5.0 +
                       (float)*(int *)((long)plVar47 + 0x24) * 5.0 + 5.0) * 0.5) -
                       ((float)iVar25 * 0.5 * 5.0 + -2.5);
              uVar26 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
              iVar23 = iVar23 + uVar26 + -1;
              uVar45 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
              uVar22 = uVar45 + iVar25;
              uVar12 = uVar22 - 1;
              lVar48 = *(long *)PTR_DAT_04bb43c0;
              uVar24 = FUN_0277d6c4(param_1);
              lVar34 = *(long *)puVar36;
              if (lVar34 == 0) goto LAB_015465c4;
              lVar48 = *(long *)(lVar48 + 0x57e58);
              uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar48 + 0x1f8);
              if ((*(uint *)(lVar48 + 0x1d8) <= uVar24) ||
                 (*(long *)(*(long *)(lVar48 + 0x1e0) + (long)(int)uVar24 * 8) == 0))
              goto LAB_015465c4;
              local_180 = (undefined *)0x0;
              local_190 = (long *)(PTR_DAT_04bc0510 + 0x10);
              local_188 = (long *)*param_1;
              uVar24 = FUN_0277d6c4(&local_188);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar34 = *(long *)(lVar34 + 0x57e58);
                uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
                if ((uVar24 < *(uint *)(lVar34 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
                  lVar34 = *(long *)PTR_DAT_04bc0428;
                  uVar24 = FUN_0277d6c4(param_1);
                  uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
                  if (uVar24 < *(uint *)(lVar34 + 0x1d8)) {
                    puVar36 = *(undefined **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar24 * 8);
                    if (puVar36 != (undefined *)0x0) {
                      local_180 = puVar36;
                    }
                  }
                }
              }
              local_130 = (undefined *)CONCAT44(local_130._4_4_,0x1b);
              iVar25 = FUN_01aee3b4(&local_190);
              local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar25);
              if (iVar25 != (int)local_130) goto LAB_015465c4;
              uVar24 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
              local_190 = (long *)CONCAT44(local_190._4_4_,uVar24);
              if (3 < uVar24) goto LAB_015465c4;
              iVar25 = (int)((float)(int)(*(float *)(param_1 + 1) + -2.5) / 5.0) -
                       (uint)(*(float *)(param_1 + 1) + -2.5 < 0.0);
              switch(uVar24) {
              case 0:
                uVar24 = uVar12;
                goto joined_r0x015465c0;
              case 1:
                if (iVar25 + 1U != uVar26) goto LAB_015465c4;
                break;
              case 2:
                uVar24 = uVar45;
joined_r0x015465c0:
                if ((int)((float)(int)(*(float *)(param_1 + 2) + -2.5) / 5.0) -
                    (uint)(*(float *)(param_1 + 2) + -2.5 < 0.0) != uVar24) {
LAB_015465c4:
                  if (iVar29 != iVar10) {
                    uVar24 = uVar45;
                    uVar39 = uVar26;
                    do {
                      if (((uVar24 < 0x100) && (uVar39 < 0x120)) &&
                         ((*(uint *)(PTR_DAT_04bbcc10 +
                                    (ulong)(uVar39 + uVar24 * 0x120 >> 5) * 4 + 8) >>
                           (ulong)(uVar39 & 0x1f) & 1) != 0)) goto joined_r0x01546b58;
                      if ((int)uVar39 < iVar23) {
                        uVar39 = uVar39 + 1;
                      }
                      else {
                        uVar24 = uVar24 + 1;
                        uVar39 = uVar26;
                      }
                    } while ((uVar26 != uVar39) || (uVar22 != uVar24));
                  }
                  local_15a = 0;
                  local_180 = (undefined *)CONCAT44(uVar45,uVar26);
                  local_15c = 1;
                  local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                  local_190 = (long *)*param_1;
                  local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                              (uint)(*(float *)(param_1 + 1) < 0.0);
                  iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                               (uint)(*(float *)(param_1 + 2) < 0.0);
                  local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                  lVar34 = *(long *)PTR_DAT_04bb39b0;
                  pbVar38 = puVar14;
                  if (lVar34 == 0) {
                    if (7 < (byte)*puVar14) goto LAB_01546748;
LAB_015467d0:
                    local_15b = *pbVar38;
                    if (7 < local_15b) {
                      local_15b = 0xff;
                    }
                  }
                  else {
                    if (*(int *)(lVar34 + 0x15c) != 0) {
                      pbVar38 = (byte *)(lVar34 + 0x158);
                    }
                    if ((*pbVar38 < 8) ||
                       (((*(int *)(lVar34 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                        (pbVar38 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar38 < 8))))
                    goto LAB_015467d0;
LAB_01546748:
                    pbVar38 = PTR_DAT_04bb5038;
                    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_015467d0;
                    lVar34 = **(long **)PTR_DAT_04bb27d0;
                    bVar8 = *(byte *)(lVar34 + 0x473);
                    pbVar37 = PTR_DAT_04bb5038;
                    if ((long)(char)bVar8 != 0xffffffffffffffff) {
                      puVar35 = (uint *)(lVar34 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
                      if (7 < bVar8) {
                        puVar35 = (uint *)(lVar34 + 0x48);
                      }
                      if ((*puVar35 & 8) != 0) {
                        pbVar37 = (byte *)(lVar34 + 0x471);
                      }
                    }
                    local_15b = *pbVar37;
                    if (7 < local_15b) goto LAB_015467d0;
                  }
                  if (7 < local_15b) {
                    local_15b = 0xff;
                  }
                  local_178 = uVar21;
                  local_174 = iVar20;
                  local_170 = local_188;
                  iVar29 = FUN_0148e51c(plVar4,&local_190);
                  if (iVar29 == 9) {
                    if ((bVar16) &&
                       ((iVar29 = FUN_01aee3b4(&local_d8), iVar29 == 6 ||
                        (iVar29 = FUN_01aee3b4(&local_d8), iVar29 == 7)))) {
                      iVar25 = *(int *)((long)plVar47 + 0x14);
                      iVar29 = *(int *)((long)plVar47 + 0x24) + 1;
                      if (iVar29 != iVar25) {
                        iVar28 = (int)((float)(int)(*(float *)(param_1 + 1) + -2.5) / 5.0) -
                                 (uint)(*(float *)(param_1 + 1) + -2.5 < 0.0);
                        iVar11 = (int)((float)(int)(*(float *)(param_1 + 2) + -2.5) / 5.0) -
                                 (uint)(*(float *)(param_1 + 2) + -2.5 < 0.0);
                        iVar10 = (int)plVar47[2];
                        fVar50 = 0.0;
                        fVar51 = 0.0;
                        iVar44 = iVar10;
                        do {
                          fVar56 = ((float)iVar44 * 5.0 + 2.5) -
                                   ((float)iVar28 * 5.0 + (float)(iVar28 + 1) * 5.0 + 5.0) * 0.5;
                          fVar52 = ((float)iVar25 * 5.0 + 2.5) -
                                   ((float)iVar11 * 5.0 + (float)(iVar11 + 1) * 5.0 + 5.0) * 0.5;
                          fVar52 = SQRT(fVar52 * fVar52 + fVar56 * fVar56);
                          fVar56 = fVar51;
                          if ((((iVar44 < (int)uVar26) || (iVar23 < iVar44)) ||
                              (iVar25 < (int)uVar45)) || ((int)uVar12 < iVar25)) {
                            bVar15 = true;
                            if ((fVar50 <= fVar52) && (bVar15 = false, !NAN(fVar50))) {
                              bVar15 = fVar50 == 0.0;
                            }
                            if (!bVar15) {
                              fVar52 = fVar50;
                            }
                          }
                          else {
                            bVar15 = true;
                            if ((fVar51 <= fVar52) && (bVar15 = false, !NAN(fVar51))) {
                              bVar15 = fVar51 == 0.0;
                            }
                            fVar56 = fVar52;
                            fVar52 = fVar50;
                            if (!bVar15) {
                              fVar56 = fVar51;
                            }
                          }
                          fVar50 = fVar52;
                          fVar51 = fVar56;
                          if (iVar44 < (int)plVar47[4]) {
                            iVar44 = iVar44 + 1;
                          }
                          else {
                            iVar25 = iVar25 + 1;
                            iVar44 = iVar10;
                          }
                        } while ((iVar10 != iVar44) || (iVar29 != iVar25));
                        if (fVar50 < fVar51 && !bVar18) {
                          bVar18 = false;
                          break;
                        }
                      }
                    }
                    if (bVar17 || iVar20 != 0) {
LAB_015475e4:
                      *(undefined4 *)(param_1 + 0x2e) = 9;
                      return;
                    }
                    local_130 = PTR_DAT_04bbc1a0 + 0x10;
                    iVar25 = (int)plVar47[2];
                    iVar28 = *(int *)((long)plVar47 + 0x14);
                    iVar10 = (int)plVar47[4];
                    iVar11 = *(int *)((long)plVar47 + 0x24);
                    puStack_128 = PTR_DAT_04bb2010 + 0x10;
                    fVar50 = *(float *)(param_1 + 1) + -2.5;
                    fVar51 = *(float *)(param_1 + 2) + -2.5;
                    iVar44 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
                    iVar23 = iVar44 + 1;
                    iVar9 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
                    iVar29 = iVar9 + 1;
                    local_120 = CONCAT44(iVar9,iVar44);
                    local_110 = CONCAT44(iVar29,iVar23);
                    if (((((iVar23 < iVar25 || iVar10 < iVar44) || iVar29 < iVar28) ||
                         iVar11 - iVar9 < 0) ==
                         (((iVar23 >= iVar25 && iVar10 >= iVar44) && iVar29 >= iVar28) &&
                         SBORROW4(iVar11,iVar9))) ||
                       (((iVar44 <= iVar25 && iVar10 <= iVar23) && iVar9 <= iVar28) &&
                        iVar11 == iVar29 ||
                        (((iVar44 <= iVar25 && iVar10 <= iVar23) && iVar9 <= iVar28) &&
                        iVar11 - iVar29 < 0) !=
                        (((iVar44 <= iVar25 && iVar10 <= iVar23) && iVar9 <= iVar28) &&
                        SBORROW4(iVar11,iVar29)))) {
                      uVar42 = (ulong)((float)(*local_200 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0
                                      );
                      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar42 >> 0x18 & 0xff) * 0x10);
                      fVar51 = (float)((uint)uVar42 & 0xffffff) * 5.9604645e-08;
                      fVar50 = (*(float *)(param_1 + 1) - (*pfVar1 + fVar51 * pfVar1[1]) * 5.0) +
                               -2.5;
                      fVar51 = (*(float *)(param_1 + 2) - (pfVar1[2] + fVar51 * pfVar1[3]) * 5.0) +
                               -2.5;
                      iVar23 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
                      iVar29 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
                      local_148 = CONCAT44(iVar29,iVar23);
                      local_138 = CONCAT44(iVar29 + 1,iVar23 + 1);
                      if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                         (lVar34 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar34 == 0))
                      goto LAB_015475e4;
                      ppuVar33 = &local_158;
                      local_158 = local_130;
                      puStack_150 = puStack_128;
                      local_140 = puStack_128;
                    }
                    else {
                      if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                         (lVar34 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar34 == 0))
                      goto LAB_015475e4;
                      ppuVar33 = &local_130;
                    }
                    local_118 = puStack_128;
                    uVar42 = FUN_009721a0(lVar34,ppuVar33,0);
                    if ((uVar42 & 1) == 0) goto LAB_015475e4;
                    bVar18 = true;
                  }
                }
                break;
              case 3:
                if (iVar25 != iVar23) goto LAB_015465c4;
              }
joined_r0x01546b58:
              do {
                if (!bVar19) goto LAB_01545ff0;
                bVar19 = false;
                bVar17 = true;
              } while ((char)param_1[(long)iVar41 * 6 + 9] == '\0');
            } while( true );
          }
        }
LAB_01545ff0:
        uVar27 = uVar27 + 1;
        iVar41 = iVar41 + 1;
      } while (uVar27 != 7);
      bVar16 = iVar20 != 0;
      iVar20 = iVar20 + -1;
    } while (bVar16);
    if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar34 = *(long *)PTR_DAT_04bb2720, lVar34 != 0)) &&
       (*(long *)(lVar34 + 0x330) != 0)) {
      puVar46 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar34 + 0x338));
      iVar20 = FUN_006bd550(*puVar46,0);
      puVar36 = PTR_DAT_04bb43c0;
      if (((iVar20 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
         ((lVar34 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar34 != 0 &&
          (*(int *)(lVar34 + 0x244) != 0 && bVar43)))) {
        lVar34 = *(long *)PTR_DAT_04bb43c0;
        uVar27 = FUN_0277d6c4(param_1);
        if (*(long *)puVar36 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if ((uVar27 < *(uint *)(lVar34 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
            FUN_01ad5d04(&local_190,param_1);
            local_130 = (undefined *)CONCAT44(local_130._4_4_,0x1b);
            iVar20 = FUN_01aee3b4(&local_190);
            local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar20);
            if (iVar20 == (int)local_130) {
              return;
            }
          }
        }
        iVar20 = 1;
        do {
          iVar41 = 0;
          iVar23 = 0;
          do {
            if ((iVar41 == 0) && ((char)param_1[(long)iVar23 * 6 + 9] != '\0')) {
              local_178 = 0;
              lVar34 = (long)iVar23;
              iVar44 = local_f0._4_4_;
              iVar29 = local_e0._4_4_ + 1;
              iVar25 = ((int)local_e0 - (int)local_f0) + 1;
              iVar10 = iVar29 - local_f0._4_4_;
              fVar51 = ((local_22c - fVar53) +
                       (((float)(int)param_1[lVar34 * 6 + 6] * 5.0 +
                        (float)(int)param_1[lVar34 * 6 + 8] * 5.0 + 5.0) * 0.5 - fVar53)) -
                       ((float)iVar25 * 0.5 * 5.0 + -2.5);
              fVar50 = ((local_230 - fVar49) +
                       (((float)*(int *)((long)param_1 + lVar34 * 0x30 + 0x34) * 5.0 +
                        (float)*(int *)((long)param_1 + lVar34 * 0x30 + 0x44) * 5.0 + 5.0) * 0.5 -
                       fVar49)) - ((float)iVar10 * 0.5 * 5.0 + -2.5);
              iVar28 = (int)((float)(int)(*(float *)(param_1 + 1) + -2.5) / 5.0) -
                       (uint)(*(float *)(param_1 + 1) + -2.5 < 0.0);
              iVar11 = (int)((float)(int)(*(float *)(param_1 + 2) + -2.5) / 5.0) -
                       (uint)(*(float *)(param_1 + 2) + -2.5 < 0.0);
              local_180 = (undefined *)0x773f000000;
              local_190 = (long *)(ulong)(uint)(((float)iVar28 * 5.0 +
                                                (float)(iVar28 + 1) * 5.0 + 5.0) * 0.5 - fVar53);
              local_188 = (long *)CONCAT44(0xbf800000,
                                           ((float)iVar11 * 5.0 + (float)(iVar11 + 1) * 5.0 + 5.0) *
                                           0.5 - fVar49);
              iVar28 = FUN_016ed290(&local_190,0,0,0);
              if (iVar28 == 0) {
                uVar22 = (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0);
                iVar25 = iVar25 + uVar22 + -1;
                uVar12 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
                uVar27 = uVar12 + iVar10;
                if (iVar29 != iVar44) {
                  uVar26 = uVar12;
                  uVar45 = uVar22;
                  do {
                    if (((uVar26 < 0x100) && (uVar45 < 0x120)) &&
                       ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar45 + uVar26 * 0x120 >> 5) * 4 + 8)
                         >> (ulong)(uVar45 & 0x1f) & 1) != 0)) goto LAB_01547120;
                    if ((int)uVar45 < iVar25) {
                      uVar45 = uVar45 + 1;
                    }
                    else {
                      uVar26 = uVar26 + 1;
                      uVar45 = uVar22;
                    }
                  } while ((uVar22 != uVar45) || (uVar27 != uVar26));
                }
                local_15a = 0;
                local_180 = (undefined *)CONCAT44(uVar12,uVar22);
                local_15c = 1;
                local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                local_190 = (long *)*param_1;
                local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                            (uint)(*(float *)(param_1 + 1) < 0.0);
                iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                             (uint)(*(float *)(param_1 + 2) < 0.0);
                local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                lVar34 = *(long *)PTR_DAT_04bb39b0;
                pbVar38 = puVar14;
                if (lVar34 == 0) {
                  if (7 < (byte)*puVar14) goto LAB_0154748c;
LAB_015474f0:
                  local_15b = *pbVar38;
                  if (7 < local_15b) {
                    local_15b = 0xff;
                  }
                }
                else {
                  if (*(int *)(lVar34 + 0x15c) != 0) {
                    pbVar38 = (byte *)(lVar34 + 0x158);
                  }
                  if ((*pbVar38 < 8) ||
                     (((*(int *)(lVar34 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                      (pbVar38 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar38 < 8))))
                  goto LAB_015474f0;
LAB_0154748c:
                  pbVar38 = PTR_DAT_04bb5038;
                  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_015474f0;
                  lVar34 = **(long **)PTR_DAT_04bb27d0;
                  bVar8 = *(byte *)(lVar34 + 0x473);
                  pbVar37 = PTR_DAT_04bb5038;
                  if ((long)(char)bVar8 != 0xffffffffffffffff) {
                    puVar35 = (uint *)(lVar34 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
                    if (7 < bVar8) {
                      puVar35 = (uint *)(lVar34 + 0x48);
                    }
                    if ((*puVar35 & 8) != 0) {
                      pbVar37 = (byte *)(lVar34 + 0x471);
                    }
                  }
                  local_15b = *pbVar37;
                  if (7 < local_15b) goto LAB_015474f0;
                }
                if (7 < local_15b) {
                  local_15b = 0xff;
                }
                local_178 = uVar21;
                local_174 = iVar20;
                local_170 = local_188;
                iVar29 = FUN_0148e51c(plVar4,&local_190);
                if (iVar29 == 9) {
                  iVar29 = FUN_01aee3b4(&local_d8);
                  if (iVar29 != 0x1b) {
LAB_0154761c:
                    *(undefined4 *)(param_1 + 0x2e) = 9;
                    return;
                  }
                  fVar51 = (float)(int)uVar22 * 5.0;
                  fVar56 = (float)(int)uVar12 * 5.0;
                  fVar52 = (float)iVar25 * 5.0 + 5.0;
                  fVar54 = (float)(int)(uVar27 - 1) * 5.0 + 5.0;
                  fVar50 = fVar52;
                  if (fVar52 <= fVar51) {
                    fVar50 = fVar51;
                    fVar51 = fVar52;
                  }
                  fVar52 = fVar54;
                  if (fVar54 <= fVar56) {
                    fVar52 = fVar56;
                    fVar56 = fVar54;
                  }
                  fVar54 = (fVar50 - fVar51) * 0.55;
                  fVar50 = (fVar50 + fVar51) * 0.5;
                  fVar51 = fVar50 + fVar54;
                  fVar55 = (fVar52 - fVar56) * 0.55;
                  fVar56 = (fVar52 + fVar56) * 0.5;
                  fVar57 = *(float *)(param_1 + 2);
                  fVar52 = fVar56 - fVar55;
                  fVar56 = fVar56 + fVar55;
                  fVar55 = *(float *)(param_1 + 1);
                  bVar16 = false;
                  bVar18 = true;
                  if (fVar50 - fVar54 <= fVar55) {
                    bVar16 = false;
                    bVar18 = true;
                    if (!NAN(fVar55) && !NAN(fVar51)) {
                      bVar16 = fVar55 == fVar51;
                      bVar18 = fVar51 <= fVar55;
                    }
                  }
                  bVar17 = false;
                  bVar19 = true;
                  if (!bVar18 || bVar16) {
                    bVar17 = false;
                    bVar19 = true;
                    if (!NAN(fVar52) && !NAN(fVar57)) {
                      bVar17 = fVar52 == fVar57;
                      bVar19 = fVar57 <= fVar52;
                    }
                  }
                  bVar16 = false;
                  bVar18 = true;
                  if (!bVar19 || bVar17) {
                    bVar16 = false;
                    bVar18 = true;
                    if (!NAN(fVar57) && !NAN(fVar56)) {
                      bVar16 = fVar57 == fVar56;
                      bVar18 = fVar56 <= fVar57;
                    }
                  }
                  if (bVar18 && !bVar16) goto LAB_0154761c;
                }
              }
            }
LAB_01547120:
            iVar41 = iVar41 + 1;
            iVar23 = iVar23 + 1;
          } while (iVar41 != 7);
          bVar16 = iVar20 != 0;
          iVar20 = iVar20 + -1;
        } while (bVar16);
      }
    }
    uVar13 = !bVar43;
    bVar43 = false;
    if ((bool)uVar13) {
      return;
    }
  } while( true );
}

