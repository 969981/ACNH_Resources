
void FUN_0249c7a0(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  char *pcVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  undefined1 local_e8 [4];
  float local_e4;
  float fStack_e0;
  float local_dc;
  long *local_d8;
  undefined8 local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  float local_9c;
  float local_98;
  float local_94;
  
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  piVar1 = (int *)(param_1 + 0x1906);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar30 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar30 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  local_98 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_9c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_94 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_98 = (float)FUN_016e026c(0,&local_9c,0,0);
  cVar4 = '\0';
  if (*(char *)(param_1 + 0x3a5) != '\0') {
    uVar9 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar9;
    cVar4 = *(char *)(param_1 + 0x3a5);
  }
  bVar15 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_c0 = (undefined *)CONCAT44(local_9c,(undefined4)local_c0);
  local_b8 = (char *)CONCAT44(local_94,local_98);
  local_c0 = (undefined *)CONCAT71(local_c0._1_7_,bVar15);
  iVar30 = *(int *)(param_1 + 0x3a0);
  fVar23 = 0.0;
  if ((cVar4 != '\0') && (fVar23 = 1.0, iVar30 != 0)) {
    fVar23 = 1.0;
    if (*(int *)(param_1 + 0x398) < iVar30) {
      fVar25 = (float)*(int *)(param_1 + 0x398) / (float)iVar30;
      fVar24 = 1.0;
      if (fVar25 <= 1.0) {
        fVar24 = fVar25;
      }
      fVar23 = 0.0;
      if (0.0 <= fVar25) {
        fVar23 = fVar24;
      }
    }
  }
  local_b0 = CONCAT35(local_b0._5_3_,0x100000000);
  local_b0 = CONCAT44(local_b0._4_4_,(1.0 - fVar23) * 0.5 + 0.5);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_c0,*(undefined4 *)(param_1 + 0x230),1);
  iVar30 = *(int *)(param_1 + 0x1900);
  iVar31 = *piVar1;
  sVar5 = *(short *)(param_1 + 0x1904);
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x6a2) == '\0') {
    local_b0 = 0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (char *)0x0;
    if (puVar18 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar22 = __cxa_guard_acquire(&DAT_052461c0);
        puVar18 = &DAT_05240280;
        if (iVar22 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar18 = &DAT_05240280;
      }
    }
    local_e4 = 0.0;
    local_d8 = (long *)CONCAT44(local_d8._4_4_,0xe);
    if ((puVar18[0x227] == 0) ||
       (uVar11 = FUN_03850a90(puVar18[0x227],0xe,&local_c0,0), (uVar11 & 1) == 0)) {
      puVar18 = *(undefined8 **)(param_1 + 0x60);
      if (puVar18 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar22 = __cxa_guard_acquire(&DAT_052461c0);
          puVar18 = &DAT_05240280;
          if (iVar22 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar18 = &DAT_05240280;
        }
      }
      local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
      local_e4 = 0.0;
      if ((puVar18[0x227] != 0) &&
         (uVar11 = FUN_03850a90(puVar18[0x227],0,&local_c0,0), (uVar11 & 1) != 0))
      goto LAB_0249c9c4;
    }
    else {
LAB_0249c9c4:
      uVar10 = 1;
      *(undefined1 *)(param_1 + 0x6a2) = 1;
      if ((local_a8 != (long *)0x0) && (lVar13 = *local_a8, lVar13 != 0)) {
        fVar23 = *(float *)(lVar13 + 0x18);
        if (fVar23 < 0.0) {
          fVar23 = *(float *)(local_a8[1] + 0xc);
        }
        uVar10 = (uint)(fVar23 - *(float *)(lVar13 + 0x14));
        if (uVar10 < 2) {
          uVar10 = 1;
        }
      }
      lVar13 = FUN_0251e98c(1);
      pfVar12 = (float *)(**(code **)(*(long *)(lVar13 + 0x1200) + 0xf0))(lVar13 + 0x1200);
      fVar24 = *pfVar12;
      uVar2 = uVar10 & 3;
      lVar13 = *(long *)(param_1 + 0x68);
      fVar25 = *(float *)(lVar13 + 0x280);
      fVar23 = -fVar24;
      if (0.0 <= fVar24) {
        fVar23 = fVar24;
      }
      if (fVar23 <= 0.0) {
        fVar23 = -fVar23;
      }
      if (uVar10 < 4) {
        fVar32 = 0.0;
        fVar27 = 0.0;
      }
      else {
        fVar32 = 0.0;
        fVar27 = 0.0;
        uVar16 = uVar10 & 0xfffffffc;
        do {
          fVar28 = fVar32 - fVar23;
          uVar16 = uVar16 - 4;
          fVar29 = fVar28 - fVar23;
          fVar26 = fVar29 - fVar23;
          fVar32 = fVar26 - fVar23;
          fVar27 = fVar27 + fVar28 + fVar29 + fVar26 + fVar32;
        } while (uVar16 != 0);
      }
      fVar28 = *(float *)(lVar13 + 0x27c);
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        fVar32 = fVar32 - fVar23;
        fVar27 = fVar27 + fVar32;
      }
      fVar23 = (float)uVar10;
      *(float *)(param_1 + 0x694) = (local_9c - *(float *)(lVar13 + 0x278)) / fVar23;
      fVar32 = ((local_98 - fVar28) - fVar27) / fVar23;
      *(float *)(param_1 + 0x698) = fVar32;
      *(float *)(param_1 + 0x1828) = fVar32;
      *(float *)(param_1 + 0x69c) = (local_94 - fVar25) / fVar23;
      if (0.0 <= fVar24) {
        lVar13 = FUN_0251e98c(1);
        pfVar12 = (float *)(**(code **)(*(long *)(lVar13 + 0x810) + 0xf0))(lVar13 + 0x810);
        fVar24 = *pfVar12;
      }
      *(float *)(param_1 + 0x1830) = fVar24;
      *(undefined4 *)(param_1 + 0x182c) = 0x80000000;
    }
    puVar18 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar18 == (undefined8 *)0x0) {
    local_c4 = 0;
    if ((DAT_052461c0 & 1) == 0) {
      iVar22 = __cxa_guard_acquire(&DAT_052461c0);
      puVar18 = &DAT_05240280;
      if (iVar22 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar18 = &DAT_05240280;
    }
  }
  local_c4 = *(int *)(puVar18[0x290] + ((ulong)*(uint *)(puVar18[0x290] + 0x10) & 1) * 0x20 + 0x28);
  if (local_c4 != 0) {
    local_d8 = (long *)CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1 + 0x230));
    FUN_0071cb58(&local_c0,&local_c4,&local_d8,0);
    if ((((local_c0 != (undefined *)0x0) && ((char)local_b8 != '\0')) && (local_b8._2_1_ != '\0'))
       && (*(int *)((long)local_c0 + 0x15c) == 0xa0)) {
      local_e4 = *(float *)(param_1 + 0x230);
      FUN_0071cb58(&local_d8,&local_c4,&local_e4,0);
      plVar19 = local_d8;
      if (local_d8 != (long *)0x0) {
        if (((*PTR_DAT_04bbe288 & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(PTR_DAT_04bbe288), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bbe280 = PTR_DAT_04bbe250 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe288);
        }
        uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe280);
        if ((uVar11 & 1) == 0) {
          local_d0._0_3_ = (uint3)(ushort)local_d0;
        }
      }
      plVar19 = local_d8;
      if (((local_d8 != (long *)0x0) && ((char)local_d0 != '\0')) && (local_d0._2_1_ != '\0')) {
        sVar6 = *(short *)(param_1 + 0x1904);
        fVar32 = (float)*(int *)(param_1 + 0x1900) * 0.001;
        iVar22 = *piVar1;
        uVar10 = FUN_006f0400((float)*(int *)(param_1 + 0x190a) * 0.001 - fVar32,
                              (float)*(int *)(param_1 + 0x1910) * 0.001 - (float)iVar22 * 0.001);
        fVar23 = sinf((float)uVar10 * 1.4629181e-09);
        fVar24 = cosf((float)uVar10 * 1.4629181e-09);
        local_e8[0] = 0;
        fVar25 = fVar23 * 0.0;
        local_e4 = fVar32 + fVar25 * 0.0 + fVar24 * 0.0 + (fVar23 + 0.0) * 22.0;
        local_dc = (float)iVar22 * 0.001 + (fVar24 * 0.0 * 0.0 - fVar23 * 0.0) + fVar24 * 22.0;
        fStack_e0 = (float)(int)sVar6 * 0.25 +
                    (fVar25 * 0.0 + 1.0) * 0.0 + fVar24 * 0.0 * 0.0 + fVar25 * 22.0;
        fVar23 = fStack_e0;
        fVar24 = local_e4;
        uVar9 = FUN_01746d18(plVar19,&local_e4,local_e8);
        lVar13 = *(long *)(param_1 + 0x80);
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x330) = uVar9;
          *(float *)(lVar13 + 0x334) = fVar23;
          *(float *)(lVar13 + 0x338) = fVar24;
        }
        *(undefined4 *)(param_1 + 0x2b0) = uVar9;
        *(float *)(param_1 + 0x2b4) = fVar23;
        *(float *)(param_1 + 0x2b8) = fVar24;
      }
    }
  }
  fVar24 = (float)*(int *)(param_1 + 0x190a) * 0.001 - (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar23 = (float)*(int *)(param_1 + 0x1910) * 0.001 - (float)*piVar1 * 0.001;
  fVar25 = SQRT(fVar24 * fVar24 + 0.0 + fVar23 * fVar23);
  if (0.0 < fVar25) {
    fVar24 = fVar24 * (1.0 / fVar25);
    fVar23 = fVar23 * (1.0 / fVar25);
    fVar25 = SQRT(fVar24 * fVar24 + 0.0 + fVar23 * fVar23);
  }
  if (0.0 < fVar25) {
    fVar24 = (1.0 / fVar25) * fVar24;
    fVar23 = fVar23 * (1.0 / fVar25);
  }
  if ((fVar24 == 0.0) && (fVar23 == 0.0)) {
    iVar22 = 0;
  }
  else {
    iVar22 = FUN_006f0400();
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_d8 = (long *)CONCAT44(local_d8._4_4_,10);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0249ce48;
  }
  else {
LAB_0249ce48:
    plVar19 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar19 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar19 + 0x148))();
    iVar14 = iVar22 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar22 = -0x15555560;
      iVar14 = (int)((float)iVar14 * 0.25);
      if (iVar14 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar22 = 0x5b05b0;
      }
      iVar3 = iVar14;
      if (iVar7 <= iVar14) {
        iVar3 = iVar7;
      }
      if (iVar22 <= iVar14) {
        iVar22 = iVar3;
      }
      iVar22 = iVar22 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar22;
  }
  puVar8 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0x6a2) == '\0') {
    return;
  }
  local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "PlayerLongStickLand";
  if (puVar17[0x227] == 0) {
LAB_0249cfec:
    uVar11 = FUN_0170a6d0(puVar17,0);
  }
  else {
    lVar13 = *(long *)(puVar17[0x227] + 0x88);
    plVar19 = (long *)(lVar13 + 0x60);
    (**(code **)(*plVar19 + 0x18))(plVar19);
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcVar21 = *(char **)(lVar13 + 0x68);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (pcVar21 == local_b8) {
LAB_0249d028:
      uVar11 = FUN_0170a6d0(puVar17,0);
joined_r0x0249d034:
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x178) != 0) {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
        return;
      }
      uVar11 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar11 & 1) == 0) {
        local_d0 = (char *)((ulong)local_d0 & 0xffffffff00000000);
        local_d8 = (long *)CONCAT35(local_d8._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_d8);
        return;
      }
      return;
    }
    pcVar21 = *(char **)(lVar13 + 0x68);
    if (*pcVar21 != *local_b8) goto LAB_0249cfec;
    if (*pcVar21 == '\0') goto LAB_0249d028;
    uVar11 = 0;
    do {
      uVar20 = uVar11;
      if ((uVar20 == 0x80000) || (pcVar21[uVar20 + 1] != local_b8[uVar20 + 1])) goto LAB_0249cfec;
      if (pcVar21[uVar20 + 1] == '\0') goto LAB_0249cfd0;
      if (pcVar21[uVar20 + 2] != local_b8[uVar20 + 2]) goto LAB_0249cfec;
      uVar11 = uVar20 + 2;
    } while (pcVar21[uVar20 + 2] != '\0');
    uVar20 = uVar20 + 1;
LAB_0249cfd0:
    uVar11 = FUN_0170a6d0(puVar17,0);
    if (uVar20 >> 0x13 == 0) goto joined_r0x0249d034;
  }
  if ((uVar11 & 1) != 0) {
    if (*(char *)(param_1 + 0x1914) != '\0') {
      local_d8 = (long *)(ulong)CONCAT14(*(undefined1 *)(param_1 + 0x1916),
                                         (uint)*(byte *)(param_1 + 0x1915));
      uVar11 = (ulong)local_d0 >> 0x10;
      local_d0 = (char *)CONCAT62((int6)uVar11,1);
      FUN_02431500(param_1,&local_d8);
      return;
    }
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100;
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar30 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar30 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar17,&local_c0,6,0,0);
    uVar9 = *(undefined4 *)(param_1 + 0x230);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar30 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar30 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    lVar13 = FUN_017067d4(puVar17,uVar9,0);
    if (lVar13 != 0) {
      local_d8 = (long *)(puVar8 + 0x10);
      local_d0 = "ToolLongStick_Land";
      FUN_01752fd8(lVar13,&local_d8,10,0,0);
    }
    plVar19 = *(long **)(param_1 + 0x60);
    if (plVar19 == (long *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar30 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar30 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar11 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb37b0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    (**(code **)(*plVar19 + 0x498))(plVar19,1);
    return;
  }
  fVar23 = *(float *)(param_1 + 0x694);
  pfVar12 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  *pfVar12 = fVar23 + *pfVar12;
  fVar23 = *(float *)(param_1 + 0x69c);
  lVar13 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  *(float *)(lVar13 + 8) = fVar23 + *(float *)(lVar13 + 8);
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  fVar27 = (float)iVar30 * 0.001;
  fVar25 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar24 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  fVar32 = (float)(int)sVar5 * 0.25;
  fVar28 = fVar27 - fVar25;
  fVar29 = (float)iVar31 * 0.001 - fVar24;
  fVar27 = fVar27 - local_9c;
  fVar23 = (float)iVar31 * 0.001 - local_94;
  fVar27 = SQRT(fVar29 * fVar29 + fVar28 * fVar28) / SQRT(fVar23 * fVar23 + fVar27 * fVar27);
  fVar23 = 1.0;
  if (fVar27 <= 1.0) {
    fVar23 = fVar27;
  }
  fVar32 = fVar32 + fVar23 * (local_98 - fVar32);
  if (*(long *)PTR_DAT_04bb39b0 != 0) {
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar28 = 0.0;
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) goto LAB_0249d2f4;
  }
  lVar13 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(&DAT_00001230 + lVar13) + 0xf0))(&DAT_00001230 + lVar13)
  ;
  fVar28 = *(float *)(param_1 + 0x694);
  fVar27 = *(float *)(param_1 + 0x69c);
  fVar24 = SQRT(fVar28 * fVar28 + 0.0 + fVar27 * fVar27);
  if (0.0 < fVar24) {
    fVar24 = 1.0 / fVar24;
    fVar28 = fVar28 * fVar24;
    fVar27 = fVar27 * fVar24;
  }
  lVar13 = *(long *)(param_1 + 0x68);
  fVar24 = fVar23 + fVar23;
  if (0.5 <= fVar23) {
    fVar24 = (fVar23 + -0.5) * -2.0 + 1.0;
  }
  fVar28 = fVar24 * *pfVar12 * fVar28;
  fVar27 = fVar24 * *pfVar12 * fVar27;
  fVar29 = (*(float *)(lVar13 + 0x27c) - fVar32) * 0.0;
  fVar25 = *(float *)(lVar13 + 0x278);
  fVar24 = *(float *)(lVar13 + 0x280);
LAB_0249d2f4:
  puVar17 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined1 *)((long)puVar17 + 0x2e4) = 1;
  *(float *)(puVar17 + 0x5d) = fVar28 + fVar25;
  *(float *)((long)puVar17 + 0x2ec) = fVar32 + fVar29;
  *(float *)(puVar17 + 0x5e) = fVar27 + fVar24;
  *(undefined2 *)((long)puVar17 + 0x2e5) = 0x101;
  return;
}

