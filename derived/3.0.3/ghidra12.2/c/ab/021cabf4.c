
void FUN_021cabf4(long param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb27d0;
  if (((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) || ((param_4 & 1) != 0)) ||
     (2 < param_2 - 1U)) {
    *(int *)(param_1 + 700) = param_2;
    uVar3 = *(ulong *)(DAT_04da6480 + 0x4060);
    *(ulong *)(param_1 + 0x2c0) = uVar3;
    if ((uVar3 & 0xffff) != 0) {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x2c0));
      local_28 = local_28 + param_3;
      uVar2 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      *(undefined8 *)(param_1 + 0x2c0) = uVar2;
    }
    *(byte *)(param_1 + 0x2c8) = (byte)((uint)param_3 >> 0x1f);
    *(undefined1 *)(param_1 + 0x2c9) = 0xff;
    FUN_021cad10(param_1);
    if ((param_5 & 1) != 0) {
      uVar3 = (ulong)local_28 >> 0x30;
      local_47 = (undefined1)param_2;
      local_48 = (undefined1)*(undefined4 *)(param_1 + 4);
      local_28 = CONCAT26((ushort)uVar3 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d15b0) {
        local_44 = param_3;
        FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d15b0,&local_28,&local_48,8,0);
      }
    }
  }
  return;
}

