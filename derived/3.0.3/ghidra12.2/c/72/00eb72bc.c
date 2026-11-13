
int FUN_00eb72bc(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  puVar8 = PTR_DAT_04bb2020;
  lVar16 = *(long *)PTR_DAT_04bb32e8;
  bVar6 = *(byte *)(lVar16 + 0x4064);
  cVar7 = *(char *)(lVar16 + 0x4065);
  uVar17 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "HarvestFestival";
  puVar15 = (ulong *)(lVar16 + 0x4068);
  if (*(short *)puVar15 == 0) {
    local_60 = *(ulong *)(lVar16 + 0x4060);
    if ((char)(local_60 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar14 = local_60 >> 0x30;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60 = CONCAT26((short)uVar14,(undefined6)local_60) & 0xff00ffffffffffff;
    puVar15 = &local_60;
  }
  uVar14 = *puVar15;
  uVar14 = FUN_00879dd0(uVar17,&local_70,uVar14,uVar14 >> 0x10,uVar14 >> 0x18,0);
  if ((uVar14 & 1) == 0) {
    return 4;
  }
  if (0xfffffffc < bVar6 - 8) {
    return 4;
  }
  if (param_1 == 0) {
    return 0;
  }
  bVar9 = false;
  bVar10 = false;
  if (bVar6 == 8) {
    bVar10 = SBORROW4((int)cVar7,0x1e);
    bVar9 = cVar7 + -0x1e < 0;
  }
  if (bVar9 != bVar10) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x508);
  local_70 = puVar8 + 0x10;
  pcStack_68 = "GotoEventPlazaForCountdown";
  sVar11 = FUN_02196ed0(puVar1,&local_70);
  if (sVar11 == 0) {
    if ((char)bVar6 < '\x05') {
      return 4;
    }
    return 0;
  }
  if ('\x04' < (char)bVar6) goto LAB_00eb7428;
  puVar18 = *(undefined8 **)(param_1 + 0x3b8);
  if (((*PTR_DAT_04bb6908 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb6908), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bb6900 = PTR_DAT_04bb6850 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6908);
  }
  if ((puVar18 == (undefined8 *)0x0) ||
     (uVar14 = (**(code **)*puVar18)(puVar18,PTR_DAT_04bb6900), (uVar14 & 1) == 0))
  goto LAB_00eb7428;
  iVar12 = *(int *)((long)puVar18 + 0x77f4);
  if (((iVar12 == 0x72) ||
      (((iVar12 == 0x70 || (uVar5 = *(uint *)(puVar18 + 0xef6), uVar5 == 0x72)) || (iVar12 == 0x71))
      )) || (((uVar5 == 0x70 || (iVar12 == 0x73)) || ((uVar5 & 0xfffffffd) == 0x71))))
  goto LAB_00eb7428;
  pcStack_68 = "HarvestPlazaHandTool";
  local_70 = puVar8 + 0x10;
  sVar11 = FUN_02196ed0(puVar1,&local_70);
  if (sVar11 == 0) {
    pcStack_68 = "HarvestDemoNpcStep";
    local_70 = puVar8 + 0x10;
    iVar12 = FUN_02743000(&local_70);
    if (iVar12 == 0) {
      pcStack_68 = "HarvestDemoStateNow";
      local_70 = puVar8 + 0x10;
      iVar12 = FUN_027490f0(*puVar1,&local_70);
      pcStack_68 = "HarvestDemoEndWait";
      local_70 = puVar8 + 0x10;
      iVar13 = FUN_027490f0(*puVar1,&local_70);
      if (iVar12 == 1) goto LAB_00eb7560;
    }
    else {
      local_70 = puVar8 + 0x10;
      pcStack_68 = "HarvestDemoStateNow";
      iVar13 = FUN_027490f0(*puVar1,&local_70);
    }
    if (iVar13 != 1) {
      return 0;
    }
  }
LAB_00eb7560:
  if ((((ulong)puVar18[0x15ab] >> 0x35 & 1) == 0) &&
     (((((uint)puVar18[0x15ab] >> 9 & 1) != 0 &&
       (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) ||
      ((*(int *)((long)puVar18 + 0x77f4) == 0x60 ||
       (((*(int *)((long)puVar18 + 0x77f4) == 0x61 ||
         ((*(uint *)(puVar18 + 0xef6) & 0xfffffffe) == 0x60)) ||
        (*(char *)((long)puVar18 + 0x13717) != '\0')))))))) {
    FUN_020ef554(*puVar1,0);
    return 0;
  }
LAB_00eb7428:
  uVar14 = FUN_021b8c00(&DAT_053fe348,puVar1);
  if ((uVar14 & 1) != 0) {
    return 0;
  }
  lVar16 = *(long *)PTR_DAT_04bb5c90;
  iVar2 = *(int *)(lVar16 + 0x28);
  iVar3 = *(int *)(lVar16 + 0x38);
  iVar4 = *(int *)(lVar16 + 0x3c);
  iVar12 = *(int *)(lVar16 + 0x2c) + 6;
  iVar13 = iVar2;
  if (iVar3 <= iVar2) {
    iVar13 = iVar3;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = iVar12;
  if (iVar12 <= iVar4) {
    iVar3 = iVar4;
  }
  fVar20 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar19 = (float)iVar2 * 5.0 + 5.0;
  bVar9 = false;
  if (((float)iVar13 * 5.0 <= fVar20) && (bVar9 = false, !NAN(fVar20) && !NAN(fVar19))) {
    bVar9 = fVar20 < fVar19;
  }
  if (bVar9) {
    if (iVar4 <= iVar12) {
      iVar12 = iVar4;
    }
    fVar19 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    if ((float)iVar12 * 5.0 <= fVar19) {
      iVar12 = (uint)(':' < cVar7) << 1;
      if (bVar6 != 8) {
        iVar12 = 3;
      }
      if ((float)iVar3 * 5.0 + 5.0 <= fVar19) {
        iVar12 = 1;
      }
      return iVar12;
    }
  }
  return 1;
}

