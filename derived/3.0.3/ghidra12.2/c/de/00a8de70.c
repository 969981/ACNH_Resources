
int FUN_00a8de70(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 local_50;
  long local_48;
  
  if (*(char *)(param_1 + 0x653dd) == '\0') {
    iVar11 = 0;
  }
  else {
    if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
       (lVar6 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))()
       , lVar6 == 0)) {
      iVar5 = 0;
    }
    else {
      if ((*(long **)(lVar6 + 0x27c880) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x27c880), puVar7 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      iVar5 = FUN_00a8d9f0(param_1,*(long *)(lVar6 + 0x27c868) + *(long *)(lVar6 + 0x27c860),param_2
                          );
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x27c880) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x27c880) + 8), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
    }
    cVar3 = *(char *)((long)param_2 + 4);
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    uVar4 = (int)cVar3 + 0x18;
    if (-1 < cVar3) {
      uVar4 = (int)cVar3;
    }
    uVar1 = uVar4 - 0x18;
    if ((int)uVar4 < 0x18) {
      uVar1 = uVar4;
    }
    if (iVar5 < 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = 0;
      if ((iVar5 < *(int *)(param_1 + 0x653a0)) && (uVar1 < 0x18)) {
        local_48._0_4_ = iVar5;
        piVar8 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                    (long)iVar5 * 8) + 0xd8) +
                                                (ulong)uVar1 * 8) + 0xf0))();
        iVar11 = *piVar8;
        local_48 = CONCAT44(local_48._4_4_,iVar11);
      }
    }
    local_50 = *param_2;
    if ((char)(local_50 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = lVar6 + -0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar9 = local_50 >> 0x10;
    uVar2 = local_50 >> 0x30;
    uVar10 = local_50 >> 0x18;
    local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
    local_50 = CONCAT26((short)uVar2,(undefined6)local_50) & 0xff00ffffffffffff;
    cVar3 = FUN_00a8ae20(param_1,uVar9,uVar10,4);
    if ('\0' < cVar3) {
      if (iVar11 == 4) {
        iVar11 = 6;
      }
      else if (iVar11 == 5) {
        iVar11 = 7;
      }
    }
  }
  return iVar11;
}

