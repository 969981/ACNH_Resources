
undefined4 FUN_0288474c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_58;
  long local_38;
  
  puVar2 = PTR_DAT_04bb32e8;
  piVar7 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar7 == 0) {
    local_58 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    piVar7 = (int *)&local_58;
    uVar6 = local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(int)local_58);
    local_58 = CONCAT26((short)uVar6,(undefined6)local_58) & 0xff00ffffffffffff;
  }
  iVar1 = *piVar7;
  uVar4 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = CONCAT44(local_38._4_4_,uVar4);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  lVar8 = param_1 + (ulong)uVar4 * 0x10;
  if (6 < uVar4) {
    lVar8 = param_1;
  }
  uVar4 = FUN_0277d6c4(lVar8);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
LAB_02884860:
    uVar4 = FUN_0277d6c4(lVar8 + 8);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
         (uVar6 = FUN_0277d7b4(lVar8 + 8,param_2), (uVar6 & 1) != 0)) {
        lVar8 = 1;
        goto LAB_028848b8;
      }
    }
    uVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02884860;
    uVar6 = FUN_0277d7b4(lVar8,param_2);
    if ((uVar6 & 1) == 0) {
      lVar9 = *(long *)puVar3;
      goto LAB_02884860;
    }
    lVar8 = 0;
LAB_028848b8:
    piVar7 = (int *)(*(long *)puVar2 + 0x4068);
    if (*(short *)piVar7 == 0) {
      local_58 = *(undefined8 *)(*(long *)puVar2 + 0x4060);
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      piVar7 = (int *)&local_58;
      uVar6 = local_58 >> 0x30;
      local_58._0_6_ = CONCAT24(5,(int)local_58);
      local_58 = CONCAT26((short)uVar6,(undefined6)local_58) & 0xff00ffffffffffff;
    }
    iVar1 = *piVar7;
    uVar4 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
    lVar10 = param_1 + 0x70 + (ulong)uVar4 * 8;
    if (6 < uVar4) {
      lVar10 = param_1 + 0x70;
    }
    uVar5 = *(undefined4 *)(lVar10 + lVar8 * 4);
  }
  return uVar5;
}

