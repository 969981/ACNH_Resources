
void FUN_021c7e60(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  long lVar23;
  short *psVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined **ppuVar27;
  undefined *local_b0;
  char *pcStack_a8;
  byte local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_04bb32e8;
  uVar25 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_70 = uVar25;
  uVar15 = FUN_00a8117c(&local_70);
  if ((uVar15 & 1) != 0) {
    return;
  }
  iVar11 = (int)(char)((ulong)uVar25 >> 0x20);
  iVar14 = iVar11 + 0x18;
  if (iVar11 < 5) {
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_b0 = (undefined *)(lVar16 + -0x15180);
    uVar17 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
    local_70 = uVar17;
  }
  else {
    uVar17 = uVar25;
    iVar14 = iVar11;
  }
  uVar15 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar15,(undefined6)local_70) & 0xff00ffffffffffff;
  local_74 = nn::time::GetDayOfWeek
                       ((int)(short)uVar17,((int)uVar17 << 8) >> 0x18,(int)uVar17 >> 0x18);
  puVar2 = PTR_DAT_04bb27d0;
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_021c7f60:
    if (*pbVar21 < 8) goto LAB_021c7fd0;
LAB_021c7f6c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_021c7fc8:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_021c7fd0;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar16 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar20 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar20 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar20 & 8) != 0) {
        pbVar21 = (byte *)(lVar16 + 0x471);
      }
    }
    local_78[0] = *pbVar21;
    if (7 < local_78[0]) goto LAB_021c7fc8;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar21) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021c7f60;
      }
      goto LAB_021c7f6c;
    }
LAB_021c7fd0:
    local_78[0] = *pbVar21;
    if (7 < local_78[0]) {
      local_78[0] = 0xff;
    }
  }
  puVar22 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar18 = (**(code **)(*(long *)*puVar22 + 0x38))();
    lVar16 = 0;
    if (lVar18 != 0) {
      lVar16 = lVar18 + 0x70;
    }
  }
  else if (puVar22 == (undefined8 *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if ((long *)puVar22[0x26] != (long *)0x0) {
      lVar16 = (**(code **)(*(long *)puVar22[0x26] + 0x38))();
    }
  }
  plVar1 = (long *)(lVar16 + 0x1bf240);
  if ((*(long **)(lVar16 + 0x1bf260) == (long *)0x0) ||
     (puVar22 = (undefined8 *)**(long **)(lVar16 + 0x1bf260), puVar22 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar22)();
    uVar15 = uVar15 & 0xffffffff;
  }
  puVar8 = PTR_DAT_04bb2020;
  lVar18 = *(long *)PTR_DAT_04bb32f0;
  if (lVar18 == 0) {
LAB_021c825c:
    iVar11 = FUN_00883068(lVar18);
    if (iVar11 < 0) {
      uVar13 = FUN_00883550(lVar18);
      uVar13 = (uVar13 >> 0x13 ^ 0xffffffff) & 0x1000;
    }
    else {
      uVar13 = 0x2000;
    }
    uVar19 = FUN_028d4428(*(long *)(lVar16 + 0x1bf248) + *plVar1);
    uVar26 = uVar13 | 8;
    if ((uVar19 & 1) == 0) {
      uVar26 = uVar13;
    }
    goto switchD_021c8250_caseD_4;
  }
  lVar23 = *(long *)puVar2;
  if (((lVar23 == 0) || (*(long *)(lVar23 + 0x28) == 0)) || (*(int *)(lVar23 + 0x80) != 1)) {
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_021c8120;
    }
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_a8 = "TodayGlobalEventId";
    iVar11 = FUN_0273ea30(&local_b0);
    if (iVar11 != 0xffff) goto LAB_021c825c;
  }
LAB_021c8120:
  uVar19 = FUN_028d4428(*(long *)(lVar16 + 0x1bf248) + *plVar1);
  uVar13 = 0x3f;
  if ((uVar19 & 1) == 0) {
    uVar13 = 0x37;
  }
  psVar24 = (short *)(*(long *)puVar9 + 0x4068);
  if (*psVar24 == 0) {
    local_68 = *(ulong *)(*(long *)puVar9 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_b0 = (undefined *)(lVar18 + -0x15180);
      uVar19 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
      local_68 = uVar19;
    }
    uVar10 = local_68;
    psVar24 = (short *)&local_68;
    local_68._7_1_ = SUB81(uVar10,7);
    local_68._0_7_ = (uint7)CONCAT24(5,(int)local_68);
  }
  local_b0 = *(undefined **)psVar24;
  iVar11 = FUN_028d4550(uVar19,&local_b0);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar11);
  if (iVar11 != 0) {
    uVar13 = uVar13 | 0x40;
  }
  uVar19 = FUN_028d6104(*(long *)(lVar16 + 0x1bf248) + *plVar1);
  pcStack_a8 = "IsVisitNpcTidyToday";
  uVar26 = uVar13 | 0x800;
  if ((uVar19 & 1) == 0) {
    uVar26 = uVar13;
  }
  local_b0 = puVar8 + 0x10;
  iVar11 = FUN_0273ea30(&local_b0);
  if (iVar11 == 1) {
LAB_021c820c:
    uVar26 = uVar26 & 0x86f;
  }
  else {
    pcStack_a8 = "IsCallNpcTidy";
    local_b0 = puVar8 + 0x10;
    iVar11 = FUN_0273ea30(&local_b0);
    if (iVar11 == 1) goto LAB_021c820c;
  }
  uVar12 = FUN_028d6b0c(*(long *)(lVar16 + 0x1bf248) + *plVar1);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar12);
  switch(uVar12) {
  case 2:
    uVar26 = uVar26 | 0x200;
    break;
  case 3:
    uVar26 = uVar26 | 0x100;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
    uVar26 = uVar26 | 0x80;
    break;
  case 9:
    uVar26 = uVar26 | 0x400;
    break;
  default:
  }
switchD_021c8250_caseD_4:
  puVar9 = PTR_DAT_04bb70a8;
  uVar13 = iVar14 * 100 + ((int)((ulong)uVar25 >> 0x10) >> 0x18);
  lVar18 = 0;
  ppuVar27 = &PTR_FUN_04a76628;
  do {
    local_68 = CONCAT44(local_68._4_4_,(uint)lVar18);
    FUN_006d8678(&local_b0,"MuseumCafeRandomVisitSp_%s",*(undefined8 *)(puVar9 + lVar18 * 8 + 0x58))
    ;
    iVar14 = FUN_0273ea30(&local_b0);
    if (((iVar14 == 0) && ((uVar26 >> (ulong)((uint)lVar18 & 0x1f) & 1) != 0)) &&
       ((*(ushort *)(&DAT_04179b9c + (long)(int)local_68 * 4) <= uVar13 &&
        ((uVar13 < *(ushort *)(&DAT_04179b9e + (long)(int)local_68 * 4) &&
         (uVar19 = (*(code *)*ppuVar27)(param_1,&local_74,local_78), (uVar19 & 1) != 0)))))) {
      uVar5 = (&DAT_04179b64)[lVar18];
      puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar3 = *puVar20 ^ *puVar20 << 0xb;
      uVar4 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      puVar20[2] = uVar4;
      puVar20[3] = uVar3;
      if ((uint)((ulong)uVar3 * 100 >> 0x20) < uVar5) {
        *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
        FUN_0273f3c4(&local_b0,1);
      }
      else {
        FUN_0273f3c4(&local_b0,2);
        *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x248) = 0;
      }
    }
    lVar18 = lVar18 + 1;
    ppuVar27 = ppuVar27 + 2;
  } while (lVar18 != 0xe);
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar16 + 0x1bf260) != 0)) &&
     (puVar22 = *(undefined8 **)(*(long *)(lVar16 + 0x1bf260) + 8), puVar22 != (undefined8 *)0x0)) {
    (**(code **)*puVar22)();
  }
  return;
}

