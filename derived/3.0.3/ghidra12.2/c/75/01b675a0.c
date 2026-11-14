
void FUN_01b675a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 uStack_49;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    return;
  }
  lVar6 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar7 = *(long *)(lVar6 + 0x2c638);
  if (lVar7 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar6 + 0x2c638) == 0) goto LAB_01b67650;
      plVar3 = *(long **)(*(long *)(lVar6 + 0x2c638) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x2c618);
      local_40 = *(undefined8 *)(lVar6 + 0x2c620);
      uStack_38 = 0x2580;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_01b67650:
  lVar7 = *(long *)(lVar6 + 0x2c618);
  lVar1 = *(long *)(lVar6 + 0x2c620);
  local_48 = *(long *)(DAT_04da6480 + 0x20) / 1000000000 + *(long *)(DAT_04da6480 + 8) +
             (((*(long *)(DAT_04da6480 + 0x10) + (long)*(int *)(DAT_04da6480 + 0x38)) -
              *(long *)(DAT_04da6480 + 8)) * 1000000000) / 1000000000;
  local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  uVar4 = FUN_02811460(lVar1 + lVar7,&local_48,&uStack_49);
  FUN_01b67140(uVar4,param_1);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x2c638) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2c638) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

