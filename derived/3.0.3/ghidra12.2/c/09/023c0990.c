
void FUN_023c0990(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte bVar19;
  char *pcVar20;
  byte bVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint *puVar24;
  void *pvVar25;
  void *__src;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_1e8;
  float fStack_1e0;
  float local_1dc;
  float fStack_1d8;
  undefined1 local_1d4;
  void *local_188;
  int local_180;
  void *local_130;
  int local_128;
  undefined1 local_e0;
  float local_94;
  float fStack_90;
  float local_8c;
  byte local_74 [4];
  
  plVar22 = *(long **)(param_1 + 0x60);
  if (plVar22 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      plVar22 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar22 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar22 + 0x4e8))(plVar22,1);
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_94 = 0.0;
  local_1e8._0_4_ = 6.5861e-44;
  if (puVar23[0x227] == 0) {
    plVar22 = *(long **)(param_1 + 0x60);
LAB_023c0b38:
    if (plVar22 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        plVar22 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar22 = &DAT_05240280;
      }
    }
    fVar29 = 1.0;
    pcVar15 = *(code **)(*plVar22 + 0x4e0);
  }
  else {
    uVar12 = FUN_03850a90(puVar23[0x227],0x2f,0,0);
    plVar22 = *(long **)(param_1 + 0x60);
    if ((uVar12 & 1) == 0) goto LAB_023c0b38;
    if (plVar22 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        plVar22 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar22 = &DAT_05240280;
      }
    }
    plVar22 = (long *)plVar22[9];
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar11 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    fVar28 = 0.0;
    if (((plVar22 != (long *)0x0) &&
        (uVar12 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb3758), (uVar12 & 1) != 0)) &&
       (plVar22[0x5b] != 0)) {
      fVar27 = *(float *)(plVar22[0x5b] + 0x54);
      fVar29 = 1.0;
      if (fVar27 <= 1.0) {
        fVar29 = fVar27;
      }
      fVar28 = 0.0;
      if (0.0 <= fVar27) {
        fVar28 = fVar29;
      }
    }
    plVar22 = *(long **)(param_1 + 0x60);
    if (plVar22 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        plVar22 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar22 = &DAT_05240280;
      }
    }
    lVar13 = FUN_0251e98c(1);
    pfVar14 = (float *)(**(code **)(*(long *)(lVar13 + 0x27d0) + 0xf0))(lVar13 + 0x27d0);
    fVar29 = *pfVar14;
    lVar13 = FUN_0251e98c(1);
    pfVar14 = (float *)(**(code **)(*(long *)(lVar13 + 0x27d0) + 0xf0))(lVar13 + 0x27d0);
    pcVar15 = *(code **)(*plVar22 + 0x4e0);
    fVar29 = fVar29 + (1.0 - fVar28) * (1.0 - *pfVar14);
  }
  (*pcVar15)(fVar29,plVar22);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar24 = &DAT_054f08c0;
      if (iVar11 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar24 = &DAT_054f08c0;
    }
  }
  else {
    puVar24 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  local_1e8._0_4_ = 2.8026e-45;
  if (((*puVar24 >> 2 & 1) != 0) && (uVar12 = FUN_0253da50(param_1 + 0x1ee8), (uVar12 & 1) != 0)) {
    FUN_02472404(0,param_1);
  }
  pfVar14 = (float *)(PTR_DAT_04bb2d00 +
                     ((ulong)(*(ushort *)(param_1 + 0x1914) >> 4) & 0xff0 ^ 0x800));
  fVar29 = (float)((*(ushort *)(param_1 + 0x1914) & 0xff) << 0x10) * 5.9604645e-08;
  fVar28 = *pfVar14 + fVar29 * pfVar14[1];
  fVar29 = pfVar14[2] + fVar29 * pfVar14[3];
  fVar27 = fVar28 * 0.0;
  local_94 = (float)*(int *)(param_1 + 0x190a) * 0.001 +
             fVar27 * 0.0 + fVar29 * 0.0 + (fVar28 + 0.0) * 5.0;
  fStack_90 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25 +
              (fVar27 * 0.0 + 1.0) * 0.0 + fVar29 * 0.0 * 0.0 + fVar27 * 5.0;
  local_8c = (float)*(int *)(param_1 + 0x1910) * 0.001 +
             (fVar29 * 0.0 * 0.0 - fVar28 * 0.0) + fVar29 * 5.0;
  fStack_90 = (float)FUN_016e026c(0,&local_94,0,0);
  bVar21 = *(byte *)(param_1 + 0x1909);
  uVar10 = *(uint *)(param_1 + 0x1c04);
  if (bVar21 == 0) {
    if (uVar10 != 0) {
      local_1e8._4_4_ = 0.0;
      fStack_1e0 = 0.0;
      local_1dc = 0.0;
      fStack_1d8 = 1.0;
      local_1e8._0_1_ = *PTR_DAT_04bb32e0;
      if (7 < (byte)local_1e8) {
        local_1e8._0_1_ = 0xff;
      }
      local_1d4 = 1;
      cVar7 = '\0';
      if (*(char *)(param_1 + 0x3a5) != '\0') {
        uVar9 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                          (param_1 + 0x390);
        *(undefined4 *)(param_1 + 0x398) = uVar9;
        cVar7 = *(char *)(param_1 + 0x3a5);
      }
      bVar21 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      local_1e8._0_4_ = (float)CONCAT31(local_1e8._1_3_,bVar21);
      iVar11 = *(int *)(param_1 + 0x3a0);
      if (cVar7 == '\0') {
        fVar29 = 0.0;
      }
      else {
        fVar29 = 1.0;
        if ((iVar11 != 0) && (*(int *)(param_1 + 0x398) < iVar11)) {
          fVar27 = (float)*(int *)(param_1 + 0x398) / (float)iVar11;
          fVar28 = 1.0;
          if (fVar27 <= 1.0) {
            fVar28 = fVar27;
          }
          fVar29 = 0.0;
          if (0.0 <= fVar27) {
            fVar29 = fVar28;
          }
        }
      }
      goto LAB_023c0f58;
    }
    *(undefined2 *)(param_1 + 0x3a4) = 0x100;
    bVar21 = *(byte *)(param_1 + 0x1ee8);
    *(undefined4 *)(param_1 + 0x3a0) = 0x1e;
    uVar9 = *(undefined4 *)(param_1 + 0x388);
    fStack_1d8 = 0.01;
    uVar6 = *(undefined4 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    local_1e8._0_4_ = (float)CONCAT31(local_1e8._1_3_,bVar21);
  }
  else {
    if (uVar10 < bVar21) {
      return;
    }
    if (uVar10 == bVar21) {
      FUN_02b64180(*(undefined2 *)(param_1 + 0x1901),*(undefined4 *)(param_1 + 0x230));
      bVar21 = *(byte *)(param_1 + 0x1ee8);
      *(undefined2 *)(param_1 + 0x3a4) = 0x100;
      *(undefined4 *)(param_1 + 0x3a0) = 0xf;
      *(undefined8 *)(param_1 + 0x398) = 0;
      fStack_1d8 = 0.01;
      local_1e8._4_4_ = local_94;
      fStack_1e0 = fStack_90;
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      local_1dc = local_8c;
      local_1e8._0_4_ = (float)CONCAT31(local_1e8._1_3_,bVar21);
      local_1d4 = 1;
      FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_1e8,*(undefined4 *)(param_1 + 0x230),1);
      return;
    }
    local_1e8._4_4_ = 0.0;
    fStack_1e0 = 0.0;
    local_1dc = 0.0;
    fStack_1d8 = 1.0;
    local_1e8._0_1_ = *PTR_DAT_04bb32e0;
    if (7 < (byte)local_1e8) {
      local_1e8._0_1_ = 0xff;
    }
    local_1d4 = 1;
    cVar7 = '\0';
    if (*(char *)(param_1 + 0x3a5) != '\0') {
      uVar9 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                        (param_1 + 0x390);
      *(undefined4 *)(param_1 + 0x398) = uVar9;
      cVar7 = *(char *)(param_1 + 0x3a5);
    }
    bVar21 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    local_1e8._0_4_ = (float)CONCAT31(local_1e8._1_3_,bVar21);
    iVar11 = *(int *)(param_1 + 0x3a0);
    if (cVar7 == '\0') {
      fVar29 = 0.0;
    }
    else {
      fVar29 = 1.0;
      if ((iVar11 != 0) && (*(int *)(param_1 + 0x398) < iVar11)) {
        fVar27 = (float)*(int *)(param_1 + 0x398) / (float)iVar11;
        fVar28 = 1.0;
        if (fVar27 <= 1.0) {
          fVar28 = fVar27;
        }
        fVar29 = 0.0;
        if (0.0 <= fVar27) {
          fVar29 = fVar28;
        }
      }
    }
LAB_023c0f58:
    fStack_1d8 = fVar29 * 0.99 + 0.01;
    uVar9 = *(undefined4 *)(param_1 + 0x388);
    uVar6 = *(undefined4 *)(param_1 + 0x230);
  }
  local_1d4 = 1;
  local_1e8._4_4_ = local_94;
  fStack_1e0 = fStack_90;
  local_1dc = local_8c;
  FUN_016fa230(uVar9,&local_1e8,uVar6,1);
  local_1e8._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  puVar23 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar23 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_1e8._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fStack_1e0 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  uVar9 = FUN_016e57cc(param_1);
  *(undefined4 *)((long)puVar23 + 0x27c) = uVar9;
  puVar23 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar23 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar9 = FUN_016e026c(0,&local_1e8,0,0);
  bVar8 = true;
  *(undefined4 *)((long)puVar23 + 0x2ec) = uVar9;
  *(undefined1 *)((long)puVar23 + 0x2e5) = 1;
  if ((*(byte *)(param_1 + 0x17d5) & 1) == 0) {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    local_1e8._0_4_ = 0.0;
    if ((puVar23[0x227] == 0) || (uVar12 = FUN_03850368(puVar23[0x227],0), (uVar12 & 1) == 0)) {
      puVar23 = *(undefined8 **)(param_1 + 0x60);
      if (puVar23 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(&DAT_052461c0);
          puVar23 = &DAT_05240280;
          if (iVar11 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar23 = &DAT_05240280;
        }
      }
      uVar12 = FUN_0170a6d0(puVar23,0);
      if ((uVar12 & 1) != 0) {
        *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x100;
        bVar8 = true;
        goto LAB_023c1088;
      }
    }
    bVar8 = false;
  }
LAB_023c1088:
  if (0x1c2 < *(uint *)(param_1 + 0x1c04)) {
    bVar8 = true;
  }
  if (((*(int *)(param_1 + 0x178) != 0) || (!bVar8)) ||
     ((*(long *)PTR_DAT_04bb2808 != 0 &&
      ((lVar13 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar13 != 0 &&
       (1 < *(uint *)(lVar13 + 0x1b0))))))) {
    if (!bVar8) {
      puVar23 = *(undefined8 **)(param_1 + 0x60);
      if (puVar23 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar11 = __cxa_guard_acquire(&DAT_052461c0);
          puVar23 = &DAT_05240280;
          if (iVar11 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar23 = &DAT_05240280;
        }
      }
      local_1e8._0_4_ = 0.0;
      if (puVar23[0x227] == 0) {
        return;
      }
      lVar13 = *(long *)(puVar23[0x227] + 0x88);
      plVar22 = (long *)(lVar13 + 0x60);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      pcVar20 = *(char **)(lVar13 + 0x68);
      if (pcVar20 != "PlayerWait") {
        if (*pcVar20 != 'P') {
          return;
        }
        uVar12 = 0;
        do {
          uVar18 = uVar12;
          if (uVar18 == 0x80000) {
            return;
          }
          if (pcVar20[uVar18 + 1] != "PlayerWait"[uVar18 + 1]) {
            return;
          }
          uVar12 = uVar18 + 1;
        } while (pcVar20[uVar18 + 1] != '\0');
        if (uVar18 >> 0x13 != 0) {
          return;
        }
      }
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    }
    FUN_023164ec(param_1,6);
    return;
  }
  local_74[0] = *(byte *)(param_1 + 0x1ee8);
  if (local_74[0] < 8) {
    uVar10 = FUN_02582d8c(local_74,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if ((((uVar10 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar10 = FUN_02582d8c(local_74,1), uVar10 < 8 &&
        (lVar13 = *(long *)puVar2, *(char *)(lVar13 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')))) {
      uVar12 = (ulong)uVar10;
      lVar16 = lVar13 + uVar12 * 0x13f0;
      if ((**(char **)(lVar16 + 0x230) != '\0') &&
         (lVar26 = lVar13 + uVar12 * 0x13f0, **(char **)(lVar26 + 0x288) != '\0')) {
        plVar22 = (long *)(lVar16 + 0x228);
        FUN_023240f4(param_1,1);
        FUN_0257a010(&local_1e8);
        lVar16 = lVar13 + uVar12 * 0x13f0;
        plVar1 = (long *)(lVar16 + 0x2d8);
        (**(code **)(*(long *)(lVar16 + 0x2d8) + 0x18))(plVar1);
        pvVar25 = *(void **)(lVar16 + 0x2e0);
        if (local_130 != pvVar25) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
          lVar17 = 0;
          do {
            if (*(char *)(*(long *)(lVar16 + 0x2e0) + lVar17) == '\0') goto LAB_023c14a0;
            lVar4 = *(long *)(lVar16 + 0x2e0) + lVar17;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_023c14a0;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_023c14a0;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_023c14a0:
          iVar11 = (int)lVar17;
          if (local_128 <= (int)lVar17) {
            iVar11 = local_128 + -1;
          }
          memcpy(local_130,pvVar25,(long)iVar11);
          *(undefined1 *)((long)local_130 + (long)iVar11) = 0;
        }
        plVar1 = (long *)(lVar26 + 0x288);
        pvVar25 = (void *)CONCAT44(local_1dc,fStack_1e0);
        (**(code **)(*plVar22 + 0x18))(plVar22);
        lVar16 = lVar13 + uVar12 * 0x13f0;
        __src = *(void **)(lVar16 + 0x230);
        if (pvVar25 != __src) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
          lVar26 = *(long *)(lVar16 + 0x230);
          lVar16 = 0;
          do {
            if (*(char *)(lVar26 + lVar16) == '\0') goto LAB_023c154c;
            lVar17 = lVar26 + lVar16;
            if (*(char *)(lVar17 + 1) == '\0') {
              lVar16 = lVar16 + 1;
              goto LAB_023c154c;
            }
            if (*(char *)(lVar17 + 2) == '\0') {
              lVar16 = lVar16 + 2;
              goto LAB_023c154c;
            }
            lVar16 = lVar16 + 3;
          } while (lVar16 != 0x80001);
          lVar16 = 0;
LAB_023c154c:
          iVar11 = (int)lVar16;
          if ((int)fStack_1d8 <= (int)lVar16) {
            iVar11 = (int)fStack_1d8 + -1;
          }
          memcpy(pvVar25,__src,(long)iVar11);
          *(undefined1 *)((long)pvVar25 + (long)iVar11) = 0;
        }
        lVar13 = lVar13 + uVar12 * 0x13f0;
        plVar3 = (long *)(lVar13 + 0x280);
        (**(code **)(*(long *)(lVar13 + 0x280) + 0x18))(plVar3);
        pvVar25 = (void *)*plVar1;
        if (local_188 != pvVar25) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
          lVar16 = *plVar1;
          lVar13 = 0;
          do {
            if (*(char *)(lVar16 + lVar13) == '\0') goto LAB_023c15f4;
            lVar26 = lVar16 + lVar13;
            if (*(char *)(lVar26 + 1) == '\0') {
              lVar13 = lVar13 + 1;
              goto LAB_023c15f4;
            }
            if (*(char *)(lVar26 + 2) == '\0') {
              lVar13 = lVar13 + 2;
              goto LAB_023c15f4;
            }
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          lVar13 = 0;
LAB_023c15f4:
          iVar11 = (int)lVar13;
          if (local_180 <= (int)lVar13) {
            iVar11 = local_180 + -1;
          }
          memcpy(local_188,pvVar25,(long)iVar11);
          *(undefined1 *)((long)local_188 + (long)iVar11) = 0;
        }
        local_e0 = 1;
        FUN_024480f0(param_1,&local_1e8);
        FUN_0257a130(plVar22);
        return;
      }
    }
  }
  else {
    local_74[0] = 0xff;
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  fStack_1e0 = 1.6273106e-36;
  local_1dc = 0.0;
  local_1e8 = puVar2;
  iVar11 = FUN_0274bce0(local_74,&local_1e8);
  bVar8 = iVar11 != 0;
  if (*(long *)PTR_DAT_04bb39b0 != 0) {
    bVar8 = iVar11 != 0 && *(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0;
  }
  fStack_1e0 = 1.6729654e-36;
  local_1dc = 0.0;
  local_1e8 = puVar2;
  iVar11 = FUN_02743000(&local_1e8);
  if (((iVar11 != 0) && (-1 < DAT_0540762c)) ||
     (bVar8 || (*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) & 2) != 0)) {
LAB_023c12cc:
    uVar12 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar12 & 1) == 0) {
      fStack_1e0 = 0.0;
      local_1e8._0_4_ = 8.40779e-45;
      local_1e8._4_4_ = (float)CONCAT31(local_1e8._5_3_,1);
      FUN_02374e74(param_1,&local_1e8);
      return;
    }
    return;
  }
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    uVar10 = 0;
    bVar21 = local_74[0];
    if (7 < local_74[0]) {
      bVar21 = 0xff;
    }
    do {
      pbVar5 = (byte *)(*(long *)PTR_DAT_04bb6270 + 0x10 + ((long)((ulong)uVar10 << 0x20) >> 0x1b));
      local_1e8._0_4_ = *(float *)(pbVar5 + 0x10);
      bVar19 = *pbVar5;
      if ((int)(float)local_1e8 < 0x13) {
        if (7 < bVar19) {
          bVar19 = 0xff;
        }
        if (bVar19 == bVar21 && pbVar5[0x18] == 3) goto LAB_023c12cc;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x20);
  }
  fStack_1e0 = 0.0;
  local_1dc = (float)((uint)local_1dc & 0xffffff00);
  local_1e8._0_4_ = 8.40779e-45;
  local_1e8._4_4_ = 9.18355e-41;
  FUN_02374564(param_1,&local_1e8);
  return;
}

