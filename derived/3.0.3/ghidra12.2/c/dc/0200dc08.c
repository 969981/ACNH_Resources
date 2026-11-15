
undefined8 FUN_0200dc08(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [8];
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 local_30 [8];
  long local_28;
  
  puVar2 = PTR_DAT_04bb32f0;
  if ((1 < *(byte *)(*DAT_0537d558 + 0x476)) ||
     ((*(long *)PTR_DAT_04bb32f0 != 0 &&
      ((uVar4 = FUN_00883550(), uVar4 < 2 ||
       ((*(long *)puVar2 != 0 && (uVar4 = FUN_00883068(), uVar4 < 2)))))))) {
    return 0;
  }
  lVar6 = (*(long **)(param_1 + 0x3b80))[1];
  if ((lVar6 != 0) && (uVar4 = *(uint *)(lVar6 + 0x50c), uVar4 != 0xffffffff)) {
    pcVar7 = &DAT_05454358 + (ulong)uVar4 * 0x2d8;
    if (0x10 < uVar4) {
      pcVar7 = &DAT_05454358;
    }
    if (*pcVar7 != '\0') {
      local_28 = CONCAT44(local_28._4_4_,*(int *)(pcVar7 + 700));
      if (*(int *)(pcVar7 + 700) != 0) {
        return 0;
      }
    }
  }
  lVar6 = (**(code **)(**(long **)(param_1 + 0x3b80) + 0x3a0))();
  local_28 = CONCAT44(local_28._4_4_,5);
  if (*(int *)(lVar6 + 0xdc) == 0) {
    if (*(int *)(lVar6 + 0x80) == 5) {
      return 0;
    }
  }
  else if (*(int *)(lVar6 + 0xdc) == 1) {
    return 0;
  }
  plVar8 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)plVar8 == 0) {
    local_30 = *(undefined1 (*) [8])(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_30 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_30);
      local_28 = lVar6 + -0x15180;
      local_30 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    auVar3 = local_30;
    local_30._4_2_ = 5;
    local_30[7] = auVar3[7];
    local_30[6] = 0;
    plVar8 = (long *)local_30;
  }
  local_28 = *plVar8;
  if (DAT_04c487d4 != -1) {
    local_30._0_4_ = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 1 & 1) != 0) &&
       (uVar5 = FUN_00873540(*(undefined8 *)puVar2,&local_28,1,1), (uVar5 & 1) != 0)) {
      return 0;
    }
  }
  return 1;
}

