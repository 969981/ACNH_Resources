
undefined8 FUN_0265fc80(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 + 0x70;
LAB_0265fce8:
    if ((*(long **)(lVar2 + 0xe6e30) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar2 + 0xe6e30), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar1 = *(long *)(lVar2 + 0xe6e18) + *(long *)(lVar2 + 0xe6e10);
    if (((*(char *)(lVar1 + 0x36) == '\0') || (*(char *)(lVar1 + 0x2f) != '\x02')) ||
       (uVar4 = FUN_02917058((long)*(char *)(lVar1 + 0x2c)), (uVar4 & 1) == 0)) {
      if (((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0xe6e30) == 0)) goto LAB_0265fd94;
      puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0xe6e30) + 8);
      uVar7 = 0;
      uVar5 = 0;
    }
    else {
      if (((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0xe6e30) == 0)) {
        return 1;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0xe6e30) + 8);
      uVar7 = 1;
      uVar5 = 1;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      uVar5 = uVar7;
    }
  }
  else {
    if (puVar6 != (undefined8 *)0x0) {
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar2 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar2 == 0) {
        return 0;
      }
      goto LAB_0265fce8;
    }
LAB_0265fd94:
    uVar5 = 0;
  }
  return uVar5;
}

