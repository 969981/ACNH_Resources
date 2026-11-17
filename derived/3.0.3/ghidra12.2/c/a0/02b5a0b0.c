
/* WARNING: Removing unreachable block (ram,0x02b5a170) */

bool FUN_02b5a0b0(uint param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return false;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return false;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return false;
      }
    }
    if (param_1 < 8) {
      lVar1 = lVar4 + 0x119228 + (ulong)param_1 * 0xfa08;
      if (7 < param_1) {
        lVar1 = lVar4 + 0x119228;
      }
      if ((*(long **)(lVar1 + 0x3cc0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x3cc0), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      bVar2 = (*(byte *)(*(long *)(lVar1 + 0x3ca8) + *(long *)(lVar1 + 0x3ca0) + 0x20) >> 1 & 7) !=
              2;
      if ((uVar3 & 1) != 0) {
        return bVar2;
      }
      if (*(long *)(lVar1 + 0x3cc0) == 0) {
        return bVar2;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x3cc0) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return bVar2;
      }
      (**(code **)*puVar5)();
      return bVar2;
    }
  }
  return false;
}

