
/* WARNING: Removing unreachable block (ram,0x024ef414) */

void FUN_024ee2d0(long param_1)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  int iVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  short *psVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  long *plVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined4 local_c0 [2];
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  short local_a8;
  short local_a6;
  undefined4 local_a4;
  undefined *local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  
  puVar1 = (uint *)(param_1 + 0xcf0);
  if ((*puVar1 & 1) != 0) {
    *(int *)(param_1 + 0xd00) = *(int *)(param_1 + 0xd00) + 1;
  }
  pcVar3 = (char *)(param_1 + 0x1916);
  local_f0 = (long *)CONCAT44((int)((ulong)local_f0 >> 0x20),6);
  if ((*puVar1 >> 6 & 1) != 0) {
    *(int *)(param_1 + 0xda4) = *(int *)(param_1 + 0xda4) + 1;
  }
  puVar9 = PTR_DAT_04bb39b0;
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar19 != 0) && (*(int *)(lVar19 + 0x15c) != 0)) {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar19 + 0x158);
    }
    bVar23 = *pbVar2;
    bVar22 = *pbVar4;
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (7 < bVar23) {
      bVar23 = 0xff;
    }
    if (bVar22 != bVar23) {
      fVar40 = (float)*(int *)(param_1 + 0x1924) * 0.001;
      fVar39 = (float)*(int *)(param_1 + 0x192a) * 0.001;
      local_f0 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,fVar40);
      lVar19 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) || (*(char *)(lVar19 + 0x11c8) != '\0')
         ) {
        fVar38 = -500.0;
      }
      else {
        local_e8._0_4_ = fVar39;
        fVar38 = (float)FUN_0093a950(lVar19 + 0x28,&local_f0,0);
        fVar40 = (float)local_f0;
        fVar39 = (float)local_e8;
      }
      puVar8 = PTR_DAT_04bb2720;
      local_e8._0_4_ = (float)*(int *)(param_1 + 0x191e) * 0.001;
      local_f0 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x191c) * 0.25,
                                  (float)*(int *)(param_1 + 0x1918) * 0.001);
      lVar19 = *(long *)PTR_DAT_04bb2720;
      if (lVar19 == 0) {
        puVar26 = &DAT_055c04a0;
      }
      else {
        puVar26 = &DAT_055c04a0;
        if (*(long *)(lVar19 + 0x330) != 0) {
          puVar26 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar12 = FUN_006bd550(*puVar26,0);
          puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar26 = &DAT_055c04a0;
          }
        }
      }
      puVar10 = PTR_DAT_04bb6298;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        puVar20 = DAT_055c1b60;
        do {
          if (*(int *)(puVar20 + -1) == *(int *)(puVar26 + 7)) break;
          puVar20 = (undefined8 *)puVar20[1];
        } while (puVar20 != &DAT_055c1b58);
      }
      local_90 = (undefined *)CONCAT35(local_90._5_3_,0x100000000);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,0x10000);
      local_90 = (undefined *)CONCAT62(local_90._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
      fVar27 = (float)FUN_016e80f0(&local_f0,0,&local_90);
      fVar28 = fVar40 - (float)local_f0;
      fVar31 = fVar39 - (float)local_e8;
      lVar19 = *(long *)(param_1 + 0x68);
      local_f0 = *(long **)(lVar19 + 0x278);
      local_e8 = (char *)CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar19 + 0x280));
      lVar21 = *(long *)puVar8;
      fVar40 = fVar40 - *(float *)(lVar19 + 0x278);
      fVar39 = fVar39 - *(float *)(lVar19 + 0x280);
      fVar39 = SQRT(fVar39 * fVar39 + fVar40 * fVar40) / SQRT(fVar31 * fVar31 + fVar28 * fVar28);
      fVar40 = 1.0;
      if (fVar39 <= 1.0) {
        fVar40 = fVar39;
      }
      if (lVar21 == 0) {
        puVar26 = &DAT_055c04a0;
      }
      else {
        puVar26 = &DAT_055c04a0;
        if (*(long *)(lVar21 + 0x330) != 0) {
          puVar26 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar12 = FUN_006bd550(*puVar26,0);
          puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar26 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        puVar20 = DAT_055c1b60;
        do {
          if (*(int *)(puVar20 + -1) == *(int *)(puVar26 + 7)) break;
          puVar20 = (undefined8 *)puVar20[1];
        } while (puVar20 != &DAT_055c1b58);
      }
      local_90 = (undefined *)CONCAT35(local_90._5_3_,0x100000000);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,0x10000);
      local_90 = (undefined *)CONCAT62(local_90._2_6_,*(undefined2 *)puVar10);
      FUN_016e80f0(&local_f0,0,&local_90);
      puVar26 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar26 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)(puVar26 + 0x5d) = (float)local_f0;
      *(undefined1 *)((long)puVar26 + 0x2e4) = 1;
      *(float *)(puVar26 + 0x5e) = (float)local_e8;
      *(undefined2 *)((long)puVar26 + 0x2e5) = 0x101;
      *(float *)((long)puVar26 + 0x2ec) = fVar38 + 9.0 + fVar40 * (fVar27 - (fVar38 + 9.0));
    }
  }
  if (*(int *)(param_1 + 0x1c04) == 0) {
    if (*pcVar3 != '\0') {
      local_f0 = (long *)CONCAT44(local_f0._4_4_,6);
      *puVar1 = *puVar1 | 0x40;
    }
    puVar26 = *(undefined8 **)(param_1 + 0x60);
    if (puVar26 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar26 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar26 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar26,&DAT_054e8e18,6,1,0);
    cVar6 = *pcVar3;
  }
  else {
    cVar6 = *pcVar3;
  }
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x178) == 0) {
      lVar19 = *(long *)puVar9;
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0x15c) != 0)) {
        pbVar4 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar19 + 0x15c) != 0) {
          pbVar4 = (byte *)(lVar19 + 0x158);
        }
        bVar23 = *pbVar2;
        bVar22 = *pbVar4;
        if (7 < bVar22) {
          bVar22 = 0xff;
        }
        if (7 < bVar23) {
          bVar23 = 0xff;
        }
        if (bVar22 != bVar23) goto LAB_024ee73c;
      }
      if (((*(long *)PTR_DAT_04bb2808 != 0) &&
          (lVar19 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar19 != 0)) &&
         (*(int *)(lVar19 + 0x1b0) == 3)) {
        local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x230));
        FUN_0071c8d0(&local_f0,PTR_DAT_04bb32f8,&local_90,0);
        plVar25 = local_f0;
        if (local_f0 != (long *)0x0) {
          if (((*PTR_DAT_04bb3280 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar12 != 0)) {
            *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3280);
          }
          uVar14 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb3278);
          if ((uVar14 & 1) == 0) {
            local_e8._0_2_ = (ushort)(byte)local_e8;
          }
        }
        if (local_f0 == (long *)0x0) {
          return;
        }
        if ((byte)local_e8 == '\0') {
          return;
        }
        if (local_e8._1_1_ == '\0') {
          return;
        }
        uVar14 = FUN_00902674();
        if ((uVar14 & 1) == 0) {
          return;
        }
        if (*pcVar3 != '\0') goto LAB_024ee990;
      }
    }
LAB_024ee73c:
    uVar18 = *(uint *)(param_1 + 0x1c04);
    lVar19 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar19 + 0x2ad0) + 0xf0))(lVar19 + 0x2ad0);
    if (uVar18 < *puVar13) {
      return;
    }
    lVar19 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar19 + 0x2ad0) + 0xf0))(lVar19 + 0x2ad0);
    if (*puVar13 <= *(uint *)(param_1 + 0x1c04)) {
      local_f0 = (long *)CONCAT44(local_f0._4_4_,6);
      if ((*puVar1 >> 6 & 1) == 0) {
        if ((*(int *)(param_1 + 0x178) == 0) && (uVar14 = FUN_0243b378(param_1), (uVar14 & 1) != 0))
        {
          uVar14 = FUN_007b7080(*(undefined8 *)PTR_DAT_04bb4510);
          if ((uVar14 & 1) != 0) {
            local_f0 = (long *)CONCAT44(local_f0._4_4_,6);
            *puVar1 = *puVar1 | 0x40;
            uVar14 = FUN_016e6434();
            if ((uVar14 & 1) == 0) {
              puVar26 = &DAT_054e8e28;
            }
            else {
              puVar26 = &DAT_054e8e38;
            }
            FUN_02a55844(puVar26,0);
          }
        }
        else {
          local_f0 = (long *)CONCAT44(local_f0._4_4_,6);
          *puVar1 = *puVar1 | 0x40;
        }
      }
    }
  }
LAB_024ee990:
  local_f0._0_4_ = 8.40779e-45;
  if ((*puVar1 >> 6 & 1) != 0) {
    lVar19 = FUN_0251e98c(1);
    uVar14 = (**(code **)(*(long *)(lVar19 + 0x2b00) + 0x118))(lVar19 + 0x2b00,param_1 + 0xda4);
    if ((uVar14 & 1) != 0) {
      local_c0[0] = 1;
      fVar40 = (float)*(int *)(param_1 + 0x1924) * 0.001;
      fVar39 = (float)*(int *)(param_1 + 0x192a) * 0.001;
      local_b0 = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
      iStack_ac = (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0);
      local_b8 = PTR_DAT_04bb2010 + 0x10;
      FUN_01526030(*(undefined8 *)PTR_DAT_04bb4c80,local_c0);
    }
  }
  local_f0._0_4_ = 8.40779e-45;
  if ((*puVar1 >> 6 & 1) != 0) {
    lVar19 = FUN_0251e98c(1);
    uVar14 = (**(code **)(*(long *)(lVar19 + 0x2b30) + 0x118))(lVar19 + 0x2b30,param_1 + 0xda4);
    if ((uVar14 & 1) != 0) {
      local_f0._0_4_ = 9.80909e-45;
      *puVar1 = *puVar1 | 0x80;
      plVar25 = *(long **)(param_1 + 0x60);
      if (plVar25 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          plVar25 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar25 = &DAT_05240280;
        }
      }
      lVar19 = FUN_0251e98c(1);
      puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x2920) + 0xf0))(lVar19 + 0x2920);
      (**(code **)(*plVar25 + 0x4e0))(*puVar15,plVar25);
    }
  }
  local_f0 = (long *)CONCAT44(local_f0._4_4_,7);
  if ((*puVar1 >> 7 & 1) != 0) {
    lVar19 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar19 + 0x2b30) + 0xf0))(lVar19 + 0x2b30);
    if (*puVar13 <= *(uint *)(param_1 + 0xda4)) {
      local_f0 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,
                                  (float)*(int *)(param_1 + 0x1924) * 0.001);
      local_e8 = (char *)CONCAT44(local_e8._4_4_,(float)*(int *)(param_1 + 0x192a) * 0.001);
      lVar19 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) || (*(char *)(lVar19 + 0x11c8) != '\0')
         ) {
        fVar40 = -500.0;
      }
      else {
        fVar40 = (float)FUN_0093a950(lVar19 + 0x28,&local_f0,0);
      }
      fVar40 = fVar40 + 9.0;
      fVar38 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
      lVar19 = FUN_0251e98c(1);
      pfVar16 = (float *)(**(code **)(*(long *)(lVar19 + 0x2b60) + 0xf0))(lVar19 + 0x2b60);
      fVar38 = fVar38 + *pfVar16;
      fVar39 = fVar40;
      if (fVar38 <= fVar40) {
        fVar39 = fVar38;
      }
      (**(code **)(**(long **)(param_1 + 0x68) + 0x110))(fVar39);
      if (fVar39 == fVar40) {
        local_f0 = (long *)CONCAT44(local_f0._4_4_,7);
        *puVar1 = *puVar1 & 0xffffff7f;
        puVar26 = *(undefined8 **)(param_1 + 0x60);
        if (puVar26 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(&DAT_052461c0);
            puVar26 = &DAT_05240280;
            if (iVar12 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar26 = &DAT_05240280;
          }
        }
        local_f0 = (long *)(PTR_DAT_04bb2020 + 0x10);
        local_e8 = "IsWarpPipeRiseFinish";
        if (((puVar26[0x227] != 0) && (lVar19 = *(long *)(puVar26[0x227] + 0x78), lVar19 != 0)) &&
           (plVar25 = *(long **)(lVar19 + 0x48), plVar25 != (long *)0x0)) {
          (**(code **)(*plVar25 + 0x38))(plVar25,&local_f0,1);
        }
      }
    }
    lVar19 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar19 + 0x2b90) + 0xf0))(lVar19 + 0x2b90);
    if (*puVar13 <= *(uint *)(param_1 + 0xda4)) {
      plVar25 = *(long **)(param_1 + 0x60);
      fVar40 = *(float *)(*(long *)(param_1 + 0x68) + 0x2a0);
      if (plVar25 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          plVar25 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar25 = &DAT_05240280;
        }
      }
      lVar19 = FUN_0251e98c(1);
      pfVar16 = (float *)(**(code **)(*(long *)(lVar19 + 0x2bc0) + 0xf0))(lVar19 + 0x2bc0);
      fVar40 = fVar40 + *pfVar16;
      fVar39 = 1.0;
      if (fVar40 <= 1.0) {
        fVar39 = fVar40;
      }
      (**(code **)(*plVar25 + 0x4e0))(fVar39,plVar25);
    }
  }
  puVar26 = *(undefined8 **)(param_1 + 0x60);
  if (puVar26 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar26 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar26 = &DAT_05240280;
    }
  }
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  local_f0._0_4_ = 5.88545e-44;
  if ((puVar26[0x227] != 0) && (uVar14 = FUN_03850890(puVar26[0x227],0x2a,0,0), (uVar14 & 1) != 0))
  {
    *puVar1 = *puVar1 | 1;
    puVar26 = *(undefined8 **)(param_1 + 0x60);
    local_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d2 = 0;
    uStack_d1 = 0;
    local_f0 = (long *)0x0;
    local_e8 = (char *)0x0;
    if (puVar26 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar26 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar26 = &DAT_05240280;
      }
    }
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    if ((puVar26[0x227] == 0) ||
       (uVar14 = FUN_03850a90(puVar26[0x227],0,&local_f0,0), (uVar14 & 1) == 0)) {
      uVar18 = 0x12;
    }
    else {
      plVar25 = (long *)CONCAT17(uStack_d1,CONCAT16(uStack_d2,CONCAT24(uStack_d4,local_d8)));
      if ((plVar25 == (long *)0x0) || (lVar19 = *plVar25, lVar19 == 0)) {
        uVar18 = 1;
      }
      else {
        fVar40 = *(float *)(lVar19 + 0x18);
        if (fVar40 < 0.0) {
          fVar40 = *(float *)(plVar25[1] + 0xc);
        }
        uVar18 = (uint)(fVar40 - *(float *)(lVar19 + 0x14));
        if (uVar18 < 2) {
          uVar18 = 1;
        }
      }
    }
    fVar40 = (float)*(int *)(param_1 + 0x191e) * 0.001;
    local_f0 = (long *)CONCAT44((float)(int)*(short *)(param_1 + 0x191c) * 0.25,
                                (float)*(int *)(param_1 + 0x1918) * 0.001);
    lVar19 = *(long *)PTR_DAT_04bb2720;
    local_e8._0_4_ = fVar40;
    if (lVar19 == 0) {
      puVar26 = &DAT_055c04a0;
    }
    else {
      puVar26 = &DAT_055c04a0;
      if (*(long *)(lVar19 + 0x330) != 0) {
        puVar26 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
        iVar12 = FUN_006bd550(*puVar26,0);
        puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar26 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      puVar20 = DAT_055c1b60;
      do {
        if (*(int *)(puVar20 + -1) == *(int *)(puVar26 + 7)) break;
        puVar20 = (undefined8 *)puVar20[1];
      } while (puVar20 != &DAT_055c1b58);
    }
    local_90 = (undefined *)CONCAT35(local_90._5_3_,0x100000000);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x10000);
    local_90 = (undefined *)CONCAT62(local_90._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
    fVar27 = (float)FUN_016e80f0(&local_f0,0,&local_90);
    fVar39 = (float)local_e8;
    fVar40 = (float)local_f0;
    local_f0._4_4_ = (float)(int)*(short *)(param_1 + 0x1928) * 0.25;
    local_f0._0_4_ = (float)*(int *)(param_1 + 0x1924) * 0.001;
    fVar38 = (float)*(int *)(param_1 + 0x192a) * 0.001;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,fVar38);
    lVar19 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) || (*(char *)(lVar19 + 0x11c8) != '\0'))
    {
      fVar28 = -500.0;
    }
    else {
      fVar28 = (float)FUN_0093a950(lVar19 + 0x28,&local_f0,0);
      fVar38 = (float)local_e8;
    }
    fVar31 = (float)local_f0;
    lVar19 = FUN_0251e98c(1);
    pfVar16 = (float *)(**(code **)(*(long *)(lVar19 + 0x28f0) + 0xf0))(lVar19 + 0x28f0);
    fVar29 = *pfVar16;
    uVar5 = uVar18 & 3;
    if (fVar29 <= 0.0) {
      fVar29 = -fVar29;
    }
    if (fVar29 <= 0.0) {
      fVar29 = -fVar29;
    }
    if (uVar18 < 4) {
      fVar37 = 0.0;
      fVar32 = 0.0;
    }
    else {
      fVar37 = 0.0;
      fVar32 = 0.0;
      uVar24 = uVar18 & 0xfffffffc;
      do {
        fVar34 = fVar37 - fVar29;
        uVar24 = uVar24 - 4;
        fVar35 = fVar34 - fVar29;
        fVar36 = fVar35 - fVar29;
        fVar37 = fVar36 - fVar29;
        fVar32 = fVar32 + fVar34 + fVar35 + fVar36 + fVar37;
      } while (uVar24 != 0);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      fVar37 = fVar37 - fVar29;
      fVar32 = fVar32 + fVar37;
    }
    fVar29 = (float)uVar18;
    *(float *)(param_1 + 0xcf4) = (fVar40 - fVar31) / fVar29;
    *(float *)(param_1 + 0xcf8) = ((fVar27 - (fVar28 + 9.0)) - fVar32) / fVar29;
    *(float *)(param_1 + 0xcfc) = (fVar39 - fVar38) / fVar29;
  }
  local_f0 = (long *)((ulong)(uint)local_f0._4_4_ << 0x20);
  if ((*puVar1 & 1) != 0) {
    puVar26 = *(undefined8 **)(param_1 + 0x60);
    if (puVar26 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar26 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar26 = &DAT_05240280;
      }
    }
    local_f0 = (long *)((ulong)local_f0 & 0xffffffff00000000);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    if ((puVar26[0x227] != 0) && (uVar14 = FUN_03850a90(puVar26[0x227],0,0,0), (uVar14 & 1) != 0)) {
      lVar19 = FUN_0251e98c(1);
      pfVar16 = (float *)(**(code **)(*(long *)(lVar19 + 0x28f0) + 0xf0))(lVar19 + 0x28f0);
      fStack_c8 = *(float *)(param_1 + 0xcf8) - *pfVar16;
      plVar25 = *(long **)(param_1 + 0x68);
      *(float *)(param_1 + 0xcf8) = fStack_c8;
      fStack_c8 = fStack_c8 + *(float *)((long)plVar25 + 0x27c);
      local_cc = *(float *)(plVar25 + 0x4f) + *(float *)(param_1 + 0xcf4);
      local_c4 = *(float *)(plVar25 + 0x50) + *(float *)(param_1 + 0xcfc);
      fVar40 = local_c4;
      (**(code **)(*plVar25 + 0x100))(plVar25,&local_cc);
      if (*(int *)(param_1 + 0x178) == 0) {
        puVar26 = *(undefined8 **)(param_1 + 0x60);
        if (puVar26 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(&DAT_052461c0);
            puVar26 = &DAT_05240280;
            if (iVar12 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar26 = &DAT_05240280;
          }
        }
        local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
        local_f0 = (long *)CONCAT44(local_f0._4_4_,0x27);
        if ((puVar26[0x227] != 0) &&
           (uVar14 = FUN_03850890(puVar26[0x227],0x27,0,0), (uVar14 & 1) != 0)) {
          fVar39 = (float)*(int *)(param_1 + 0x1918) * 0.001;
          local_e8 = (char *)((ulong)local_e8 & 0xffffffff00000000);
          local_f0 = (long *)(PTR_DAT_04bbfe68 + 0x10);
          lVar19 = *(long *)PTR_DAT_04bb2720;
          fVar38 = (float)*(int *)(param_1 + 0x191e) * 0.001;
          if (lVar19 == 0) {
            puVar26 = &DAT_055c04a0;
          }
          else {
            puVar26 = &DAT_055c04a0;
            if (*(long *)(lVar19 + 0x330) != 0) {
              puVar26 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar12 = FUN_006bd550(*puVar26,0);
              puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar12 != 0x758f7eaf) {
                puVar26 = &DAT_055c04a0;
              }
            }
          }
          local_e8 = (char *)CONCAT44(*(undefined4 *)(puVar26 + 7),(float)local_e8);
          uVar11 = FUN_017baf44();
          uVar33 = 0x40a00000;
          local_e0 = CONCAT31(local_e0._1_3_,uVar11) & 0xffffff01;
          local_a0 = PTR_DAT_04bb2010 + 0x10;
          uVar18 = (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0);
          uVar5 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0);
          local_98 = *(uint *)(PTR_DAT_04bb5d40 + 8);
          local_94 = *(uint *)(PTR_DAT_04bb5d40 + 0xc);
          local_90 = local_a0;
          local_88 = uVar18;
          uStack_84 = uVar5;
          psVar17 = (short *)FUN_01a5190c(&local_f0,0,&local_90,&local_a0);
          local_a4 = *(undefined4 *)(psVar17 + 2);
          local_a6 = psVar17[1];
          local_a8 = *psVar17;
          if ((((local_98 == (uVar18 & 0xfffffffe)) && (local_94 == (uVar5 & 0xfffffffe))) &&
              (local_a8 != -2)) && (iVar12 = FUN_0277d6c4(&local_a8), iVar12 == 0xea79)) {
            plVar25 = *(long **)(param_1 + 0x68);
            uVar30 = FUN_016e7d64(&local_cc);
            local_f0 = (long *)CONCAT44(uVar33,uVar30);
            local_e8._0_4_ = fVar40;
            (**(code **)(*plVar25 + 0x100))(plVar25,&local_f0);
            local_e8._4_4_ = local_e8._4_4_ & 0xffffff00;
            local_f0 = (long *)0x101000000000006;
            local_e8 = (char *)CONCAT44(local_e8._4_4_,8);
            FUN_02374564(param_1,&local_f0);
            return;
          }
        }
      }
    }
  }
  local_f0 = (long *)((ulong)local_f0 & 0xffffffff00000000);
  if ((*puVar1 & 1) != 0) {
    lVar19 = FUN_0251e98c(1);
    uVar14 = (**(code **)(*(long *)(lVar19 + 0x2bf0) + 0x118))(lVar19 + 0x2bf0,param_1 + 0xd00);
    if ((uVar14 & 1) != 0) {
      FUN_02334578(param_1,0);
    }
  }
  puVar26 = *(undefined8 **)(param_1 + 0x60);
  if (puVar26 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar26 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar26 = &DAT_05240280;
    }
  }
  local_f0 = (long *)((ulong)local_f0 & 0xffffffff00000000);
  if ((puVar26[0x227] == 0) || (uVar14 = FUN_03850368(puVar26[0x227],0), (uVar14 & 1) == 0)) {
    puVar26 = *(undefined8 **)(param_1 + 0x60);
    if (puVar26 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar26 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar26 = &DAT_05240280;
      }
    }
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    local_f0 = (long *)((ulong)local_f0 & 0xffffffff00000000);
    if (puVar26[0x227] != 0) {
      uVar14 = FUN_03850368(puVar26[0x227],0);
      puVar9 = local_90;
      if ((((uVar14 & 1) == 0) && (puVar26[0x227] != 0)) &&
         ((uVar14 = FUN_03850368(puVar26[0x227],(ulong)local_90 & 0xffffffff), (uVar14 & 1) == 0 &&
          (uVar14 = FUN_0384fca4(puVar26[0x227],(ulong)puVar9 & 0xffffffff), (uVar14 & 1) == 0))))
      goto LAB_024ef634;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      if (*(long *)PTR_DAT_04bb6270 != 0) {
        bVar22 = *pbVar2;
        uVar18 = 0;
        if (7 < bVar22) {
          bVar22 = 0xff;
        }
        do {
          pbVar4 = (byte *)(*(long *)PTR_DAT_04bb6270 + 0x10 +
                           ((long)((ulong)uVar18 << 0x20) >> 0x1b));
          bVar23 = *pbVar4;
          local_f0 = (long *)CONCAT44(local_f0._4_4_,*(int *)(pbVar4 + 0x10));
          if (*(int *)(pbVar4 + 0x10) < 0x13) {
            if (7 < bVar23) {
              bVar23 = 0xff;
            }
            if (bVar23 == bVar22 && pbVar4[0x18] == 3) {
              bVar7 = true;
              goto LAB_024ef3a4;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x20);
      }
      bVar7 = false;
LAB_024ef3a4:
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = &DAT_054f0958;
          if (iVar12 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = &DAT_054f0958;
        }
      }
      else {
        puVar26 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar2 < 8) {
          puVar26 = puVar26 + *pbVar2;
        }
      }
      local_f0 = (long *)CONCAT44(local_f0._4_4_,0x21);
      uVar18 = *(uint *)((long)puVar26 + 4);
      uVar14 = FUN_02324290(param_1);
      if ((((uVar14 & 1) == 0) && (uVar14 = FUN_02324528(param_1), (uVar14 & 1) == 0)) &&
         (uVar14 = FUN_023247cc(param_1), (uVar14 & 1) == 0)) {
        if (bVar7 || (uVar18 >> 1 & 1) == 0) {
          uVar14 = FUN_024efb20(param_1 + 0xd78);
          if ((uVar14 & 1) == 0) {
            local_e8 = (char *)((ulong)local_e8 & 0xffffff0000000000);
            local_f0 = (long *)0x1000000000006;
          }
          else {
            local_e8._4_4_ = (uint)((ulong)local_e8 >> 0x20) & 0xffffff00;
            local_f0 = (long *)0x101000000000006;
            local_e8 = (char *)CONCAT44(local_e8._4_4_,8);
          }
          FUN_02374564(param_1,&local_f0);
        }
        else {
          lVar19 = FUN_0251d150(pbVar2);
          *(uint *)(lVar19 + 4) = *(uint *)(lVar19 + 4) & 0xfffffffd;
          uStack_d4 = 0;
          uStack_d1 = 0;
          local_d0 = 0;
          local_e8 = (char *)CONCAT26(local_e8._6_2_,0x100000000);
          local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
          local_e0 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
          local_f0 = (long *)0x400000012;
          uStack_d2 = 1;
          uStack_dc = 0x14;
          local_d8 = 0x3f000000;
          FUN_023ca3ec(param_1,&local_f0);
        }
      }
    }
    else {
      FUN_023164ec(param_1,6);
      local_f0 = (long *)CONCAT44(local_f0._4_4_,8);
      *puVar1 = *puVar1 | 0x100;
    }
  }
LAB_024ef634:
  if (*(int *)(param_1 + 0x178) == 1) {
    local_f0 = (long *)CONCAT44(local_f0._4_4_,8);
    if ((*puVar1 >> 8 & 1) != 0) {
      FUN_0235b810(param_1,0,0,0);
    }
  }
  return;
}

