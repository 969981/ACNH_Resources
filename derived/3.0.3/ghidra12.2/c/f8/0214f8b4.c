
undefined8 FUN_0214f8b4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x1f0) == 0) || (*(int *)(*(long *)(param_1 + 0x1f0) + 4) != 7)) {
LAB_0214f990:
    uVar4 = 1;
  }
  else {
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = lVar2 + 0x70;
      }
      else {
        if (puVar5 == (undefined8 *)0x0) goto LAB_0214f998;
        if ((long *)puVar5[0x26] == (long *)0x0) {
          return 0;
        }
        lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
      }
      if ((*(long **)(lVar2 + 0xd0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar2 + 0xd0), puVar5 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar5)();
        uVar1 = uVar1 ^ 1;
      }
      uVar3 = FUN_027e09dc(*(long *)(lVar2 + 0xb8) + *(long *)(lVar2 + 0xb0),1);
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0xd0) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xd0) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((uVar3 & 1) != 0) goto LAB_0214f990;
    }
LAB_0214f998:
    uVar4 = 0;
  }
  return uVar4;
}

