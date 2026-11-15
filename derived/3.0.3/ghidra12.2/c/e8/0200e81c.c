
undefined8 FUN_0200e81c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_40;
  long local_38;
  long lStack_30;
  long *local_28;
  
  FUN_021d68a0(*(long *)(*(long *)(param_1 + 0x3b80) + 8) + 0x3e0);
  (**(code **)(**(long **)(param_1 + 0x3b80) + 0x3a0))();
  local_38 = CONCAT44(local_38._4_4_,2);
  local_38 = FUN_021c9770(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x3b80) + 8) + 0x50c),1);
  if (local_38 != 0) {
    lStack_30 = local_38;
    if (*(uint *)(param_2 + 4) == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_28 = &local_38;
    uVar2 = (*(code *)(&PTR_LAB_04a6e1d0)[*(uint *)(param_2 + 4)])(&local_28,param_2);
    if ((uVar2 & 0xffff) != 0) {
      local_40 = uVar2;
      piVar3 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x20b8) + 0xf0))
                                (*(long *)PTR_DAT_04bb3968 + 0x20b8);
      if ((uVar2 & 0xffff) != 0) {
        iVar1 = *piVar3;
        local_28 = (long *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        if (iVar1 != 0) {
          local_28 = (long *)((long)local_28 + ((long)iVar1 * 60000000000) / 1000000000);
        }
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      lVar6 = *(long *)PTR_DAT_04bb32e8;
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060));
      if ((lVar5 < lVar4) ||
         (lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060)), lVar5 == lVar4)) {
        return 0;
      }
    }
  }
  return 1;
}

