
float FUN_0083a084(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_88;
  long local_38;
  
  uVar4 = DAT_04da7238;
  puVar3 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
    return 0.0;
  }
  if (param_3 == 0) {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x2e0)) {
      if (*(uint *)(param_1 + 0x2e0) <= param_2) {
        param_2 = 0;
      }
      iVar15 = *(int *)(*(long *)(param_1 + 0x2e8) + (long)(int)param_2 * 4);
      if (10 < iVar15) {
        iVar15 = 0xb;
      }
    }
    else {
      iVar15 = 0;
    }
    lVar9 = FUN_00834d74(0,0,0,0x88);
    pfVar10 = (float *)(**(code **)(**(long **)(*(long *)(lVar9 + 0x2d60) + (long)iVar15 * 8) + 0xf0
                                   ))();
    fVar18 = *pfVar10;
    fVar17 = pfVar10[1];
    fVar16 = pfVar10[2];
    if (*(int *)(puVar3 + 0x38) == -0x10e0fba8) {
      lVar9 = FUN_00834d74(0x88);
      plVar11 = *(long **)(*(long *)(lVar9 + 0x30b8) + (long)iVar15 * 8);
      goto LAB_0083a2c0;
    }
  }
  else {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x2f0)) {
      if (*(uint *)(param_1 + 0x2f0) <= param_2) {
        param_2 = 0;
      }
      iVar15 = *(int *)(*(long *)(param_1 + 0x2f8) + (long)(int)param_2 * 4);
      if (1 < iVar15) {
        iVar15 = 2;
      }
    }
    else {
      iVar15 = 0;
    }
    local_88 = FUN_00a8c31c(DAT_04da7238);
    if ((char)(local_88 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
      local_38 = local_38 + -0x15180;
      local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar12 = local_88 >> 0x10;
    uVar2 = local_88 >> 0x30;
    uVar13 = local_88 >> 0x18;
    local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
    local_88 = CONCAT26((short)uVar2,(uint6)local_88) & 0xff00ffffffffffff;
    cVar7 = FUN_00a8ae20(uVar4,uVar12,uVar13,4);
    lVar9 = FUN_00834d74(0x88);
    if (cVar7 == '\x02') {
      lVar14 = 0x3640;
    }
    else {
      lVar14 = 0x3410;
    }
    pfVar10 = (float *)(**(code **)(**(long **)(*(long *)(lVar9 + lVar14) + (long)iVar15 * 8) + 0xf0
                                   ))();
    uVar4 = DAT_04da7238;
    fVar17 = pfVar10[1];
    fVar16 = pfVar10[2];
    fVar18 = *pfVar10;
    if (*(int *)(puVar3 + 0x38) == -0x10e0fba8) {
      local_88 = FUN_00a8c31c(DAT_04da7238);
      if ((char)(local_88 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_38 = local_38 + -0x15180;
        local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar2 = local_88;
      uVar12 = local_88 >> 0x10;
      uVar13 = local_88 >> 0x18;
      local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
      local_88._7_1_ = SUB81(uVar2,7);
      local_88._0_7_ = (uint7)(uint6)local_88;
      cVar7 = FUN_00a8ae20(uVar4,uVar12,uVar13,4);
      lVar9 = FUN_00834d74(0x88);
      if (cVar7 == '\x02') {
        lVar9 = *(long *)(lVar9 + 0x3758);
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x3528);
      }
      plVar11 = *(long **)(lVar9 + (long)iVar15 * 8);
LAB_0083a2c0:
      pfVar10 = (float *)(**(code **)(*plVar11 + 0xf0))();
      fVar21 = *pfVar10;
      fVar19 = pfVar10[1];
      fVar20 = pfVar10[2];
      goto LAB_0083a2d4;
    }
  }
  fVar19 = 0.0;
  fVar21 = 0.0;
  fVar20 = 0.0;
LAB_0083a2d4:
  bVar5 = true;
  if ((fVar18 <= fVar21) && (bVar5 = false, !NAN(fVar19) && !NAN(fVar17))) {
    bVar5 = fVar19 < fVar17;
  }
  bVar6 = true;
  if ((!bVar5) && (bVar6 = false, !NAN(fVar20) && !NAN(fVar16))) {
    bVar6 = fVar20 < fVar16;
  }
  if (bVar6) {
    fVar18 = fVar18 + *(float *)(param_1 + 0x274);
  }
  else {
    uVar8 = nn::os::GetSystemTick();
    uVar1 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    fVar18 = *(float *)(param_1 + 0x274) +
             fVar18 + (fVar21 - fVar18) *
                      ((float)((uVar8 >> 8 ^ uVar1 >> 0x13 ^ uVar8 ^ uVar1) >> 9 | 0x3f800000) +
                      -1.0);
  }
  return fVar18;
}

