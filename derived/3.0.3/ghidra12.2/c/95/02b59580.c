
undefined2 FUN_02b59580(uint param_1)

{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (param_1 < 10) {
      lVar1 = lVar3 + 0x1962d8 + (ulong)param_1 * 0x10d8;
      if (9 < param_1) {
        lVar1 = lVar3 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar5 == (undefined8 *)0x0)) {
        return *(undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 8);
      }
      uVar4 = (**(code **)*puVar5)();
      uVar2 = *(undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 8);
      if ((uVar4 & 1) == 0) {
        return uVar2;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return uVar2;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return uVar2;
      }
      (**(code **)*puVar5)();
      return uVar2;
    }
  }
  return 0;
}

