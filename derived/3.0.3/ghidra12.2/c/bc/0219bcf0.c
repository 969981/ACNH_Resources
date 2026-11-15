
void FUN_0219bcf0(long param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  CalendarTime *pCVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_04bb32e8;
  puVar2 = PTR_DAT_04bb27d0;
  if ((((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) || ((param_4 & 1) != 0)) ||
      (2 < param_2 - 1U)) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x78855454)) {
    pCVar1 = (CalendarTime *)(param_1 + 0x4ec);
    *(int *)(param_1 + 0x4e8) = param_2;
    uVar5 = *(ulong *)(*(long *)puVar3 + 0x4060);
    *(ulong *)pCVar1 = uVar5;
    if ((uVar5 & 0xffff) != 0) {
      local_28 = nn::time::ToPosixTimeFromUtc(pCVar1);
      local_28 = local_28 + param_3;
      uVar4 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      *(undefined8 *)pCVar1 = uVar4;
    }
    *(byte *)(param_1 + 0x4f4) = (byte)((uint)param_3 >> 0x1f);
    *(undefined4 *)(param_1 + 0x898) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x89c) = 0xff;
    FUN_0219be30(param_1);
    if ((param_5 & 1) != 0) {
      local_48 = *(undefined1 *)(param_1 + 0xaf8);
      uVar5 = (ulong)local_28 >> 0x30;
      local_47 = (undefined1)param_2;
      local_28 = CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        local_44 = param_3;
        FUN_01db1df0(**(long **)puVar2 + 0x480,DAT_053d0d10,&local_28,&local_48,8,0);
      }
    }
  }
  return;
}

