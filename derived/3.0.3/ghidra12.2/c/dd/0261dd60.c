
bool FUN_0261dd60(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined *local_80;
  char *pcStack_78;
  ulong local_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb30a0;
  lVar17 = *(long *)PTR_DAT_04bb30a0;
  uVar6 = *(uint *)(lVar17 + 0x65204);
  if (1 < uVar6) {
    uVar6 = 0;
  }
  puVar12 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar12 == 0) {
    local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar17 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      lVar17 = *(long *)puVar2;
    }
    uVar15 = local_68;
    puVar12 = &local_68;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68._7_1_ = SUB81(uVar15,7);
    local_68._0_7_ = (uint7)(uint6)local_68;
  }
  uVar20 = *puVar12;
  local_70 = uVar20;
  local_68 = FUN_00a8c31c(lVar17);
  uVar15 = uVar20 >> 0x10;
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_80 = (undefined *)(lVar8 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
  }
  uVar16 = local_68;
  uVar9 = local_68 >> 0x10;
  uVar10 = local_68 >> 0x18;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68._7_1_ = SUB81(uVar16,7);
  local_68._0_7_ = (uint7)(uint6)local_68;
  uVar16 = uVar20 >> 0x18 & 0xffffffff;
  cVar4 = FUN_00a8ae20(lVar17,uVar9,uVar10,5);
  cVar5 = (char)(uVar20 >> 0x20);
  if (cVar4 == '\x02') {
LAB_0261e020:
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
  }
  else {
    if (cVar4 == '\x01') {
      lVar17 = 4;
      bVar11 = 1;
LAB_0261df4c:
      *(byte *)(param_2 + lVar17) = *(byte *)(param_2 + lVar17) | bVar11;
    }
    else if (cVar4 == '\0') {
      uVar18 = *(undefined8 *)puVar2;
      uVar10 = uVar15 & 0xffffffff;
      uVar9 = uVar16;
      local_68 = uVar20;
      if (cVar5 < '\x05') {
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_80 = (undefined *)(lVar17 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        uVar10 = local_68 >> 0x10;
        uVar9 = local_68 >> 0x18;
      }
      uVar3 = local_68;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68._7_1_ = SUB81(uVar3,7);
      local_68._0_7_ = (uint7)(uint6)local_68;
      cVar4 = FUN_00a8ae20(uVar18,uVar10,uVar9,8);
      if ((byte)(cVar4 - 1U) < 3) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x40;
      }
      lVar17 = *(long *)PTR_DAT_04bb46b0;
      if (lVar17 != 0) {
        puVar13 = *(undefined8 **)(lVar17 + 0x10);
        if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
          lVar17 = (**(code **)(*(long *)*puVar13 + 0x38))();
          if (lVar17 != 0) {
            lVar17 = lVar17 + 0x70;
LAB_0261e1bc:
            plVar14 = *(long **)(lVar17 + 0xe7610);
            if ((plVar14 == (long *)0x0) ||
               (puVar13 = (undefined8 *)*plVar14, puVar13 == (undefined8 *)0x0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)*puVar13)();
              uVar9 = uVar9 & 0xffffffff;
            }
            local_80 = PTR_DAT_04bb2020 + 0x10;
            pcStack_78 = "RcmImmQuestComplete";
            iVar7 = FUN_0273ea30(&local_80);
            if ((((uVar9 & 1) != 0) && (lVar17 = *(long *)(lVar17 + 0xe7610), lVar17 != 0)) &&
               (puVar13 = *(undefined8 **)(lVar17 + 8), puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
            if (iVar7 == 1) {
              bVar11 = 0x80;
              lVar17 = 3;
              goto LAB_0261df4c;
            }
          }
        }
        else if (((puVar13 != (undefined8 *)0x0) && ((long *)puVar13[0x26] != (long *)0x0)) &&
                (lVar17 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar17 != 0))
        goto LAB_0261e1bc;
      }
    }
    uVar18 = *(undefined8 *)puVar2;
    uVar10 = uVar15 & 0xffffffff;
    uVar9 = uVar16;
    local_68 = uVar20;
    if (cVar5 < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar17 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      uVar10 = local_68 >> 0x10;
      uVar9 = local_68 >> 0x18;
    }
    uVar3 = local_68;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68._7_1_ = SUB81(uVar3,7);
    local_68._0_7_ = (uint7)(uint6)local_68;
    cVar4 = FUN_00a8ae20(uVar18,uVar10,uVar9,4);
    if ('\0' < cVar4) {
      uVar18 = *(undefined8 *)puVar2;
      uVar10 = uVar15 & 0xffffffff;
      uVar9 = uVar16;
      local_68 = uVar20;
      if (cVar5 < '\x05') {
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_80 = (undefined *)(lVar17 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        uVar10 = local_68 >> 0x10;
        uVar9 = local_68 >> 0x18;
      }
      uVar3 = local_68;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68._7_1_ = SUB81(uVar3,7);
      local_68._0_7_ = (uint7)(uint6)local_68;
      cVar4 = FUN_00a8ae20(uVar18,uVar10,uVar9,4);
      if (cVar4 != '\x02') goto LAB_0261e020;
    }
  }
  uVar9 = FUN_00a8d4a0(*(undefined8 *)puVar2,&local_70);
  if ((uVar9 & 1) != 0) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
  }
  uVar19 = (uint)uVar20;
  if (uVar6 == 1) {
    if ((uVar19 >> 0x10 & 0xff) == 5) goto LAB_0261e070;
  }
  else if ((uVar6 == 0) && ((uVar19 >> 0x10 & 0xff) == 0xb)) {
LAB_0261e070:
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  }
  uVar18 = *(undefined8 *)puVar2;
  local_68 = uVar20;
  if (cVar5 < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_80 = (undefined *)(lVar17 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    uVar16 = local_68 >> 0x18;
    uVar15 = local_68 >> 0x10;
  }
  uVar9 = local_68;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68._7_1_ = SUB81(uVar9,7);
  local_68._0_7_ = (uint7)(uint6)local_68;
  cVar5 = FUN_00a8ae20(uVar18,uVar15 & 0xffffffff,uVar16 & 0xffffffff,4);
  if (cVar5 == '\x02') {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x20;
  }
  if ((uVar19 >> 0x10 & 0xff) == 0xc) {
    if (((int)uVar19 >> 0x18 < 0xf) || (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 == 0))
    goto LAB_0261e2cc;
    puVar13 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar17 == 0) goto LAB_0261e2cc;
      lVar17 = lVar17 + 0x70;
    }
    else if (((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) ||
            (lVar17 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar17 == 0))
    goto LAB_0261e2cc;
    plVar14 = (long *)(lVar17 + 0xe7610);
    if (((long *)*plVar14 != (long *)0x0) &&
       (puVar13 = *(undefined8 **)*plVar14, puVar13 != (undefined8 *)0x0)) goto LAB_0261e258;
LAB_0261e26c:
    uVar6 = 1;
LAB_0261e270:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "BuiltTownOffice";
    iVar7 = FUN_0273ea30(&local_80);
    if ((((uVar6 & 1) == 0) && (*plVar14 != 0)) &&
       (puVar13 = *(undefined8 **)(*plVar14 + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    if (iVar7 != 1) goto LAB_0261e2cc;
    lVar17 = 4;
  }
  else {
    if (((uVar19 >> 0x10 & 0xff) == 1) && ((int)uVar19 >> 0x18 < 7)) {
      lVar17 = *(long *)PTR_DAT_04bb46b0;
      if (lVar17 == 0) goto LAB_0261e2cc;
      puVar13 = *(undefined8 **)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
        lVar17 = (**(code **)(*(long *)*puVar13 + 0x38))();
        if (lVar17 == 0) goto LAB_0261e2cc;
        lVar17 = lVar17 + 0x70;
      }
      else if (((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) ||
              (lVar17 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar17 == 0))
      goto LAB_0261e2cc;
      plVar14 = (long *)(lVar17 + 0xe7610);
      if (((long *)*plVar14 == (long *)0x0) ||
         (puVar13 = *(undefined8 **)*plVar14, puVar13 == (undefined8 *)0x0)) goto LAB_0261e26c;
LAB_0261e258:
      uVar6 = (**(code **)*puVar13)();
      uVar6 = uVar6 ^ 1;
      goto LAB_0261e270;
    }
    if ((uVar19 >> 0x10 & 0xff) != 10) goto LAB_0261e2cc;
    lVar17 = 7;
  }
  *(byte *)(param_2 + lVar17) = *(byte *)(param_2 + lVar17) | 8;
LAB_0261e2cc:
  if ((((param_3 >> 1 & 1) != 0) && ((uVar19 >> 0x10 & 0xff) == 3)) &&
     (((int)(uVar20 >> 0x18) - 10U & 0xff) < 8)) {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
  }
  iVar7 = 0;
  uVar6 = 1;
  while( true ) {
    uVar19 = uVar6 - 1;
    iVar7 = (*(byte *)(param_2 + (ulong)(uVar19 >> 3)) >> (ulong)(uVar19 & 6) & 1) + iVar7;
    if (uVar6 == 0x53) break;
    uVar1 = uVar6 & 7;
    uVar6 = uVar6 + 2;
    iVar7 = (*(byte *)(param_2 + (ulong)(uVar19 >> 3)) >> (ulong)uVar1 & 1) + iVar7;
  }
  return iVar7 != 0;
}

