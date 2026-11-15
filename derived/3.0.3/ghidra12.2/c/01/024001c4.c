
void FUN_024001c4(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  long *local_60;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  
  local_50 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_54 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_4c = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_50 = (float)FUN_016e026c(0,&local_54,0,0);
  fVar12 = local_54 - (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar13 = local_4c - (float)*(int *)(param_1 + 0x1906) * 0.001;
  fVar14 = SQRT(fVar12 * fVar12 + 0.0 + fVar13 * fVar13);
  if (0.0 < fVar14) {
    fVar12 = fVar12 * (1.0 / fVar14);
    fVar13 = fVar13 * (1.0 / fVar14);
    fVar14 = SQRT(fVar12 * fVar12 + 0.0 + fVar13 * fVar13);
  }
  if (0.0 < fVar14) {
    fVar12 = (1.0 / fVar14) * fVar12;
    fVar13 = fVar13 * (1.0 / fVar14);
  }
  if ((fVar12 == 0.0) && (fVar13 == 0.0)) {
    iVar5 = 0;
    iVar9 = 0;
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_024002ec;
LAB_02400340:
    plVar8 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar8 + 0x148))();
    iVar9 = iVar5 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar9 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar5 = -0x15555560;
      iVar9 = (int)((float)iVar9 * 0.25);
      if (iVar9 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar5 = 0x5b05b0;
      }
      iVar1 = iVar9;
      if (iVar3 <= iVar9) {
        iVar1 = iVar3;
      }
      if (iVar5 <= iVar9) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar5;
  }
  else {
    iVar5 = FUN_006f0400();
    iVar9 = iVar5;
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_02400340;
LAB_024002ec:
    iVar5 = iVar9;
    local_48 = CONCAT44(10,(undefined4)local_48);
    local_78 = CONCAT44(local_78._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02400340;
  }
  if (*(char *)(param_1 + 0xc7d) == '\0') {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    local_68 = 0;
    local_60 = (long *)0x0;
    local_78 = 0;
    local_70 = 0;
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    local_48 = 0;
    if ((puVar11[0x227] == 0) ||
       (uVar7 = FUN_03850a90(puVar11[0x227],0,&local_78,0), (uVar7 & 1) == 0)) {
      if (*(char *)(param_1 + 0xc7d) == '\0') goto LAB_02400564;
    }
    else {
      if ((local_60 == (long *)0x0) || (lVar6 = *local_60, lVar6 == 0)) {
        uVar10 = 1;
      }
      else {
        fVar12 = *(float *)(lVar6 + 0x18);
        if (fVar12 < 0.0) {
          fVar12 = *(float *)(local_60[1] + 0xc);
        }
        uVar10 = (uint)(fVar12 - *(float *)(lVar6 + 0x14));
        if (uVar10 < 2) {
          uVar10 = 1;
        }
      }
      *(undefined4 *)(param_1 + 0xc70) = 0;
      *(undefined1 *)(param_1 + 0xc7d) = 1;
      *(byte *)(param_1 + 0xc7c) = (byte)(uVar10 >> 0x1f);
      *(uint *)(param_1 + 0xc78) = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0xc74) = uVar10 & (int)uVar10 >> 0x1f;
    }
  }
  iVar5 = *(int *)(param_1 + 0xc78) - *(int *)(param_1 + 0xc70);
  plVar8 = *(long **)(param_1 + 0x68);
  if (iVar5 == 0) {
    (**(code **)(*plVar8 + 0x100))(plVar8,&local_54);
    cVar2 = *(char *)(param_1 + 0xc7d);
  }
  else {
    fVar12 = 1.0 / (float)iVar5;
    local_78 = CONCAT44(fVar12 * 0.0 + *(float *)((long)plVar8 + 0x27c),
                        *(float *)(plVar8 + 0x4f) + fVar12 * (local_54 - *(float *)(plVar8 + 0x4f)))
    ;
    local_70 = CONCAT44(local_70._4_4_,
                        *(float *)(plVar8 + 0x50) + fVar12 * (local_4c - *(float *)(plVar8 + 0x50)))
    ;
    (**(code **)(*plVar8 + 0x100))(plVar8,&local_78);
    plVar8 = *(long **)(param_1 + 0x68);
    FUN_016e026c(0,plVar8 + 0x4f,0,0);
    (**(code **)(*plVar8 + 0x110))(plVar8);
    cVar2 = *(char *)(param_1 + 0xc7d);
  }
  if (cVar2 != '\0') {
    uVar4 = (**(code **)(*(long *)(param_1 + 0xc68) + (ulong)*(byte *)(param_1 + 0xc7c) * 8))
                      (param_1 + 0xc68);
    *(undefined4 *)(param_1 + 0xc70) = uVar4;
  }
LAB_02400564:
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_48 = local_48 & 0xffffffff;
  local_78 = local_78 & 0xffffffff00000000;
  if ((puVar11[0x227] != 0) && (uVar7 = FUN_03850368(puVar11[0x227],0), (uVar7 & 1) == 0)) {
    uVar4 = local_48._4_4_;
    if ((puVar11[0x227] != 0) &&
       ((uVar7 = FUN_03850368(puVar11[0x227],local_48._4_4_), (uVar7 & 1) == 0 &&
        (uVar7 = FUN_0384fca4(puVar11[0x227],uVar4), (uVar7 & 1) == 0)))) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar7 & 1) == 0) {
      local_70 = local_70 & 0xffffffff00000000;
      local_78 = CONCAT35(local_78._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_78);
    }
  }
  else {
    FUN_023164ec(param_1,6);
  }
  return;
}

