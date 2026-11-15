
undefined4 FUN_0228ac68(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if (4 < param_2) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = lVar1 + 0x70;
      }
      goto LAB_0228ace4;
    }
    if (puVar4 != (undefined8 *)0x0) {
      lVar3 = 0;
      if ((long *)puVar4[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      }
      goto LAB_0228ace4;
    }
  }
  lVar3 = 0;
LAB_0228ace4:
  lVar1 = lVar3 + 0x1bfdd0;
  if (param_2 != 4) {
    lVar1 = lVar3 + 0x1bfdd0 + (ulong)param_2 * 0x9a0;
  }
  if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar4 == (undefined8 *)0x0)) {
    uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x24);
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x24);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar5;
}

