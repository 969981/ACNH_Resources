
uint FUN_01a499e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  byte local_34 [4];
  
  local_34[0] = **(byte **)(param_1 + 8);
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_34,1);
  uVar1 = 0;
  if (lVar2 == 0) goto LAB_01a49b2c;
  lVar4 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar4 = *(long *)(DAT_05574040 + 0x20);
  }
  if (7 < **(byte **)(param_1 + 8)) {
    uVar1 = 0;
    goto LAB_01a49b2c;
  }
  if (DAT_05574040 == 0) {
LAB_01a49b18:
    uVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar2 == 0) goto LAB_01a49b18;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar2 == 0)) goto LAB_01a49b18;
    if ((*(long **)(lVar2 + 0x1c2520) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar2 + 0x1c2520), puVar5 == (undefined8 *)0x0)) {
      uVar6 = *(undefined1 *)(*(long *)(lVar2 + 0x1c2508) + *(long *)(lVar2 + 0x1c2500) + 1);
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar6 = *(undefined1 *)(*(long *)(lVar2 + 0x1c2508) + *(long *)(lVar2 + 0x1c2500) + 1);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x1c2520) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x1c2520) + 8), puVar5 != (undefined8 *)0x0))
      {
        (**(code **)*puVar5)();
      }
    }
  }
  uVar1 = FUN_01a4b340(lVar4 + 0x10d8,param_2,uVar6);
LAB_01a49b2c:
  return uVar1 & 1;
}

