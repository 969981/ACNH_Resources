
void FUN_021c9f70(char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  if (*param_1 != '\0') {
    uVar2 = (ulong)(byte)param_1[0x18];
    if (((uVar2 < 0x23) && ((byte)param_1[0x19] <= (byte)PTR_DAT_04bc27f0[uVar2])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar2 * 4) >> (ulong)((byte)param_1[0x19] & 0x1f) & 1) != 0))
    {
      uVar1 = FUN_020fd7d8();
      local_40 = (undefined *)(CONCAT44(local_40._4_4_,uVar1) & 0xffffffff000000ff);
    }
    else {
      local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    }
    FUN_0214c868(param_1 + 8,param_1 + 10,&local_40,1,1);
    lVar4 = *(long *)PTR_DAT_04bb32f0;
    if (lVar4 != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "Fireworks";
      puVar3 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar3 == 0) {
        local_30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_30 >> 0x20) < '\x05') {
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
          local_28 = local_28 + -0x15180;
          local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        }
        puVar3 = &local_30;
        uVar2 = local_30 >> 0x30;
        local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
        local_30 = CONCAT26((short)uVar2,(undefined6)local_30) & 0xff00ffffffffffff;
      }
      uVar2 = *puVar3;
      uVar2 = FUN_00879dd0(lVar4,&local_40,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
      if (((uVar2 & 1) != 0) && ((byte)param_1[10] < 0x18)) {
        param_1[10] = '\x18';
        param_1[0xb] = '\0';
      }
    }
  }
  return;
}

