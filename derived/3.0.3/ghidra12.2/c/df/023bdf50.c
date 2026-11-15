
void FUN_023bdf50(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long *plVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_90;
  float local_88;
  int iStack_84;
  float local_7c [3];
  
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  iVar18 = *(int *)(param_1 + 0x1901);
  iVar17 = *(int *)(param_1 + 0x1907);
  sVar3 = *(short *)(param_1 + 0x1905);
  uVar2 = *(ushort *)(param_1 + 0x190b);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  local_7c[0] = 0.0;
  local_90 = CONCAT44(local_90._4_4_,0x2f);
  if ((puVar13[0x227] != 0) && (uVar6 = FUN_03850a90(puVar13[0x227],0x2f,0,0), (uVar6 & 1) != 0)) {
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    plVar14 = (long *)puVar13[9];
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    fVar19 = 0.0;
    if (((plVar14 != (long *)0x0) &&
        (uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3758), (uVar6 & 1) != 0)) &&
       (plVar14[0x5b] != 0)) {
      fVar15 = *(float *)(plVar14[0x5b] + 0x54);
      fVar20 = 1.0;
      if (fVar15 <= 1.0) {
        fVar20 = fVar15;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar15) {
        fVar19 = fVar20;
      }
    }
    plVar14 = *(long **)(param_1 + 0x60);
    if (plVar14 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        plVar14 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar14 = &DAT_05240280;
      }
    }
    lVar7 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x27d0) + 0xf0))(lVar7 + 0x27d0);
    fVar20 = *pfVar8;
    lVar7 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x27d0) + 0xf0))(lVar7 + 0x27d0);
    (**(code **)(*plVar14 + 0x4e0))(fVar20 + (1.0 - fVar19) * (1.0 - *pfVar8),plVar14);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  fVar20 = (float)iVar18 * 0.001;
  fVar19 = (float)(int)sVar3 * 0.25;
  fVar15 = (float)iVar17 * 0.001;
  local_90._0_4_ = 8.12753e-44;
  local_7c[0] = 0.0;
  if ((puVar13[0x227] != 0) && (uVar6 = FUN_03850890(puVar13[0x227],0x3a,0,0), (uVar6 & 1) != 0)) {
    uVar10 = *(undefined8 *)(param_1 + 0xc0c);
    local_88 = *(float *)(param_1 + 0xc14);
    local_90._0_4_ = (float)uVar10;
    bVar4 = (float)local_90 == 0.0;
    local_90 = uVar10;
    if ((bVar4) &&
       ((local_90._4_4_ = (float)((ulong)uVar10 >> 0x20), bVar4 = local_90._4_4_ == 0.0, bVar4 &&
        (local_88 == 0.0)))) {
      local_90 = CONCAT44(fVar19,fVar20);
      local_88 = fVar15 + -5.0;
      uVar16 = FUN_016e5890(&local_90);
      local_90 = CONCAT44(uVar16,(float)local_90);
    }
    lVar7 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x2830) + 0xf0))(lVar7 + 0x2830);
    local_90._4_4_ = *pfVar8 + local_90._4_4_;
    FUN_02333fd0(param_1,&local_90);
  }
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar21 = *pfVar8;
  lVar7 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1410) + 0xf0))(lVar7 + 0x1410);
  uVar16 = *puVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c[0] = 1.4013e-44;
    local_90._0_4_ = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023be314;
  }
  iVar17 = (uint)uVar2 * 0x10000;
  plVar14 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar14 = *(long **)(param_1 + 0x4c8);
  }
  lVar7 = (**(code **)(*plVar14 + 0x148))();
  iVar18 = iVar17 - *(int *)(lVar7 + 4);
  if (0xb60b5e < iVar18 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar17 = -0x15555560;
    iVar18 = (int)(fVar21 * 0.5 * (float)iVar18);
    if (iVar18 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar17 = 0x5b05b0;
    }
    iVar1 = iVar18;
    if (iVar5 <= iVar18) {
      iVar1 = iVar5;
    }
    if (iVar17 <= iVar18) {
      iVar17 = iVar1;
    }
    iVar17 = iVar17 + *(int *)(lVar7 + 4);
  }
  *(int *)(lVar7 + 4) = iVar17;
LAB_023be314:
  local_7c[1] = 0.0;
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_88 = *(float *)(puVar13 + 0x50);
  local_90 = puVar13[0x4f] & 0xffffffff;
  local_7c[0] = fVar20;
  local_7c[2] = fVar15;
  FUN_03eb4b60(uVar16,0x41200000,0x3e4ccccc,&local_90,local_7c);
  *(float *)(puVar13 + 0x4f) = (float)local_90;
  *(float *)(puVar13 + 0x50) = local_88;
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (((puVar13[0x293] == 0) || (lVar7 = *(long *)(puVar13[0x293] + 0x2d8), lVar7 == 0)) ||
     ((*(float *)(lVar7 + 0x58) == 0.0 &&
      ((((*(float *)(lVar7 + 0x5c) == 0.0 && (*(float *)(lVar7 + 0x60) == 0.0)) &&
        (*(float *)(lVar7 + 100) == 0.0)) &&
       ((*(float *)(lVar7 + 0x68) == 0.0 && (*(float *)(lVar7 + 0x6c) == 0.0)))))))) {
    local_90 = 0;
    iStack_84 = (uint)*(ushort *)(param_1 + 0x190b) << 0x10;
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    local_88 = 0.0;
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar13,1,&local_90);
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    FUN_01713d14(puVar13,&local_90);
  }
  iVar17 = *(int *)(param_1 + 0x178);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar18 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar18 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (iVar17 == 0) {
    local_90 = (ulong)(uint)local_90._4_4_ << 0x20;
    if (puVar13[0x227] == 0) {
      return;
    }
    lVar7 = *(long *)(puVar13[0x227] + 0x88);
    plVar14 = (long *)(lVar7 + 0x60);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcVar12 = *(char **)(lVar7 + 0x68);
    if (pcVar12 != "CommonDoorIn") {
      if (*pcVar12 != 'C') {
        return;
      }
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        if (uVar11 == 0x80000) {
          return;
        }
        if (pcVar12[uVar11 + 1] != "CommonDoorIn"[uVar11 + 1]) {
          return;
        }
        uVar6 = uVar11 + 1;
      } while (pcVar12[uVar11 + 1] != '\0');
      if (uVar11 >> 0x13 != 0) {
        return;
      }
    }
    local_88 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    local_90._0_4_ = (float)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_90 = CONCAT44(fVar19,(float)local_90);
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar16 = FUN_016e57cc(param_1);
    *(undefined4 *)((long)puVar13 + 0x27c) = uVar16;
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar16 = FUN_016e026c(0,&local_90,0,0);
    *(undefined4 *)((long)puVar13 + 0x2ec) = uVar16;
    *(undefined1 *)((long)puVar13 + 0x2e5) = 1;
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    uVar6 = FUN_0170a6d0(puVar13,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    local_7c[0] = 0.0;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar7,0);
    return;
  }
  local_90 = (ulong)(uint)local_90._4_4_ << 0x20;
  if (puVar13[0x227] == 0) {
    return;
  }
  lVar7 = *(long *)(puVar13[0x227] + 0x88);
  plVar14 = (long *)(lVar7 + 0x60);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pcVar12 = *(char **)(lVar7 + 0x68);
  if (pcVar12 != "CommonDoorIn") {
    if (*pcVar12 != 'C') {
      return;
    }
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      if (uVar11 == 0x80000) {
        return;
      }
      if (pcVar12[uVar11 + 1] != "CommonDoorIn"[uVar11 + 1]) {
        return;
      }
      uVar6 = uVar11 + 1;
    } while (pcVar12[uVar11 + 1] != '\0');
    if (uVar11 >> 0x13 != 0) {
      return;
    }
  }
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar17 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar17 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  uVar6 = FUN_0170a6d0(puVar13,0);
  if ((uVar6 & 1) != 0) {
    plVar14 = *(long **)(param_1 + 0x60);
    if (plVar14 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar17 = __cxa_guard_acquire(&DAT_052461c0);
        plVar14 = &DAT_05240280;
        if (iVar17 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar14 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar14 + 0x4e8))(plVar14,0);
  }
  return;
}

