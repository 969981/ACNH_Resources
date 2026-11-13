
undefined2 FUN_013671a0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = lVar1 + 0x70;
      }
      goto LAB_01367208;
    }
    if (puVar4 != (undefined8 *)0x0) {
      lVar2 = 0;
      if ((long *)puVar4[0x26] != (long *)0x0) {
        lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      }
      goto LAB_01367208;
    }
  }
  lVar2 = 0;
LAB_01367208:
  if ((*(long **)(&LAB_00116d20 + lVar2) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(&LAB_00116d20 + lVar2), puVar4 == (undefined8 *)0x0)) {
    uVar5 = *(undefined2 *)(*(long *)(lVar2 + 0x116d08) + *(long *)(lVar2 + 0x116d00) + 0x90);
  }
  else {
    uVar3 = (**(code **)*puVar4)();
    uVar5 = *(undefined2 *)(*(long *)(lVar2 + 0x116d08) + *(long *)(lVar2 + 0x116d00) + 0x90);
    if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_00116d20 + lVar2) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(&LAB_00116d20 + lVar2) + 8), puVar4 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar4)();
    }
  }
  return uVar5;
}

