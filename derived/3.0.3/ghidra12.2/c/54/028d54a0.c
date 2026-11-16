
uint FUN_028d54a0(undefined8 param_1)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  short *psVar8;
  undefined *local_30;
  char *pcStack_28;
  undefined8 local_8;
  
  psVar8 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar8 == 0) {
    local_8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_8 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_8);
      local_30 = (undefined *)(lVar7 + -0x15180);
      param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_30);
      local_8 = param_1;
    }
    psVar8 = (short *)&local_8;
    uVar3 = local_8 >> 0x30;
    local_8._0_6_ = CONCAT24(5,(undefined4)local_8);
    local_8 = CONCAT26((short)uVar3,(undefined6)local_8) & 0xff00ffffffffffff;
  }
  local_30 = *(undefined **)psVar8;
  iVar5 = FUN_028d4550(param_1,&local_30);
  puVar4 = PTR_DAT_04bb2020;
  if (iVar5 == 0) {
    lVar7 = *(long *)PTR_DAT_04bb27d0;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) {
LAB_028d557c:
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
        if (0xff < (uint)(int)sVar2) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_028d55f0;
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "TodayGlobalEventId";
      iVar5 = FUN_0273ea30(&local_30);
      if (iVar5 == 0xffff) {
LAB_028d55f0:
        local_30 = puVar4 + 0x10;
        pcStack_28 = "SpnVisitMainField";
        uVar6 = FUN_0273f0a0(&local_30);
        goto LAB_028d5530;
      }
    }
    else if (*(int *)(lVar7 + 0x80) != 1) {
      if (*(int *)(lVar7 + 0x80) != 1) goto LAB_028d557c;
      goto LAB_028d55f0;
    }
  }
  uVar6 = 0;
LAB_028d5530:
  return uVar6 & 1;
}

