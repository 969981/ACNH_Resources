
void FUN_008842b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  short *psVar2;
  long local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = FUN_01d69460(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),DAT_04c487d4);
  psVar2 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar2 == 0) {
    local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_40[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_40[0] = local_40[0] + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_40);
    }
    psVar2 = (short *)&local_28;
    uVar1 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar1,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  local_28 = *(ulong *)psVar2;
  FUN_0087a0f0(local_40,param_1,param_2,&local_28);
  FUN_00883150(param_1,local_40,&local_30,1);
  return;
}

