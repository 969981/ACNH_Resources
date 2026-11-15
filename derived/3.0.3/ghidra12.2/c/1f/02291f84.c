
bool FUN_02291f84(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_40;
  long local_38;
  
  if (1 < *(uint *)(DAT_0537d558 + 0x80)) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar7 + 0x70;
      }
      goto LAB_02292018;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_02292018;
    }
  }
  lVar8 = 0;
LAB_02292018:
  if ((*(long **)(&LAB_001bfd88 + lVar8) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(&LAB_001bfd88 + lVar8), puVar9 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar9)();
    uVar6 = uVar6 ^ 1;
  }
  uVar2 = DAT_04da7238;
  if (*(char *)(*(long *)(&LAB_001bfd70 + lVar8) + *(long *)(&LAB_001bfd68 + lVar8) + 0x1b0) == '\0'
     ) {
    local_40 = param_1;
    if ((char)(param_1 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = local_38 + -0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar3 = local_40;
    uVar1 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar1,(undefined6)local_40) & 0xff00ffffffffffff;
    cVar5 = FUN_00a8ae20(uVar2,uVar3 >> 0x10,uVar3 >> 0x18,4);
    bVar4 = cVar5 == '\x02';
  }
  else {
    bVar4 = false;
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(&LAB_001bfd88 + lVar8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar8) + 8), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
  return bVar4;
}

