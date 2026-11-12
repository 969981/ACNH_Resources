
undefined8 FUN_00882dc4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 local_38;
  long local_18;
  
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar9 + 0x38))();
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0x70;
    }
  }
  else {
    lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
  }
  plVar1 = (long *)(lVar6 + 0x1bf260);
  plVar10 = (long *)*plVar1;
  if (plVar10 != (long *)0x0) {
    puVar9 = (undefined8 *)*plVar10;
    lVar6 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      lVar6 = (**(code **)*puVar9)();
      uVar11 = (uint)lVar6 ^ 1;
      goto LAB_00882e54;
    }
  }
  uVar11 = 1;
LAB_00882e54:
  plVar10 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)plVar10 == 0) {
    local_38 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      lVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      local_38 = lVar6;
    }
    plVar10 = &local_38;
    uVar2 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar2,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  local_18 = *plVar10;
  iVar3 = FUN_028d4550(lVar6,&local_18);
  if (iVar3 == 3) {
    pcVar7 = "FirstLive";
  }
  else if (iVar3 == 2) {
    pcVar7 = "BirthdayLive";
  }
  else {
    pcVar7 = "NormalLive";
  }
  local_18._0_4_ = iVar3;
  uVar4 = FUN_006bd550(pcVar7,0);
  local_18 = CONCAT44(local_18._4_4_,uVar4);
  uVar8 = FUN_0088c0d0(param_1 + 8,&local_18);
  if ((((uVar11 & 1) == 0) && (lVar6 = *plVar1, lVar6 != 0)) &&
     (puVar9 = *(undefined8 **)(lVar6 + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return uVar8;
}

