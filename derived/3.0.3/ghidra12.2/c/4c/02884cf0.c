
void FUN_02884cf0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 local_50;
  long local_48;
  
  piVar7 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar7 == 0) {
    local_50 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_50 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = local_48 + -0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar5 = local_50 >> 0x30;
    local_50._0_6_ = CONCAT24(5,(int)local_50);
    local_50 = CONCAT26((short)uVar5,(undefined6)local_50) & 0xff00ffffffffffff;
    piVar7 = (int *)&local_50;
  }
  iVar2 = *piVar7;
  uVar4 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = CONCAT44(local_48._4_4_,uVar4);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  lVar1 = param_1 + (ulong)uVar4 * 0x10;
  if (6 < uVar4) {
    lVar1 = param_1;
  }
  uVar4 = FUN_0277d6c4(lVar1);
  lVar8 = *(long *)puVar3;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar5 = FUN_0277d7b4(lVar1,param_2);
      if ((uVar5 & 1) != 0) {
        uVar6 = 0;
        goto LAB_02884e60;
      }
      lVar8 = *(long *)puVar3;
    }
  }
  uVar4 = FUN_0277d6c4(lVar1 + 8);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar5 = FUN_0277d7b4(lVar1 + 8,param_2), (uVar5 & 1) != 0)) {
      uVar6 = 1;
      goto LAB_02884e60;
    }
  }
  uVar6 = 0xffffffff;
LAB_02884e60:
  FUN_02885090(param_1,uVar6);
  return;
}

