
void FUN_0244e27c(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  pfVar1 = (float *)PTR_DAT_04bc3038;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  pfVar5 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar5 = (float *)(param_1 + 0xeec);
  }
  fVar12 = SQRT(pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
  fVar10 = 0.0;
  if (*pfVar5 <= fVar12) {
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    fVar10 = *pfVar5;
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    fVar11 = (fVar12 - *pfVar5) / (1.0 - fVar10);
    fVar12 = 0.9999;
    if (fVar11 <= 0.9999) {
      fVar12 = fVar11;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar11) {
      fVar10 = fVar12;
    }
  }
  uStack_50 = CONCAT44(fVar10,(undefined4)uStack_50);
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar1 = (float *)(param_1 + 0xeec);
  }
  FUN_02569464(&local_80,pfVar1);
  puVar2 = PTR_DAT_04bb4848;
  local_48 = local_80._0_4_;
  local_64 = FUN_022910b0(*(undefined8 *)PTR_DAT_04bb4848,&local_60,0);
  if (local_64 != 2) {
    local_70 = CONCAT44(local_70._4_4_,0xc);
    lVar8 = *(long *)(param_1 + 0x70);
    uVar7 = 0;
    lVar4 = 0;
    if (lVar8 != 0) {
      uVar7 = 0;
      if (*(uint *)(lVar8 + 0x280) < 0x149) {
        uVar7 = *(uint *)(lVar8 + 0x280);
      }
      lVar4 = lVar8 + 0x278;
    }
    if (uVar7 == 0xc) {
      return;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0xc);
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
    FUN_03ebb160(lVar4,0xc);
    return;
  }
  local_70 = 0;
  local_68 = 0x40a00000;
  FUN_02291298(*(undefined8 *)puVar2,&local_70);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
  fVar10 = fVar10 * 8.381903e-08;
  fVar12 = (float)NEON_ucvtf(local_58._4_4_);
  fVar12 = fVar12 * 8.381903e-08;
  if (fVar10 <= 360.0) {
    if (fVar10 < 0.0) {
      fVar11 = fVar10 / 360.0 + -1.0;
      goto LAB_0244e530;
    }
  }
  else {
    fVar11 = fVar10 / 360.0;
LAB_0244e530:
    fVar10 = fVar10 - (float)(int)fVar11 * 360.0;
  }
  if (fVar12 <= 360.0) {
    if (0.0 <= fVar12) goto LAB_0244e578;
    fVar11 = fVar12 / 360.0 + -1.0;
  }
  else {
    fVar11 = fVar12 / 360.0;
  }
  fVar12 = fVar12 - (float)(int)fVar11 * 360.0;
LAB_0244e578:
  fVar11 = 0.0;
  if (fVar10 != fVar12) {
    fVar11 = fVar10 - fVar12;
    if (fVar10 <= fVar12) {
      fVar11 = fVar12 - fVar10;
    }
    if (180.0 < fVar11) {
      fVar11 = 360.0 - fVar11;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(fVar11,&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "SnowBallAngularVelocity";
  if (((puVar9[0x227] != 0) && (lVar4 = *(long *)(puVar9[0x227] + 0x78), lVar4 != 0)) &&
     (plVar6 = *(long **)(lVar4 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(fVar11,plVar6,&local_80);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_80 = puVar2 + 0x10;
  pcStack_78 = "SnowBallRollSpeedRate";
  if (((puVar9[0x227] != 0) && (lVar4 = *(long *)(puVar9[0x227] + 0x78), lVar4 != 0)) &&
     (plVar6 = *(long **)(lVar4 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(local_70._4_4_,plVar6,&local_80);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_80 = puVar2 + 0x10;
  pcStack_78 = "SnowBallRadius";
  if (((puVar9[0x227] != 0) && (lVar4 = *(long *)(puVar9[0x227] + 0x78), lVar4 != 0)) &&
     (plVar6 = *(long **)(lVar4 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(local_68,plVar6,&local_80);
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_60,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),(long)&local_58 + 4)
  ;
  return;
}

