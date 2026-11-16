
/* WARNING: Removing unreachable block (ram,0x028d3d20) */
/* WARNING: Removing unreachable block (ram,0x028d3d44) */

void FUN_028d3bdc(long param_1,undefined4 param_2,ulong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_38;
  
  puVar2 = PTR_DAT_04bb32f0;
  uVar4 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,param_3,1,1);
  puVar1 = PTR_DAT_04bb2020;
  if ((uVar4 & 1) == 0) {
    local_58 = *param_3;
    local_68 = PTR_DAT_04bb2020 + 0x10;
    uVar5 = *(undefined8 *)puVar2;
    pcStack_60 = "NormalLive";
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar3 = local_58;
    uVar4 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar4,(uint6)local_58) & 0xff00ffffffffffff;
    uVar4 = FUN_00879dd0(uVar5,&local_68,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
    if ((uVar4 & 1) == 0) {
      local_58 = *param_3;
      local_68 = puVar1 + 0x10;
      uVar5 = *(undefined8 *)puVar2;
      pcStack_60 = "BirthdayLive";
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar4 = local_58;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58._7_1_ = SUB81(uVar4,7);
      local_58._0_7_ = (uint7)(uint6)local_58;
      uVar4 = FUN_00879dd0(uVar5,&local_68,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
      if ((((uVar4 & 1) == 0) && (*(int *)(param_1 + 0x18) == 0)) && (*(int *)(param_1 + 0x74) != 6)
         ) {
        *(undefined4 *)(param_1 + 0x18) = param_2;
      }
    }
  }
  return;
}

