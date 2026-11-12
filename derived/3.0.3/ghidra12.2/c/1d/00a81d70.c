
void FUN_00a81d70(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  short *psVar20;
  ulong uVar21;
  char cVar22;
  long local_190 [26];
  char local_bc [36];
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_70 [2];
  
  *(undefined1 *)(param_1 + 0x4088) = 0;
  *(undefined1 *)(param_1 + 0x4086) = 1;
  *(undefined8 *)(param_1 + 0x4068) = *(undefined8 *)(param_1 + 0x4060);
  if ((char)((ulong)*(undefined8 *)(param_1 + 0x4060) >> 0x20) < '\x05') {
    local_190[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x4068));
    local_190[0] = local_190[0] + -0x15180;
    uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_190);
    *(undefined8 *)(param_1 + 0x4068) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x406e) = 0;
  *(undefined2 *)(param_1 + 0x406c) = 5;
  *(undefined8 *)(param_1 + 0x4070) = *(undefined8 *)(param_1 + 0x4068);
  puVar4 = PTR_DAT_04bb46b0;
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 == 0) {
    return;
  }
  puVar16 = *(undefined8 **)(lVar15 + 0x10);
  if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
    lVar15 = (**(code **)(*(long *)*puVar16 + 0x38))();
    if (lVar15 == 0) {
      return;
    }
    lVar15 = lVar15 + 0x70;
  }
  else {
    if (puVar16 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar16[0x26] == (long *)0x0) {
      return;
    }
    lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
    if (lVar15 == 0) {
      return;
    }
  }
  if (*(long *)puVar4 == 0) {
    return;
  }
  lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x30))();
  if (lVar7 == 0) {
    return;
  }
  plVar1 = (long *)(lVar15 + 0xe7190);
  plVar12 = (long *)(lVar7 + 0x27f500);
  nn::time::ClockSnapshot::ClockSnapshot((ClockSnapshot *)local_190);
  nn::time::ClockSnapshot::CreateWithStandardSystemClock((ClockSnapshot *)local_190);
  if ((*(long *)(lVar15 + 0xe71b0) == 0) ||
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0xe71b0) + 0x10), puVar16 == (undefined8 *)0x0))
  {
    uVar8 = 0;
    lVar17 = *(long *)(lVar7 + 0x27f520);
    if (lVar17 != 0) goto LAB_00a81ecc;
LAB_00a81eec:
    uVar21 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar16)();
    uVar8 = uVar8 & 0xffffffff;
    lVar17 = *(long *)(lVar7 + 0x27f520);
    if (lVar17 == 0) goto LAB_00a81eec;
LAB_00a81ecc:
    if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) goto LAB_00a81eec;
    uVar21 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
    uVar21 = uVar21 & 0xffffffff;
  }
  if ((param_2 & 1) == 0) goto LAB_00a8222c;
  if ((*(long *)(lVar15 + 0xe71b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar15 + 0xe71b0) + 0x20), plVar9 != (long *)0x0)) {
    local_98 = *plVar1;
    local_90 = *(long *)(lVar15 + 0xe7198);
    local_88 = 0xe8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
  if (*(short *)(*(long *)(lVar15 + 0xe7198) + *plVar1) == 0) goto LAB_00a8222c;
  if ((*(long *)(lVar7 + 0x27f520) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x27f520) + 0x20), plVar9 != (long *)0x0)) {
    local_98 = *plVar12;
    local_90 = *(long *)(lVar7 + 0x27f508);
    local_88 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
  if (*(short *)(*(long *)(lVar7 + 0x27f508) + *plVar12) == 0) goto LAB_00a8222c;
  lVar17 = *(long *)puVar4;
  bVar13 = false;
  if (lVar17 != 0) {
    puVar16 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar16 + 0x38))();
      if (lVar17 == 0) goto LAB_00a8204c;
      lVar17 = lVar17 + 0x70;
LAB_00a81fc4:
      bVar13 = false;
      if (*(long *)puVar4 == 0) goto LAB_00a82228;
      lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar4 + 0x10) + 0x38))();
      if (lVar10 == 0) goto LAB_00a8204c;
      plVar9 = (long *)(lVar17 + 0xe7190);
      if ((*(long **)(lVar10 + 0x276cd8) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar10 + 0x276cd8), puVar16 == (undefined8 *)0x0)) {
        local_70[0] = *(undefined8 *)
                       (*(long *)(lVar10 + 0x276cc0) + *(long *)(lVar10 + 0x276cb8) + 0x3c9920);
      }
      else {
        uVar11 = (**(code **)*puVar16)();
        local_70[0] = *(undefined8 *)
                       (*(long *)(lVar10 + 0x276cc0) + *(long *)(lVar10 + 0x276cb8) + 0x3c9920);
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x276cd8) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar10 + 0x276cd8) + 8),
           puVar16 != (undefined8 *)0x0)) {
          (**(code **)*puVar16)();
        }
      }
      plVar18 = *(long **)(lVar17 + 0xe71b0);
      if ((plVar18 == (long *)0x0) || ((undefined8 *)*plVar18 == (undefined8 *)0x0)) {
        cVar22 = *(char *)(*(long *)(lVar17 + 0xe7198) + *plVar9 + 0x14);
LAB_00a820c8:
        if (plVar18 == (long *)0x0) goto LAB_00a820f0;
LAB_00a820cc:
        if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_00a820f0;
        uVar5 = (*(code *)**(undefined8 **)*plVar18)();
        uVar5 = uVar5 ^ 1;
      }
      else {
        uVar11 = (*(code *)**(undefined8 **)*plVar18)();
        cVar22 = *(char *)(*(long *)(lVar17 + 0xe7198) + *plVar9 + 0x14);
        plVar18 = *(long **)(lVar17 + 0xe71b0);
        if ((uVar11 & 1) == 0) goto LAB_00a820c8;
        if (plVar18 != (long *)0x0) {
          if ((undefined8 *)plVar18[1] != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)plVar18[1])();
            plVar18 = *(long **)(lVar17 + 0xe71b0);
            goto LAB_00a820c8;
          }
          goto LAB_00a820cc;
        }
LAB_00a820f0:
        uVar5 = 1;
      }
      lVar10 = nn::time::CalculateStandardUserSystemClockDifferenceByUser
                         ((ClockSnapshot *)(*(long *)(lVar17 + 0xe7198) + *plVar9 + 0x18),
                          (ClockSnapshot *)local_190);
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar17 + 0xe71b0) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0xe71b0) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
      nn::time::ClockSnapshot::GetLocationName();
      if ((*(long **)(lVar17 + 0xe71b0) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar17 + 0xe71b0), puVar16 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar16)();
        uVar5 = uVar5 ^ 1;
      }
      nn::time::ClockSnapshot::GetLocationName();
      lVar19 = 0;
      do {
        cVar2 = local_bc[lVar19 + 0x24];
        cVar3 = local_bc[lVar19];
        if (cVar2 == '\0' || cVar2 != cVar3) break;
        iVar14 = (int)lVar19;
        lVar19 = lVar19 + 1;
      } while (iVar14 != 0x23);
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar17 + 0xe71b0) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0xe71b0) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
      lVar17 = 0;
      if (((cVar2 == cVar3) && (0xffffffff88ca6c00 < lVar10 - 1000000000U)) &&
         (lVar17 = -300, *(char *)(param_1 + 0x4087) == '\0' && cVar22 != '\0')) {
        lVar17 = -0xf3c;
      }
      lVar10 = FUN_00a8255c((undefined2 *)(param_1 + 0x4060),local_70);
      bVar13 = lVar10 < lVar17;
    }
    else {
      bVar13 = false;
      if (puVar16 != (undefined8 *)0x0) {
        if (((long *)puVar16[0x26] != (long *)0x0) &&
           (lVar17 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar17 != 0))
        goto LAB_00a81fc4;
LAB_00a8204c:
        bVar13 = false;
      }
    }
  }
LAB_00a82228:
  *(bool *)(param_1 + 0x4088) = bVar13;
LAB_00a8222c:
  if ((*(long *)(lVar15 + 0xe71b0) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar15 + 0xe71b0) + 0x20), plVar9 != (long *)0x0)) {
    local_98 = *plVar1;
    local_90 = *(long *)(lVar15 + 0xe7198);
    local_88 = 0xe8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
  *(undefined1 *)(*(long *)(lVar15 + 0xe7198) + *plVar1 + 0x14) = *(undefined1 *)(param_1 + 0x4087);
  if ((*(long *)(lVar7 + 0x27f520) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x27f520) + 0x20), plVar9 != (long *)0x0)) {
    local_98 = *plVar12;
    local_90 = *(long *)(lVar7 + 0x27f508);
    local_88 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
  }
  psVar20 = (short *)(*(long *)(lVar7 + 0x27f508) + *plVar12);
  if (*psVar20 == 0) {
    if ((*(long *)(lVar7 + 0x27f520) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar7 + 0x27f520) + 0x20), plVar9 != (long *)0x0)) {
      local_88 = 8;
      local_98 = *plVar12;
      local_90 = *(long *)(lVar7 + 0x27f508);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_98);
      psVar20 = (short *)(*(long *)(lVar7 + 0x27f508) + *plVar12);
    }
    *(undefined8 *)psVar20 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  }
  if ((*(long *)(lVar15 + 0xe71b0) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar15 + 0xe71b0) + 0x20), plVar12 != (long *)0x0)) {
    local_98 = *plVar1;
    local_90 = *(long *)(lVar15 + 0xe7198);
    local_88 = 0xe8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_98);
  }
  memcpy((void *)(*(long *)(lVar15 + 0xe7198) + *plVar1 + 0x18),local_190,0xd0);
  if ((*(long *)(lVar15 + 0xe71b0) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar15 + 0xe71b0) + 0x20), plVar12 != (long *)0x0)) {
    local_98 = *plVar1;
    local_90 = *(long *)(lVar15 + 0xe7198);
    local_88 = 0xe8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_98);
  }
  *(undefined1 *)(*(long *)(lVar15 + 0xe7198) + *plVar1 + 0x15) = 1;
  *(undefined2 *)(param_1 + 0x408a) = *(undefined2 *)(param_1 + 0x4060);
  *(undefined1 *)(param_1 + 0x408c) = *(undefined1 *)(param_1 + 0x4062);
  *(undefined4 *)(param_1 + 0x408d) = *(undefined4 *)(param_1 + 0x4063);
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar7 + 0x27f520) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar7 + 0x27f520) + 0x18), puVar16 != (undefined8 *)0x0))
  {
    (**(code **)*puVar16)();
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar15 + 0xe71b0) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0xe71b0) + 0x18), puVar16 != (undefined8 *)0x0))
  {
    (**(code **)*puVar16)();
  }
  return;
}

