
int FUN_00a8d8a8(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_38;
  long local_18;
  
  iVar5 = FUN_00a8d9f0(param_1,param_1 + 0x651f0,param_2);
  cVar4 = *(char *)((long)param_2 + 4);
  local_38 = CONCAT44(local_38._4_4_,iVar5);
  uVar1 = (int)cVar4 + 0x18;
  if (-1 < cVar4) {
    uVar1 = (int)cVar4;
  }
  uVar2 = uVar1 - 0x18;
  if ((int)uVar1 < 0x18) {
    uVar2 = uVar1;
  }
  if (iVar5 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    if ((iVar5 < *(int *)(param_1 + 0x653a0)) && (uVar2 < 0x18)) {
      local_18._0_4_ = iVar5;
      piVar6 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                  (long)iVar5 * 8) + 0xd8) +
                                              (ulong)uVar2 * 8) + 0xf0))();
      iVar9 = *piVar6;
      local_18 = CONCAT44(local_18._4_4_,iVar9);
    }
  }
  local_38 = *param_2;
  if ((char)(local_38 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + -0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  uVar7 = local_38 >> 0x10;
  uVar3 = local_38 >> 0x30;
  uVar8 = local_38 >> 0x18;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = CONCAT26((short)uVar3,(undefined6)local_38) & 0xff00ffffffffffff;
  cVar4 = FUN_00a8ae20(param_1,uVar7,uVar8,4);
  if ('\0' < cVar4) {
    if (iVar9 == 4) {
      iVar9 = 6;
    }
    else if (iVar9 == 5) {
      iVar9 = 7;
    }
  }
  return iVar9;
}

