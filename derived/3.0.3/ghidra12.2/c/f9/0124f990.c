
undefined8 FUN_0124f990(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_18;
  
  iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  lVar2 = DAT_04da7238;
  if ((iVar4 - 0x18U < 7) && (DAT_04da7238 != 0)) {
    local_38 = *param_2;
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar5 = local_38 >> 0x10;
    uVar1 = local_38 >> 0x30;
    uVar6 = local_38 >> 0x18;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
    cVar3 = FUN_00a8ae20(lVar2,uVar5,uVar6,6);
    local_40 = *(undefined4 *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0xc);
    FUN_01201bc0(&local_18,&local_40,(int)cVar3);
    *(undefined4 *)(param_1 + 8) = (undefined4)local_18;
    *(undefined4 *)(param_1 + 0xc) = local_18._4_4_;
  }
  return 0;
}

