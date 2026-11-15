
/* WARNING: Removing unreachable block (ram,0x024eb33c) */

void FUN_024ea320(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined8 *puVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 local_b8 [2];
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  char *local_98;
  ulong local_90;
  long *local_88;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
    if ((*(uint *)(param_1 + 0xcf0) >> 1 & 1) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x190a);
      lVar9 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
      fVar32 = *pfVar10;
      if (*(int *)(param_1 + 0x178) == 0) {
        local_7c = 10;
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,10);
        if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024ea490;
      }
      iVar8 = (uint)uVar4 * 0x10000;
      plVar12 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar12 = *(long **)(param_1 + 0x4c8);
      }
      lVar9 = (**(code **)(*plVar12 + 0x148))();
      iVar19 = iVar8 - *(int *)(lVar9 + 4);
      if (0xb60b5e < iVar19 + 0x5b05afU) {
        iVar6 = 0x15555560;
        iVar8 = -0x15555560;
        iVar19 = (int)(fVar32 * (float)iVar19);
        if (iVar19 < 1) {
          iVar6 = -0x5b05b0;
        }
        else {
          iVar8 = 0x5b05b0;
        }
        iVar2 = iVar19;
        if (iVar6 <= iVar19) {
          iVar2 = iVar6;
        }
        if (iVar8 <= iVar19) {
          iVar8 = iVar2;
        }
        iVar8 = iVar8 + *(int *)(lVar9 + 4);
      }
      *(int *)(lVar9 + 4) = iVar8;
    }
  }
LAB_024ea490:
  puVar1 = (uint *)(param_1 + 0xcf0);
  if ((*puVar1 & 1) != 0) {
    *(int *)(param_1 + 0xd00) = *(int *)(param_1 + 0xd00) + 1;
  }
  local_a0 = (undefined *)CONCAT44((int)((ulong)local_a0 >> 0x20),3);
  if ((*puVar1 >> 3 & 1) != 0) {
    *(int *)(param_1 + 0xd5c) = *(int *)(param_1 + 0xd5c) + 1;
  }
  if (*(int *)(param_1 + 0x1c04) == 0) {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar23,&DAT_054e8e08,6,1,0);
  }
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_7c = 0;
  local_a0._0_4_ = 5.88545e-44;
  if ((puVar23[0x227] != 0) && (uVar11 = FUN_03850890(puVar23[0x227],0x2a,0,0), (uVar11 & 1) != 0))
  {
    *puVar1 = *puVar1 | 1;
    *puVar1 = *puVar1 | 2;
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a0 = (undefined *)0x0;
    local_98 = (char *)0x0;
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    local_7c = 0;
    local_74 = 0;
    if ((puVar23[0x227] == 0) ||
       (uVar11 = FUN_03850a90(puVar23[0x227],0,&local_a0,0), (uVar11 & 1) == 0)) {
      uVar15 = 0x12;
    }
    else if ((local_88 == (long *)0x0) || (lVar9 = *local_88, lVar9 == 0)) {
      uVar15 = 1;
    }
    else {
      fVar32 = *(float *)(lVar9 + 0x18);
      if (fVar32 < 0.0) {
        fVar32 = *(float *)(local_88[1] + 0xc);
      }
      uVar15 = (uint)(fVar32 - *(float *)(lVar9 + 0x14));
      if (uVar15 < 2) {
        uVar15 = 1;
      }
    }
    local_a0._4_4_ = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
    local_a0._0_4_ = (float)*(int *)(param_1 + 0x190c) * 0.001;
    fVar32 = (float)*(int *)(param_1 + 0x1912) * 0.001;
    local_98 = (char *)CONCAT44(local_98._4_4_,fVar32);
    lVar9 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
      fVar34 = -500.0;
    }
    else {
      fVar34 = (float)FUN_0093a950(lVar9 + 0x28,&local_a0,0);
      fVar32 = local_98._0_4_;
    }
    fVar33 = (float)local_a0;
    lVar24 = *(long *)(param_1 + 0x68);
    lVar9 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x28f0) + 0xf0))(lVar9 + 0x28f0);
    fVar25 = *pfVar10;
    uVar16 = uVar15 & 3;
    fVar30 = *(float *)(lVar24 + 0x280);
    if (fVar25 <= 0.0) {
      fVar25 = -fVar25;
    }
    if (fVar25 <= 0.0) {
      fVar25 = -fVar25;
    }
    if (uVar15 < 4) {
      fVar29 = 0.0;
      fVar26 = 0.0;
    }
    else {
      fVar29 = 0.0;
      fVar26 = 0.0;
      uVar20 = uVar15 & 0xfffffffc;
      do {
        fVar31 = fVar29 - fVar25;
        uVar20 = uVar20 - 4;
        fVar27 = fVar31 - fVar25;
        fVar28 = fVar27 - fVar25;
        fVar29 = fVar28 - fVar25;
        fVar26 = fVar26 + fVar31 + fVar27 + fVar28 + fVar29;
      } while (uVar20 != 0);
    }
    fVar31 = *(float *)(lVar24 + 0x27c);
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      fVar29 = fVar29 - fVar25;
      fVar26 = fVar26 + fVar29;
    }
    fVar25 = (float)uVar15;
    *(float *)(param_1 + 0xcf4) = (fVar33 - *(float *)(lVar24 + 0x278)) / fVar25;
    *(float *)(param_1 + 0xcf8) = (((fVar34 + 9.0) - fVar31) - fVar26) / fVar25;
    *(float *)(param_1 + 0xcfc) = (fVar32 - fVar30) / fVar25;
  }
  local_a0 = (undefined *)((ulong)(uint)local_a0._4_4_ << 0x20);
  if ((*puVar1 & 1) != 0) {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    local_7c = 0;
    if ((puVar23[0x227] == 0) || (uVar11 = FUN_03850a90(puVar23[0x227],0,0,0), (uVar11 & 1) == 0)) {
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    else {
      lVar9 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x28f0) + 0xf0))(lVar9 + 0x28f0);
      fVar32 = *(float *)(param_1 + 0xcf8) - *pfVar10;
      plVar12 = *(long **)(param_1 + 0x68);
      *(float *)(param_1 + 0xcf8) = fVar32;
      local_a0 = (undefined *)
                 CONCAT44(fVar32 + *(float *)((long)plVar12 + 0x27c),
                          *(float *)(plVar12 + 0x4f) + *(float *)(param_1 + 0xcf4));
      local_98 = (char *)CONCAT44(local_98._4_4_,
                                  *(float *)(plVar12 + 0x50) + *(float *)(param_1 + 0xcfc));
      (**(code **)(*plVar12 + 0x100))(plVar12,&local_a0);
    }
  }
  puVar7 = PTR_DAT_04bb39b0;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar9 + 0x158);
    }
    bVar18 = *(byte *)(param_1 + 0x1ee8);
    bVar17 = *pbVar3;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar17 != bVar18) {
      sVar5 = *(short *)(param_1 + 0x1904);
      fVar34 = (float)*(int *)(param_1 + 0x1900) * 0.001;
      local_a0._0_4_ = (float)*(int *)(param_1 + 0x190c) * 0.001;
      fVar32 = (float)*(int *)(param_1 + 0x1912) * 0.001;
      fVar33 = (float)*(int *)(param_1 + 0x1906) * 0.001;
      local_a0 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1910) * 0.25,(float)local_a0);
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      local_98._0_4_ = fVar32;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
        fVar32 = -500.0;
      }
      else {
        fVar32 = (float)FUN_0093a950(lVar9 + 0x28,&local_a0,0);
      }
      fVar25 = fVar34 - (float)local_a0;
      fVar30 = fVar33 - local_98._0_4_;
      lVar9 = *(long *)(param_1 + 0x68);
      local_a0 = *(undefined **)(lVar9 + 0x278);
      local_98 = (char *)CONCAT44(local_98._4_4_,*(undefined4 *)(lVar9 + 0x280));
      fVar34 = fVar34 - *(float *)(lVar9 + 0x278);
      fVar33 = fVar33 - *(float *)(lVar9 + 0x280);
      lVar9 = *(long *)PTR_DAT_04bb2720;
      fVar33 = SQRT(fVar33 * fVar33 + fVar34 * fVar34) / SQRT(fVar30 * fVar30 + fVar25 * fVar25);
      fVar34 = 1.0;
      if (fVar33 <= 1.0) {
        fVar34 = fVar33;
      }
      if (lVar9 == 0) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = &DAT_055c04a0;
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar8 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
      }
      fVar33 = (float)(int)sVar5 * 0.25;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        puVar21 = DAT_055c1b60;
        do {
          if (*(int *)(puVar21 + -1) == *(int *)(puVar23 + 7)) break;
          puVar21 = (undefined8 *)puVar21[1];
        } while (puVar21 != &DAT_055c1b58);
      }
      local_78 = 1;
      local_7c = CONCAT22(1,*(undefined2 *)PTR_DAT_04bb6298);
      FUN_016e80f0(&local_a0,0,&local_7c);
      puVar23 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar23 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(float *)(puVar23 + 0x5d) = (float)local_a0;
      *(undefined1 *)((long)puVar23 + 0x2e4) = 1;
      *(float *)(puVar23 + 0x5e) = local_98._0_4_;
      *(undefined2 *)((long)puVar23 + 0x2e5) = 0x101;
      *(float *)((long)puVar23 + 0x2ec) = fVar33 + fVar34 * ((fVar32 + 9.0) - fVar33);
    }
  }
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  if ((*puVar1 & 1) != 0) {
    lVar9 = FUN_0251e98c(1);
    uVar11 = (**(code **)(*(long *)(lVar9 + 0x2980) + 0x118))(lVar9 + 0x2980,param_1 + 0xd00);
    if ((uVar11 & 1) != 0) {
      local_a0._0_4_ = (float)*(int *)(param_1 + 0x190c) * 0.001;
      fVar32 = (float)*(int *)(param_1 + 0x1912) * 0.001;
      local_a0 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1910) * 0.25,(float)local_a0);
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      local_98._0_4_ = fVar32;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
        fVar32 = -500.0;
      }
      else {
        fVar32 = (float)FUN_0093a950(lVar9 + 0x28,&local_a0,0);
      }
      local_a0 = (undefined *)CONCAT44(fVar32 + 9.0,(float)local_a0);
      FUN_023343f0(param_1,&local_a0,0);
    }
  }
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_7c = 0;
  local_a0._0_4_ = 6.16571e-44;
  if ((puVar23[0x227] != 0) && (uVar11 = FUN_03850890(puVar23[0x227],0x2c,0,0), (uVar11 & 1) != 0))
  {
    *puVar1 = *puVar1 | 4;
  }
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,2);
  if ((*puVar1 >> 2 & 1) != 0) {
    lVar9 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x29b0) + 0xf0))(lVar9 + 0x29b0);
    fVar32 = *pfVar10;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_7c = 10;
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024ead40;
      uVar16 = DAT_054e8df4;
    }
    else {
LAB_024ead40:
      plVar12 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar12 = *(long **)(param_1 + 0x4c8);
      }
      lVar9 = (**(code **)(*plVar12 + 0x148))();
      uVar16 = DAT_054e8df4;
      iVar8 = DAT_054e8df4 - *(int *)(lVar9 + 4);
      uVar15 = DAT_054e8df4;
      if (0xb60b5e < iVar8 + 0x5b05afU) {
        iVar6 = 0x15555560;
        iVar19 = -0x15555560;
        iVar8 = (int)(fVar32 * (float)iVar8);
        if (iVar8 < 1) {
          iVar6 = -0x5b05b0;
        }
        else {
          iVar19 = 0x5b05b0;
        }
        iVar2 = iVar8;
        if (iVar6 <= iVar8) {
          iVar2 = iVar6;
        }
        if (iVar19 <= iVar8) {
          iVar19 = iVar2;
        }
        uVar15 = iVar19 + *(int *)(lVar9 + 4);
      }
      *(uint *)(lVar9 + 4) = uVar15;
    }
    fVar32 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
    fVar32 = fVar32 * 8.381903e-08;
    fVar34 = (float)uVar16 * 8.381903e-08;
    if (fVar32 <= 360.0) {
      if (fVar32 < 0.0) {
        fVar33 = fVar32 / 360.0 + -1.0;
        goto LAB_024eae2c;
      }
    }
    else {
      fVar33 = fVar32 / 360.0;
LAB_024eae2c:
      fVar32 = fVar32 - (float)(int)fVar33 * 360.0;
    }
    if (fVar34 <= 360.0) {
      if (fVar34 < 0.0) {
        fVar33 = fVar34 / 360.0 + -1.0;
        goto LAB_024eae68;
      }
    }
    else {
      fVar33 = fVar34 / 360.0;
LAB_024eae68:
      fVar34 = fVar34 - (float)(int)fVar33 * 360.0;
    }
    fVar33 = 0.0;
    if (fVar32 != fVar34) {
      fVar25 = fVar32 - fVar34;
      fVar33 = fVar25;
      if (fVar32 <= fVar34) {
        fVar33 = fVar34 - fVar32;
      }
      if (fVar33 <= 180.0) {
        fVar33 = fVar34 - fVar32;
        if (fVar34 < fVar32) goto LAB_024eaec4;
      }
      else {
        fVar25 = 360.0 - fVar33;
        fVar33 = fVar25;
        if (fVar32 <= fVar34) {
LAB_024eaec4:
          fVar33 = -fVar25;
        }
      }
    }
    fVar32 = -fVar33;
    if (0.0 <= fVar33) {
      fVar32 = fVar33;
    }
    if (fVar32 <= 0.1) {
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,2);
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar23 = *(undefined8 **)(param_1 + 0x60);
      if (puVar23 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar23 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar23 = &DAT_05240280;
        }
      }
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      local_98 = "IsWarpPipeTurnFinish";
      if (((puVar23[0x227] != 0) && (lVar9 = *(long *)(puVar23[0x227] + 0x78), lVar9 != 0)) &&
         (plVar12 = *(long **)(lVar9 + 0x48), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x38))(plVar12,&local_a0,1);
      }
    }
  }
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_7c = 0;
  local_a0._0_4_ = 6.02558e-44;
  if ((puVar23[0x227] != 0) && (uVar11 = FUN_03850890(puVar23[0x227],0x2b,0,0), (uVar11 & 1) != 0))
  {
    *puVar1 = *puVar1 | 8;
  }
  local_a0._0_4_ = 4.2039e-45;
  if ((*puVar1 >> 3 & 1) != 0) {
    lVar9 = FUN_0251e98c(1);
    uVar11 = (**(code **)(*(long *)(lVar9 + 0x2a40) + 0x118))(lVar9 + 0x2a40,param_1 + 0xd5c);
    if ((uVar11 & 1) != 0) {
      fVar32 = (float)*(int *)(param_1 + 0x190c) * 0.001;
      fVar34 = (float)*(int *)(param_1 + 0x1912) * 0.001;
      local_a8 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
      iStack_a4 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
      local_b8[0] = 0;
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      FUN_01526030(*(undefined8 *)PTR_DAT_04bb4c80,local_b8);
    }
  }
  local_a0._0_4_ = 4.2039e-45;
  if ((*puVar1 >> 3 & 1) == 0) {
    bVar22 = true;
  }
  else {
    lVar9 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar9 + 0x29e0) + 0xf0))(lVar9 + 0x29e0);
    if (*puVar13 <= *(uint *)(param_1 + 0xd5c)) {
      plVar12 = *(long **)(param_1 + 0x60);
      fVar32 = *(float *)(*(long *)(param_1 + 0x68) + 0x2a0);
      if (plVar12 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          plVar12 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar12 = &DAT_05240280;
        }
      }
      lVar9 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a10) + 0xf0))(lVar9 + 0x2a10);
      fVar32 = fVar32 - *pfVar10;
      lVar9 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2920) + 0xf0))(lVar9 + 0x2920);
      fVar34 = *pfVar10;
      if (*pfVar10 <= fVar32) {
        fVar34 = fVar32;
      }
      (**(code **)(*plVar12 + 0x4e0))(fVar34,plVar12);
    }
    bVar22 = true;
    lVar9 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar9 + 0x2a40) + 0xf0))(lVar9 + 0x2a40);
    if (*puVar13 <= *(uint *)(param_1 + 0xd5c)) {
      lVar9 = *(long *)(param_1 + 0x68);
      lVar24 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar24 == 0) || (*(long *)(lVar24 + 0xa8) == 0)) || (*(char *)(lVar24 + 0x11c8) != '\0')
         ) {
        fVar32 = -500.0;
      }
      else {
        fVar32 = (float)FUN_0093a950(lVar24 + 0x28,lVar9 + 0x278,0);
        lVar9 = *(long *)(param_1 + 0x68);
      }
      fVar34 = *(float *)(lVar9 + 0x27c);
      if (fVar34 <= fVar32) {
        plVar12 = *(long **)(param_1 + 0x60);
        if (plVar12 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            plVar12 = &DAT_05240280;
            if (iVar8 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar12 = &DAT_05240280;
          }
        }
        (**(code **)(*plVar12 + 0x4e0))(0,plVar12);
        bVar22 = false;
      }
      else {
        lVar9 = FUN_0251e98c(1);
        pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a70) + 0xf0))(lVar9 + 0x2a70);
        (**(code **)(**(long **)(param_1 + 0x68) + 0x110))(fVar34 - *pfVar10);
      }
    }
  }
  local_a0._0_4_ = 4.2039e-45;
  if ((*puVar1 >> 3 & 1) != 0) {
    lVar9 = FUN_0251e98c(1);
    puVar13 = (uint *)(**(code **)(*(long *)(lVar9 + 0x2aa0) + 0xf0))(lVar9 + 0x2aa0);
    if ((*puVar13 <= *(uint *)(param_1 + 0xd5c)) &&
       (local_a0._0_4_ = 5.60519e-45, (*puVar1 & 0x10) == 0 && *(int *)(param_1 + 0x178) == 0)) {
      lVar9 = *(long *)puVar7;
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
        pbVar3 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar9 + 0x15c) != 0) {
          pbVar3 = (byte *)(lVar9 + 0x158);
        }
        bVar18 = *(byte *)(param_1 + 0x1ee8);
        bVar17 = *pbVar3;
        if (7 < bVar17) {
          bVar17 = 0xff;
        }
        if (7 < bVar18) {
          bVar18 = 0xff;
        }
        if (bVar17 != bVar18) goto LAB_024eb46c;
      }
      lVar9 = FUN_0251e98c(1);
      puVar13 = (uint *)(**(code **)(*(long *)(lVar9 + 0x2950) + 0xf0))(lVar9 + 0x2950);
      uVar15 = *puVar13;
      lVar9 = FUN_0251e98c(1);
      puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x2950) + 0xf0))(lVar9 + 0x2950);
      local_a0._0_4_ = 0.0;
      local_a0._4_4_ = 0.0;
      local_98 = (char *)((ulong)uVar15 << 0x20);
      local_90 = CONCAT44((int)(local_90 >> 0x20),*puVar14) & 0xffff0000ffffffff;
      uVar11 = FUN_007b6ebc(*(undefined8 *)PTR_DAT_04bb4510,&local_a0);
      if ((uVar11 & 1) != 0) {
        local_7c = 4;
        *puVar1 = *puVar1 | 0x10;
        uVar11 = FUN_016e6434();
        puVar23 = &DAT_054e8e38;
        if ((uVar11 & 1) == 0) {
          puVar23 = &DAT_054e8e28;
        }
        FUN_02a55754(0x3f800000,puVar23,0,0);
        uVar11 = FUN_016e63c4();
        if ((uVar11 & 1) != 0) {
          FUN_019578d0(1);
        }
      }
    }
  }
LAB_024eb46c:
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,3);
  if ((*puVar1 >> 3 & 1) == 0) {
    bVar22 = true;
  }
  if (!bVar22) {
    if (*(int *)(param_1 + 0x178) == 0) {
      if (((*(long *)PTR_DAT_04bb2808 == 0) ||
          (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar9 == 0)) ||
         (*(int *)(lVar9 + 0x1b0) != 3)) {
        lVar9 = *(long *)puVar7;
        if (lVar9 == 0) {
          return;
        }
        if (*(int *)(lVar9 + 0x15c) == 0) {
          return;
        }
        pbVar3 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar9 + 0x15c) != 0) {
          pbVar3 = (byte *)(lVar9 + 0x158);
        }
        bVar18 = *(byte *)(param_1 + 0x1ee8);
        bVar17 = *pbVar3;
        if (7 < bVar17) {
          bVar17 = 0xff;
        }
        if (7 < bVar18) {
          bVar18 = 0xff;
        }
        if (bVar17 == bVar18) {
          return;
        }
      }
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19ae) = 0;
      *(undefined8 *)(param_1 + 0x19b6) = 0;
      *(undefined8 *)(param_1 + 0x19be) = 0;
      *(undefined8 *)(param_1 + 0x19c6) = 0;
      *(undefined8 *)(param_1 + 0x19ce) = 0;
      *(undefined4 *)(param_1 + 0x19d6) = 0;
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
      *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x128);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar9 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar9 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar9,0x128);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

