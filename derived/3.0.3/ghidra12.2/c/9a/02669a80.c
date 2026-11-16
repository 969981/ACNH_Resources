
undefined4 FUN_02669a80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 == 0) {
    return 0xffffffff;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0xffffffff;
    }
    lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  if (*(long **)(lVar2 + 0xe7140) == (long *)0x0) {
    uVar3 = 0;
    if (param_1 != 0 || param_2 != 0) goto LAB_02669b28;
  }
  else {
    puVar5 = (undefined8 *)**(long **)(lVar2 + 0xe7140);
    uVar3 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar5)();
    }
    if (param_1 != 0 || param_2 != 0) {
LAB_02669b28:
      plVar1 = (long *)(*(long *)(lVar2 + 0xe7128) + *(long *)(lVar2 + 0xe7120));
      if (param_1 == *plVar1 && param_2 == plVar1[1]) {
        uVar4 = 0;
      }
      else {
        if (((((param_1 != plVar1[9] || param_2 != plVar1[10]) &&
              (param_1 != plVar1[0x12] || param_2 != plVar1[0x13])) &&
             (param_1 != plVar1[0x1b] || param_2 != plVar1[0x1c])) &&
            ((param_1 != plVar1[0x24] || param_2 != plVar1[0x25] &&
             (param_1 != plVar1[0x2d] || param_2 != plVar1[0x2e])))) &&
           ((param_1 != plVar1[0x36] || param_2 != plVar1[0x37] &&
            (param_1 != plVar1[0x3f] || param_2 != plVar1[0x40])))) goto LAB_02669bb0;
        if (plVar1[9] == param_1 && plVar1[10] == param_2) {
          uVar4 = 1;
        }
        else if (plVar1[0x12] == param_1 && plVar1[0x13] == param_2) {
          uVar4 = 2;
        }
        else if (plVar1[0x1b] == param_1 && plVar1[0x1c] == param_2) {
          uVar4 = 3;
        }
        else if (plVar1[0x24] == param_1 && plVar1[0x25] == param_2) {
          uVar4 = 4;
        }
        else if (plVar1[0x2d] == param_1 && plVar1[0x2e] == param_2) {
          uVar4 = 5;
        }
        else if (plVar1[0x36] == param_1 && plVar1[0x37] == param_2) {
          uVar4 = 6;
        }
        else {
          uVar4 = 7;
          if (plVar1[0x40] != param_2 || plVar1[0x3f] != param_1) {
            uVar4 = 0xffffffff;
          }
        }
      }
      if ((uVar3 & 1) == 0) {
        return uVar4;
      }
      if (*(long *)(lVar2 + 0xe7140) == 0) {
        return uVar4;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xe7140) + 8);
      goto joined_r0x02669bc4;
    }
  }
LAB_02669bb0:
  if (((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0xe7140) == 0)) {
    return 0xffffffff;
  }
  puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0xe7140) + 8);
  uVar4 = 0xffffffff;
joined_r0x02669bc4:
  if (puVar5 == (undefined8 *)0x0) {
    return uVar4;
  }
  (**(code **)*puVar5)();
  return uVar4;
}

