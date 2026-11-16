
void FUN_0266eea0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  lVar2 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(&LAB_00284e28 + lVar2);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(&LAB_00284e28 + lVar2) == 0) goto LAB_0266ef54;
      plVar4 = *(long **)(*(long *)(&LAB_00284e28 + lVar2) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00284e08 + lVar2);
      local_40 = *(undefined8 *)(&LAB_00284e10 + lVar2);
      uStack_38 = 0x28370;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_0266ef54:
  lVar6 = *(long *)(&LAB_00284e08 + lVar2);
  lVar1 = *(long *)(&LAB_00284e10 + lVar2);
  local_48 = *(long *)(DAT_04da6480 + 0x20) / 1000000000 + *(long *)(DAT_04da6480 + 8) +
             (((*(long *)(DAT_04da6480 + 0x10) + (long)*(int *)(DAT_04da6480 + 0x38)) -
              *(long *)(DAT_04da6480 + 8)) * 1000000000) / 1000000000;
  local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  FUN_0280f530(lVar1 + lVar6,&local_48,0);
  FUN_0266eca0();
  if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_00284e28 + lVar2) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar2) + 0x18),
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

