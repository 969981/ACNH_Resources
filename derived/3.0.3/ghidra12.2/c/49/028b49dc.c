
bool FUN_028b49dc(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 local_38;
  long local_18;
  
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar6 + 0x70;
      }
      goto LAB_028b4a50;
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar7 = 0;
      if ((long *)puVar8[0x26] != (long *)0x0) {
        lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      }
      goto LAB_028b4a50;
    }
  }
  lVar7 = 0;
LAB_028b4a50:
  if ((*(long **)(lVar7 + 0x1a0b70) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x1a0b70), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  uVar2 = *(uint *)(*(long *)(lVar7 + 0x1a0b58) + *(long *)(lVar7 + 0x1a0b50));
  if (3 < uVar2) {
    uVar2 = 0;
  }
  local_18 = CONCAT44(local_18._4_4_,uVar2);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1a0b70) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x1a0b70) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if (2 < (int)uVar2) {
    piVar9 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)piVar9 == 0) {
      local_38 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_38 >> 0x20) < '\x05') {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_18 = lVar7 + -0x15180;
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      }
      piVar9 = (int *)&local_38;
      uVar3 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(int)local_38);
      local_38 = CONCAT26((short)uVar3,(undefined6)local_38) & 0xff00ffffffffffff;
    }
    iVar1 = *piVar9;
    uVar5 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
    puVar4 = PTR_DAT_04bb43c0;
    local_18 = CONCAT44(local_18._4_4_,uVar5);
    lVar7 = param_1 + (ulong)uVar5 * 0x200;
    if (6 < uVar5) {
      lVar7 = param_1;
    }
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(lVar7 + 0x10);
    if (*(long *)puVar4 != 0) {
      lVar7 = *(long *)(lVar6 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar5 < *(uint *)(lVar7 + 0x1d8)) {
        return *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0;
      }
    }
  }
  return false;
}

