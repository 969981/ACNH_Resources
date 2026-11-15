
void FUN_0214c868(undefined1 *param_1,undefined1 *param_2,int *param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_38;
  
  puVar3 = PTR_DAT_04bb2020;
  puVar11 = &DAT_053f5714 + (long)*param_3 * 4;
  if ((param_4 & 1) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "RegulationType2";
    local_68 = puVar1;
    iVar5 = FUN_0273ea30(&local_68);
    if (iVar5 == 0) {
      pcStack_60 = "RegulationType3";
      local_68 = puVar1;
      iVar5 = FUN_0273ea30(&local_68);
      if (iVar5 == 0) goto LAB_0214c900;
      puVar8 = &DAT_053f575c;
    }
    else {
      puVar8 = &DAT_053f573c;
    }
    puVar11 = (undefined1 *)((long)puVar8 + (long)*param_3 * 4);
  }
LAB_0214c900:
  local_68 = puVar3 + 0x10;
  *param_1 = *puVar11;
  param_1[1] = puVar11[1];
  uVar10 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_60 = "Countdown";
  puVar9 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar9 == 0) {
    local_58 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    puVar9 = &local_58;
    uVar7 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar7,(undefined6)local_58) & 0xff00ffffffffffff;
  }
  uVar7 = *puVar9;
  uVar6 = FUN_00879dd0(uVar10,&local_68,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
  bVar4 = (uVar6 & param_5 & 1) == 0;
  puVar2 = &DAT_053f5734;
  if (bVar4) {
    puVar2 = puVar11 + 2;
  }
  puVar11 = puVar11 + 3;
  if (!bVar4) {
    puVar11 = &DAT_053f5735;
  }
  *param_2 = *puVar2;
  param_2[1] = *puVar11;
  return;
}

