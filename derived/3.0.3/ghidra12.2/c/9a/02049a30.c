
void FUN_02049a30(void)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined4 local_18;
  int local_14;
  
  if (*(long *)PTR_DAT_04bb4858 == 0) {
    return;
  }
  local_50 = CONCAT44(local_50._4_4_,3);
  puStack_38 = PTR_s_WherearenObjCoconutJuice_04a6ee50;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uVar3 = FUN_0224b170(*(long *)PTR_DAT_04bb4858,&local_40);
  puVar2 = PTR_DAT_04bb27c0;
  if (uVar3 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x02049b4c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02049b4c;
    }
  }
  uVar3 = 0;
joined_r0x02049b4c:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bc2570 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc2570), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc2568 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2570);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc2568);
    uVar8 = 0;
    if ((int)lVar7 == 1) {
      uVar8 = uVar3;
    }
    if (((uVar6 & 1) != 0) && (uVar8 != 0)) {
      local_50 = 0x43e18000;
      local_48 = 0x43d40000;
      (**(code **)(*(long *)plVar9[0xd] + 0x100))((long *)plVar9[0xd],&local_50);
      uVar10 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      cVar1 = (char)((ulong)uVar10 >> 0x20);
      local_58 = uVar10;
      if (cVar1 < '\x05') {
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_68 = local_68 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar6 = local_58 >> 0x30;
      uVar8 = (uint)((ulong)uVar10 >> 0x20);
      local_18 = 5;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58 = CONCAT26((short)uVar6,(undefined6)local_58) & 0xff00ffffffffffff;
      uVar3 = uVar8 + 0x18;
      if ('\x04' < cVar1) {
        uVar3 = uVar8;
      }
      if ((char)uVar3 < '\r') {
        local_14 = 0;
      }
      else if ((uVar3 & 0xff) < 0x12) {
        local_14 = 1;
      }
      else {
        local_14 = 2;
      }
      local_68 = 0x43e18000;
      local_60 = 0x43d88000;
      if (local_14 == 2) {
        local_18 = 4;
      }
      else if (local_14 == 1) {
        local_18 = 6;
      }
      else if (local_14 != 0) {
        return;
      }
      FUN_0229fe00(&local_18,&local_68);
    }
  }
  return;
}

