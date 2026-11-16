
undefined4 FUN_0265b400(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_05574040 == 0) {
LAB_0265b498:
    uVar2 = 7;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_0265b498;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_0265b498;
    if ((*(long **)(lVar3 + 0xe6bc8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0xe6bc8), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_0284da58(*(long *)(lVar3 + 0xe6bb0) + *(long *)(lVar3 + 0xe6ba8),param_1,param_2 & 1
                        );
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0xe6bc8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0xe6bc8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2;
}

