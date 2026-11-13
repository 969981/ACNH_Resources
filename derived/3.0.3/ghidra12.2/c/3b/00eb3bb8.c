
int FUN_00eb3bb8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_50;
  long local_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar5 = PTR_DAT_04bb2020;
  uVar13 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "Carnival";
  puVar12 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar12 == 0) {
    local_50 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_50 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = local_48 + -0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar10 = local_50;
    local_50._7_1_ = SUB81(uVar10,7);
    local_50._0_7_ = (uint7)CONCAT24(5,(undefined4)local_50);
    puVar12 = &local_50;
  }
  uVar10 = *puVar12;
  uVar10 = FUN_00879dd0(uVar13,&local_40,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
  if ((uVar10 & 1) == 0) {
    return 5;
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "SeasonEventActivityType";
  iVar8 = FUN_02743000(&local_40);
  if (param_1 == 0) {
    if (iVar8 != 0) {
      return 0;
    }
  }
  else {
    uVar10 = FUN_021b8c00(&DAT_053fe348,param_1 + 0x508);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    uVar10 = FUN_021b8f60(&DAT_053fe348,param_1 + 0x508,0);
    if ((iVar8 != 0) || ((uVar10 & 1) != 0)) goto LAB_00eb3d20;
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "ArrivedInEventPlaza";
  sVar7 = FUN_02196ed0(param_1 + 0x508,&local_40);
  if (param_1 == 0) {
    return 0;
  }
  if (sVar7 == 0) {
    return 0;
  }
LAB_00eb3d20:
  pcStack_38 = "GotoEventPlazaForCountdown";
  local_40 = puVar5 + 0x10;
  sVar7 = FUN_02196ed0(param_1 + 0x508,&local_40);
  if (sVar7 == 0) {
    pcStack_38 = "CarnivalWanderEventPlaza";
    local_40 = puVar5 + 0x10;
    sVar7 = FUN_02196ed0(param_1 + 0x508,&local_40);
    if (sVar7 == 0) {
      return 0;
    }
    iVar9 = 3;
    lVar11 = *(long *)PTR_DAT_04bb5c90;
    iVar3 = *(int *)(lVar11 + 0x28) + -0x14;
    iVar8 = *(int *)(lVar11 + 0x38) + 0x14;
    iVar4 = *(int *)(lVar11 + 0x2c) + -0x14;
    iVar1 = *(int *)(lVar11 + 0x3c) + 0x14;
    iVar2 = iVar3;
    if (iVar8 <= iVar3) {
      iVar2 = iVar8;
    }
    if (iVar3 <= iVar8) {
      iVar3 = iVar8;
    }
    iVar8 = iVar4;
    if (iVar4 <= iVar1) {
      iVar8 = iVar1;
    }
    fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    if (fVar14 < (float)iVar2 * 5.0) {
      return 3;
    }
    if ((float)iVar3 * 5.0 + 5.0 <= fVar14) {
      return 3;
    }
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    if (fVar14 < (float)iVar4 * 5.0) {
      return 3;
    }
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb5c90;
    fVar15 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar14 = (float)*(int *)(lVar11 + 0x38) * 5.0 + 5.0;
    bVar6 = false;
    if (((float)*(int *)(lVar11 + 0x28) * 5.0 <= fVar15) &&
       (bVar6 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar6 = fVar15 < fVar14;
    }
    if (!bVar6) {
      return 1;
    }
    iVar9 = 1;
    fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    if (fVar14 < (float)*(int *)(lVar11 + 0x2c) * 5.0) {
      return 1;
    }
    iVar8 = *(int *)(lVar11 + 0x3c);
  }
  if (fVar14 < (float)iVar8 * 5.0 + 5.0) {
    iVar9 = iVar9 + 1;
  }
  return iVar9;
}

