
void FUN_0195548c(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined **local_88;
  undefined8 uStack_80;
  uint local_64;
  ulong local_60;
  ulong local_58;
  undefined **local_50;
  undefined ***pppuStack_48;
  
  if (param_2 == 0) {
    return;
  }
  local_60 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_58 = local_60;
  if ((local_60 & 0xffff) != 0) {
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
    local_50 = (undefined **)(lVar2 + 0x1c20);
    local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
  }
  if (DAT_05574040 == 0) {
LAB_01955568:
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_01955568;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_01955568;
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1e3604);
    if (1 < uVar4) {
      uVar4 = 0;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  local_88 = &PTR_LAB_049e1910;
  pppuStack_48 = &local_88;
  local_50 = &PTR_LAB_049e19b0;
  uStack_80 = param_1;
  local_64 = uVar4;
  FUN_01956430(param_1,param_2,&local_64,&local_58,&local_60,&local_50,1);
  return;
}

