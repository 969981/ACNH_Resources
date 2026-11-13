
undefined4 FUN_00eb613c(long param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  long local_28;
  
  puVar5 = PTR_DAT_04bb2020;
  lVar14 = *(long *)PTR_DAT_04bb32e8;
  cVar3 = *(char *)(lVar14 + 0x4064);
  uVar15 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Halloween";
  puVar12 = (ulong *)(lVar14 + 0x4068);
  if (*(short *)puVar12 == 0) {
    local_58 = *(ulong *)(lVar14 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_28 = local_28 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar10 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar10,(undefined6)local_58) & 0xff00ffffffffffff;
    puVar12 = &local_58;
  }
  uVar10 = *puVar12;
  uVar10 = FUN_00879dd0(uVar15,&local_50,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
  if ((uVar10 & 1) == 0) {
    return 4;
  }
  if (cVar3 < '\x11') {
    return 4;
  }
  local_50 = puVar5 + 0x10;
  pcStack_48 = "SeasonEventActivityType";
  iVar8 = FUN_02743000(&local_50);
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x508);
  uVar10 = FUN_021b8c00(&DAT_053fe348,puVar1);
  if ((uVar10 & 1) == 0) goto LAB_00eb6318;
  uVar11 = *puVar1;
  if ((uVar11 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      uVar10 = (ulong)uVar11;
      if ((int)(&DAT_053fe898)[uVar10 * 0x2e8] < 1) goto LAB_00eb62e8;
      iVar4 = (&DAT_053fe898)[uVar10 * 0x2e8] + (&DAT_053fe894)[uVar10 * 0x2e8] + -1;
      iVar2 = 0;
      if ((int)(&DAT_053fe890)[uVar10 * 0x2e8] <= iVar4) {
        iVar2 = (&DAT_053fe890)[uVar10 * 0x2e8];
      }
      puVar13 = (uint *)((&DAT_053fe888)[uVar10 * 0x174] + (long)(iVar4 - iVar2) * 0x14 + 8);
      goto LAB_00eb62f0;
    }
    uVar11 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar11 * 0x28 + 0xe23) & 3;
  }
  else {
LAB_00eb62e8:
    puVar13 = (uint *)PTR_DAT_04bc15a0;
LAB_00eb62f0:
    uVar11 = *puVar13;
  }
  if (uVar11 != 0) {
    return 0;
  }
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    return 3;
  }
LAB_00eb6318:
  if (iVar8 != 0) {
    local_50 = puVar5 + 0x10;
    pcStack_48 = "GotoEventPlazaForCountdown";
    sVar7 = FUN_02196ed0(puVar1,&local_50);
    if (sVar7 != 0) {
      lVar14 = *(long *)PTR_DAT_04bb5c90;
      fVar17 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
      fVar16 = (float)*(int *)(lVar14 + 0x38) * 5.0 + 5.0;
      bVar6 = false;
      if (((float)*(int *)(lVar14 + 0x28) * 5.0 <= fVar17) &&
         (bVar6 = false, !NAN(fVar17) && !NAN(fVar16))) {
        bVar6 = fVar17 < fVar16;
      }
      if (bVar6) {
        fVar16 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
        if ((float)*(int *)(lVar14 + 0x2c) * 5.0 <= fVar16) {
          uVar9 = 1;
          if (fVar16 < (float)*(int *)(lVar14 + 0x3c) * 5.0 + 5.0) {
            uVar9 = 2;
          }
          return uVar9;
        }
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

