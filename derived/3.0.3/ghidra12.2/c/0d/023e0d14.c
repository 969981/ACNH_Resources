
/* WARNING: Type propagation algorithm not settling */

void FUN_023e0d14(long param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  uint local_a4;
  float fStack_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  undefined4 local_78;
  int local_74;
  
  local_a4 = *(uint *)(param_1 + 0x1900);
  fStack_a0 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_9c = *(undefined4 *)(param_1 + 0x1906);
  lVar9 = FUN_0251e98c(1);
  puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  puVar17 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_c0 = (long *)(ulong)local_a4;
  local_b8 = local_9c;
  local_90 = *(undefined4 *)(puVar17 + 0x50);
  local_98 = (long *)(puVar17[0x4f] & 0xffffffff);
  FUN_03eb4b60(*puVar10,0x41200000,0x3e4ccccc,&local_98,&local_c0);
  *(undefined4 *)(puVar17 + 0x4f) = (undefined4)local_98;
  *(undefined4 *)(puVar17 + 0x50) = local_90;
  iVar6 = (uint)*(ushort *)(param_1 + 0x190a) * 0x10000;
  local_74 = iVar6;
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar26 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,10);
    local_98 = (long *)CONCAT44(local_98._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e0e78;
  }
  else {
LAB_023e0e78:
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar2 + 0x148))();
    iVar14 = iVar6 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar6 = -0x15555560;
      iVar14 = (int)(fVar26 * (float)iVar14);
      if (iVar14 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar3 = iVar14;
      if (iVar7 <= iVar14) {
        iVar3 = iVar7;
      }
      if (iVar6 <= iVar14) {
        iVar6 = iVar3;
      }
      iVar6 = iVar6 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar6;
  }
  uVar8 = *(uint *)(param_1 + 0x1810);
  if ((uVar8 & 0xfffffff7) != 1) {
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
    lVar9 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
    fVar26 = *pfVar11;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    uVar8 = *(uint *)(param_1 + 0x1810);
    *(float *)(param_1 + 0x1bf0) = fVar26 * 0.5;
  }
  if ((uVar8 & 0xfffffff7) == 1) {
    uVar15 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar26 = *(float *)(lVar9 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar26 * 999.99994);
    uVar15 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar15;
  if (uVar8 - 2 < 3) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar20 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar17 + 0x2ec) = uVar20;
    *(undefined1 *)((long)puVar17 + 0x2e5) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x178);
  if (iVar6 == 1) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x68);
  fVar22 = *(float *)(param_1 + 0x1900) - *(float *)(lVar9 + 0x278);
  fVar26 = *(float *)(param_1 + 0x1906);
  fVar21 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25 - *(float *)(lVar9 + 0x27c);
  fVar24 = fVar26 - *(float *)(lVar9 + 0x280);
  if (SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24) < 0.25) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar17 + 0x5d) = *(float *)(param_1 + 0x1900);
    *(undefined1 *)((long)puVar17 + 0x2e4) = 1;
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar17 + 0x5e) = fVar26;
    *(undefined1 *)((long)puVar17 + 0x2e6) = 1;
    iVar6 = *(int *)(param_1 + 0x178);
  }
  if ((iVar6 == 0) && (*(int *)(param_1 + 0x1810) == 7)) {
    uVar12 = FUN_0245f360(param_1);
    if ((uVar12 & 1) != 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x178);
  }
  puVar19 = PTR_DAT_04bbfe68;
  puVar4 = PTR_DAT_04bb2720;
  if (iVar6 == 0) {
    fVar26 = *(float *)(param_1 + 0x1900);
    fVar21 = *(float *)(param_1 + 0x1906);
    if ((*(uint *)(param_1 + 0x1810) & 0xfffffffe) == 2) {
      fVar22 = (float)(int)((int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0));
      fVar24 = fVar22 * 5.0;
      fVar25 = (float)(int)((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0));
      fVar23 = fVar25 * 5.0;
      bVar1 = fVar22 * 5.0 + 2.5 < fVar26;
      fVar26 = fVar24;
      if (bVar1) {
        fVar26 = fVar24 + 5.0;
      }
      if (fVar25 * 5.0 + 2.5 < fVar21) {
        fVar21 = fVar23 + 5.0;
      }
      else {
        fVar21 = fVar23;
      }
    }
    fVar22 = 5.0;
    if (*(uint *)(param_1 + 0x1810) != 7) {
      fVar22 = 7.5;
    }
    pfVar11 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(ushort *)(param_1 + 0x190a) >> 4) & 0xff0));
    fVar24 = (float)((*(ushort *)(param_1 + 0x190a) & 0xff) << 0x10) * 5.9604645e-08;
    fVar23 = *pfVar11 + fVar24 * pfVar11[1];
    local_b8 = 0;
    plVar2 = (long *)(PTR_DAT_04bbfe68 + 0x10);
    fVar24 = pfVar11[2] + fVar24 * pfVar11[3];
    lVar9 = *(long *)PTR_DAT_04bb2720;
    fVar26 = fVar26 + fVar23 * 0.0 * 0.0 + fVar24 * 0.0 + fVar22 * (fVar23 + 0.0);
    fVar21 = fVar21 + (fVar24 * 0.0 * 0.0 - fVar23 * 0.0) + fVar22 * fVar24;
    if (lVar9 == 0) {
      puVar17 = &DAT_055c04a0;
      local_c0 = plVar2;
    }
    else {
      puVar17 = &DAT_055c04a0;
      local_c0 = plVar2;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_b4 = *(undefined4 *)(puVar17 + 7);
    local_b0 = FUN_017baf44();
    puVar18 = PTR_DAT_04bb2010;
    local_b0 = local_b0 & 1;
    local_90 = 0;
    local_c0 = (long *)(PTR_DAT_04bb3140 + 0x10);
    local_c8 = 0;
    local_e0 = PTR_DAT_04bb2010 + 0x10;
    iVar6 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
    iVar14 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    lVar9 = *(long *)puVar4;
    local_d8 = iVar6;
    iStack_d4 = iVar14;
    local_d0 = local_e0;
    local_98 = plVar2;
    if (lVar9 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar7 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_8c = *(undefined4 *)(puVar17 + 7);
    local_88 = FUN_017baf44();
    local_88 = local_88 & 1;
    FUN_01a5190c(&local_98,1,&local_e0,&local_d0);
    puVar5 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4();
    if (*(long *)puVar5 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar8 < *(uint *)(lVar9 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
          piVar13 = (int *)FUN_014fbd50(&local_c0,1,&local_d0);
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,*piVar13);
          if (*piVar13 != 0) {
            local_78 = *(undefined4 *)(param_1 + 0x230);
            FUN_0071c8d0(&local_98,&local_e0,&local_78,0);
            plVar2 = local_98;
            if (local_98 != (long *)0x0) {
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb5920);
              if ((uVar12 & 1) == 0) {
                local_90._0_2_ = (ushort)(byte)local_90;
              }
            }
            puVar19 = PTR_DAT_04bbcd00;
            if ((((local_98 != (long *)0x0) && ((byte)local_90 != '\0')) && (local_90._1_1_ != '\0')
                ) && (local_90._2_1_ != '\0')) {
              plVar2 = local_98 + 0x15;
              if ((long *)local_98[0x16] != plVar2) {
                lVar9 = (long)*(int *)((long)local_98 + 0xbc);
                plVar16 = (long *)(local_98[0x16] - lVar9);
                puVar18 = PTR_DAT_04bb6608 + 0x10;
                do {
                  if (((*puVar19 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar19), iVar7 != 0)) {
                    *(undefined **)PTR_DAT_04bbccf8 = puVar18;
                    __cxa_guard_release(puVar19);
                  }
                  if ((plVar16 != (long *)0x0) &&
                     (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,PTR_DAT_04bbccf8),
                     (uVar12 & 1) != 0)) {
                    local_e4 = local_74;
                    FUN_01447208(plVar16,&local_a4,&local_e4);
                    break;
                  }
                  plVar16 = (long *)(*(long *)((long)plVar16 + lVar9 + 8) - lVar9);
                } while (plVar16 != (long *)((long)plVar2 - lVar9));
              }
            }
            puVar18 = PTR_DAT_04bb2010;
            puVar19 = PTR_DAT_04bbfe68;
          }
        }
      }
    }
    local_e0 = puVar18 + 0x10;
    local_90 = 0;
    local_98 = (long *)(puVar19 + 0x10);
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      puVar17 = &DAT_055c04a0;
      local_d8 = iVar6;
      iStack_d4 = iVar14;
    }
    else {
      puVar17 = &DAT_055c04a0;
      local_d8 = iVar6;
      iStack_d4 = iVar14;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_8c = *(undefined4 *)(puVar17 + 7);
    local_88 = FUN_017baf44();
    local_88 = local_88 & 1;
    FUN_01a5190c(&local_98,0,&local_e0,&local_d0);
    lVar9 = *(long *)puVar5;
    uVar8 = FUN_0277d6c4();
    if (*(long *)puVar5 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        piVar13 = (int *)FUN_014fbd50(&local_c0,0,&local_d0);
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,*piVar13);
        if (*piVar13 != 0) {
          local_78 = *(undefined4 *)(param_1 + 0x230);
          FUN_0071c8d0(&local_98,&local_e0,&local_78,0);
          plVar2 = local_98;
          if (local_98 != (long *)0x0) {
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar12 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb5920);
            if ((uVar12 & 1) == 0) {
              local_90._0_2_ = (ushort)(byte)local_90;
            }
          }
          puVar19 = PTR_DAT_04bbcd00;
          puVar4 = PTR_DAT_04bbccf8;
          if ((((local_98 != (long *)0x0) && ((byte)local_90 != '\0')) && (local_90._1_1_ != '\0'))
             && (local_90._2_1_ != '\0')) {
            plVar2 = local_98 + 0x15;
            if ((long *)local_98[0x16] != plVar2) {
              lVar9 = (long)*(int *)((long)local_98 + 0xbc);
              plVar16 = (long *)(local_98[0x16] - lVar9);
              puVar18 = PTR_DAT_04bb6608 + 0x10;
              do {
                if (((*puVar19 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar19), iVar6 != 0)) {
                  *(undefined **)puVar4 = puVar18;
                  __cxa_guard_release(puVar19);
                }
                if ((plVar16 != (long *)0x0) &&
                   (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar4), (uVar12 & 1) != 0)) {
                  local_e4 = local_74;
                  FUN_01447208(plVar16,&local_a4,&local_e4);
                  break;
                }
                plVar16 = (long *)(*(long *)((long)plVar16 + lVar9 + 8) - lVar9);
              } while (plVar16 != (long *)((long)plVar2 - lVar9));
            }
          }
        }
      }
    }
    if ((((*(int *)(param_1 + 0x178) == 0) && (*(char *)(param_1 + 0x17d2) < '\0')) &&
        (*(char *)(param_1 + 0x17ac) == '\0')) &&
       (local_98 = (long *)((ulong)local_98 & 0xffffffff00000000),
       (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
      FUN_023de684(param_1);
    }
  }
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      lVar9 = DAT_052413b8;
      goto joined_r0x023e17a0;
    }
    puVar17 = &DAT_05240280;
  }
  lVar9 = puVar17[0x227];
joined_r0x023e17a0:
  if (lVar9 == 0) {
    uVar12 = FUN_0170a6d0(puVar17,0);
  }
  else {
    local_98._4_4_ = (undefined4)((ulong)local_98 >> 0x20);
    local_98 = (long *)CONCAT44(local_98._4_4_,1);
    uVar12 = FUN_0170a6d0(puVar17,*(uint *)(puVar17 + 0x2d3) >> 1 & 1);
  }
  if ((uVar12 & 1) == 0) {
    if ((*(char *)(param_1 + 0x7fd) != '\0') &&
       (*(int *)(param_1 + 0x7f8) <= *(int *)(param_1 + 0x7f0))) {
      uVar8 = *(uint *)(param_1 + 0x17cc);
      if ((uVar8 >> 0x1b & 1) == 0) {
        if ((*(char *)(param_1 + 0x17ac) != '\0') ||
           (local_98 = (long *)((ulong)local_98 & 0xffffffff00000000),
           (*(uint *)(param_1 + 0xec8) & 1) == 0)) {
          *(uint *)(param_1 + 0x17cc) = uVar8 | 0x8000000;
        }
      }
      else {
        *(uint *)(param_1 + 0x17cc) = uVar8 & 0xf7ffffff;
        uVar12 = FUN_023df5e4(param_1,0);
        if (((uVar12 & 1) == 0) &&
           (uVar12 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)),
           (uVar12 & 1) == 0)) {
          local_90 = 0;
          local_98 = (long *)CONCAT35(local_98._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_98);
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x8000;
    FUN_023e19a8(param_1,&local_a4,&local_74);
  }
  if (*(char *)(param_1 + 0x7fd) != '\0') {
    uVar20 = (**(code **)(*(long *)(param_1 + 0x7e8) + (ulong)*(byte *)(param_1 + 0x7fc) * 8))
                       (param_1 + 0x7e8);
    *(undefined4 *)(param_1 + 0x7f0) = uVar20;
  }
  return;
}

