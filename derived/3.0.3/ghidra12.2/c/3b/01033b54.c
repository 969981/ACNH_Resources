
bool FUN_01033b54(ulong *param_1,ulong *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 local_58;
  long local_38;
  
  iVar4 = FUN_00a82474();
  puVar1 = PTR_DAT_04bb32f0;
  pcVar6 = *(char **)(param_3 + 8);
  if (*pcVar6 == 'F') {
    if ((((pcVar6[1] != 'i') || (pcVar6[2] != 's')) || (pcVar6[3] != 'h')) ||
       (((((pcVar6[4] != 'i' || (pcVar6[5] != 'n')) || (pcVar6[6] != 'g')) ||
         ((pcVar6[7] != 'C' || (pcVar6[8] != 'o')))) ||
        ((((pcVar6[9] != 'n' || ((pcVar6[10] != 'v' || (pcVar6[0xb] != 'e')))) ||
          (pcVar6[0xc] != 'n')) ||
         ((((pcVar6[0xd] != 't' || (pcVar6[0xe] != 'i')) || (pcVar6[0xf] != 'o')) ||
          (pcVar6[0x10] != 'n')))))))) goto LAB_01033d18;
joined_r0x01033d14:
    if (iVar4 == 0) goto LAB_01033d18;
LAB_01033eac:
    bVar3 = true;
  }
  else {
    if ((((((*pcVar6 == 'I') && (pcVar6[1] == 'n')) && (pcVar6[2] == 's')) &&
         (((pcVar6[3] == 'e' && (pcVar6[4] == 'c')) &&
          ((pcVar6[5] == 't' && ((pcVar6[6] == 'C' && (pcVar6[7] == 'o')))))))) &&
        ((pcVar6[8] == 'n' && (((pcVar6[9] == 'v' && (pcVar6[10] == 'e')) && (pcVar6[0xb] == 'n'))))
        )) && (((pcVar6[0xc] == 't' && (pcVar6[0xd] == 'i')) &&
               ((pcVar6[0xe] == 'o' && (pcVar6[0xf] == 'n')))))) goto joined_r0x01033d14;
LAB_01033d18:
    local_58 = *param_1;
    uVar7 = *(undefined8 *)PTR_DAT_04bb32f0;
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar2 = local_58;
    uVar5 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = CONCAT26((short)uVar5,(uint6)local_58) & 0xff00ffffffffffff;
    uVar5 = FUN_0087a8f0(uVar7,param_3,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      local_58 = *param_1;
      uVar7 = *(undefined8 *)puVar1;
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar5 = local_58;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58._7_1_ = SUB81(uVar5,7);
      local_58._0_7_ = (uint7)(uint6)local_58;
      FUN_00879dd0(uVar7,param_3,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    }
    local_58 = *param_2;
    uVar7 = *(undefined8 *)puVar1;
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar5 = local_58;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58._7_1_ = SUB81(uVar5,7);
    local_58._0_7_ = (uint7)(uint6)local_58;
    uVar5 = FUN_0087a8f0(uVar7,param_3,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      local_58 = *param_2;
      uVar7 = *(undefined8 *)puVar1;
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar5 = local_58;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58._7_1_ = SUB81(uVar5,7);
      local_58._0_7_ = (uint7)(uint6)local_58;
      uVar5 = FUN_00879dd0(uVar7,param_3,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      if ((uVar5 & 1) == 0) goto LAB_01033eac;
    }
    bVar3 = (short)*param_1 != (short)*param_2;
  }
  return bVar3;
}

