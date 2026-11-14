
bool FUN_01d927c4(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    return false;
  }
  if (((*(int *)(DAT_05358908 + 0x78) == 0) || (*(int *)(DAT_05358908 + 0xc4) - 1U < 2)) ||
     (DAT_05574040 == 0)) {
LAB_01d92888:
    bVar1 = false;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_01d92888;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_01d92888;
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    lVar5 = *(long *)(&LAB_00578438 + *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
    bVar1 = lVar5 != 0;
    *(long *)(param_1 + 0xc0) = lVar5;
    if (lVar5 != 0) {
      FUN_03ebb160(param_1 + 8,0xe);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return bVar1;
}

