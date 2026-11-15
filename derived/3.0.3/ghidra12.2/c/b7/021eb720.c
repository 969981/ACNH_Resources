
bool FUN_021eb720(uint *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (DAT_05574040 == 0) {
LAB_021eb7ac:
    bVar3 = false;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) goto LAB_021eb7ac;
      lVar5 = lVar5 + 0x70;
    }
    else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 == 0)) goto LAB_021eb7ac;
    if ((*(long **)(lVar5 + 0xd0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xd0), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    lVar2 = lVar1 + (ulong)*param_1 * 0x13230;
    if (9 < *param_1) {
      lVar2 = lVar1;
    }
    bVar3 = *(char *)(lVar2 + 0x1267a) == '\x01';
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0xd0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xd0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return bVar3;
}

