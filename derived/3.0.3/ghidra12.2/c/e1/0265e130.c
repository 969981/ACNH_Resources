
long FUN_0265e130(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_026692d0(param_2);
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_021d79b0(param_1,param_2);
    if (9 < param_1) {
      return 0;
    }
    if (0x9f < uVar1) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
        if (lVar4 == 0) {
          return 0;
        }
        lVar4 = lVar4 + 0x70;
      }
      else {
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar5[0x26] == (long *)0x0) {
          return 0;
        }
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
        if (lVar4 == 0) {
          return 0;
        }
      }
      return lVar4 + (ulong)param_1 * 0x10798 + (ulong)uVar1 * 0xa8 + 0x39f8;
    }
  }
  else {
    lVar4 = FUN_0265c2a0(param_1);
    if (lVar4 == 0) {
      return 0;
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar5)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_026b318c(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_2 + 0x1c);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (9 < param_1) {
      return 0;
    }
    if (7 < uVar2) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
        if (lVar4 == 0) {
          return 0;
        }
        lVar4 = lVar4 + 0x70;
      }
      else {
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar5[0x26] == (long *)0x0) {
          return 0;
        }
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
        if (lVar4 == 0) {
          return 0;
        }
      }
      return lVar4 + (ulong)param_1 * 0x10798 + (ulong)uVar2 * 0x700 + 0x1c0;
    }
  }
  return 0;
}

