
int FUN_028b2870(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_68;
  long local_48;
  
  piVar7 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar7 == 0) {
    local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_48 = local_48 + -0x15180;
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    piVar7 = (int *)&local_68;
    uVar5 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(int)local_68);
    local_68 = CONCAT26((short)uVar5,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  iVar8 = *piVar7;
  uVar4 = nn::time::GetDayOfWeek((int)(short)iVar8,(iVar8 << 8) >> 0x18,iVar8 >> 0x18);
  puVar3 = PTR_DAT_04bb43c0;
  iVar8 = 0;
  local_48 = CONCAT44(local_48._4_4_,uVar4);
  uVar9 = 0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  lVar2 = param_1 + (ulong)uVar4 * 0x200;
  if (6 < uVar4) {
    lVar2 = param_1;
  }
  do {
    lVar1 = lVar2 + ((long)((ulong)uVar9 << 0x20) >> 0x1d);
    uVar4 = FUN_0277d6c4(lVar1);
    lVar6 = *(long *)puVar3;
    if (lVar6 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        uVar5 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar5 & 1) != 0) {
          return iVar8;
        }
        lVar6 = *(long *)puVar3;
      }
    }
    iVar8 = iVar8 + 1;
    uVar9 = uVar9 + 1;
    lVar10 = lVar6;
  } while (iVar8 != 0x40);
  return -1;
}

