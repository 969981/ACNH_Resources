
int FUN_0208bb48(void)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  puVar5 = PTR_DAT_04bb32e8;
  bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  uVar12 = 5;
  if (4 < bVar2) {
    if (bVar2 < 8) {
      uVar12 = 0;
    }
    else if (bVar2 < 0xc) {
      uVar12 = 1;
    }
    else if (bVar2 < 0x10) {
      uVar12 = 2;
    }
    else {
      uVar12 = 3;
      if (0x12 < bVar2) {
        uVar12 = 4;
      }
    }
  }
  uVar7 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar11 = 2;
  if ((uVar7 & 0xfffffffd) != 5) {
    uVar11 = (uint)(3 < uVar7);
  }
  iVar8 = FUN_016d07c0(1,0);
  puVar6 = PTR_DAT_04bb32f0;
  puVar4 = PTR_DAT_04bb2020;
  piVar15 = &DAT_04179664 + (ulong)uVar11 * 6;
  uVar17 = *(undefined8 *)PTR_DAT_04bb32f0;
  if (2 < uVar11) {
    piVar15 = &DAT_04179664;
  }
  piVar1 = piVar15 + uVar12;
  if (5 < uVar12) {
    piVar1 = piVar15;
  }
  iVar18 = *piVar1;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Fireworks";
  puVar13 = (ulong *)(*(long *)puVar5 + 0x4068);
  if (*(short *)puVar13 == 0) {
    local_60 = *(ulong *)(*(long *)puVar5 + 0x4060);
    if ((char)(local_60 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar10 = local_60;
    puVar13 = &local_60;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60._7_1_ = SUB81(uVar10,7);
    local_60._0_7_ = (uint7)(uint6)local_60;
  }
  uVar10 = *puVar13;
  uVar10 = FUN_00879dd0(uVar17,&local_70,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
  if ((uVar10 & 1) == 0) {
    local_70 = puVar4 + 0x10;
    pcStack_68 = "Countdown";
    puVar13 = (ulong *)(*(long *)puVar5 + 0x4068);
    if (*(short *)puVar13 == 0) {
      local_60 = *(ulong *)(*(long *)puVar5 + 0x4060);
      if ((char)(local_60 >> 0x20) < '\x05') {
        local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_58 = local_58 + -0x15180;
        local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar10 = local_60;
      puVar13 = &local_60;
      local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
      local_60._7_1_ = SUB81(uVar10,7);
      local_60._0_7_ = (uint7)(uint6)local_60;
    }
    uVar10 = *puVar13;
    uVar10 = FUN_00879dd0(uVar17,&local_70,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
    if (((uVar10 & 1) == 0) || (uVar12 < 4)) goto LAB_0208be24;
  }
  else {
    local_70 = puVar4 + 0x10;
    pcStack_68 = "Fireworks";
    iVar9 = FUN_008841f4(*(undefined8 *)puVar6,&local_70);
    if (iVar9 == 2) {
      uVar12 = 6;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)puVar5 + 0x4060);
      uVar12 = (uint)((ulong)uVar17 >> 0x20);
      uVar14 = uVar12 & 0xff;
      uVar7 = uVar12 >> 8 & 0xff;
      cVar3 = (char)((ulong)uVar17 >> 0x28);
      if (iVar9 == 1) {
LAB_0208bde0:
        uVar12 = 4;
        if (('\x1d' < (char)((ulong)uVar17 >> 0x30) || '\0' < cVar3) || uVar14 != 0x13) {
          uVar12 = 5;
        }
      }
      else {
        if ((iVar9 == 0) && ('\x11' < (char)((ulong)uVar17 >> 0x20))) {
          if (uVar14 != 0x12) goto LAB_0208bde0;
          if ('\x1d' < cVar3) {
            if (uVar7 < 0x32) {
              uVar12 = 1;
            }
            else {
              uVar12 = 2;
              if (0x3a < uVar7) {
                uVar12 = 3;
              }
            }
            goto LAB_0208bdfc;
          }
        }
        uVar12 = 0;
      }
    }
LAB_0208bdfc:
    if (uVar12 < 3) goto LAB_0208be24;
  }
  puVar16 = &DAT_04179664 + (ulong)uVar11 * 6;
  if (2 < uVar11) {
    puVar16 = &DAT_04179664;
  }
  iVar18 = puVar16[2];
LAB_0208be24:
  if (7 < iVar8) {
    iVar8 = 8;
  }
  fVar19 = (float)(iVar18 * iVar8) * 0.125;
  uVar12 = 0;
  if (fVar19 != (float)(int)fVar19) {
    uVar12 = (uint)(0.0 <= fVar19);
  }
  iVar8 = uVar12 + (int)fVar19;
  if (2 < iVar8) {
    iVar8 = 3;
  }
  return iVar8;
}

