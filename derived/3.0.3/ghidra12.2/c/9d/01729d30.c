
/* WARNING: Removing unreachable block (ram,0x0172ab54) */
/* WARNING: Removing unreachable block (ram,0x01729fe0) */
/* WARNING: Removing unreachable block (ram,0x0172a268) */
/* WARNING: Removing unreachable block (ram,0x0172a788) */
/* WARNING: Removing unreachable block (ram,0x0172aba0) */
/* WARNING: Removing unreachable block (ram,0x0172abd0) */

undefined8 FUN_01729d30(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  undefined2 uVar10;
  char cVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  float *pfVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  undefined4 *puVar33;
  undefined8 *puVar34;
  char *pcVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  byte local_1dc [4];
  byte local_1d8 [4];
  byte local_1d4 [4];
  undefined8 local_1d0;
  char *local_1c8;
  long local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  char local_18c [255];
  undefined1 local_8d;
  
  puVar15 = PTR_DAT_04bb3760;
  puVar14 = PTR_DAT_04bb3350;
  bVar16 = true;
  if (*(int *)(param_1 + 8) != 0) {
    plVar30 = (long *)(param_1 + 0x210);
    uVar40 = 0x3f800000;
    pbVar1 = (byte *)(param_1 + 0x188);
    puVar2 = PTR_DAT_04bb3290 + 0x10;
    puVar3 = PTR_DAT_04bb3070 + 0x10;
    plVar29 = (long *)(PTR_DAT_04bb2020 + 0x10);
    plVar4 = (long *)(PTR_DAT_04bb21f8 + 0x10);
    plVar25 = (long *)PTR_DAT_04bb3758;
    do {
      plVar36 = (long *)**(undefined8 **)(param_1 + 0x10);
      if (plVar36 == (long *)0x0) {
        return 1;
      }
      lVar31 = *(long *)PTR_DAT_04bb27c0;
      if (lVar31 == 0) {
LAB_01729fa0:
        iVar17 = *(int *)(param_1 + 8);
        if (0 < iVar17) {
          puVar34 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
          *puVar34 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 **)(param_1 + 0x18) = puVar34;
          iVar17 = *(int *)(param_1 + 8);
          if (0 < iVar17) {
            if (iVar17 - 1U == 0) {
              iVar17 = 1;
            }
            else {
              memmove(*(void **)(param_1 + 0x10),(void *)((long)*(void **)(param_1 + 0x10) + 8),
                      (ulong)(iVar17 - 1U) << 3);
              iVar17 = *(int *)(param_1 + 8);
            }
            iVar17 = iVar17 + -1;
            *(int *)(param_1 + 8) = iVar17;
          }
        }
        goto LAB_01729e14;
      }
      puVar5 = (uint *)((long)plVar36 + 0x3c);
      uVar19 = *puVar5;
      if ((((uVar19 == 0) ||
           (plVar37 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar37 == (long *)0x0)) ||
          ((*(uint *)(plVar37 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar37 + 0x46) != uVar19)) {
        plVar37 = (long *)0x0;
      }
      if (*(int *)(lVar31 + 0x288) == 1 || *(int *)(lVar31 + 0x288) == -1) {
        plVar22 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
        lVar31 = *(long *)PTR_DAT_04bb27c0;
        iVar17 = (**(code **)(*plVar22 + 0x60))();
        if (iVar17 < 0x11) {
          uVar19 = 1;
        }
        else {
          if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_01729ed0;
          uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
        }
        if (plVar37 != (long *)0x0) goto LAB_01729ee8;
        goto LAB_01729fa0;
      }
LAB_01729ed0:
      uVar19 = 0;
      if (plVar37 == (long *)0x0) goto LAB_01729fa0;
LAB_01729ee8:
      lVar31 = plVar37[0x2a];
      if (((*puVar15 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar15), iVar17 != 0)) {
        *plVar25 = (long)puVar2;
        __cxa_guard_release(puVar15);
      }
      uVar18 = (**(code **)(*plVar37 + 0x20))(plVar37,plVar25);
      if ((((int)lVar31 != 1) || ((uVar19 & uVar18) == 0)) ||
         (plVar22 = (long *)plVar37[0xc], plVar22 == (long *)0x0)) goto LAB_01729fa0;
      iVar17 = (int)plVar36[8];
      iVar7 = *(int *)((long)plVar36 + 0x4c);
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar20 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = puVar3;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar23 = (**(code **)(*plVar22 + 0x10))(plVar22,PTR_DAT_04bb37b0);
      if ((uVar23 & 1) == 0) goto LAB_01729fa0;
      if (iVar17 != 3) {
        if (iVar17 == 2) {
          lVar31 = *(long *)PTR_DAT_04bb27c0;
          if (lVar31 == 0) {
            plVar30 = (long *)0x0;
          }
          else {
            uVar19 = *puVar5;
            if ((((uVar19 == 0) ||
                 (plVar30 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                      ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0))
                || ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar30 + 0x46) != uVar19)) {
              plVar30 = (long *)0x0;
            }
            if ((*(int *)(lVar31 + 0x288) == 1) || (*(int *)(lVar31 + 0x288) == -1)) {
              plVar29 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
              (**(code **)(*plVar29 + 0x60))();
            }
            if (plVar30 != (long *)0x0) {
              if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar17 != 0)) {
                *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb37d8);
              }
              (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
            }
          }
          local_1a0 = (long *)CONCAT44(local_1a0._4_4_,1);
          if (*(int *)(plVar30[0x76] + 0x360) == 1) {
            iVar17 = *(int *)(param_1 + 0x250);
            *(int *)(param_1 + 0x250) = iVar17 + 1;
            lVar31 = plVar30[0x76];
            bVar16 = false;
            if (*(int *)(lVar31 + 0x4b8) != 0) {
              bVar16 = *(int *)(lVar31 + 0x378) == 0x23;
            }
            if ((bVar16) || (0x3a < iVar17)) {
              FUN_01e5aacc(lVar31,6);
            }
            goto LAB_0172b5c0;
          }
          (**(code **)(*plVar37 + 0x1a8))(plVar37,plVar36);
          local_1d0 = PTR_DAT_04bb2020 + 0x10;
          local_198 = "DeliveryOption";
          if (*(uint *)(plVar36 + 7) < 2) {
            local_1c8 = *(char **)(PTR_s_Default_04bb66d8 + (ulong)*(uint *)(plVar36 + 7) * 8 + 0x10
                                  );
          }
          else {
            local_1c8 = (char *)&DAT_0407ebb1;
          }
          local_1a0 = (long *)local_1d0;
          FUN_0073dbf8(plVar22,&local_1a0,&local_1d0);
LAB_0172b5b4:
          *(undefined4 *)(plVar36 + 8) = 3;
          *(undefined4 *)(param_1 + 0x250) = 0;
        }
        else if (iVar17 == 1) {
          lVar31 = *(long *)PTR_DAT_04bb27c0;
          if (lVar31 == 0) {
            plVar30 = (long *)0x0;
          }
          else {
            uVar19 = *puVar5;
            if ((((uVar19 == 0) ||
                 (plVar30 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                      ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0))
                || ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar30 + 0x46) != uVar19)) {
              plVar30 = (long *)0x0;
            }
            if ((*(int *)(lVar31 + 0x288) == 1) || (*(int *)(lVar31 + 0x288) == -1)) {
              plVar29 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
              (**(code **)(*plVar29 + 0x60))();
            }
            if (plVar30 != (long *)0x0) {
              if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar17 != 0)) {
                *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb37d8);
              }
              (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
            }
          }
          lVar31 = plVar30[0x76];
          local_1a0 = (long *)CONCAT44(local_1a0._4_4_,4);
          if (((*(int *)(lVar31 + 0x360) == 4) && (*(int *)(lVar31 + 0x4b8) != 0)) &&
             (*(int *)(lVar31 + 0x378) == 0x23)) {
            if (((ulong)*pbVar1 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              puVar33 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar1 * 4 + 0xde8);
            }
            else {
              puVar33 = (undefined4 *)PTR_DAT_04bb3238;
            }
            local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,*puVar33);
            FUN_0071c7c4(&local_1a0,&local_1d0,0);
            plVar29 = local_1a0;
            if (local_1a0 != (long *)0x0) {
              if (((*puVar15 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar17 != 0)) {
                *plVar25 = (long)(PTR_DAT_04bb3290 + 0x10);
                __cxa_guard_release(PTR_DAT_04bb3760);
              }
              (**(code **)(*plVar29 + 0x20))(plVar29,PTR_DAT_04bb3758);
            }
            pfVar28 = (float *)FUN_0251b3b0(pbVar1,0);
            if (pfVar28 != (float *)0x0) {
              lVar31 = plVar30[0xd];
              fVar41 = *(float *)(lVar31 + 0x278) - *pfVar28;
              fVar43 = *(float *)(lVar31 + 0x280) - pfVar28[2];
              fVar41 = SQRT(fVar43 * fVar43 + fVar41 * fVar41);
              if (20.0 < fVar41) {
                uVar19 = FUN_006f0400(*pfVar28 - *(float *)(lVar31 + 0x278),
                                      pfVar28[2] - *(float *)(lVar31 + 0x280));
                pfVar28 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar19 >> 0x18) * 0x10);
                fVar43 = (float)(uVar19 & 0xffffff) * 5.9604645e-08;
                fVar41 = fVar41 + -12.0;
                fVar42 = fVar41 * (pfVar28[2] + fVar43 * pfVar28[3]) + *(float *)(lVar31 + 0x280);
                local_1d0 = (undefined *)
                            CONCAT44(*(float *)(lVar31 + 0x27c) + 0.0,
                                     fVar41 * (*pfVar28 + fVar43 * pfVar28[1]) +
                                     *(float *)(lVar31 + 0x278));
LAB_0172b808:
                local_1c8 = (char *)CONCAT44(local_1c8._4_4_,fVar42);
                FUN_01e5ab18(0x40000000,plVar30[0x76],&local_1d0,PTR_DAT_04bb6740);
                *(undefined4 *)(plVar36 + 8) = 2;
                goto LAB_0172b5c0;
              }
            }
            (**(code **)(*plVar37 + 0x1a8))(plVar37,plVar36);
            local_1d0 = PTR_DAT_04bb2020 + 0x10;
            local_1c8 = "DeliveryOption";
            if (*(uint *)(plVar36 + 7) < 2) {
              local_1a8 = *(undefined8 **)
                           (PTR_s_Default_04bb66d8 + (ulong)*(uint *)(plVar36 + 7) * 8 + 0x10);
            }
            else {
              local_1a8 = &DAT_0407ebb1;
            }
            local_1b0 = local_1d0;
            FUN_0073dbf8(plVar22,&local_1d0,&local_1b0);
            *(undefined4 *)(plVar36 + 8) = 3;
          }
        }
        else if (iVar17 == 0) {
          if (*(int *)(param_1 + 0x194) == 0) {
            sVar9 = *(short *)PTR_DAT_04bb37e0;
            uVar10 = *(undefined2 *)(PTR_DAT_04bb37e0 + 2);
            *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            *(short *)(param_1 + 0x228) = sVar9;
            *(undefined2 *)(param_1 + 0x22a) = uVar10;
            if (sVar9 != -2) {
              FUN_01ad5d04(&local_1a0,param_1 + 0x228);
              FUN_01af93e8(&local_1a0);
              uVar40 = FUN_01afa110(&local_1a0);
            }
            *(undefined4 *)(param_1 + 0x208) = uVar40;
          }
          if (*(short *)((long)plVar36 + 0x44) != -2) {
            *(short *)(param_1 + 0x228) = *(short *)((long)plVar36 + 0x44);
            *(undefined1 *)(param_1 + 0x22a) = *(undefined1 *)((long)plVar36 + 0x46);
            *(undefined1 *)(param_1 + 0x22b) = *(undefined1 *)((long)plVar36 + 0x47);
            *(int *)(param_1 + 0x22c) = (int)plVar36[9];
            FUN_01ad5d04(&local_1a0,param_1 + 0x228);
            FUN_01af93e8(&local_1a0);
            uVar40 = FUN_01afa110(&local_1a0);
            *(undefined4 *)(param_1 + 0x208) = uVar40;
          }
          uVar19 = *(uint *)(plVar36 + 7);
          uVar18 = *(uint *)(param_1 + 4);
          if (uVar18 < 0x12) {
            if ((1 << (ulong)(uVar18 & 0x1f) & 0x2583U) == 0) {
              if (uVar18 != 0xe) {
                if (uVar18 != 0x11) goto LAB_0172b514;
                FUN_0071c7c4(&local_1a0,puVar5,0);
                plVar30 = local_1a0;
                if (local_1a0 != (long *)0x0) {
                  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar17 != 0)) {
                    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bb37d8);
                  }
                  uVar23 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
                  if ((uVar23 & 1) == 0) {
                    local_198._0_2_ = (ushort)(byte)local_198;
                  }
                }
                if (((((local_1a0 != (long *)0x0) && ((byte)local_198 != '\0')) &&
                     (local_198._1_1_ != '\0')) && (lVar31 = local_1a0[0x77], lVar31 != 0)) &&
                   ((*(char *)(lVar31 + 0x7d10) != '\0' && *(char *)(lVar31 + 0x7d09) == '\0' ||
                    (*(char *)(lVar31 + 0x7d0a) != '\0')))) goto LAB_0172b5c0;
              }
              uVar19 = 1;
            }
            else {
              local_1a0 = (long *)CONCAT44(local_1a0._4_4_,3);
              if ((*(uint *)((long)plVar22 + 0x15f4) >> 3 & 1) == 0) {
                FUN_0071c7c4(&local_1a0,puVar5,0);
                plVar30 = local_1a0;
                if (local_1a0 != (long *)0x0) {
                  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar17 != 0)) {
                    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bb37d8);
                  }
                  uVar23 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
                  if ((uVar23 & 1) == 0) {
                    local_198._0_2_ = (ushort)(byte)local_198;
                  }
                }
                pfVar28 = (float *)FUN_0251b3b0(pbVar1,0);
                plVar30 = local_1a0;
                if ((((local_1a0 != (long *)0x0) && ((byte)local_198 != '\0')) &&
                    (pfVar28 != (float *)0x0)) && (local_198._1_1_ != '\0')) {
                  lVar31 = local_1a0[0xd];
                  fVar42 = *pfVar28;
                  fVar44 = pfVar28[2];
                  fVar41 = *(float *)(lVar31 + 0x278);
                  fVar43 = *(float *)(lVar31 + 0x280);
                  uVar21 = FUN_006f0400(fVar42 - fVar41,fVar44 - fVar43);
                  local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,uVar21);
                  uVar12 = *(int *)(plVar30[0xd] + 0x2b4) - uVar21;
                  uVar18 = uVar12 >> 0x18;
                  if (*(float *)(PTR_DAT_04bb2d00 + (ulong)uVar18 * 0x10 + 8) +
                      *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar18 * 0x10 + 0xc) *
                      (float)(uVar12 & 0xffffff) * 5.9604645e-08 < 0.9985) {
                    local_1d0 = PTR_DAT_04bb2020 + 0x10;
                    local_1c8 = "";
                    FUN_01e5ab70(plVar30[0x76],&local_1b0,PTR_DAT_04bb65b0,&local_1d0,6);
                    *(undefined4 *)(plVar36 + 8) = 1;
                    goto LAB_0172b5c0;
                  }
                  fVar41 = fVar41 - fVar42;
                  fVar43 = fVar43 - fVar44;
                  fVar41 = SQRT(fVar43 * fVar43 + fVar41 * fVar41);
                  if (20.0 < fVar41) {
                    pfVar28 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar21 >> 0x18) * 0x10);
                    fVar43 = (float)(uVar21 & 0xffffff) * 5.9604645e-08;
                    fVar41 = fVar41 + -12.0;
                    fVar42 = fVar41 * (pfVar28[2] + fVar43 * pfVar28[3]) +
                             *(float *)(lVar31 + 0x280);
                    local_1d0 = (undefined *)
                                CONCAT44(*(float *)(lVar31 + 0x27c) + 0.0,
                                         fVar41 * (*pfVar28 + fVar43 * pfVar28[1]) +
                                         *(float *)(lVar31 + 0x278));
                    goto LAB_0172b808;
                  }
                }
              }
            }
          }
LAB_0172b514:
          (**(code **)(*plVar37 + 0x1a8))(plVar37,plVar36);
          local_1a0 = (long *)(PTR_DAT_04bb2020 + 0x10);
          local_198 = "DeliveryOption";
          if (uVar19 < 2) {
            puVar34 = *(undefined8 **)(PTR_s_Default_04bb66d8 + (ulong)uVar19 * 8 + 0x10);
          }
          else {
            puVar34 = &DAT_0407ebb1;
          }
          if (((plVar22[0x227] != 0) && (lVar31 = *(long *)(plVar22[0x227] + 0x78), lVar31 != 0)) &&
             (plVar30 = *(long **)(lVar31 + 0x48), plVar30 != (long *)0x0)) {
            (**(code **)(*plVar30 + 0x20))(plVar30,&local_1a0,puVar34);
          }
          goto LAB_0172b5b4;
        }
        goto LAB_0172b5c0;
      }
      local_1c0 = 0;
      local_1b8 = (long *)0x0;
      local_1d0 = (undefined *)0x0;
      local_1c8 = (char *)0x0;
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
      if (plVar22[0x227] == 0) {
        local_1b0 = (undefined *)((ulong)(uint)local_1b0._4_4_ << 0x20);
      }
      else {
        local_1b0 = (undefined *)
                    (CONCAT44(local_1b0._4_4_,*(uint *)(plVar22 + 0x2d3) >> 1) & 0xffffffff00000001)
        ;
        local_1a0 = (long *)CONCAT44(local_1a0._4_4_,8);
        uVar23 = FUN_03850890(plVar22[0x227],8,&local_1d0,*(uint *)(plVar22 + 0x2d3) >> 1 & 1);
        if ((uVar23 & 1) != 0) {
          if ((*(long *)PTR_DAT_04bb2808 == 0) ||
             (lVar31 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar31 == 0)) {
            bVar16 = false;
          }
          else {
            bVar16 = *(int *)(lVar31 + 0x1b0) == 3;
          }
          local_198 = (char *)0x0;
          if (local_1b8 != (long *)0x0) {
            if (*local_1b8 == 0) {
              local_8d = 0;
              local_190 = 0x100;
              local_18c[0] = '\0';
              local_1a0 = (long *)(PTR_DAT_04bb21f8 + 0x10);
              lVar31 = *(long *)(local_1b8[2] + 8);
              local_198 = local_18c;
              FUN_038d1270(&local_1a0,"%s.as",
                           lVar31 + *(int *)(lVar31 + 0x24) + (long)*(int *)(lVar31 + 8));
              puVar13 = PTR_PTR_04bb2238;
              (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
              local_198 = *(char **)(puVar13 + 8);
            }
            else {
              iVar17 = *(int *)(*local_1b8 + 8);
              if (iVar17 < 0x60000000) {
                lVar31 = *(long *)(local_1b8[2] + 8);
                local_198 = "";
                if (1 < *(int *)(lVar31 + iVar17)) {
                  local_198 = (char *)(lVar31 + *(int *)(lVar31 + 0x24) +
                                      (long)*(int *)(((ulong)(uint)((int *)(lVar31 + iVar17))[2] &
                                                     0xfffffff) + lVar31 + 4));
                }
              }
              else {
                uVar19 = iVar17 + 0xa0000000;
                if (*(uint *)(local_1c0 + 0x80) <= uVar19) {
                  uVar19 = 0;
                }
                lVar31 = *(long *)(local_1c0 + 0x88) + (ulong)uVar19 * 0x32;
                local_198 = *(char **)(lVar31 + (ulong)*(byte *)(lVar31 + 0x21));
              }
            }
          }
          uVar19 = *puVar5;
          *(undefined8 *)(param_1 + 0x19c) = 1;
          *(uint *)(param_1 + 400) = uVar19;
          *(undefined4 *)(param_1 + 0x200) = 0;
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          *(undefined8 *)(param_1 + 0x1e8) = 0;
          *(undefined8 *)(param_1 + 0x194) = 0x200000001;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          local_1a0 = (long *)(PTR_DAT_04bb2020 + 0x10);
          FUN_0359e240(plVar30,&local_1a0);
          *(undefined1 *)(param_1 + 0x230) = 0;
          if ((bVar16) && (*plVar30 != 0)) {
            plVar24 = (long *)(**(code **)(*(long *)(*plVar30 + 0x30) + 0xf0))();
            *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x220);
            uVar39 = (**(code **)(*plVar24 + 0x10))(0x3f800000);
            *(undefined4 *)(param_1 + 0x218) = uVar39;
          }
          if (*(char *)(param_1 + 0x260) != '\0') {
            switch(*(undefined4 *)(param_1 + 4)) {
            case 0:
            case 7:
            case 0xb:
              if ((iVar7 == 2) && (*(char *)(param_1 + 0x261) == '\0')) {
                *(undefined1 *)(param_1 + 0x261) = 1;
                FUN_01729a30(param_1);
              }
              break;
            case 8:
              if (iVar7 == 1) {
                FUN_0267b340(pbVar1,*(undefined4 *)(param_1 + 0x24c));
                *(undefined4 *)(param_1 + 0x24c) = 0;
              }
            }
          }
        }
      }
      if (plVar22[0x227] == 0) {
        local_1b0 = (undefined *)((ulong)(uint)local_1b0._4_4_ << 0x20);
        goto switchD_0172a618_caseD_5;
      }
      local_1b0 = (undefined *)
                  (CONCAT44(local_1b0._4_4_,*(uint *)(plVar22 + 0x2d3) >> 1) & 0xffffffff00000001);
      local_1a0 = (long *)CONCAT44(local_1a0._4_4_,9);
      uVar23 = FUN_03850890(plVar22[0x227],9,&local_1d0,*(uint *)(plVar22 + 0x2d3) >> 1 & 1);
      if ((uVar23 & 1) == 0) goto switchD_0172a618_caseD_5;
      local_1a0 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_198 = "DeliveryPutaway";
      (**(code **)(*plVar36 + 0x18))(plVar36);
      (**(code **)(*plVar36 + 0x18))(plVar36);
      pcVar35 = (char *)plVar36[1];
      (**(code **)((long)local_1a0 + 0x18))(&local_1a0);
      if (pcVar35 == local_198) {
LAB_0172a364:
        uVar39 = 3;
        if (local_1b8 == (long *)0x0) goto LAB_0172a3c8;
LAB_0172a370:
        if (*local_1b8 == 0) {
          local_8d = 0;
          local_190 = 0x100;
          local_18c[0] = '\0';
          local_1a0 = (long *)(PTR_DAT_04bb21f8 + 0x10);
          lVar31 = *(long *)(local_1b8[2] + 8);
          local_198 = local_18c;
          FUN_038d1270(&local_1a0,"%s.as",
                       lVar31 + *(int *)(lVar31 + 0x24) + (long)*(int *)(lVar31 + 8));
          puVar13 = PTR_PTR_04bb2238;
          (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
          pcVar35 = *(char **)(puVar13 + 8);
        }
        else {
          iVar17 = *(int *)(*local_1b8 + 8);
          if (iVar17 < 0x60000000) {
            pcVar35 = "";
            lVar31 = *(long *)(local_1b8[2] + 8);
            if (1 < *(int *)(lVar31 + iVar17)) {
              pcVar35 = (char *)(lVar31 + *(int *)(lVar31 + 0x24) +
                                (long)*(int *)(((ulong)(uint)((int *)(lVar31 + iVar17))[2] &
                                               0xfffffff) + lVar31 + 4));
            }
          }
          else {
            uVar19 = iVar17 + 0xa0000000;
            if (*(uint *)(local_1c0 + 0x80) <= uVar19) {
              uVar19 = 0;
            }
            lVar31 = *(long *)(local_1c0 + 0x88) + (ulong)uVar19 * 0x32;
            pcVar35 = *(char **)(lVar31 + (ulong)*(byte *)(lVar31 + 0x21));
          }
        }
      }
      else {
        uVar23 = 0;
        bVar16 = true;
        do {
          lVar31 = plVar36[1] + 2 + uVar23;
          cVar11 = *(char *)(lVar31 + -2);
          if (cVar11 != local_198[uVar23]) break;
          if (cVar11 == '\0') {
            if (bVar16) goto LAB_0172a364;
            break;
          }
          cVar11 = *(char *)(lVar31 + -1);
          if (cVar11 != local_198[uVar23 + 1]) break;
          if (cVar11 == '\0') goto LAB_0172a364;
          cVar11 = *(char *)(plVar36[1] + 2 + uVar23);
          if (cVar11 != local_198[uVar23 + 2]) break;
          if (cVar11 == '\0') goto LAB_0172a364;
          bVar16 = uVar23 < 0x7fffe;
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
        uVar39 = 2;
        if (local_1b8 != (long *)0x0) goto LAB_0172a370;
LAB_0172a3c8:
        pcVar35 = (char *)0x0;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x198);
      uVar19 = *puVar5;
      *(undefined4 *)(param_1 + 0x198) = uVar39;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x19c) = uVar8;
      *(uint *)(param_1 + 400) = uVar19;
      *(undefined4 *)(param_1 + 0x194) = 3;
      lVar31 = *(long *)PTR_DAT_04bb27c0;
      if (lVar31 == 0) {
LAB_0172a5c0:
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined4 *)(param_1 + 0x200) = 0;
        plVar25 = (long *)PTR_DAT_04bb3758;
      }
      else {
        if ((((uVar19 == 0) ||
             (plVar24 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                  ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar24 == (long *)0x0)) ||
            ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar24 + 0x46) != uVar19)) {
          plVar24 = (long *)0x0;
        }
        if (*(int *)(lVar31 + 0x288) == 1 || *(int *)(lVar31 + 0x288) == -1) {
          plVar25 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
          lVar31 = *(long *)PTR_DAT_04bb27c0;
          iVar17 = (**(code **)(*plVar25 + 0x60))();
          if (iVar17 < 0x11) {
            uVar19 = 1;
          }
          else if (*(uint *)(lVar31 + 0x5e8) < 5) {
            uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
          }
          else {
            uVar19 = 0;
          }
        }
        else {
          uVar19 = 0;
        }
        if (plVar24 == (long *)0x0) goto LAB_0172a5c0;
        lVar31 = plVar24[0x2a];
        if (((*puVar15 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar15), iVar17 != 0)) {
          *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(puVar15);
        }
        uVar23 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb3758);
        uVar18 = 0;
        if ((int)lVar31 == 1) {
          uVar18 = uVar19;
        }
        if ((((uVar23 & 1) == 0) || (uVar18 == 0)) ||
           (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x19c))) goto LAB_0172a5c0;
        plVar27 = (long *)plVar24[0xc];
        if (plVar27 == (long *)0x0) {
          plVar27 = (long *)0x0;
        }
        else {
          if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar17 != 0)) {
            *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37b8);
          }
          uVar23 = (**(code **)(*plVar27 + 0x10))(plVar27,PTR_DAT_04bb37b0);
          if ((uVar23 & 1) == 0) {
            plVar27 = (long *)0x0;
          }
        }
        plVar25 = (long *)PTR_DAT_04bb3758;
        iVar17 = *(int *)(param_1 + 0x198);
        if (iVar17 - 2U < 2) {
          FUN_0172c218(&local_1b0,iVar17,plVar27);
          plVar25 = (long *)PTR_DAT_04bb3758;
        }
        else if (iVar17 == 1) {
          FUN_016ff8c0(plVar27,8,&local_1b0);
        }
        *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1e0) - (float)local_1b0;
        *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1e4) - local_1b0._4_4_;
        *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x1e8) - local_1a8._0_4_;
        if (plVar24[0xc] != 0) {
          lVar31 = *(long *)(plVar24[0xc] + 0x1138);
          local_1a0 = (long *)(PTR_DAT_04bb2020 + 0x10);
          local_198 = "DeliveryOption";
          if (((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x78), lVar31 != 0)) &&
             (plVar24 = *(long **)(lVar31 + 0x48), plVar24 != (long *)0x0)) {
            (**(code **)(*plVar24 + 0x20))(plVar24,&local_1a0,PTR_s_Default_04bb66d8);
          }
        }
      }
      local_1a0 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_198 = pcVar35;
      FUN_0359e240(plVar30,&local_1a0);
      if (*(char *)(param_1 + 0x260) == '\0') goto switchD_0172a618_caseD_5;
      switch(*(undefined4 *)(param_1 + 4)) {
      case 1:
      case 8:
        if (iVar7 == 1) {
          local_1d4[0] = *(byte *)(param_1 + 0x188);
          pbVar26 = local_1d4;
          if (7 < local_1d4[0]) {
            local_1d4[0] = 0xff;
          }
LAB_0172a6c0:
          lVar31 = param_1 + 0x238;
LAB_0172a73c:
          FUN_026738b0(pbVar26,lVar31,1,0);
          goto LAB_0172a748;
        }
        break;
      case 2:
        if (*(long *)(param_1 + 600) == 0) {
          local_1d8[0] = *(byte *)(param_1 + 0x188);
          pbVar26 = local_1d8;
          if (7 < local_1d8[0]) {
            local_1d8[0] = 0xff;
          }
          goto LAB_0172a6c0;
        }
LAB_0172a6cc:
        FUN_01729bb0(param_1);
        goto LAB_0172a748;
      case 3:
        if (iVar7 == 2) {
LAB_0172a6fc:
          if (*(char *)(param_1 + 0x261) == '\0') {
            *(undefined1 *)(param_1 + 0x261) = 1;
            FUN_01729a30(param_1);
          }
        }
        break;
      case 4:
        if (iVar7 == 2) {
          FUN_0172ba68(param_1,puVar5,param_1 + 0x238);
          goto LAB_0172a6fc;
        }
        break;
      case 7:
      case 0xd:
        if (iVar7 == 2) goto LAB_0172a6fc;
        if (iVar7 != 1) break;
        FUN_0267af90(pbVar1,*(undefined4 *)(param_1 + 0x248));
        *(undefined4 *)(param_1 + 0x248) = 0;
LAB_0172a748:
        *(undefined1 *)(param_1 + 0x262) = 1;
        break;
      case 10:
        if (iVar7 == 0) goto LAB_0172a6cc;
        break;
      case 0xb:
        if (iVar7 == 1) {
          local_1dc[0] = *(byte *)(param_1 + 0x188);
          pbVar26 = local_1dc;
          if (7 < local_1dc[0]) {
            local_1dc[0] = 0xff;
          }
          lVar31 = param_1 + 0x240;
          goto LAB_0172a73c;
        }
      }
switchD_0172a618_caseD_5:
      if (plVar22[0x227] == 0) {
        local_1b0 = (undefined *)((ulong)(uint)local_1b0._4_4_ << 0x20);
      }
      else {
        local_1b0 = (undefined *)
                    (CONCAT44(local_1b0._4_4_,*(uint *)(plVar22 + 0x2d3) >> 1) & 0xffffffff00000001)
        ;
        local_1a0 = (long *)CONCAT44(local_1a0._4_4_,10);
        uVar23 = FUN_03850890(plVar22[0x227],10,&local_1d0,*(uint *)(plVar22 + 0x2d3) >> 1 & 1);
        if ((uVar23 & 1) != 0) {
          lVar31 = *(long *)PTR_DAT_04bb27c0;
          if (lVar31 != 0) {
            uVar19 = *(uint *)(param_1 + 400);
            if (uVar19 == 0) {
              plVar24 = (long *)0x0;
            }
            else {
              plVar24 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                  ((ulong)(uVar19 >> 0x11) & 0x7ff8));
              if (((plVar24 == (long *)0x0) || ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar24 + 0x46) != uVar19)) {
                plVar24 = (long *)0x0;
              }
            }
            if ((*(int *)(lVar31 + 0x288) == 1) || (*(int *)(lVar31 + 0x288) == -1)) {
              plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
              lVar31 = *(long *)PTR_DAT_04bb27c0;
              iVar17 = (**(code **)(*plVar27 + 0x60))();
              if (iVar17 < 0x11) {
                uVar19 = 1;
              }
              else {
                if (4 < *(uint *)(lVar31 + 0x5e8)) goto LAB_0172a868;
                uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_0172a868:
              uVar19 = 0;
            }
            if (plVar24 != (long *)0x0) {
              lVar31 = plVar24[0x2a];
              if (((*puVar15 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar15), iVar17 != 0)) {
                *plVar25 = (long)(PTR_DAT_04bb3290 + 0x10);
                __cxa_guard_release(puVar15);
              }
              uVar23 = (**(code **)(*plVar24 + 0x20))(plVar24,plVar25);
              uVar18 = 0;
              if ((int)lVar31 == 1) {
                uVar18 = uVar19;
              }
              if (((uVar23 & 1) != 0) && (uVar18 != 0)) {
                (**(code **)(*plVar24 + 0x1b0))(plVar24);
              }
            }
          }
          if (local_1b8 == (long *)0x0) {
            uVar39 = 1;
          }
          else if (*local_1b8 == 0) {
            local_8d = 0;
            local_190 = 0x100;
            local_18c[0] = '\0';
            lVar31 = *(long *)(local_1b8[2] + 8);
            local_1a0 = plVar4;
            local_198 = local_18c;
            FUN_038d1270(&local_1a0,"%s.as",
                         lVar31 + *(int *)(lVar31 + 0x24) + (long)*(int *)(lVar31 + 8));
LAB_0172a9a8:
            uVar39 = 0;
          }
          else {
            iVar17 = *(int *)(*local_1b8 + 8);
            if (iVar17 < 0x60000000) {
              piVar6 = (int *)(*(long *)(local_1b8[2] + 8) + (long)iVar17);
              if (*piVar6 < 1) goto LAB_0172a9a8;
              uVar39 = *(undefined4 *)
                        (((ulong)(uint)piVar6[1] & 0xfffffff) + *(long *)(local_1b8[2] + 8) + 4);
            }
            else {
              uVar19 = iVar17 + 0xa0000000;
              if (*(uint *)(local_1c0 + 0x80) <= uVar19) {
                uVar19 = 0;
              }
              lVar31 = *(long *)(local_1c0 + 0x88) + (ulong)uVar19 * 0x32;
              uVar39 = *(undefined4 *)(lVar31 + (ulong)*(byte *)(lVar31 + 0x20));
            }
          }
          lVar31 = *(long *)PTR_DAT_04bb27c0;
          if (lVar31 != 0) {
            uVar19 = *(uint *)(param_1 + 400);
            if ((((uVar19 == 0) ||
                 (plVar25 = *(long **)(*(long *)(*(long *)(lVar31 + 0x1c0) + 8) +
                                      ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar25 == (long *)0x0))
                || ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar25 + 0x46) != uVar19)) {
              plVar25 = (long *)0x0;
            }
            if ((*(int *)(lVar31 + 0x288) == 1) || (*(int *)(lVar31 + 0x288) == -1)) {
              plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar14 + 0x68));
              lVar31 = *(long *)PTR_DAT_04bb27c0;
              iVar17 = (**(code **)(*plVar24 + 0x60))();
              if (iVar17 < 0x11) {
                uVar19 = 1;
              }
              else if (*(uint *)(lVar31 + 0x5e8) < 5) {
                uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar31 + 0x5e8) & 0x1f) & 1;
              }
              else {
                uVar19 = 0;
              }
            }
            else {
              uVar19 = 0;
            }
            if (plVar25 != (long *)0x0) {
              lVar31 = plVar25[0x2a];
              if (((*puVar15 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar15), iVar17 != 0)) {
                *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(puVar15);
              }
              uVar23 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb3758);
              uVar18 = 0;
              if ((int)lVar31 == 1) {
                uVar18 = uVar19;
              }
              if (((uVar23 & 1) != 0) && (uVar18 != 0)) {
                if (plVar25[0xc] != 0) {
                  lVar31 = *(long *)(plVar25[0xc] + 0x1138);
                  local_198 = "DeliveryOption";
                  local_1a0 = plVar29;
                  if (((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x78), lVar31 != 0)) &&
                     (plVar25 = *(long **)(lVar31 + 0x48), plVar25 != (long *)0x0)) {
                    (**(code **)(*plVar25 + 0x20))(plVar25,&local_1a0,PTR_s_Default_04bb66d8);
                  }
                }
              }
            }
          }
          uVar19 = *puVar5;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          uVar8 = *(undefined4 *)(param_1 + 0x198);
          *(undefined4 *)(param_1 + 0x198) = 2;
          *(undefined4 *)(param_1 + 0x1a4) = uVar39;
          *(undefined4 *)(param_1 + 0x194) = 2;
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          *(undefined4 *)(param_1 + 0x200) = 0;
          *(uint *)(param_1 + 400) = uVar19;
          *(undefined4 *)(param_1 + 0x19c) = uVar8;
          plVar25 = (long *)PTR_DAT_04bb3758;
        }
      }
      if (plVar22[0x227] == 0) {
LAB_0172b5c0:
        bVar16 = *(int *)(param_1 + 8) == 0;
        goto LAB_0172b5d0;
      }
      local_1b0 = (undefined *)
                  (CONCAT44(local_1b0._4_4_,*(uint *)(plVar22 + 0x2d3) >> 1) & 0xffffffff00000001);
      local_1a0._0_4_ = 0x21;
      uVar19 = FUN_03850a90(plVar22[0x227],0x21,0,*(uint *)(plVar22 + 0x2d3) >> 1 & 1);
      lVar31 = plVar22[0x227];
      if (lVar31 == 0) goto LAB_0172b5c0;
      uVar12 = *(uint *)(plVar22 + 0x2d3) >> 1;
      local_1a0._0_4_ = *(uint *)(plVar22 + 0x2d3) >> 1 & 1;
      uVar18 = 0;
      if (*(long *)(lVar31 + 0x78) != 0) {
        uVar18 = *(uint *)(*(long *)(lVar31 + 0x78) + 0x18);
      }
      uVar21 = (uint)local_1a0;
      if (uVar18 <= (uint)local_1a0) {
        uVar21 = 0;
      }
      if (*(uint *)(lVar31 + 0x80) <= uVar21) {
        uVar21 = 0;
      }
      lVar31 = *(long *)(lVar31 + 0x88) + (long)(int)uVar21 * 0xe8;
      plVar24 = (long *)(lVar31 + 0x60);
      (**(code **)(*plVar24 + 0x18))(plVar24);
      (**(code **)(*plVar24 + 0x18))(plVar24);
      pcVar38 = *(char **)(lVar31 + 0x68);
      (**(code **)(*plVar36 + 0x18))(plVar36);
      uVar39 = local_1a0._4_4_;
      pcVar35 = (char *)plVar36[1];
      if (pcVar38 != pcVar35) {
        pcVar38 = *(char **)(lVar31 + 0x68);
        if (*pcVar38 != *pcVar35) goto LAB_0172b5c0;
        if (*pcVar38 != '\0') {
          uVar23 = 0;
          do {
            uVar32 = uVar23;
            if (pcVar38[uVar32 + 1] != pcVar35[uVar32 + 1]) goto LAB_0172b5c0;
            if (pcVar38[uVar32 + 1] == '\0') goto LAB_0172acf0;
            if (pcVar38[uVar32 + 2] != pcVar35[uVar32 + 2]) goto LAB_0172b5c0;
            if (pcVar38[uVar32 + 2] == '\0') {
              uVar32 = uVar32 + 1;
              goto LAB_0172acf0;
            }
            if ((uVar32 == 0x7fffe) || (pcVar38[uVar32 + 3] != pcVar35[uVar32 + 3]))
            goto LAB_0172b5c0;
            uVar23 = uVar32 + 3;
          } while (pcVar38[uVar32 + 3] != '\0');
          uVar32 = uVar32 + 2;
LAB_0172acf0:
          if (uVar32 >> 0x13 != 0) goto LAB_0172b5c0;
        }
      }
      local_1a0 = (long *)(CONCAT44(local_1a0._4_4_,uVar12) & 0xffffffff00000001);
      if (plVar22[0x227] == 0) {
        local_1b0 = (undefined *)(CONCAT44(local_1b0._4_4_,uVar12) & 0xffffffff00000001);
        local_1a0 = (long *)(CONCAT44(uVar39,uVar12) & 0xffffffff00000001);
      }
      else {
        uVar23 = FUN_03850368(plVar22[0x227],uVar12 & 1);
        uVar18 = uVar19;
        if ((uVar23 & 1) == 0) {
          local_1b0 = (undefined *)(CONCAT44(local_1b0._4_4_,uVar12) & 0xffffffff00000001);
          local_1a0 = (long *)(CONCAT44(local_1a0._4_4_,uVar12) & 0xffffffff00000001);
          if (plVar22[0x227] != 0) {
            uVar32 = FUN_03850368(plVar22[0x227],uVar12 & 1);
            uVar23 = (ulong)local_1b0;
            if ((((uVar32 & 1) == 0) && (plVar22[0x227] != 0)) &&
               (uVar32 = FUN_03850368(plVar22[0x227],(ulong)local_1b0 & 0xffffffff),
               (uVar32 & 1) == 0)) {
              uVar18 = FUN_0384fca4(plVar22[0x227],uVar23 & 0xffffffff);
              uVar18 = uVar19 | uVar18;
              goto joined_r0x0172ad6c;
            }
          }
        }
        else {
joined_r0x0172ad6c:
          if ((uVar18 & 1) == 0) goto LAB_0172b5c0;
        }
      }
      iVar17 = *(int *)(param_1 + 8);
      if (0 < iVar17) {
        puVar34 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
        *puVar34 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar34;
        iVar17 = *(int *)(param_1 + 8);
        if (0 < iVar17) {
          if (iVar17 - 1U == 0) {
            iVar17 = 1;
          }
          else {
            memmove(*(void **)(param_1 + 0x10),(void *)((long)*(void **)(param_1 + 0x10) + 8),
                    (ulong)(iVar17 - 1U) << 3);
            iVar17 = *(int *)(param_1 + 8);
          }
          iVar17 = iVar17 + -1;
          *(int *)(param_1 + 8) = iVar17;
        }
      }
      if ((uVar19 & 1) == 0 && iVar17 == 0) {
        (**(code **)(*plVar37 + 0x1b0))(plVar37);
        iVar17 = *(int *)(param_1 + 8);
      }
LAB_01729e14:
    } while (iVar17 != 0);
    bVar16 = true;
  }
LAB_0172b5d0:
  if ((*(int *)(param_1 + 4) != -1) && (bVar16)) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return 1;
}

