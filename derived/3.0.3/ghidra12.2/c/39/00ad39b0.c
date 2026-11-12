
undefined8 FUN_00ad39b0(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint local_88;
  long local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar7 == 0) {
      return 0;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return 0;
    }
    lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar7 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar7 + 0x1a3d88) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar7 + 0x1a3d88), puVar9 == (undefined8 *)0x0)) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)*puVar9)();
  }
  lVar1 = *(long *)(lVar7 + 0x1a3d70) + *(long *)(lVar7 + 0x1a3d68);
  piVar10 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar10 == 0) {
    local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_80 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = local_80 + -0x15180;
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    piVar10 = (int *)&local_68;
    uVar8 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(int)local_68);
    local_68 = CONCAT26((short)uVar8,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  iVar3 = *piVar10;
  uVar5 = nn::time::GetDayOfWeek((int)(short)iVar3,(iVar3 << 8) >> 0x18,iVar3 >> 0x18);
  puVar4 = PTR_DAT_04bb43c0;
  local_80 = CONCAT44(local_80._4_4_,uVar5);
  uVar13 = 0;
  lVar2 = lVar1 + (ulong)uVar5 * 0x200;
  if (6 < uVar5) {
    lVar2 = lVar1;
  }
  do {
    lVar12 = *(long *)puVar4;
    lVar1 = lVar2 + ((long)((ulong)uVar13 << 0x20) >> 0x1d);
    uVar5 = FUN_0277d6c4(lVar1);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_68 = 0xfffe;
        FUN_0277d4ac(&local_68);
        uVar8 = FUN_01239cf0(&local_68,lVar1,0,1);
        if ((uVar8 & 1) != 0) {
          FUN_0124c030(&local_80,&local_68);
          iVar3 = *param_1;
          iVar6 = FUN_0123db50(auStack_78,local_70);
          if (iVar3 == iVar6) {
            if (((local_88 & 1) == 0) || (*(long *)(lVar7 + 0x1a3d88) == 0)) {
              return 1;
            }
            puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1a3d88) + 8);
            uVar11 = 1;
            if (puVar9 == (undefined8 *)0x0) {
              return 1;
            }
            goto LAB_00ad3bf8;
          }
        }
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x40);
  if (((local_88 & 1) == 0) || (*(long *)(lVar7 + 0x1a3d88) == 0)) {
    return 0;
  }
  puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1a3d88) + 8);
  uVar11 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    return 0;
  }
LAB_00ad3bf8:
  (**(code **)*puVar9)(puVar9);
  return uVar11;
}

