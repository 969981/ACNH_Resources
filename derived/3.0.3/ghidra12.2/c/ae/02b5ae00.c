
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b5ae00(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 == 0) {
LAB_02b5ae90:
    uVar2 = DAT_0558600c;
    *param_1 = _DAT_05586008;
    param_1[1] = uVar2;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b5ae90;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b5ae90;
    if ((*(long **)(lVar4 + 0x1a0da0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1a0da0), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0x1a0d88) + *(long *)(lVar4 + 0x1a0d80);
    uVar2 = *(undefined4 *)(lVar1 + 0x12b8);
    *param_1 = *(undefined4 *)(lVar1 + 0x12b4);
    param_1[1] = uVar2;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1a0da0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1a0da0) + 8), puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02b5aee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

