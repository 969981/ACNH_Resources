
undefined8 FUN_01e77180(long param_1)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long *plVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined *puVar23;
  uint uVar24;
  undefined4 uVar25;
  long lVar26;
  undefined *puVar27;
  char *pcVar28;
  char cVar29;
  char *pcVar30;
  char *pcVar31;
  ulong uVar32;
  char *pcVar33;
  undefined8 *puVar34;
  int iVar35;
  uint *puVar36;
  bool bVar37;
  int iVar38;
  uint uVar39;
  short *psVar40;
  long lVar41;
  int iVar42;
  uint *puVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int local_374;
  ulong local_358;
  byte local_344 [4];
  undefined8 local_340;
  float local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  ulong local_310;
  undefined8 uStack_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  undefined *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined *local_2c8;
  undefined *local_2c0;
  uint local_2b8;
  int local_2b4;
  undefined *local_2b0;
  int local_2a8;
  int iStack_2a4;
  char local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  int local_270;
  int local_26c;
  char *local_268;
  int local_260;
  int local_25c;
  undefined8 *local_258;
  undefined8 local_250;
  char *local_248;
  int local_240;
  int local_23c;
  long local_238;
  undefined8 local_230;
  float local_228;
  ulong local_220;
  float local_218;
  int local_214;
  undefined1 local_210;
  undefined8 local_20c;
  float local_204;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined2 local_1a8;
  char local_1a6;
  char local_1a5;
  undefined4 local_1a4;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_168;
  int local_164;
  int local_160;
  byte local_14c;
  undefined4 local_d8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  
  puVar9 = PTR_DAT_04bb3968;
  puVar23 = PTR_DAT_04bb27d0;
  local_358 = param_1 + 0xad58;
  lVar26 = *(long *)(param_1 + 8);
  lVar41 = *(long *)(lVar26 + 0x68);
  pcVar33 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    uVar39 = *(uint *)(lVar26 + 0x508);
    if (uVar39 == 0xffffffff) {
      uVar39 = *(uint *)(lVar26 + 0x50c);
      if (uVar39 == 0xffffffff) {
        pcVar28 = (char *)0x0;
      }
      else {
        pcVar30 = &DAT_05454358 + (ulong)uVar39 * 0x2d8;
        if (0x10 < uVar39) {
          pcVar30 = &DAT_05454358;
        }
        pcVar28 = (char *)0x0;
        if (*pcVar30 != '\0') {
          pcVar28 = pcVar30;
        }
      }
      if (pcVar28 != (char *)0x0) {
        pcVar33 = pcVar28 + 0x90;
      }
    }
    else {
      puVar27 = &DAT_053fe348 + (ulong)uVar39 * 0xba0;
      if (9 < uVar39) {
        puVar27 = &DAT_053fe348;
      }
      pcVar33 = puVar27 + 0x658;
    }
  }
  piVar2 = (int *)(param_1 + 0xef10);
  lVar26 = *(long *)PTR_DAT_04bb3968;
  if (lVar26 == 0) {
LAB_01e7731c:
    puVar43 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar39 = *(uint *)(param_1 + 0xb030);
    if ((int)*(uint *)(lVar26 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar26 + 0x169b8) != 0) &&
           (puVar43 = *(uint **)(*(long *)(lVar26 + 0x169b8) + 8), puVar43 != (uint *)0x0)) &&
          ((*(uint *)(lVar26 + 0x169d0) <= uVar39 ||
           (*(char *)(*(long *)(lVar26 + 0x169d8) + (long)(int)uVar39) != '\0')))) &&
         (((uVar39 < *puVar43 && (puVar43[1] != 0)) && ((ushort)puVar43[2] != 0)))) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar43 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar43 = (uint *)((ulong)(puVar43[1] * uVar39 + (uint)(ushort)puVar43[2] * 8 + iVar16) +
                          (long)puVar43);
        if (puVar43 != (uint *)0x0) goto LAB_01e77324;
      }
      goto LAB_01e7731c;
    }
    if (*(uint *)(lVar26 + 0x16ac8) <= uVar39) goto LAB_01e7731c;
    if (*(uint *)(lVar26 + 0x16ab8) <= uVar39) {
      uVar39 = 0;
    }
    puVar43 = *(uint **)(*(long *)(lVar26 + 0x16ac0) + (ulong)uVar39 * 8);
    if (puVar43 == (uint *)0x0) goto LAB_01e7731c;
  }
LAB_01e77324:
  pfVar1 = (float *)(lVar41 + 0x278);
  FUN_01e6fdd0(&local_b0,param_1);
  puVar10 = PTR_DAT_04bc1568;
  puVar27 = PTR_DAT_04bc1560;
  puVar36 = (uint *)(pcVar33 + 8);
  uVar39 = *puVar36;
  switch(uVar39) {
  case 0:
    local_250 = (char *)((ulong)local_250._4_4_ << 0x20);
    lVar26 = *(long *)PTR_DAT_04bb2720;
    if (lVar26 == 0) {
      puVar34 = &DAT_055c04a0;
    }
    else {
      puVar34 = &DAT_055c04a0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar34 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar16 = FUN_006bd550(*puVar34,0);
        puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar34 = &DAT_055c04a0;
        }
      }
    }
    local_250 = (char *)CONCAT44(*(undefined4 *)(puVar34 + 7),(undefined4)local_250);
    uVar12 = FUN_017baf44();
    local_248 = (char *)(CONCAT71(local_248._1_7_,uVar12) & 0xffffffffffffff01);
    local_258 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    pcVar28 = PTR_DAT_04bc2b20;
    if (*(byte *)(**(long **)puVar23 + 0x476) < 2) {
      lVar26 = *(long *)(param_1 + 8);
      if (lVar26 == 0) {
LAB_01e78b00:
        pcVar30 = (char *)0x0;
      }
      else {
        uVar39 = *(uint *)(lVar26 + 0x508);
        if (uVar39 != 0xffffffff) {
          puVar23 = &DAT_053fe348 + (ulong)uVar39 * 0xba0;
          if (9 < uVar39) {
            puVar23 = &DAT_053fe348;
          }
          pcVar28 = puVar23 + 0x658;
          goto LAB_01e78b10;
        }
        uVar39 = *(uint *)(lVar26 + 0x50c);
        if (uVar39 == 0xffffffff) goto LAB_01e78b00;
        pcVar31 = &DAT_05454358 + (ulong)uVar39 * 0x2d8;
        if (0x10 < uVar39) {
          pcVar31 = &DAT_05454358;
        }
        pcVar30 = (char *)0x0;
        if (*pcVar31 != '\0') {
          pcVar30 = pcVar31;
        }
      }
      if (pcVar30 != (char *)0x0) {
        pcVar28 = pcVar30 + 0x90;
      }
    }
LAB_01e78b10:
    fVar51 = (float)*(int *)(pcVar28 + 0x38) * 0.5;
    uVar39 = 0;
    if (fVar51 != (float)(int)fVar51) {
      uVar39 = (uint)(fVar51 < 0.0);
    }
    iVar16 = (int)fVar51 - uVar39;
    fVar51 = (float)*(int *)(pcVar28 + 0x3c) * 0.5;
    uVar39 = 0;
    if (fVar51 != (float)(int)fVar51) {
      uVar39 = (uint)(fVar51 < 0.0);
    }
    iVar38 = (int)fVar51 - uVar39;
    fVar51 = (float)*(int *)(pcVar28 + 0x48) * 0.5;
    uVar39 = 0;
    if (fVar51 != (float)(int)fVar51) {
      uVar39 = (uint)(fVar51 < 0.0);
    }
    iVar35 = (int)fVar51 - uVar39;
    fVar51 = (float)*(int *)(pcVar28 + 0x4c) * 0.5;
    uVar39 = 0;
    if (fVar51 != (float)(int)fVar51) {
      uVar39 = (uint)(fVar51 < 0.0);
    }
    iVar42 = (int)fVar51 - uVar39;
    iVar14 = iVar16;
    if (iVar35 <= iVar16) {
      iVar14 = iVar35;
    }
    if (iVar16 <= iVar35) {
      iVar16 = iVar35;
    }
    iVar35 = iVar38;
    if (iVar38 <= iVar42) {
      iVar35 = iVar42;
    }
    if (iVar42 <= iVar38) {
      iVar38 = iVar42;
    }
    if (iVar35 + 1 == iVar38) {
      return 0;
    }
    local_374 = 0;
    puVar23 = PTR_DAT_04bb2010 + 0x10;
    iVar42 = iVar14;
    do {
      fVar51 = (float)iVar42 * 10.0 + 2.5;
      fVar52 = (float)iVar38 * 10.0 + 2.5;
      local_278 = (char *)CONCAT44((int)((float)(int)fVar52 / 5.0) - (uint)(fVar52 < 0.0),
                                   (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0));
      local_280 = puVar23;
      uVar19 = FUN_01a5010c(&local_258,0,&local_280);
      lVar26 = *(long *)PTR_DAT_04bbbc68;
      if ((((((lVar26 != 0) && (*(long *)(lVar26 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar26 + 0xb0) + 8) != 0)) &&
           ((*(long *)(lVar26 + 0x488) != 0 && (*(long *)(*(long *)(lVar26 + 0x488) + 8) != 0)))) &&
          (*(long *)(lVar26 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) != 0)) {
        uVar39 = FUN_0277d6c4();
        uVar39 = (uVar39 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar39 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar39 * 8) != 0)) {
          FUN_0124c030(&local_320,uVar19);
          iVar15 = FUN_0123db50(&local_318,local_310);
          if (iVar15 - 0x23U < 9) {
            local_374 = local_374 + 1;
          }
        }
      }
      if (iVar42 < iVar16) {
        iVar42 = iVar42 + 1;
      }
      else {
        iVar38 = iVar38 + 1;
        iVar42 = iVar14;
      }
    } while ((iVar14 != iVar42) || (iVar35 + 1 != iVar38));
    if (local_374 < 3) {
      return 0;
    }
    uVar39 = *puVar36;
  default:
    if ((uVar39 | 4) != 6) {
      lVar26 = *(long *)(param_1 + 8);
      bVar37 = false;
      goto LAB_01e790a8;
    }
    lVar26 = *(long *)(param_1 + 8);
    if (*(int *)(lVar26 + 0x750) != 2) {
      if ((*(int *)(lVar26 + 0x178) == 0) && (*(char *)(param_1 + 0xad5d) < '\0')) {
        uVar32 = FUN_021dd780();
        lVar26 = *(long *)(param_1 + 8);
        if ((uVar32 & 1) != 0) goto LAB_01e78d80;
      }
      bVar37 = true;
LAB_01e790a8:
      local_258 = (undefined8 *)CONCAT44(local_258._4_4_,*(undefined4 *)(lVar26 + 0x230));
      FUN_021e8490(&local_258,pfVar1,param_1 + 0x188,1,0);
      puVar23 = PTR_DAT_04bb27c8;
      uVar39 = (uint)*(ushort *)(param_1 + 0x18c);
      uVar4 = *(ushort *)(param_1 + 400);
      if (*(ushort *)(param_1 + 0x18c) <= uVar4) {
        uVar5 = *(ushort *)(param_1 + 0x192);
        if (*(ushort *)(param_1 + 0x18e) <= uVar5) {
          uVar45 = (uint)*(ushort *)(param_1 + 0x18e);
          if (bVar37) {
            do {
              uVar24 = uVar45;
              do {
                if (((((int)uVar39 < *(int *)(pcVar33 + 0x38)) ||
                     (*(int *)(pcVar33 + 0x48) < (int)uVar39)) ||
                    ((int)uVar24 < *(int *)(pcVar33 + 0x3c))) ||
                   (*(int *)(pcVar33 + 0x4c) < (int)uVar24)) {
                  lVar26 = *(long *)(param_1 + 0x1c8);
                  uVar7 = (uVar39 - *(ushort *)(param_1 + 0x188)) +
                          *(int *)(lVar26 + 0x1c) * (uVar24 - *(ushort *)(param_1 + 0x18a));
                  uVar6 = 1 << (ulong)(uVar7 & 0x1f);
                  uVar3 = *(uint *)(*(long *)(lVar26 + 0x10) + (long)((int)uVar7 >> 5) * 4);
                  if ((uVar6 & uVar3) != 0) {
                    *(uint *)(*(long *)(lVar26 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4)
                         = uVar3 & (uVar6 ^ 0xffffffff);
                    *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
                  }
                }
                local_258 = (undefined8 *)CONCAT44(local_258._4_4_,(float)(int)uVar39 * 5.0 + 2.5);
                local_250 = (char *)CONCAT44(local_250._4_4_,(float)(int)uVar24 * 5.0 + 2.5);
                if (((*(long *)puVar23 == 0) ||
                    (lVar26 = *(long *)(*(long *)puVar23 + 0xa8), lVar26 == 0)) ||
                   (*(uint *)(lVar26 + 0x38) <= uVar39 || *(uint *)(lVar26 + 0x3c) <= uVar24)) {
LAB_01e793e0:
                  lVar26 = *(long *)(param_1 + 0x1c8);
                  uVar7 = (uVar39 - *(ushort *)(param_1 + 0x188)) +
                          *(int *)(lVar26 + 0x1c) * (uVar24 - *(ushort *)(param_1 + 0x18a));
                  uVar6 = 1 << (ulong)(uVar7 & 0x1f);
                  uVar3 = *(uint *)(*(long *)(lVar26 + 0x10) + (long)((int)uVar7 >> 5) * 4);
                  if ((uVar6 & uVar3) != 0) {
                    *(uint *)(*(long *)(lVar26 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4)
                         = uVar3 & (uVar6 ^ 0xffffffff);
                    *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
                  }
                }
                else {
                  uVar3 = uVar39 + *(uint *)(lVar26 + 0x38) * uVar24;
                  lVar41 = *(long *)(lVar26 + 0x70);
                  if (*(uint *)(lVar26 + 0x68) <= uVar3 || lVar41 == 0) goto LAB_01e793e0;
                  uVar32 = (ulong)local_320 >> 0x20;
                  local_320 = (undefined8 *)((ulong)local_320 & 0xffffffff00000000);
                  if ((((*(uint *)(lVar41 + (long)(int)uVar3 * 4) & 1) == 0) ||
                      (local_320 = (undefined8 *)CONCAT44((int)uVar32,3),
                      (*(uint *)(lVar41 + (long)(int)uVar3 * 4) >> 3 & 1) != 0)) ||
                     (uVar32 = FUN_02b60610(&local_258), (uVar32 & 1) != 0)) goto LAB_01e793e0;
                }
                uVar24 = uVar24 + 1;
              } while (uVar5 + 1 != uVar24);
              bVar11 = uVar39 != uVar4;
              uVar39 = uVar39 + 1;
            } while (bVar11);
          }
          else {
            uVar24 = uVar45;
            do {
              do {
                if (((((int)uVar39 < *(int *)(pcVar33 + 0x38)) ||
                     (*(int *)(pcVar33 + 0x48) < (int)uVar39)) ||
                    ((int)uVar24 < *(int *)(pcVar33 + 0x3c))) ||
                   (*(int *)(pcVar33 + 0x4c) < (int)uVar24)) {
                  lVar26 = *(long *)(param_1 + 0x1c8);
                  uVar7 = (uVar39 - *(ushort *)(param_1 + 0x188)) +
                          *(int *)(lVar26 + 0x1c) * (uVar24 - *(ushort *)(param_1 + 0x18a));
                  uVar6 = 1 << (ulong)(uVar7 & 0x1f);
                  uVar3 = *(uint *)(*(long *)(lVar26 + 0x10) + (long)((int)uVar7 >> 5) * 4);
                  if ((uVar6 & uVar3) != 0) {
                    *(uint *)(*(long *)(lVar26 + 0x10) + ((long)((ulong)uVar7 << 0x20) >> 0x25) * 4)
                         = uVar3 & (uVar6 ^ 0xffffffff);
                    *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
                  }
                }
                uVar24 = uVar24 + 1;
              } while (uVar5 + 1 != uVar24);
              bVar11 = uVar39 != uVar4;
              uVar39 = uVar39 + 1;
              uVar24 = uVar45;
            } while (bVar11);
          }
        }
      }
      if (*puVar36 == 7) {
        lVar26 = *(long *)PTR_DAT_04bb3968;
        iVar38 = *(int *)(lVar26 + 0x2e44);
        iVar16 = *(int *)(lVar26 + 0x2e54) + 1;
        if (iVar16 != iVar38) {
          iVar35 = *(int *)(lVar26 + 0x2e40);
          iVar14 = iVar35;
          iVar42 = iVar35;
          do {
            iVar15 = iVar42 - (uint)*(ushort *)(param_1 + 0x188);
            if (((-1 < iVar15) && (iVar15 < *(int *)(param_1 + 0x194))) &&
               ((iVar8 = iVar38 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar8 &&
                (iVar8 < *(int *)(param_1 + 0x198))))) {
              lVar41 = *(long *)(param_1 + 0x1c8);
              uVar24 = iVar15 + *(int *)(lVar41 + 0x1c) * iVar8;
              uVar45 = 1 << (ulong)(uVar24 & 0x1f);
              uVar39 = *(uint *)(*(long *)(lVar41 + 0x10) + (long)((int)uVar24 >> 5) * 4);
              if ((uVar45 & uVar39) != 0) {
                *(uint *)(*(long *)(lVar41 + 0x10) + ((long)((ulong)uVar24 << 0x20) >> 0x25) * 4) =
                     uVar39 & (uVar45 ^ 0xffffffff);
                *(int *)(lVar41 + 0x18) = *(int *)(lVar41 + 0x18) + -1;
                iVar14 = *(int *)(lVar26 + 0x2e40);
              }
            }
            if (iVar42 < *(int *)(lVar26 + 0x2e50)) {
              iVar42 = iVar42 + 1;
            }
            else {
              iVar38 = iVar38 + 1;
              iVar42 = iVar14;
            }
          } while (iVar35 != iVar42 || iVar16 != iVar38);
        }
      }
      lVar41 = *(long *)(param_1 + 8);
      lVar26 = *(long *)(param_1 + 0x1c8);
      uVar45 = *(uint *)(lVar26 + 0x18);
      uVar39 = *(uint *)(lVar41 + 0x288);
      *(undefined4 *)(lVar41 + 0x288) = *(undefined4 *)(lVar41 + 0x28c);
      uVar39 = uVar39 ^ uVar39 << 0xb;
      *(undefined4 *)(lVar41 + 0x28c) = *(undefined4 *)(lVar41 + 0x290);
      uVar24 = *(uint *)(lVar41 + 0x294);
      *(uint *)(lVar41 + 0x290) = uVar24;
      uVar39 = uVar39 >> 8 ^ uVar24 >> 0x13 ^ uVar39 ^ uVar24;
      *(uint *)(lVar41 + 0x294) = uVar39;
      if (0 < (int)*(uint *)(lVar26 + 8)) {
        uVar24 = 0;
        uVar32 = (ulong)uVar45 * (ulong)uVar39 >> 0x20;
        do {
          if ((*(uint *)(*(long *)(lVar26 + 0x10) + (ulong)(uVar24 >> 5) * 4) >>
               (ulong)(uVar24 & 0x1f) & 1) != 0) {
            if ((int)uVar32 == 0) {
              iVar16 = *(int *)(lVar26 + 0x1c);
              iVar38 = 0;
              if (iVar16 != 0) {
                iVar38 = (int)uVar24 / iVar16;
              }
              fVar52 = (float)(int)((uVar24 - iVar38 * iVar16) + (uint)*(ushort *)(param_1 + 0x188))
                       * 5.0 + 2.5;
              fVar51 = (float)(int)(iVar38 + (uint)*(ushort *)(param_1 + 0x18a)) * 5.0 + 2.5;
              if ((*puVar36 < 7) && ((1 << (ulong)(*puVar36 & 0x1f) & 0x66U) != 0)) {
                iVar16 = FUN_006f0400(*(float *)(pcVar33 + 0x18) - fVar52,
                                      *(float *)(pcVar33 + 0x20) - fVar51);
                lVar26 = *(long *)(param_1 + 8);
                uVar39 = *(uint *)(lVar26 + 0x288);
                *(undefined4 *)(lVar26 + 0x288) = *(undefined4 *)(lVar26 + 0x28c);
                uVar39 = uVar39 ^ uVar39 << 0xb;
                *(undefined4 *)(lVar26 + 0x28c) = *(undefined4 *)(lVar26 + 0x290);
                uVar45 = *(uint *)(lVar26 + 0x294);
                *(uint *)(lVar26 + 0x290) = uVar45;
                uVar39 = uVar39 >> 8 ^ uVar45 >> 0x13 ^ uVar39 ^ uVar45;
                *(uint *)(lVar26 + 0x294) = uVar39;
                iVar16 = iVar16 + (int)(long)((float)((int)((ulong)uVar39 * 0x1f >> 0x20) + -0xf) *
                                             11930465.0);
                pcVar28 = PTR_DAT_04bc1560;
                puVar34 = (undefined8 *)PTR_DAT_04bc1568;
              }
              else {
                lVar26 = *(long *)(param_1 + 8);
                uVar39 = *(uint *)(lVar26 + 0x288);
                *(undefined4 *)(lVar26 + 0x288) = *(undefined4 *)(lVar26 + 0x28c);
                uVar39 = uVar39 ^ uVar39 << 0xb;
                *(undefined4 *)(lVar26 + 0x28c) = *(undefined4 *)(lVar26 + 0x290);
                uVar45 = *(uint *)(lVar26 + 0x294);
                *(uint *)(lVar26 + 0x290) = uVar45;
                uVar39 = uVar39 >> 8 ^ uVar45 >> 0x13 ^ uVar39 ^ uVar45;
                *(uint *)(lVar26 + 0x294) = uVar39;
                iVar16 = (int)(long)((float)((int)((ulong)uVar39 * 0x1f >> 0x20) + -0xf) *
                                    11930465.0);
                pcVar28 = PTR_DAT_04bc1560;
                puVar34 = (undefined8 *)PTR_DAT_04bc1568;
              }
              PTR_DAT_04bc1560 = pcVar28;
              PTR_DAT_04bc1568 = (undefined *)puVar34;
              if (bVar37) goto LAB_01e78de0;
              if (*puVar43 == 0) goto LAB_01e79e0c;
              cVar29 = *pcVar28;
              goto LAB_01e79a14;
            }
            uVar32 = (ulong)((int)uVar32 - 1);
          }
          uVar24 = uVar24 + 1;
        } while (*(uint *)(lVar26 + 8) != uVar24);
      }
      return 0;
    }
LAB_01e78d80:
    iVar16 = *(int *)(*(long *)(lVar26 + 0x68) + 0x2b4);
    fVar52 = (float)(int)((int)((float)(int)*(float *)(lVar41 + 0x278) / 5.0) -
                         (uint)(*(float *)(lVar41 + 0x278) < 0.0)) * 5.0 + 2.5;
    fVar51 = (float)(int)((int)((float)(int)*(float *)(lVar41 + 0x280) / 5.0) -
                         (uint)(*(float *)(lVar41 + 0x280) < 0.0)) * 5.0 + 2.5;
LAB_01e78de0:
    FUN_01e63f1c(&local_258);
    local_258._0_4_ = 0x16;
    local_200 = 1;
    local_230 = (undefined *)(ulong)(uint)fVar52;
    local_1f8 = 0x100000002;
    local_1ef = 1;
    local_228 = fVar51;
    local_214 = iVar16;
    if (*piVar2 < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar2,&local_258);
    }
    FUN_01e63f1c(&local_258);
    puVar9 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,1);
    local_17c = local_b0;
    local_178 = local_ac;
    if (*puVar43 != 0) {
      cVar29 = *PTR_DAT_04bc1560;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar39 = *(uint *)(puVar9 + 0x9c);
          if (-1 < (int)uVar39) {
            pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
            goto LAB_01e78f38;
          }
          if (uVar39 != 0xffffffff) break;
        }
        puVar36 = (uint *)(ulong)*puVar43;
        pcVar33 = (char *)0x0;
        if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e78f38;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
        pcVar33 = (char *)0x0;
        if (uVar32 == 0) goto LAB_01e78f38;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != -0x71543da9) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            pcVar33 = (char *)0x0;
            goto LAB_01e78f38;
          }
        }
        iVar16 = 0;
        if (*piVar21 != -1) {
          iVar16 = *piVar21;
        }
        *(int *)(puVar9 + 0x9c) = iVar16;
      } while (*puVar43 != 0);
    }
    pcVar33 = (char *)0x0;
LAB_01e78f38:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_320 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar33 != (char *)0x0) {
      local_318 = pcVar33;
    }
    uVar39 = 0;
    do {
      pcVar33 = "";
      if (uVar39 < 0x36) {
        pcVar33 = *(char **)(puVar23 + (ulong)uVar39 * 8 + 0x370);
      }
      (*(code *)local_320[3])(&local_320);
      if (pcVar33 == local_318) {
LAB_01e7902c:
        local_b4 = uVar39;
        break;
      }
      if (*pcVar33 == *local_318) {
        if (*pcVar33 == '\0') goto LAB_01e7902c;
        lVar26 = 0x7fffe;
        pcVar28 = local_318;
        while( true ) {
          if (pcVar33[1] != pcVar28[1]) break;
          if (pcVar33[1] == '\0') goto LAB_01e7902c;
          if (pcVar33[2] != pcVar28[2]) break;
          if (pcVar33[2] == '\0') goto LAB_01e7902c;
          if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
          lVar26 = lVar26 + -3;
          pcVar28 = pcVar28 + 3;
          pcVar33 = pcVar33 + 3;
          if (cVar29 == '\0') goto LAB_01e7902c;
        }
      }
      uVar45 = 0x36;
      if ((int)uVar39 < 0x36) {
        uVar45 = uVar39 + 1;
      }
      uVar39 = uVar45;
    } while (uVar45 != 0x36);
    *(long *)(param_1 + 0x125f8) = param_1;
    puVar23 = PTR_LAB_04bc1950;
    *(undefined8 *)(param_1 + 0x12608) = 0;
LAB_01e79058:
    local_1f8 = CONCAT44(1,(undefined4)local_1f8);
    local_250 = (char *)(param_1 + 0x125f0);
    local_1f0 = 1;
    *(undefined **)(param_1 + 0x12600) = puVar23;
    break;
  case 4:
  case 0xb:
    psVar40 = (short *)(pcVar33 + 0x50);
    if (*psVar40 != -2) {
      local_250 = (char *)((ulong)local_250._4_4_ << 0x20);
      lVar26 = *(long *)PTR_DAT_04bb2720;
      if (lVar26 == 0) {
        puVar34 = &DAT_055c04a0;
      }
      else {
        puVar34 = &DAT_055c04a0;
        if (*(long *)(lVar26 + 0x330) != 0) {
          puVar34 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
          iVar16 = FUN_006bd550(*puVar34,0);
          puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar16 != 0x758f7eaf) {
            puVar34 = &DAT_055c04a0;
          }
        }
      }
      local_250 = (char *)CONCAT44(*(undefined4 *)(puVar34 + 7),(undefined4)local_250);
      uVar12 = FUN_017baf44();
      local_248 = (char *)(CONCAT71(local_248._1_7_,uVar12) & 0xffffffffffffff01);
      local_258 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
      uVar19 = FUN_01a5190c(&local_258,1,pcVar33 + 0x60,0);
      uVar32 = FUN_0277d7b4(uVar19,psVar40);
      if ((uVar32 & 1) == 0) {
        uVar19 = FUN_01a5190c(&local_258,0,pcVar33 + 0x60,0);
        uVar32 = FUN_0277d7b4(uVar19,psVar40);
        if ((uVar32 & 1) == 0) {
          return 0;
        }
      }
    }
    fVar51 = *(float *)(lVar41 + 0x278) + 2.5;
    fVar52 = *(float *)(lVar41 + 0x280) + 2.5;
    uVar39 = *puVar36;
    local_288 = 0;
    local_280 = PTR_DAT_04bbc5d8 + 0x10;
    pcVar28 = PTR_DAT_04bb2018 + 0x10;
    fVar51 = (float)((int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0) & 0xffff) * 5.0 + -55.0;
    fVar52 = (float)((int)((float)(int)fVar52 / 5.0) - (uint)(fVar52 < 0.0) & 0xffff) * 5.0 + -55.0;
    local_270 = (int)((float)(int)fVar51 / 10.0) - (uint)(fVar51 < 0.0);
    local_260 = local_270 + 0xb;
    local_26c = (int)((float)(int)fVar52 / 10.0) - (uint)(fVar52 < 0.0);
    local_25c = local_26c + 0xb;
    local_290 = PTR_DAT_04bb2010 + 0x10;
    local_298 = 0xfffe;
    local_278 = pcVar28;
    local_268 = pcVar28;
    FUN_0277d4ac(&local_298);
    lVar26 = *(long *)(param_1 + 8);
    if (uVar39 == 4) {
      if (*(int *)(lVar26 + 0x750) != 2) {
        if ((*(int *)(lVar26 + 0x178) == 0) && (*(char *)(param_1 + 0xad5d) < '\0')) {
          uVar32 = FUN_021dd780();
          if ((uVar32 & 1) != 0) goto LAB_01e778ec;
          goto LAB_01e77988;
        }
        goto LAB_01e7798c;
      }
LAB_01e778ec:
      fVar51 = *pfVar1;
      if ((fVar51 < (float)(*(int *)(pcVar33 + 0x68) + 2) * 5.0) ||
         ((float)(*(int *)(pcVar33 + 0x68) + 7) * 5.0 + 5.0 <= fVar51)) {
LAB_01e77988:
        lVar26 = *(long *)(param_1 + 8);
        goto LAB_01e7798c;
      }
      fVar52 = *(float *)(lVar41 + 0x280);
      lVar26 = *(long *)(param_1 + 8);
      if ((fVar52 < (float)*(int *)(pcVar33 + 0x6c) * 5.0) ||
         ((float)(*(int *)(pcVar33 + 0x6c) + 3) * 5.0 + 5.0 <= fVar52)) goto LAB_01e7798c;
      bVar37 = true;
      fVar50 = *(float *)(lVar41 + 0x27c);
      iVar35 = *(int *)(*(long *)(lVar26 + 0x68) + 0x2b4);
    }
    else {
LAB_01e7798c:
      local_258 = (undefined8 *)CONCAT44(local_258._4_4_,*(undefined4 *)(lVar26 + 0x230));
      FUN_021e8490(&local_258,pfVar1,param_1 + 0x188,1,0);
      iVar38 = local_270;
      iVar16 = local_25c + 1;
      local_240 = local_270;
      local_23c = local_26c;
      local_258 = &local_278;
      local_250 = (char *)&local_268;
      local_248 = pcVar28;
      if (iVar16 == local_26c) {
        fVar51 = 0.0;
        fVar50 = 0.0;
        iVar35 = 0;
        fVar52 = 0.0;
      }
      else {
        fVar52 = 0.0;
        fVar44 = 3.4028235e+38;
        fVar50 = 0.0;
        fVar51 = 0.0;
        iVar35 = 0;
        puVar34 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
        do {
          local_340 = local_340 & 0xffffffff00000000;
          uVar32 = FUN_021e7590(&local_248,pfVar1,&local_330,&local_340,uVar39 == 4);
          if ((uVar32 & 1) != 0) {
            fVar46 = (float)local_330;
            fVar49 = *(float *)(lVar41 + 0x278) - (float)local_330;
            fVar48 = (float)local_328;
            fVar47 = *(float *)(lVar41 + 0x280) - (float)local_328;
            fVar49 = fVar47 * fVar47 + fVar49 * fVar49;
            if (fVar49 < fVar44) {
              local_318 = (char *)((ulong)local_318 & 0xffffffff00000000);
              fVar50 = local_330._4_4_;
              iVar35 = (int)local_340;
              fVar51 = (float)local_240 * 10.0 + 2.5;
              fVar52 = (float)local_23c * 10.0 + 2.5;
              local_288 = CONCAT44((int)((float)(int)fVar52 / 5.0) - (uint)(fVar52 < 0.0),
                                   (int)((float)(int)fVar51 / 5.0) - (uint)(fVar51 < 0.0));
              lVar26 = *(long *)PTR_DAT_04bb2720;
              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x330) == 0)) {
                puVar17 = &DAT_055c04a0;
              }
              else {
                puVar17 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
                iVar14 = FUN_006bd550(*puVar17,0);
                puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar14 != 0x758f7eaf) {
                  puVar17 = &DAT_055c04a0;
                }
              }
              local_318 = (char *)CONCAT44(*(undefined4 *)(puVar17 + 7),(undefined4)local_318);
              uVar12 = FUN_017baf44();
              local_310 = CONCAT71(local_310._1_7_,uVar12) & 0xffffffffffffff01;
              local_320 = puVar34;
              puVar18 = (ulong *)FUN_01a5010c(&local_320,0,&local_290);
              local_298 = *puVar18;
              uVar45 = FUN_02201b50(&local_298);
              local_358 = (ulong)uVar45;
              fVar52 = fVar48;
              fVar44 = fVar49;
              fVar51 = fVar46;
            }
          }
          if (local_240 < *(int *)((long)local_250 + 8)) {
            local_240 = local_240 + 1;
          }
          else {
            local_23c = local_23c + 1;
            local_240 = *(int *)(local_258 + 1);
          }
        } while (iVar38 != local_240 || iVar16 != local_23c);
      }
      bVar37 = false;
    }
    if (((fVar51 == 0.0) && (fVar50 == 0.0)) && (fVar52 == 0.0)) {
      return 0;
    }
    local_320 = (undefined8 *)(PTR_DAT_04bc1968 + 0x10);
    fVar44 = (float)(int)(float)local_288 * 5.0 + 5.0;
    fVar46 = (float)(int)local_288._4_4_ * 5.0 + 5.0;
    uStack_308 = *(undefined8 *)(pcVar33 + 0x18);
    local_300 = (undefined *)CONCAT44(local_300._4_4_,*(undefined4 *)(pcVar33 + 0x20));
    fVar49 = fVar44 + -12.5;
    fVar48 = fVar46 + -12.5;
    local_318._0_4_ = (undefined4)*(undefined8 *)puVar36;
    local_318 = (char *)CONCAT44(fVar44,(undefined4)local_318);
    local_2b8 = (uint)(float)local_288;
    local_2b4 = local_288._4_4_;
    local_2a8 = (int)(float)local_288 + 1;
    iStack_2a4 = local_288._4_4_ + 1;
    local_2f0 = PTR_DAT_04bb2010 + 0x10;
    local_2a0 = pcVar33[0x80];
    local_2d0 = (undefined4)local_298;
    local_2cc = local_298._4_4_;
    local_310 = (ulong)(uint)fVar46 << 0x20;
    local_2f8 = PTR_DAT_04bbc1a0 + 0x10;
    iVar16 = (int)((float)(int)fVar49 / 5.0) - (uint)(fVar49 < 0.0);
    iVar38 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
    local_2e8 = (undefined *)CONCAT44(iVar38,iVar16);
    local_2d8 = CONCAT44(iVar38 + 5,iVar16 + 5);
    local_2e0 = local_2f0;
    local_2c8 = local_2f8;
    local_2c0 = local_2f0;
    local_2b0 = local_2f0;
    FUN_021dd4e0(&local_320,*(undefined8 *)(param_1 + 8));
    local_228 = fVar52;
    if (uVar39 == 4) {
      if (!bVar37) {
        lVar26 = *(long *)(param_1 + 8);
        uVar39 = *(uint *)(lVar26 + 0x288);
        *(undefined4 *)(lVar26 + 0x288) = *(undefined4 *)(lVar26 + 0x28c);
        uVar39 = uVar39 ^ uVar39 << 0xb;
        *(undefined4 *)(lVar26 + 0x28c) = *(undefined4 *)(lVar26 + 0x290);
        uVar45 = *(uint *)(lVar26 + 0x294);
        *(uint *)(lVar26 + 0x290) = uVar45;
        uVar39 = uVar39 >> 8 ^ uVar45 >> 0x13 ^ uVar39 ^ uVar45;
        *(uint *)(lVar26 + 0x294) = uVar39;
        iVar35 = iVar35 + (int)(long)((((float)(uVar39 >> 9 | 0x3f800000) + -1.0) * 90.0 + -45.0) *
                                     11930465.0);
      }
      FUN_01e63f1c(&local_258);
      local_258._0_4_ = 0x16;
      local_200 = 1;
      local_230 = (undefined *)CONCAT44(fVar50,fVar51);
      local_1f8 = 0x100000002;
      local_1ef = 1;
      local_214 = iVar35;
      if (*piVar2 < *(int *)(param_1 + 0xef14)) {
        FUN_021920b0(piVar2,&local_258);
      }
      FUN_01e63f1c(&local_258);
      puVar9 = PTR_DAT_04bc1568;
      puVar23 = PTR_DAT_04bc1560;
      local_258 = (undefined8 *)CONCAT44(local_258._4_4_,1);
      local_17c = local_b0;
      local_178 = local_ac;
      if (*puVar43 != 0) {
        cVar29 = *PTR_DAT_04bc1560;
        do {
          if (cVar29 == '\0') {
            cVar29 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar23 = 1;
            *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar39 = *(uint *)(puVar9 + 0x9c);
            if (-1 < (int)uVar39) {
              pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
              goto LAB_01e77d28;
            }
            if (uVar39 != 0xffffffff) break;
          }
          puVar36 = (uint *)(ulong)*puVar43;
          pcVar33 = (char *)0x0;
          if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e77d28;
          lVar26 = 0xc;
          if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
          if (lVar26 == 0) break;
          uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
          *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
          pcVar33 = (char *)0x0;
          if (uVar32 == 0) goto LAB_01e77d28;
          piVar21 = (int *)(lVar26 + 4);
          while (piVar21[-1] != -0x71543da9) {
            piVar21 = piVar21 + 2;
            uVar32 = uVar32 - 1;
            if (uVar32 == 0) {
              pcVar33 = (char *)0x0;
              goto LAB_01e77d28;
            }
          }
          iVar16 = 0;
          if (*piVar21 != -1) {
            iVar16 = *piVar21;
          }
          *(int *)(puVar9 + 0x9c) = iVar16;
        } while (*puVar43 != 0);
      }
      pcVar33 = (char *)0x0;
LAB_01e77d28:
      puVar23 = PTR_s_cDefault_04bc1610;
      local_330 = PTR_DAT_04bb2020 + 0x10;
      local_328 = *(char **)PTR_PTR_04bc1908;
      if (pcVar33 != (char *)0x0) {
        local_328 = pcVar33;
      }
      uVar39 = 0;
      do {
        pcVar33 = "";
        if (uVar39 < 0x36) {
          pcVar33 = *(char **)(puVar23 + (ulong)uVar39 * 8 + 0x370);
        }
        (**(code **)(local_330 + 0x18))(&local_330);
        if (pcVar33 == local_328) {
LAB_01e77e1c:
          local_b4 = uVar39;
          break;
        }
        if (*pcVar33 == *local_328) {
          if (*pcVar33 == '\0') goto LAB_01e77e1c;
          lVar26 = 0x7fffe;
          pcVar28 = local_328;
          while( true ) {
            if (pcVar33[1] != pcVar28[1]) break;
            if (pcVar33[1] == '\0') goto LAB_01e77e1c;
            if (pcVar33[2] != pcVar28[2]) break;
            if (pcVar33[2] == '\0') goto LAB_01e77e1c;
            if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
            lVar26 = lVar26 + -3;
            pcVar28 = pcVar28 + 3;
            pcVar33 = pcVar33 + 3;
            if (cVar29 == '\0') goto LAB_01e77e1c;
          }
        }
        uVar45 = 0x36;
        if ((int)uVar39 < 0x36) {
          uVar45 = uVar39 + 1;
        }
        uVar39 = uVar45;
      } while (uVar45 != 0x36);
      local_1f0 = 1;
LAB_01e77e28:
      local_1f8 = CONCAT44(1,(undefined4)local_1f8);
    }
    else {
      fVar44 = (float)(int)(float)local_288 * 5.0 + 2.5;
      fVar52 = (float)(int)local_288._4_4_ * 5.0 + 2.5;
      local_340 = CONCAT44(local_340._4_4_,fVar44);
      lVar26 = *(long *)PTR_DAT_04bb27c8;
      local_338 = fVar52;
      if (lVar26 == 0) {
        fVar46 = -500.0;
      }
      else if ((*(long *)(lVar26 + 0xa8) == 0) || (*(char *)(lVar26 + 0x11c8) != '\0')) {
        fVar46 = -500.0;
      }
      else {
        fVar46 = (float)FUN_0093a950(lVar26 + 0x28,&local_340,0);
      }
      puVar34 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar34 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(&DAT_052461c0);
          puVar34 = &DAT_05240280;
          if (iVar16 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar34 = &DAT_05240280;
        }
      }
      puVar23 = PTR_DAT_04bb2020;
      local_258 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      local_250 = "NpcFtrHeight";
      if (((puVar34[0x227] != 0) && (lVar26 = *(long *)(puVar34[0x227] + 0x78), lVar26 != 0)) &&
         (plVar20 = *(long **)(lVar26 + 0x48), plVar20 != (long *)0x0)) {
        (**(code **)(*plVar20 + 0x30))(local_358 & 0xffffffff,plVar20,&local_258);
      }
      FUN_01e63f1c(&local_258);
      puVar27 = PTR_DAT_04bc1568;
      puVar9 = PTR_DAT_04bc1560;
      local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x41);
      local_17c = local_b0;
      local_178 = local_ac;
      if (*puVar43 != 0) {
        cVar29 = *PTR_DAT_04bc1560;
        do {
          if (cVar29 == '\0') {
            cVar29 = '\x01';
            *(undefined8 *)puVar27 = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 8) = 0xffffffffffffffff;
            *puVar9 = 1;
            *(undefined8 *)(puVar27 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar27 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar39 = *(uint *)(puVar27 + 0x9c);
            if (-1 < (int)uVar39) {
              pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
              goto LAB_01e79708;
            }
            if (uVar39 != 0xffffffff) break;
          }
          puVar36 = (uint *)(ulong)*puVar43;
          pcVar33 = (char *)0x0;
          if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e79708;
          lVar26 = 0xc;
          if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
          if (lVar26 == 0) break;
          uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
          *(undefined4 *)(puVar27 + 0x9c) = 0xfffffffe;
          pcVar33 = (char *)0x0;
          if (uVar32 == 0) goto LAB_01e79708;
          piVar21 = (int *)(lVar26 + 4);
          while (piVar21[-1] != -0x71543da9) {
            piVar21 = piVar21 + 2;
            uVar32 = uVar32 - 1;
            if (uVar32 == 0) {
              pcVar33 = (char *)0x0;
              goto LAB_01e79708;
            }
          }
          iVar16 = 0;
          if (*piVar21 != -1) {
            iVar16 = *piVar21;
          }
          *(int *)(puVar27 + 0x9c) = iVar16;
        } while (*puVar43 != 0);
      }
      pcVar33 = (char *)0x0;
LAB_01e79708:
      puVar9 = PTR_s_cDefault_04bc1610;
      local_330 = puVar23 + 0x10;
      local_328 = *(char **)PTR_PTR_04bc1908;
      if (pcVar33 != (char *)0x0) {
        local_328 = pcVar33;
      }
      uVar39 = 0;
      do {
        pcVar33 = "";
        if (uVar39 < 0x36) {
          pcVar33 = *(char **)(puVar9 + (ulong)uVar39 * 8 + 0x370);
        }
        (**(code **)(local_330 + 0x18))(&local_330);
        if (pcVar33 == local_328) {
LAB_01e797fc:
          local_b4 = uVar39;
          break;
        }
        if (*pcVar33 == *local_328) {
          if (*pcVar33 == '\0') goto LAB_01e797fc;
          lVar26 = 0x7fffe;
          pcVar28 = local_328;
          while( true ) {
            if (pcVar33[1] != pcVar28[1]) break;
            if (pcVar33[1] == '\0') goto LAB_01e797fc;
            if (pcVar33[2] != pcVar28[2]) break;
            if (pcVar33[2] == '\0') goto LAB_01e797fc;
            if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
            lVar26 = lVar26 + -3;
            pcVar28 = pcVar28 + 3;
            pcVar33 = pcVar33 + 3;
            if (cVar29 == '\0') goto LAB_01e797fc;
          }
        }
        uVar45 = 0x36;
        if ((int)uVar39 < 0x36) {
          uVar45 = uVar39 + 1;
        }
        uVar39 = uVar45;
      } while (uVar45 != 0x36);
      local_200 = 1;
      local_210 = 1;
      local_1f8 = 0x100000001;
      local_20c = (undefined *)CONCAT44((float)local_358 + fVar46,fVar44);
      local_230 = (undefined *)CONCAT44(fVar50,fVar51);
      local_218 = local_338;
      local_220 = local_340;
      local_204 = fVar52;
    }
    break;
  case 9:
    local_250 = (char *)((ulong)local_250._4_4_ << 0x20);
    lVar26 = *(long *)PTR_DAT_04bb2720;
    if (lVar26 == 0) {
      puVar34 = &DAT_055c04a0;
    }
    else {
      puVar34 = &DAT_055c04a0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar34 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar16 = FUN_006bd550(*puVar34,0);
        puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar34 = &DAT_055c04a0;
        }
      }
    }
    local_250 = (char *)CONCAT44(*(undefined4 *)(puVar34 + 7),(undefined4)local_250);
    uVar12 = FUN_017baf44();
    local_248 = (char *)(CONCAT71(local_248._1_7_,uVar12) & 0xffffffffffffff01);
    pcVar28 = pcVar33 + 0x50;
    local_258 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    uVar19 = FUN_01a5190c(&local_258,1,pcVar33 + 0x60,0);
    uVar32 = FUN_0277d7b4(uVar19,pcVar28);
    if ((uVar32 & 1) == 0) {
      uVar19 = FUN_01a5190c(&local_258,0,pcVar33 + 0x60,0);
      uVar32 = FUN_0277d7b4(uVar19,pcVar28);
      if ((uVar32 & 1) == 0) {
        return 0;
      }
    }
    local_278 = (char *)((ulong)local_278._4_4_ << 0x20);
    local_280 = (undefined *)0x0;
    local_290 = (undefined *)((ulong)local_290 & 0xffffffffffffff00);
    if (((*(int *)(*(long *)(param_1 + 8) + 0x750) != 1) ||
        (*pfVar1 < (float)*(int *)(pcVar33 + 0x68) * 5.0)) ||
       (((float)*(int *)(pcVar33 + 0x78) * 5.0 + 5.0 <= *pfVar1 ||
        ((*(float *)(lVar41 + 0x280) < (float)*(int *)(pcVar33 + 0x6c) * 5.0 ||
         ((float)*(int *)(pcVar33 + 0x7c) * 5.0 + 5.0 <= *(float *)(lVar41 + 0x280))))))) {
      local_258._0_4_ = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
      FUN_021e8490(&local_258,pfVar1,param_1 + 0x188,1,0);
      uVar32 = FUN_021f2630(pcVar28,pcVar33 + 0x58,pfVar1,param_1 + 0x188,&local_280,&local_290,0);
      if ((uVar32 & 1) == 0) {
        return 0;
      }
      FUN_01e63f1c(&local_258);
      puVar23 = PTR_LAB_04bc1958;
      local_1a8 = *(undefined2 *)(pcVar33 + 0x50);
      local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x14);
      local_1a6 = pcVar33[0x52];
      local_1a5 = pcVar33[0x53];
      local_1a4 = *(undefined4 *)(pcVar33 + 0x54);
      local_1f8 = CONCAT44(1,(undefined4)local_1f8);
      local_1d0 = *(undefined4 *)(pcVar33 + 0x68);
      local_1ef = 1;
      local_238 = param_1 + 0x12650;
      local_1cc = *(undefined4 *)(pcVar33 + 0x6c);
      local_248 = (char *)(param_1 + 0x12610);
      local_1c0 = *(undefined4 *)(pcVar33 + 0x78);
      local_1bc = *(undefined4 *)(pcVar33 + 0x7c);
      local_1b8 = local_280;
      local_180 = (undefined1)local_290;
      *(long *)(param_1 + 0x12658) = param_1;
      *(undefined1 **)(param_1 + 0x12660) = &LAB_01e7a2a0;
      *(undefined8 *)(param_1 + 0x12668) = 0;
      *(long *)(param_1 + 0x12618) = param_1;
      *(undefined8 *)(param_1 + 0x12628) = 0;
      local_1b0 = (undefined4)local_278;
      *(undefined **)(param_1 + 0x12620) = puVar23;
      break;
    }
    FUN_01e63f1c(&local_258);
    puVar9 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,1);
    local_17c = local_b0;
    local_178 = local_ac;
    if (*puVar43 != 0) {
      cVar29 = *PTR_DAT_04bc1560;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar39 = *(uint *)(puVar9 + 0x9c);
          if (-1 < (int)uVar39) {
            pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
            goto LAB_01e7985c;
          }
          if (uVar39 != 0xffffffff) break;
        }
        puVar36 = (uint *)(ulong)*puVar43;
        pcVar33 = (char *)0x0;
        if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e7985c;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
        pcVar33 = (char *)0x0;
        if (uVar32 == 0) goto LAB_01e7985c;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != -0x71543da9) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            pcVar33 = (char *)0x0;
            goto LAB_01e7985c;
          }
        }
        iVar16 = 0;
        if (*piVar21 != -1) {
          iVar16 = *piVar21;
        }
        *(int *)(puVar9 + 0x9c) = iVar16;
      } while (*puVar43 != 0);
    }
    pcVar33 = (char *)0x0;
LAB_01e7985c:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_320 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar33 != (char *)0x0) {
      local_318 = pcVar33;
    }
    uVar39 = 0;
    do {
      pcVar33 = "";
      if (uVar39 < 0x36) {
        pcVar33 = *(char **)(puVar23 + (ulong)uVar39 * 8 + 0x370);
      }
      (*(code *)local_320[3])(&local_320);
      if (pcVar33 == local_318) {
LAB_01e79948:
        local_b4 = uVar39;
        break;
      }
      if (*pcVar33 == *local_318) {
        if (*pcVar33 == '\0') goto LAB_01e79948;
        lVar26 = 0x7fffe;
        pcVar28 = local_318;
        while( true ) {
          if (pcVar33[1] != pcVar28[1]) break;
          if (pcVar33[1] == '\0') goto LAB_01e79948;
          if (pcVar33[2] != pcVar28[2]) break;
          if (pcVar33[2] == '\0') goto LAB_01e79948;
          if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
          lVar26 = lVar26 + -3;
          pcVar28 = pcVar28 + 3;
          pcVar33 = pcVar33 + 3;
          if (cVar29 == '\0') goto LAB_01e79948;
        }
      }
      uVar45 = 0x36;
      if ((int)uVar39 < 0x36) {
        uVar45 = uVar39 + 1;
      }
      uVar39 = uVar45;
    } while (uVar45 != 0x36);
    *(long *)(param_1 + 0x125f8) = param_1;
    puVar23 = PTR_LAB_04bc1950;
    *(undefined8 *)(param_1 + 0x12608) = 0;
    goto LAB_01e79058;
  case 10:
    local_250 = (char *)((ulong)local_250._4_4_ << 0x20);
    lVar26 = *(long *)PTR_DAT_04bb2720;
    if (lVar26 == 0) {
      puVar34 = &DAT_055c04a0;
    }
    else {
      puVar34 = &DAT_055c04a0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar34 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar16 = FUN_006bd550(*puVar34,0);
        puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar34 = &DAT_055c04a0;
        }
      }
    }
    local_250 = (char *)CONCAT44(*(undefined4 *)(puVar34 + 7),(undefined4)local_250);
    uVar12 = FUN_017baf44();
    local_248 = (char *)(CONCAT71(local_248._1_7_,uVar12) & 0xffffffffffffff01);
    local_258 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    uVar19 = FUN_01a5190c(&local_258,1,pcVar33 + 0x60,0);
    uVar32 = FUN_0277d7b4(uVar19,pcVar33 + 0x50);
    if ((uVar32 & 1) == 0) {
      uVar19 = FUN_01a5190c(&local_258,0,pcVar33 + 0x60,0);
      uVar32 = FUN_0277d7b4(uVar19,pcVar33 + 0x50);
      if ((uVar32 & 1) == 0) {
        return 0;
      }
    }
    local_258 = (undefined8 *)
                CONCAT44(local_258._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
    FUN_021e8490(&local_258,pfVar1,param_1 + 0x188,1,0);
    uVar39 = *(uint *)(pcVar33 + 0x78);
    uVar4 = *(ushort *)(param_1 + 0x188);
    if ((uVar39 & 0xffff) < (uint)uVar4) {
      return 0;
    }
    if ((((uint)uVar4 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff) < (uVar39 & 0xffff)) {
      return 0;
    }
    uVar45 = *(uint *)(pcVar33 + 0x7c);
    uVar5 = *(ushort *)(param_1 + 0x18a);
    if ((uVar45 & 0xffff) < (uint)uVar5) {
      return 0;
    }
    if ((((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff) < (uVar45 & 0xffff)) {
      return 0;
    }
    uVar39 = (uVar39 - uVar4) + *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (uVar45 - uVar5);
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) + (long)((int)uVar39 >> 5) * 4) >>
         (ulong)(uVar39 & 0x1f) & 1) == 0) {
      return 0;
    }
    lVar26 = FUN_016e3954(*(undefined8 *)(param_1 + 8));
    puVar34 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_250 = "NpcFtrHeight";
    local_258 = puVar34;
    if (((*(long *)(lVar26 + 0x1138) != 0) &&
        (lVar26 = *(long *)(*(long *)(lVar26 + 0x1138) + 0x78), lVar26 != 0)) &&
       (plVar20 = *(long **)(lVar26 + 0x48), plVar20 != (long *)0x0)) {
      (**(code **)(*plVar20 + 0x30))(0,plVar20,&local_258);
    }
    FUN_01e63f1c(&local_258);
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x41);
    local_17c = local_b0;
    local_178 = local_ac;
    pcVar28 = (char *)FUN_01e27050(puVar43,0x27,0x8eabc257,*(undefined8 *)PTR_DAT_04bc1900);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar28 != (char *)0x0) {
      local_318 = pcVar28;
    }
    local_320 = puVar34;
    FUN_01e733c0(&local_b4,&local_320);
    local_200 = 1;
    local_210 = 1;
    local_230 = *(undefined **)(pcVar33 + 0xc);
    local_228 = *(float *)(pcVar33 + 0x14);
    local_d8 = 0x41200000;
    local_220 = *(ulong *)(pcVar33 + 0xc);
    local_218 = *(float *)(pcVar33 + 0x14);
    local_1f8 = 0x100000001;
    break;
  case 0xc:
  case 0xd:
    local_258 = (undefined8 *)
                CONCAT44(local_258._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
    FUN_021e8490(&local_258,pfVar1,param_1 + 0x188,1,0);
    local_344[0] = 0;
    FUN_021fffa0(0,local_344,param_1 + 0x188,*(undefined8 *)(param_1 + 8),pcVar33 + 0x58,0);
    uVar39 = (uint)local_344[0];
    bVar13 = local_344[0] >> 1;
    local_344[0] = (byte)(uVar39 & 0xfffffffb);
    uVar39 = (uVar39 & 0xfffffffb) - (bVar13 & 0x55555555);
    uVar39 = (uVar39 >> 2 & 0x33333333) + (uVar39 & 0x33333333);
    uVar39 = uVar39 + (uVar39 >> 4) & 0xf0f0f0f;
    uVar39 = uVar39 + (uVar39 >> 8);
    if ((uVar39 + (uVar39 >> 0x10) & 0x3f) == 0) {
      return 0;
    }
    local_288 = (ulong)local_288._4_4_ << 0x20;
    local_290 = (undefined *)0x0;
    local_298 = (ulong)local_298._4_4_ << 0x20;
    uVar32 = FUN_021fd6f0(&local_290,&local_298,pcVar33 + 0x50,pcVar33 + 0x58,0);
    if ((uVar32 & 1) == 0) {
      return 0;
    }
    local_250 = (char *)((ulong)local_250._4_4_ << 0x20);
    lVar26 = *(long *)PTR_DAT_04bb2720;
    if (lVar26 == 0) {
      puVar34 = &DAT_055c04a0;
    }
    else {
      puVar34 = &DAT_055c04a0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar34 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar16 = FUN_006bd550(*puVar34,0);
        puVar34 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar34 = &DAT_055c04a0;
        }
      }
    }
    local_250 = (char *)CONCAT44(*(undefined4 *)(puVar34 + 7),(undefined4)local_250);
    uVar12 = FUN_017baf44();
    local_248 = (char *)(CONCAT71(local_248._1_7_,uVar12) & 0xffffffffffffff01);
    local_258 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    uVar19 = FUN_01a5190c(&local_258,1,pcVar33 + 0x60,0);
    bVar13 = FUN_0277d7b4(uVar19,pcVar33 + 0x50);
    puVar34 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar34 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar16 = __cxa_guard_acquire(&DAT_052461c0);
        puVar34 = &DAT_05240280;
        if (iVar16 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar34 = &DAT_05240280;
      }
    }
    puVar23 = PTR_DAT_04bb2020;
    local_258 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_250 = "NpcFtrHeight";
    if (((puVar34[0x227] != 0) && (lVar26 = *(long *)(puVar34[0x227] + 0x78), lVar26 != 0)) &&
       (plVar20 = *(long **)(lVar26 + 0x48), plVar20 != (long *)0x0)) {
      (**(code **)(*plVar20 + 0x30))(local_298 & 0xffffffff,plVar20,&local_258);
    }
    uVar19 = 0;
    if (*puVar36 == 0xc) {
      lVar41 = *(long *)puVar9;
      fVar51 = local_290._4_4_;
      lVar26 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar26 == 0) || (*(long *)(lVar26 + 0xa8) == 0)) || (*(char *)(lVar26 + 0x11c8) != '\0')
         ) {
        fVar52 = -500.0;
      }
      else {
        fVar52 = (float)FUN_0093a950(lVar26 + 0x28,&local_290,0);
      }
      piVar21 = (int *)(**(code **)(*(long *)(lVar41 + 0x2478) + 0xf0))(lVar41 + 0x2478);
      uVar19 = 0x3f800000;
      if (fVar51 - fVar52 <= (float)(*piVar21 / 10)) {
        uVar19 = 0;
      }
    }
    local_310 = 0;
    uStack_308 = 0;
    local_2cc = local_2cc & 0xffffff00;
    local_320 = (undefined8 *)(PTR_DAT_04bc1558 + 0x10);
    local_318 = (char *)0x0;
    local_300 = PTR_DAT_04bbc1a0 + 0x10;
    local_2f8 = PTR_DAT_04bb2010 + 0x10;
    local_2f0 = (undefined *)0x0;
    local_2e0 = (undefined *)0x0;
    local_2d8 = 0xffffffff00000000;
    local_2d0 = 0xffffffff;
    local_2c8 = (undefined *)0xfffe;
    local_2e8 = local_2f8;
    FUN_0277d4ac(&local_2c8);
    local_2b8 = local_2b8 & 0xffffff00;
    local_2b4 = 0;
    local_2c0 = (undefined *)0x3bf800000;
    local_328 = (char *)((ulong)local_328._4_4_ << 0x20);
    local_330 = (undefined *)0x0;
    local_338 = 0.0;
    local_340 = 0;
    local_2e0 = *(undefined **)(pcVar33 + 0x78);
    local_2f0 = *(undefined **)(pcVar33 + 0x68);
    local_2c8 = *(undefined **)(pcVar33 + 0x50);
    local_2cc = CONCAT31(local_2cc._1_3_,local_344[0]);
    FUN_021f9ff0(uVar19,&local_330,&local_340,pfVar1,&local_320);
    local_340 = CONCAT44(local_290._4_4_,(int)local_340);
    FUN_01e63f1c(&local_258);
    puVar27 = PTR_DAT_04bc1568;
    puVar9 = PTR_DAT_04bc1560;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x41);
    local_14c = bVar13 & 1;
    local_17c = local_b0;
    local_178 = local_ac;
    if (*puVar43 != 0) {
      cVar29 = *PTR_DAT_04bc1560;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar27 = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined8 *)(puVar27 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar27 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar39 = *(uint *)(puVar27 + 0x9c);
          if (-1 < (int)uVar39) {
            pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
            goto LAB_01e78978;
          }
          if (uVar39 != 0xffffffff) break;
        }
        puVar36 = (uint *)(ulong)*puVar43;
        pcVar33 = (char *)0x0;
        if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e78978;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar27 + 0x9c) = 0xfffffffe;
        pcVar33 = (char *)0x0;
        if (uVar32 == 0) goto LAB_01e78978;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != -0x71543da9) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            pcVar33 = (char *)0x0;
            goto LAB_01e78978;
          }
        }
        iVar16 = 0;
        if (*piVar21 != -1) {
          iVar16 = *piVar21;
        }
        *(int *)(puVar27 + 0x9c) = iVar16;
      } while (*puVar43 != 0);
    }
    pcVar33 = (char *)0x0;
LAB_01e78978:
    puVar9 = PTR_s_cDefault_04bc1610;
    local_280 = puVar23 + 0x10;
    local_278 = *(char **)PTR_PTR_04bc1908;
    if (pcVar33 != (char *)0x0) {
      local_278 = pcVar33;
    }
    uVar39 = 0;
    do {
      pcVar33 = "";
      if (uVar39 < 0x36) {
        pcVar33 = *(char **)(puVar9 + (ulong)uVar39 * 8 + 0x370);
      }
      (**(code **)(local_280 + 0x18))(&local_280);
      if (pcVar33 == local_278) {
LAB_01e78a60:
        local_b4 = uVar39;
        break;
      }
      if (*pcVar33 == *local_278) {
        if (*pcVar33 == '\0') goto LAB_01e78a60;
        lVar26 = 0x7fffe;
        pcVar28 = local_278;
        while( true ) {
          if (pcVar33[1] != pcVar28[1]) break;
          if (pcVar33[1] == '\0') goto LAB_01e78a60;
          if (pcVar33[2] != pcVar28[2]) break;
          if (pcVar33[2] == '\0') goto LAB_01e78a60;
          if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
          lVar26 = lVar26 + -3;
          pcVar28 = pcVar28 + 3;
          pcVar33 = pcVar33 + 3;
          if (cVar29 == '\0') goto LAB_01e78a60;
        }
      }
      uVar45 = 0x36;
      if ((int)uVar39 < 0x36) {
        uVar45 = uVar39 + 1;
      }
      uVar39 = uVar45;
    } while (uVar45 != 0x36);
    local_200 = 1;
    local_210 = 1;
    local_230 = local_330;
    local_1f8 = 0x100000001;
    local_20c = local_290;
    local_204 = (float)local_288;
    local_218 = local_338;
    local_220 = local_340;
    local_228 = (float)local_328;
    if (*(int *)(param_1 + 0xef14) <= *piVar2) {
      return 1;
    }
    goto LAB_01e79d8c;
  case 0xf:
    if (*puVar43 != 0) {
      cVar29 = *PTR_DAT_04bc1560;
      uVar22 = 1;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar27 = 1;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
          uVar39 = *puVar43;
        }
        else {
          uVar39 = *(uint *)(puVar10 + 0xc);
          if (-1 < (int)uVar39) {
            if (((byte *)((ulong)uVar39 + (long)puVar43) != (byte *)0x0) &&
               (bVar13 = *(byte *)((ulong)uVar39 + (long)puVar43), bVar13 < 0x28)) {
              uVar25 = 0x21;
              if (bVar13 != 0x23) {
                uVar25 = 1;
              }
              uVar22 = 0x22;
              if (bVar13 != 0x24) {
                uVar22 = uVar25;
              }
              goto LAB_01e79b08;
            }
            break;
          }
          if (uVar39 != 0xffffffff) break;
          uVar39 = *puVar43;
        }
        if ((uVar39 == 0) || (puVar36 = (uint *)(ulong)uVar39, puVar43 == puVar36))
        goto LAB_01e79b08;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
        if (uVar32 == 0) break;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != 0x40876b17) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) goto LAB_01e79b04;
        }
        iVar16 = 0;
        if (*piVar21 != -1) {
          iVar16 = *piVar21;
        }
        *(int *)(puVar10 + 0xc) = iVar16;
        if (*puVar43 == 0) break;
      } while( true );
    }
LAB_01e79b04:
    uVar22 = 1;
LAB_01e79b08:
    FUN_01e63f1c(&local_258);
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,uVar22);
    local_17c = local_b0;
    local_178 = local_ac;
    if (*puVar43 != 0) {
      cVar29 = *puVar27;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar27 = 1;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar39 = *(uint *)(puVar10 + 0x9c);
          if (-1 < (int)uVar39) {
            pcVar28 = (char *)((ulong)uVar39 + (long)puVar43);
            goto LAB_01e79bfc;
          }
          if (uVar39 != 0xffffffff) break;
        }
        puVar36 = (uint *)(ulong)*puVar43;
        pcVar28 = (char *)0x0;
        if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e79bfc;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar10 + 0x9c) = 0xfffffffe;
        pcVar28 = (char *)0x0;
        if (uVar32 == 0) goto LAB_01e79bfc;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != -0x71543da9) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            pcVar28 = (char *)0x0;
            goto LAB_01e79bfc;
          }
        }
        iVar16 = 0;
        if (*piVar21 != -1) {
          iVar16 = *piVar21;
        }
        *(int *)(puVar10 + 0x9c) = iVar16;
      } while (*puVar43 != 0);
    }
    pcVar28 = (char *)0x0;
LAB_01e79bfc:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_320 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar28 != (char *)0x0) {
      local_318 = pcVar28;
    }
    uVar39 = 0;
    do {
      pcVar28 = "";
      if (uVar39 < 0x36) {
        pcVar28 = *(char **)(puVar23 + (ulong)uVar39 * 8 + 0x370);
      }
      (*(code *)local_320[3])(&local_320);
      if (pcVar28 == local_318) {
LAB_01e79cec:
        local_b4 = uVar39;
        break;
      }
      if (*pcVar28 == *local_318) {
        if (*pcVar28 == '\0') goto LAB_01e79cec;
        lVar26 = 0x7fffe;
        pcVar30 = local_318;
        while( true ) {
          if (pcVar28[1] != pcVar30[1]) break;
          if (pcVar28[1] == '\0') goto LAB_01e79cec;
          if (pcVar28[2] != pcVar30[2]) break;
          if (pcVar28[2] == '\0') goto LAB_01e79cec;
          if ((lVar26 == 0) || (cVar29 = pcVar28[3], cVar29 != pcVar30[3])) break;
          lVar26 = lVar26 + -3;
          pcVar30 = pcVar30 + 3;
          pcVar28 = pcVar28 + 3;
          if (cVar29 == '\0') goto LAB_01e79cec;
        }
      }
      uVar45 = 0x36;
      if ((int)uVar39 < 0x36) {
        uVar45 = uVar39 + 1;
      }
      uVar39 = uVar45;
    } while (uVar45 != 0x36);
    lVar26 = *(long *)(param_1 + 8);
    uVar45 = *(uint *)(lVar26 + 0x294);
    uVar39 = *(uint *)(lVar26 + 0x288) ^ *(uint *)(lVar26 + 0x288) << 0xb;
    uVar39 = uVar39 >> 8 ^ uVar45 >> 0x13 ^ uVar39 ^ uVar45;
    local_200 = 1;
    local_230 = *(undefined **)(pcVar33 + 0xc);
    local_228 = *(float *)(pcVar33 + 0x14);
    *(undefined4 *)(lVar26 + 0x288) = *(undefined4 *)(lVar26 + 0x28c);
    uVar22 = *(undefined4 *)(lVar26 + 0x290);
    *(uint *)(lVar26 + 0x290) = uVar45;
    *(uint *)(lVar26 + 0x294) = uVar39;
    *(undefined4 *)(lVar26 + 0x28c) = uVar22;
    local_1f8 = 0x100000002;
    local_214 = (int)(long)((float)((int)((ulong)uVar39 * 0x1f >> 0x20) + -0xf) * 11930465.0);
  }
LAB_01e79d80:
  if (*piVar2 < *(int *)(param_1 + 0xef14)) {
LAB_01e79d8c:
    FUN_021920b0(piVar2,&local_258);
  }
  return 1;
LAB_01e79a14:
  if (cVar29 == '\0') {
    cVar29 = '\x01';
    *puVar34 = 0xffffffffffffffff;
    puVar34[1] = 0xffffffffffffffff;
    *pcVar28 = '\x01';
    puVar34[2] = 0xffffffffffffffff;
    puVar34[3] = 0xffffffffffffffff;
    puVar34[4] = 0xffffffffffffffff;
    puVar34[5] = 0xffffffffffffffff;
    puVar34[6] = 0xffffffffffffffff;
    puVar34[7] = 0xffffffffffffffff;
    puVar34[8] = 0xffffffffffffffff;
    puVar34[9] = 0xffffffffffffffff;
    puVar34[10] = 0xffffffffffffffff;
    puVar34[0xb] = 0xffffffffffffffff;
    puVar34[0xc] = 0xffffffffffffffff;
    puVar34[0xd] = 0xffffffffffffffff;
    puVar34[0xe] = 0xffffffffffffffff;
    puVar34[0xf] = 0xffffffffffffffff;
    puVar34[0x10] = 0xffffffffffffffff;
    puVar34[0x11] = 0xffffffffffffffff;
    puVar34[0x12] = 0xffffffffffffffff;
    puVar34[0x13] = 0xffffffffffffffff;
LAB_01e79a5c:
    puVar36 = (uint *)(ulong)*puVar43;
    uVar39 = 2;
    if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e79e10;
    lVar26 = 0xc;
    if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
      lVar26 = 0x1c;
    }
    lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
    if (lVar26 == 0) goto LAB_01e79e0c;
    uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
    *(undefined4 *)((long)puVar34 + 0xc) = 0xfffffffe;
    if (uVar32 == 0) goto LAB_01e79e0c;
    piVar21 = (int *)(lVar26 + 4);
    while (piVar21[-1] != 0x40876b17) {
      piVar21 = piVar21 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) goto LAB_01e79e0c;
    }
    iVar38 = 0;
    if (*piVar21 != -1) {
      iVar38 = *piVar21;
    }
    *(int *)((long)puVar34 + 0xc) = iVar38;
    if (*puVar43 == 0) goto LAB_01e79e0c;
    goto LAB_01e79a14;
  }
  uVar39 = *(uint *)((long)puVar34 + 0xc);
  if ((int)uVar39 < 0) {
    if (uVar39 != 0xffffffff) goto LAB_01e79e0c;
    goto LAB_01e79a5c;
  }
  if (((byte *)((ulong)uVar39 + (long)puVar43) != (byte *)0x0) &&
     (bVar13 = *(byte *)((ulong)uVar39 + (long)puVar43), uVar39 = (uint)bVar13, bVar13 < 0x28))
  goto LAB_01e79e10;
LAB_01e79e0c:
  uVar39 = 2;
LAB_01e79e10:
  local_290._4_4_ = (float)((ulong)local_290 >> 0x20);
  local_290 = (undefined *)CONCAT44(local_290._4_4_,uVar39);
  uVar22 = 0x22;
  switch(uVar39) {
  case 5:
  case 0xb:
    FUN_01e63f1c(&local_258);
    local_168 = 2;
    local_164 = (*(int *)(pcVar33 + 0x48) - *(int *)(pcVar33 + 0x38)) + 1;
    local_160 = (*(int *)(pcVar33 + 0x4c) - *(int *)(pcVar33 + 0x3c)) + 1;
    local_1b8 = *(undefined **)(pcVar33 + 0xc);
    local_1b0 = *(undefined4 *)(pcVar33 + 0x14);
    local_17c = local_b0;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,10);
    local_1f8 = CONCAT44(1,(undefined4)local_1f8);
    local_178 = local_ac;
    break;
  default:
    uVar22 = 0x21;
    if (uVar39 != 0x23) {
      uVar22 = 1;
    }
  case 0x24:
    FUN_01e63f1c(&local_258);
    puVar9 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,uVar22);
    local_17c = local_b0;
    local_178 = local_ac;
    if (*puVar43 != 0) {
      cVar29 = *PTR_DAT_04bc1560;
      do {
        if (cVar29 == '\0') {
          cVar29 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar39 = *(uint *)(puVar9 + 0x9c);
          if (-1 < (int)uVar39) {
            pcVar33 = (char *)((ulong)uVar39 + (long)puVar43);
            goto LAB_01e79fd8;
          }
          if (uVar39 != 0xffffffff) break;
        }
        puVar36 = (uint *)(ulong)*puVar43;
        pcVar33 = (char *)0x0;
        if ((*puVar43 == 0) || (puVar43 == puVar36)) goto LAB_01e79fd8;
        lVar26 = 0xc;
        if (*(char *)((long)puVar43 + (10 - (long)puVar36)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar43 + (lVar26 - (long)puVar36);
        if (lVar26 == 0) break;
        uVar32 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar36));
        *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
        pcVar33 = (char *)0x0;
        if (uVar32 == 0) goto LAB_01e79fd8;
        piVar21 = (int *)(lVar26 + 4);
        while (piVar21[-1] != -0x71543da9) {
          piVar21 = piVar21 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            pcVar33 = (char *)0x0;
            goto LAB_01e79fd8;
          }
        }
        iVar38 = 0;
        if (*piVar21 != -1) {
          iVar38 = *piVar21;
        }
        *(int *)(puVar9 + 0x9c) = iVar38;
      } while (*puVar43 != 0);
    }
    pcVar33 = (char *)0x0;
LAB_01e79fd8:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_320 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar33 != (char *)0x0) {
      local_318 = pcVar33;
    }
    uVar39 = 0;
    do {
      pcVar33 = "";
      if (uVar39 < 0x36) {
        pcVar33 = *(char **)(puVar23 + (ulong)uVar39 * 8 + 0x370);
      }
      (*(code *)local_320[3])(&local_320);
      if (pcVar33 == local_318) {
LAB_01e7a0c4:
        local_b4 = uVar39;
        break;
      }
      if (*pcVar33 == *local_318) {
        if (*pcVar33 == '\0') goto LAB_01e7a0c4;
        lVar26 = 0x7fffe;
        pcVar28 = local_318;
        while( true ) {
          if (pcVar33[1] != pcVar28[1]) break;
          if (pcVar33[1] == '\0') goto LAB_01e7a0c4;
          if (pcVar33[2] != pcVar28[2]) break;
          if (pcVar33[2] == '\0') goto LAB_01e7a0c4;
          if ((lVar26 == 0) || (cVar29 = pcVar33[3], cVar29 != pcVar28[3])) break;
          lVar26 = lVar26 + -3;
          pcVar28 = pcVar28 + 3;
          pcVar33 = pcVar33 + 3;
          if (cVar29 == '\0') goto LAB_01e7a0c4;
        }
      }
      uVar45 = 0x36;
      if ((int)uVar39 < 0x36) {
        uVar45 = uVar39 + 1;
      }
      uVar39 = uVar45;
    } while (uVar45 != 0x36);
    local_230 = (undefined *)(ulong)(uint)fVar52;
    local_200 = 1;
    local_1f8 = 0x100000002;
    local_228 = fVar51;
    local_214 = iVar16;
    break;
  case 7:
    FUN_01e63f1c(&local_258);
    local_278 = (char *)((ulong)local_278 & 0xffffffff00000000);
    local_168 = 2;
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,10);
    local_280 = (undefined *)0x0;
    local_164 = (*(int *)(pcVar33 + 0x48) - *(int *)(pcVar33 + 0x38)) + 1;
    local_160 = (*(int *)(pcVar33 + 0x4c) - *(int *)(pcVar33 + 0x3c)) + 1;
    FUN_012e20a8(pcVar33 + 0x28,&local_280);
    local_1b8 = local_280;
    local_1b0 = (undefined4)local_278;
    local_17c = local_b0;
    local_178 = local_ac;
    pcVar33 = (char *)FUN_01e27050(puVar43,0x27,0x8eabc257,*(undefined8 *)PTR_DAT_04bc1900);
    local_318 = *(char **)PTR_PTR_04bc1908;
    if (pcVar33 != (char *)0x0) {
      local_318 = pcVar33;
    }
    local_320 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    FUN_01e733c0(&local_b4,&local_320);
    goto LAB_01e77e28;
  case 10:
    FUN_01e63f1c(&local_258);
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x3c);
    local_17c = local_b0;
    local_178 = local_ac;
    local_1f8 = CONCAT44(1,(undefined4)local_1f8);
  }
  goto LAB_01e79d80;
}

