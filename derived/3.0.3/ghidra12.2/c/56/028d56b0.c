
uint FUN_028d56b0(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 local_90;
  undefined8 *puStack_88;
  uint local_7c;
  ulong local_78;
  undefined **local_70;
  undefined8 *puStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  uint local_4c;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb32e8;
  plVar13 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  lVar8 = param_1;
  if (*(short *)plVar13 == 0) {
    local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_70 = (undefined **)(lVar8 + -0x15180);
      lVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      local_90 = (undefined *)lVar8;
    }
    uVar15 = (ulong)local_90 >> 0x30;
    local_90._0_6_ = CONCAT24(5,(int)local_90);
    local_90 = (undefined *)(CONCAT26((short)uVar15,(undefined6)local_90) & 0xff00ffffffffffff);
    plVar13 = &local_90;
  }
  local_70 = (undefined **)*plVar13;
  iVar5 = FUN_028d4550(lVar8,&local_70);
  if (iVar5 == 3) {
    return 0;
  }
  piVar14 = (int *)(*(long *)puVar4 + 0x4068);
  if (*(short *)piVar14 == 0) {
    local_90 = *(undefined **)(*(long *)puVar4 + 0x4060);
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_70 = (undefined **)(lVar8 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    }
    uVar15 = (ulong)local_90 >> 0x30;
    local_90._0_6_ = CONCAT24(5,(int)local_90);
    local_90 = (undefined *)(CONCAT26((short)uVar15,(undefined6)local_90) & 0xff00ffffffffffff);
    piVar14 = (int *)&local_90;
  }
  iVar5 = *piVar14;
  uVar6 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
  lVar8 = DAT_0537d558;
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    uVar15 = (ulong)uVar6;
    if (6 < uVar6) {
      uVar15 = 0;
    }
    local_4c = *(uint *)(param_1 + uVar15 * 4);
    if (0xb < local_4c) {
      local_4c = 0;
    }
  }
  else {
    local_4c = 0;
  }
  if (local_4c < 0xc) {
    local_5c._7_1_ = 0;
    puVar11 = (undefined8 *)(&PTR_DAT_04a92640)[local_4c];
    local_60 = 8;
    local_70 = &PTR_LAB_048f96d0;
    puStack_68 = &local_5c;
    if (&local_5c != puVar11) goto LAB_028d587c;
  }
  else {
    puStack_68 = &local_5c;
    puVar11 = &DAT_0407ebb1;
    local_70 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
LAB_028d587c:
    local_5c._7_1_ = 0;
    local_60 = 8;
    lVar12 = 0;
    do {
      if (*(char *)((long)puVar11 + lVar12) == '\0') {
LAB_028d58c4:
        iVar5 = (int)lVar12;
joined_r0x028d58c8:
        if (7 < iVar5) {
          iVar5 = 7;
        }
        goto LAB_028d58d0;
      }
      if (*(char *)((long)puVar11 + lVar12 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_028d58c4;
      }
      if (*(char *)((long)puVar11 + lVar12 + 2) == '\0') {
        iVar5 = (int)lVar12 + 2;
        goto joined_r0x028d58c8;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    iVar5 = 0;
LAB_028d58d0:
    memcpy(&local_5c,puVar11,(long)iVar5);
    *(undefined1 *)((long)&local_5c + (long)iVar5) = 0;
  }
  local_70 = &PTR_LAB_04908da0;
  uVar15 = *(ulong *)(*(long *)puVar4 + 0x4060);
  local_78 = uVar15;
  if (DAT_04c487d4 != -1) {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      uVar9 = FUN_01d69460(*(undefined8 *)(lVar8 + 0x10));
      if ((uVar9 & 0xffff) != 0) {
        local_78 = uVar9;
        uVar15 = uVar9;
      }
    }
  }
  puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar12 = (**(code **)(*(long *)*puVar11 + 0x38))();
    lVar8 = 0;
    if (lVar12 != 0) {
      lVar8 = lVar12 + 0x70;
    }
  }
  else if (puVar11 == (undefined8 *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((long *)puVar11[0x26] != (long *)0x0) {
      lVar8 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
    }
  }
  if ((*(long **)(lVar8 + 0x1bf260) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar8 + 0x1bf260), puVar11 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar11)();
    uVar6 = uVar6 ^ 1;
  }
  if (((uVar15 & 0xffff) != 0) && (local_4c != 0)) {
    piVar14 = (int *)(*(long *)puVar4 + 0x4068);
    lVar12 = *(long *)(lVar8 + 0x1bf240);
    lVar3 = *(long *)(lVar8 + 0x1bf248);
    if (*(short *)piVar14 == 0) {
      local_48 = *(undefined8 *)(*(long *)puVar4 + 0x4060);
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_90 = (undefined *)(lVar10 + -0x15180);
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
      }
      piVar14 = (int *)&local_48;
      uVar15 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(5,(int)local_48);
      local_48 = CONCAT26((short)uVar15,(undefined6)local_48) & 0xff00ffffffffffff;
    }
    iVar5 = *piVar14;
    uVar7 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar7);
    if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
       (*(int *)(DAT_0537d558 + 0x80) != 1)) {
      puVar1 = (uint *)(lVar3 + lVar12);
      puVar2 = puVar1 + uVar7;
      if (6 < uVar7) {
        puVar2 = puVar1;
      }
      local_7c = *puVar2;
      if (0xb < local_7c) {
        local_7c = 0;
      }
    }
    else {
      local_7c = 0;
    }
    if (local_7c == local_4c) {
      if (local_7c < 0xc) {
        puStack_88 = (undefined8 *)(&PTR_DAT_049868c8)[local_7c];
      }
      else {
        puStack_88 = &DAT_0407ebb1;
      }
      local_90 = PTR_DAT_04bb2020 + 0x10;
      uVar15 = FUN_028d4a98(&local_78,&local_90);
      uVar7 = local_4c;
      if ((uVar15 & 1) == 0) {
        uVar7 = 0;
      }
      goto joined_r0x028d5afc;
    }
  }
  uVar7 = 0;
joined_r0x028d5afc:
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x1bf260) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x1bf260) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return uVar7;
}

