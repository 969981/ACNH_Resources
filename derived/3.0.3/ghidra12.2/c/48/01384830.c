
bool FUN_01384830(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (DAT_05574040 == 0) {
LAB_013848bc:
    bVar1 = false;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_013848bc;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_013848bc;
    if ((*(long **)(&LAB_00116d20 + lVar3) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(&LAB_00116d20 + lVar3), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar5 = 0;
    bVar1 = true;
    do {
      if (((&DAT_04175344)[uVar5] != '\0') &&
         (*(short *)(*(long *)(lVar3 + 0x116d08) + *(long *)(lVar3 + 0x116d00) + uVar5 * 2) == 0))
      break;
      bVar1 = uVar5 < 0x47;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x48);
    if ((((uVar2 & 1) == 0) && (*(long *)(&LAB_00116d20 + lVar3) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(&LAB_00116d20 + lVar3) + 8), puVar4 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar4)();
    }
  }
  return bVar1;
}

