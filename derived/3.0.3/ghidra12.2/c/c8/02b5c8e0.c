
bool FUN_02b5c8e0(uint param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return false;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return false;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return false;
      }
    }
    if (param_1 < 10) {
      lVar1 = lVar3 + 0x1962d8 + (ulong)param_1 * 0x10d8;
      if (9 < param_1) {
        lVar1 = lVar3 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar5 == (undefined8 *)0x0)) {
        return *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 4) == 2;
      }
      uVar4 = (**(code **)*puVar5)();
      bVar2 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 4) == 2;
      if ((uVar4 & 1) == 0) {
        return bVar2;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return bVar2;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return bVar2;
      }
      (**(code **)*puVar5)();
      return bVar2;
    }
  }
  return false;
}

