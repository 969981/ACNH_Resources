
uint FUN_01503f54(undefined8 param_1,byte *param_2)

{
  float *pfVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  uint *local_80;
  uint local_78;
  uint local_74;
  
  if (*param_2 < 8) {
    uVar8 = FUN_02582d8c(param_2,1);
    puVar21 = PTR_DAT_04bb4fb8;
    if ((((uVar8 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar8 = FUN_02582d8c(param_2,1), uVar8 < 8 &&
        (*(char *)(*(long *)puVar21 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar18 = *(long *)puVar21 + (ulong)uVar8 * 0x13f0;
      local_78 = *(uint *)(lVar18 + 0x4f8);
      uVar13 = FUN_015039ac(&local_78);
      puVar21 = PTR_DAT_04bbfe68;
      if ((uVar13 & 1) != 0) {
        local_88 = 0;
        local_90 = PTR_DAT_04bbfe68 + 0x10;
        lVar16 = *(long *)PTR_DAT_04bb2720;
        if (lVar16 == 0) {
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = &DAT_055c04a0;
          if (*(long *)(lVar16 + 0x330) != 0) {
            puVar19 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
            iVar9 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar19 = &DAT_055c04a0;
            }
          }
        }
        local_84 = *(undefined4 *)(puVar19 + 7);
        uVar7 = FUN_017baf44();
        puVar5 = PTR_DAT_04bb2d00;
        local_80 = (uint *)(CONCAT71(local_80._1_7_,uVar7) & 0xffffffffffffff01);
        local_90 = PTR_DAT_04bb5438 + 0x10;
        local_a0 = PTR_DAT_04bb2010 + 0x10;
        pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar18 + 0x51c) >> 0x15) & 0x7f0));
        fVar22 = (float)(*(uint *)(lVar18 + 0x51c) >> 1 & 0xffffff) * 5.9604645e-08;
        fVar24 = *pfVar1 + fVar22 * pfVar1[1];
        fVar23 = pfVar1[2] + fVar22 * pfVar1[3];
        fVar25 = fVar24 * 0.0;
        fVar27 = fVar24 * (fVar24 + fVar24);
        fVar23 = fVar23 + fVar23;
        fVar28 = fVar25 * (fVar25 + fVar25);
        fVar26 = fVar23 * fVar25;
        fVar23 = fVar24 * fVar23;
        fVar22 = *(float *)(lVar18 + 0x50c) +
                 (fVar24 * (fVar25 + fVar25) - fVar26) * 0.0 + ((1.0 - fVar27) - fVar28) * 0.0 +
                 (fVar23 + fVar28) * 5.0;
        fVar23 = *(float *)(lVar18 + 0x514) +
                 (fVar26 + (fVar24 + fVar24) * fVar25) * 0.0 + (fVar28 - fVar23) * 0.0 +
                 ((1.0 - fVar28) - fVar27) * 5.0;
        local_98 = CONCAT44((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0),
                            (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0));
        puVar14 = (uint *)FUN_014fbd50(&local_90,1,&local_a0);
        uVar8 = *puVar14;
        local_74 = uVar8;
        uVar13 = FUN_015039ac(&local_74);
        puVar4 = PTR_DAT_04bb27c0;
        if ((uVar13 & 1) == 0) goto LAB_01504710;
        lVar16 = *(long *)PTR_DAT_04bb27c0;
        if (lVar16 == 0) goto LAB_01504c84;
        if (((uVar8 == 0) ||
            (plVar20 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                 ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
           (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar20 + 0x46) != uVar8)))) {
          plVar20 = (long *)0x0;
        }
        if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
          plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar16 = *(long *)puVar4;
          iVar9 = (**(code **)(*plVar15 + 0x60))();
          if (iVar9 < 0x11) {
            uVar8 = 1;
          }
          else {
            if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_015042d0;
            uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_015042d0:
          uVar8 = 0;
        }
        if (plVar20 != (long *)0x0) {
          lVar16 = plVar20[0x2a];
          uVar11 = *(uint *)(plVar20 + 0x49);
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar10 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
          puVar21 = PTR_DAT_04bbfe68;
          puVar3 = PTR_DAT_04bb43c0;
          if ((((int)lVar16 != 1) || ((uVar10 & uVar8) == 0)) || ((uVar11 >> 4 & 1) == 0))
          goto LAB_01504710;
          local_c4 = 0;
          if (plVar20[0xe] == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = *(int *)(plVar20[0xe] + 0x280);
          }
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar9);
          if (iVar9 != 0) goto LAB_01504710;
          uStack_ac = *(undefined4 *)((long)plVar20 + 0x28c);
          local_a8 = (uint *)0x0;
          local_b8 = PTR_DAT_04bc0510 + 0x10;
          local_b0 = (undefined4)plVar20[0x51];
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          uVar8 = FUN_0277d6c4(&local_b0);
          if (*(long *)puVar3 == 0) {
LAB_01504408:
            puVar14 = (uint *)0x0;
          }
          else {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_01504408;
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(plVar20 + 0x51);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (*(uint *)(lVar16 + 0x1d8) <= uVar8) goto LAB_01504408;
            puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
            if (puVar14 != (uint *)0x0) {
              local_a8 = puVar14;
            }
          }
          if (plVar20[0x151] == 0) {
            uVar8 = 0;
          }
          else {
            local_c4 = 0;
            if (((puVar14 != (uint *)0x0) && (uVar8 = *puVar14, uVar8 != 0)) &&
               (puVar14 != (uint *)(ulong)uVar8)) {
              puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
              local_c4 = 0;
              if (*puVar17 != 0) {
                uVar8 = puVar17[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar16 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar16 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
                    }
                    if (*puVar17 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_c4 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2),
                       local_c4 < 0x52)) goto LAB_015044a4;
                  }
                }
                local_c4 = 0;
              }
            }
LAB_015044a4:
            if (local_c4 - 0x1e < 4) {
              local_bc = *(uint *)(lVar18 + 0x51c) ^ 0x80000000;
              uVar8 = FUN_01508370(&local_78,&local_bc);
            }
            else {
              uVar8 = FUN_01433400();
            }
          }
          local_c4 = 0;
          if (((puVar14 != (uint *)0x0) && (uVar11 = *puVar14, uVar11 != 0)) &&
             (puVar14 != (uint *)(ulong)uVar11)) {
            puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
            local_c4 = 0;
            if (*puVar17 != 0) {
              uVar11 = puVar17[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar16 != 0) {
                  uVar10 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar10 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar10) {
                    uVar10 = 0xffffffff;
                  }
                  if ((uVar10 < *(uint *)PTR_DAT_04bc0048) &&
                     (local_c4 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar10 * 2),
                     local_c4 < 0x52)) goto LAB_01504574;
                }
              }
              local_c4 = 0;
            }
          }
LAB_01504574:
          if ((((((0x10 < local_c4) || ((1 << (ulong)(local_c4 & 0x1f) & 0x17000U) == 0)) &&
                (uVar13 = FUN_01aea0b0(&local_b8), (uVar13 & 1) == 0)) &&
               ((uVar13 = FUN_01aefaac(&local_b8), (uVar13 & 1) == 0 &&
                (uVar13 = FUN_01ae69e4(&local_b8,0x11), (uVar13 & 1) == 0)))) &&
              (uVar13 = FUN_01ae69e4(&local_b8,0x51), (uVar13 & 1) == 0)) &&
             (uVar13 = FUN_01ae69e4(&local_b8,0x51), (uVar13 & 1) == 0)) {
            uVar11 = FUN_01ae69e4(&local_b8,0x50);
            if ((uVar8 & uVar11 & 1) != 0) goto LAB_015045a0;
            goto LAB_01504710;
          }
          if ((uVar8 & 1) == 0) goto LAB_01504710;
LAB_015045a0:
          uVar13 = FUN_01ae69e4(&local_b8,0);
          if (((uVar13 & 1) != 0) && (uVar13 = FUN_01ad6a30(&local_b8,0xb8), (uVar13 & 1) == 0))
          goto LAB_01504710;
          puVar14 = (uint *)FUN_01a5190c(&local_90,0,&local_a0,0);
          local_c4 = *puVar14;
          local_c0 = puVar14[1];
          uVar8 = FUN_01aef228(&local_c4,*(int *)(lVar18 + 0x51c) + 0x20000000U >> 0x1e);
          if ((uVar8 & 1) == 0) goto LAB_01505508;
          uVar13 = FUN_01aeec60(&local_b8);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_01aeef8c(&local_b8);
            if ((uVar13 & 1) == 0) {
              uVar13 = FUN_01aef03c(&local_b8);
              if ((uVar13 & 1) != 0) {
                local_c8 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                local_c4 = (int)(long)((float)local_c8 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
                if (local_c8 != *(uint *)(lVar18 + 0x4fc)) goto LAB_01504638;
              }
            }
            else {
              local_c4 = (int)(long)((float)(*(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e) *
                                     90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
              if (local_c4 == *(uint *)(lVar18 + 0x4fc)) goto LAB_01504710;
            }
          }
          else {
            local_c4 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
LAB_01504638:
            if (local_c4 != *(uint *)(lVar18 + 0x4fc)) goto LAB_01504710;
          }
          goto LAB_01505680;
        }
LAB_01504710:
        lVar16 = *(long *)puVar4;
        if (lVar16 == 0) {
LAB_01504c84:
          puVar6 = PTR_DAT_04bb5438;
          puVar3 = PTR_DAT_04bb2010;
          local_90 = puVar21 + 0x10;
          local_88 = 0;
          lVar16 = *(long *)PTR_DAT_04bb2720;
          if (lVar16 == 0) {
            puVar19 = &DAT_055c04a0;
          }
          else {
            puVar19 = &DAT_055c04a0;
            if (*(long *)(lVar16 + 0x330) != 0) {
              puVar19 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
              iVar9 = FUN_006bd550(*puVar19,0);
              puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar19 = &DAT_055c04a0;
              }
            }
          }
          local_84 = *(undefined4 *)(puVar19 + 7);
          uVar7 = FUN_017baf44();
          local_80 = (uint *)(CONCAT71(local_80._1_7_,uVar7) & 0xffffffffffffff01);
          local_90 = puVar6 + 0x10;
          local_a0 = puVar3 + 0x10;
          pfVar1 = (float *)(puVar5 + ((ulong)(*(uint *)(lVar18 + 0x51c) >> 0x15) & 0x7f0));
          fVar22 = (float)(*(uint *)(lVar18 + 0x51c) >> 1 & 0xffffff) * 5.9604645e-08;
          fVar24 = *pfVar1 + fVar22 * pfVar1[1];
          fVar23 = pfVar1[2] + fVar22 * pfVar1[3];
          fVar25 = fVar24 * 0.0;
          fVar27 = fVar24 * (fVar24 + fVar24);
          fVar23 = fVar23 + fVar23;
          fVar28 = fVar25 * (fVar25 + fVar25);
          fVar26 = fVar23 * fVar25;
          fVar23 = fVar24 * fVar23;
          fVar22 = *(float *)(lVar18 + 0x50c) +
                   (fVar24 * (fVar25 + fVar25) - fVar26) * 0.0 + ((1.0 - fVar27) - fVar28) * 0.0 +
                   (fVar23 + fVar28) * 5.0;
          fVar23 = *(float *)(lVar18 + 0x514) +
                   (fVar26 + (fVar24 + fVar24) * fVar25) * 0.0 + (fVar28 - fVar23) * 0.0 +
                   ((1.0 - fVar28) - fVar27) * 5.0;
          local_98 = CONCAT44((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0),
                              (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0));
          puVar14 = (uint *)FUN_014fbd50(&local_90,1,&local_a0);
          uVar8 = *puVar14;
          local_c8 = uVar8;
          uVar13 = FUN_015039ac(&local_c8);
          if ((uVar13 & 1) != 0) {
            lVar16 = *(long *)puVar4;
            if (lVar16 == 0) goto LAB_01505504;
            if ((((uVar8 == 0) ||
                 (plVar20 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                      ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0))
                || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar20 + 0x46) != uVar8)) {
              plVar20 = (long *)0x0;
            }
            if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
              plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar16 = *(long *)puVar4;
              iVar9 = (**(code **)(*plVar15 + 0x60))();
              if (iVar9 < 0x11) {
                uVar8 = 1;
              }
              else {
                if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_01504f20;
                uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_01504f20:
              uVar8 = 0;
            }
            if (plVar20 != (long *)0x0) {
              lVar16 = plVar20[0x2a];
              uVar11 = *(uint *)(plVar20 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar10 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
              puVar21 = PTR_DAT_04bb43c0;
              if ((((int)lVar16 == 1) && ((uVar10 & uVar8) != 0)) && ((uVar11 >> 4 & 1) != 0)) {
                local_c4 = 0;
                if (plVar20[0xe] == 0) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = *(int *)(plVar20[0xe] + 0x280);
                }
                local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar9);
                if (iVar9 == 0) {
                  uStack_ac = *(undefined4 *)((long)plVar20 + 0x28c);
                  local_a8 = (uint *)0x0;
                  local_b8 = PTR_DAT_04bc0510 + 0x10;
                  local_b0 = (undefined4)plVar20[0x51];
                  lVar16 = *(long *)PTR_DAT_04bb43c0;
                  uVar8 = FUN_0277d6c4(&local_b0);
                  if (*(long *)puVar21 == 0) {
LAB_015050e4:
                    local_74 = 0;
                  }
                  else {
                    lVar16 = *(long *)(lVar16 + 0x57e58);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
                       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                    goto LAB_015050e4;
                    lVar16 = *(long *)PTR_DAT_04bc0428;
                    uVar8 = FUN_0277d6c4(plVar20 + 0x51);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                    if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
                       (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8),
                       puVar14 == (uint *)0x0)) goto LAB_015050e4;
                    local_74 = 0;
                    uVar8 = *puVar14;
                    local_a8 = puVar14;
                    if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
                      puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
                      local_74 = 0;
                      if (*puVar17 != 0) {
                        uVar8 = puVar17[1];
                        if ((uVar8 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                          lVar16 = 0xc;
                          if (*(char *)((long)puVar17 + 10) != '\0') {
                            lVar16 = 0x1c;
                          }
                          lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                          if (lVar16 != 0) {
                            uVar11 = 0;
                            if ((ulong)uVar8 != 0) {
                              uVar11 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
                            }
                            if (*puVar17 <= uVar11) {
                              uVar11 = 0xffffffff;
                            }
                            if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
                               (uVar2 = *(ushort *)
                                         (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2),
                               local_74 = (uint)uVar2, uVar2 < 0x52)) goto LAB_015050e8;
                          }
                        }
                        local_74 = 0;
                      }
                    }
                  }
LAB_015050e8:
                  local_c4 = 0;
                  if ((local_74 != 0) || (uVar13 = FUN_01ad6a30(&local_b8,0xb8), (uVar13 & 1) != 0))
                  {
                    puVar14 = (uint *)FUN_01a5190c(&local_90,0,&local_a0,0);
                    local_c4 = *puVar14;
                    local_c0 = puVar14[1];
                    uVar8 = FUN_01aef228(&local_c4,*(int *)(lVar18 + 0x51c) + 0x20000000U >> 0x1e);
                    if ((uVar8 & 1) == 0) goto LAB_01505508;
                    uVar13 = FUN_01aeec60(&local_b8);
                    if ((uVar13 & 1) == 0) {
                      uVar13 = FUN_01aeef8c(&local_b8);
                      if ((uVar13 & 1) == 0) {
                        uVar13 = FUN_01aef03c(&local_b8);
                        if ((uVar13 & 1) != 0) {
                          local_74 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                          local_c4 = (int)(long)((float)local_74 * 90.0 * 11930465.0) + 0xa0000000U
                                     >> 0x1e;
                          if (local_74 != *(uint *)(lVar18 + 0x4fc)) goto LAB_01505184;
                        }
                      }
                      else {
                        local_c4 = (int)(long)((float)(*(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U
                                                      >> 0x1e) * 90.0 * 11930465.0) + 0xa0000000U >>
                                   0x1e;
                        if (local_c4 == *(uint *)(lVar18 + 0x4fc)) goto LAB_015051fc;
                      }
                    }
                    else {
                      local_c4 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
LAB_01505184:
                      if (local_c4 != *(uint *)(lVar18 + 0x4fc)) goto LAB_015051fc;
                    }
LAB_01505680:
                    FUN_01479cd8(plVar20,param_1,param_2);
                    goto LAB_01505508;
                  }
                }
              }
            }
          }
LAB_015051fc:
          lVar16 = *(long *)puVar4;
          if (lVar16 == 0) goto LAB_01505504;
          if ((((local_78 == 0) ||
               (plVar20 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                    ((ulong)(local_78 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0))
              || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar20 + 0x46) != local_78)) {
            plVar20 = (long *)0x0;
          }
          if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
            plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar16 = *(long *)puVar4;
            iVar9 = (**(code **)(*plVar15 + 0x60))();
            if (iVar9 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_01505298;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01505298:
            uVar11 = 0;
          }
          if (plVar20 == (long *)0x0) goto LAB_01505504;
          lVar16 = plVar20[0x2a];
          uVar10 = *(uint *)(plVar20 + 0x49);
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar12 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
          puVar21 = PTR_DAT_04bb43c0;
          uVar8 = 0;
          if ((((int)lVar16 != 1) || ((uVar12 & uVar11) == 0)) || ((uVar10 >> 4 & 1) == 0))
          goto LAB_01505508;
          local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
          if (plVar20[0xe] == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = *(int *)(plVar20[0xe] + 0x280);
          }
          if (iVar9 != 0) goto LAB_01505504;
          local_84 = *(undefined4 *)((long)plVar20 + 0x28c);
          local_80 = (uint *)0x0;
          local_90 = PTR_DAT_04bc0510 + 0x10;
          local_88 = (undefined4)plVar20[0x51];
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          uVar8 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar21 == 0) {
LAB_015053cc:
            puVar14 = (uint *)0x0;
          }
          else {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_015053cc;
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(plVar20 + 0x51);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (*(uint *)(lVar16 + 0x1d8) <= uVar8) goto LAB_015053cc;
            puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
            if (puVar14 != (uint *)0x0) {
              local_80 = puVar14;
            }
          }
          uVar13 = FUN_01aeec60(&local_90);
          if ((uVar13 & 1) == 0) {
            uVar8 = 0;
            if (((puVar14 != (uint *)0x0) && (uVar11 = *puVar14, uVar11 != 0)) &&
               (puVar14 != (uint *)(ulong)uVar11)) {
              puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
              uVar8 = 0;
              if (*puVar17 != 0) {
                uVar8 = puVar17[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar16 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar16 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
                    }
                    if (*puVar17 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if ((uVar11 < *(uint *)PTR_DAT_04bc0048) &&
                       (uVar8 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2),
                       uVar8 < 0x52)) goto LAB_01505498;
                  }
                }
                uVar8 = 0;
              }
            }
LAB_01505498:
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
            if (uVar8 - 0x1f < 2) {
              uVar8 = (int)(long)((float)(*(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e) *
                                  90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
              local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
              if (uVar8 == *(uint *)(lVar18 + 0x4fc)) goto LAB_01505504;
            }
            else {
              uVar13 = FUN_01aef03c(&local_90);
              if ((uVar13 & 1) != 0) {
                uVar8 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar8);
                local_b8 = (undefined *)
                           CONCAT44(local_b8._4_4_,
                                    (int)(long)((float)uVar8 * 90.0 * 11930465.0) + 0xa0000000U >>
                                    0x1e);
                if (uVar8 != *(uint *)(lVar18 + 0x4fc)) goto LAB_015053f4;
              }
            }
          }
          else {
            local_b8 = (undefined *)
                       CONCAT44(local_b8._4_4_,*(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e)
            ;
LAB_015053f4:
            if ((int)local_b8 != *(int *)(lVar18 + 0x4fc)) goto LAB_01505504;
          }
        }
        else {
          if ((((local_78 == 0) ||
               (plVar20 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                    ((ulong)(local_78 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0))
              || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar20 + 0x46) != local_78)) {
            plVar20 = (long *)0x0;
          }
          if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
            plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar16 = *(long *)puVar4;
            iVar9 = (**(code **)(*plVar15 + 0x60))();
            if (iVar9 < 0x11) {
              uVar8 = 1;
            }
            else {
              if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_015047ac;
              uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_015047ac:
            uVar8 = 0;
          }
          if (plVar20 == (long *)0x0) goto LAB_01504c84;
          lVar16 = plVar20[0x2a];
          uVar11 = *(uint *)(plVar20 + 0x49);
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar10 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
          puVar3 = PTR_DAT_04bb43c0;
          if ((((int)lVar16 != 1) || ((uVar10 & uVar8) == 0)) || ((uVar11 >> 4 & 1) == 0))
          goto LAB_01504c84;
          local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
          if (plVar20[0xe] == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = *(int *)(plVar20[0xe] + 0x280);
          }
          if (iVar9 != 0) goto LAB_01504c84;
          local_84 = *(undefined4 *)((long)plVar20 + 0x28c);
          local_80 = (uint *)0x0;
          local_90 = PTR_DAT_04bc0510 + 0x10;
          local_88 = (undefined4)plVar20[0x51];
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          uVar8 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar3 == 0) {
LAB_015048e4:
            puVar14 = (uint *)0x0;
          }
          else {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_015048e4;
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(plVar20 + 0x51);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (*(uint *)(lVar16 + 0x1d8) <= uVar8) goto LAB_015048e4;
            puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8);
            if (puVar14 != (uint *)0x0) {
              local_80 = puVar14;
            }
          }
          if (plVar20[0x151] == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            if (((puVar14 != (uint *)0x0) && (uVar11 = *puVar14, uVar11 != 0)) &&
               (puVar14 != (uint *)(ulong)uVar11)) {
              puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar11);
              uVar8 = 0;
              if (*puVar17 != 0) {
                uVar8 = puVar17[1];
                if ((uVar8 == 0) || ((ulong)(ushort)puVar17[2] == 0)) {
LAB_01504980:
                  uVar8 = 0;
                }
                else {
                  lVar16 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar16 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar8);
                    }
                    if (*puVar17 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if (uVar11 < *(uint *)PTR_DAT_04bc0048) {
                      uVar8 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar11 * 2);
                      if (uVar8 < 0x52) goto LAB_01504998;
                      goto LAB_01504980;
                    }
                  }
                  uVar8 = 0;
                }
              }
            }
LAB_01504998:
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
            if (uVar8 - 0x1e < 4) {
              local_cc = *(uint *)(lVar18 + 0x51c) ^ 0x80000000;
              uVar8 = FUN_01508370(&local_78,&local_cc);
            }
            else {
              uVar8 = FUN_01433400();
            }
          }
          uVar11 = 0;
          if (((puVar14 != (uint *)0x0) && (uVar10 = *puVar14, uVar10 != 0)) &&
             (puVar14 != (uint *)(ulong)uVar10)) {
            puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
            uVar11 = 0;
            if (*puVar17 != 0) {
              uVar11 = puVar17[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar16 != 0) {
                  uVar10 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar10 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar10) {
                    uVar10 = 0xffffffff;
                  }
                  if (uVar10 < *(uint *)PTR_DAT_04bc0048) {
                    uVar11 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar10 * 2);
                    if (0x51 < uVar11) goto LAB_01504a60;
                  }
                  else {
                    uVar11 = 0;
                  }
                  goto LAB_01504a64;
                }
              }
LAB_01504a60:
              uVar11 = 0;
            }
          }
LAB_01504a64:
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar11);
          if ((0x10 < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0x17000U) == 0)) {
            uVar11 = 0;
            if ((puVar14 != (uint *)0x0) &&
               ((uVar10 = *puVar14, uVar10 != 0 && (puVar14 != (uint *)(ulong)uVar10)))) {
              puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
              if ((*puVar17 != 0) &&
                 ((uVar11 = puVar17[1], uVar11 != 0 && ((ulong)(ushort)puVar17[2] != 0)))) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar16 != 0) {
                  uVar10 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar10 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar10) {
                    uVar10 = 0xffffffff;
                  }
                  if (uVar10 < *(uint *)PTR_DAT_04bc0048) {
                    uVar11 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar10 * 2);
                    if (0x51 < uVar11) {
                      uVar11 = 0;
                    }
                    goto LAB_01504c50;
                  }
                }
              }
              uVar11 = 0;
            }
LAB_01504c50:
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar11);
            if (((uVar11 & 0xfffffffe) != 0x12) &&
               (uVar13 = FUN_01ae69e4(&local_90,0x11), (uVar13 & 1) == 0)) {
              uVar11 = FUN_01aefaac(&local_90);
              uVar8 = uVar8 & uVar11;
            }
          }
          if ((uVar8 & 1) == 0) goto LAB_01504c84;
          uVar13 = FUN_01aeec60(&local_90);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_01aeef8c(&local_90);
            if ((uVar13 & 1) == 0) {
              uVar13 = FUN_01aef03c(&local_90);
              if ((uVar13 & 1) != 0) {
                uVar8 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar8);
                uVar11 = (int)(long)((float)uVar8 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
                local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar11);
                if ((uVar8 != *(uint *)(lVar18 + 0x4fc)) && (uVar11 != *(uint *)(lVar18 + 0x4fc)))
                goto LAB_01504c84;
              }
            }
            else {
              uVar8 = (int)(long)((float)(*(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e) *
                                  90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
              local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
              if (uVar8 == *(uint *)(lVar18 + 0x4fc)) goto LAB_01504c84;
            }
          }
          else {
            uVar8 = *(int *)(plVar20[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
            if (uVar8 != *(uint *)(lVar18 + 0x4fc)) goto LAB_01504c84;
          }
        }
        FUN_01479cd8(plVar20,param_1,param_2);
        uVar8 = 1;
        goto LAB_01505508;
      }
    }
  }
LAB_01505504:
  uVar8 = 0;
LAB_01505508:
  return uVar8 & 1;
}

