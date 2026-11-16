
void FUN_028d4190(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_44;
  undefined8 local_28;
  
  local_44 = FUN_0252d29c();
  puVar2 = PTR_DAT_04bb2020;
  uVar9 = *param_2;
  uVar8 = *(undefined8 *)PTR_DAT_04bb32f0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "Easter";
  local_58 = puVar1;
  local_28 = uVar9;
  if ((char)(uVar9 >> 0x20) < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_68 = (undefined *)(lVar6 + -0x15180);
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  uVar3 = local_28;
  uVar7 = local_28 >> 0x30;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar7,(undefined6)local_28) & 0xff00ffffffffffff;
  uVar7 = FUN_0087a8f0(uVar8,&local_58,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  pcStack_50 = "PynVisitYear";
  local_58 = puVar1;
  iVar4 = FUN_0274ce10(&local_44,&local_58);
  if (((uVar7 & 1) != 0) && (iVar4 != (short)uVar9)) {
    pcStack_50 = "PynVisitYear";
    local_58 = puVar2 + 0x10;
    FUN_0274d104(&local_44,&local_58);
    pcStack_50 = "PynVisitToday";
    local_58 = puVar2 + 0x10;
    FUN_0274d104(&local_44,&local_58,1);
  }
  if ((uVar7 & 1) == 0) {
    local_58 = puVar2 + 0x10;
    pcStack_50 = "PynVisitToday";
    FUN_0274d104(&local_44,&local_58,0);
  }
  puVar2 = puVar2 + 0x10;
  pcStack_50 = "PynVisitYear";
  pcStack_60 = "PynVisitYear";
  local_68 = puVar2;
  local_58 = puVar2;
  uVar5 = FUN_0274ce10(&local_44,&local_68);
  FUN_0273f3c4(&local_58,uVar5);
  pcStack_50 = "PynVisitToday";
  pcStack_60 = "PynVisitToday";
  local_68 = puVar2;
  local_58 = puVar2;
  uVar5 = FUN_0274ce10(&local_44,&local_68);
  FUN_0273f3c4(&local_58,uVar5);
  return;
}

