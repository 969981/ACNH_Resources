
int FUN_0266ce40(uint param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 == 0) {
        return -1;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return -1;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return -1;
      }
      lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar2 == 0) {
        return -1;
      }
    }
    if (param_1 < 8) {
      lVar1 = lVar2 + 0x119228 + (ulong)param_1 * 0xfa08;
      if (7 < param_1) {
        lVar1 = lVar2 + 0x119228;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar4 == (undefined8 *)0x0)) {
        return (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
      }
      uVar3 = (**(code **)*puVar4)();
      iVar5 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
      if ((uVar3 & 1) == 0) {
        return iVar5;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return iVar5;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return iVar5;
      }
      (**(code **)*puVar4)();
      return iVar5;
    }
  }
  return -1;
}

