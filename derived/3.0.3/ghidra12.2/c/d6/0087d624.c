
uint FUN_0087d624(undefined8 param_1,ulong *param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_40;
  long local_38;
  
  local_40 = *param_2;
  if ((param_4 & 1) != 0) {
    if ((char)(local_40 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = local_38 + -0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar5 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
  }
  lVar3 = FUN_0265c2a0(*param_3);
  if (lVar3 == 0) {
LAB_0087d718:
    uVar5 = FUN_021eb720(param_3);
    if ((uVar5 & 1) == 0) {
      uVar2 = FUN_021eacf0(*param_3,&local_40,param_4 & 1);
      goto LAB_0087d73c;
    }
  }
  else {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      cVar1 = *(char *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1267a);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      cVar1 = *(char *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1267a);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    if (cVar1 != '\x02') goto LAB_0087d718;
  }
  uVar2 = 0;
LAB_0087d73c:
  return uVar2 & 1;
}

