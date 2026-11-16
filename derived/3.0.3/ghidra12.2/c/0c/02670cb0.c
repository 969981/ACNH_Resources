
void FUN_02670cb0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = lVar3 + 0x70;
      }
      goto LAB_02670d1c;
    }
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
      goto LAB_02670d1c;
    }
  }
  lVar4 = 0;
LAB_02670d1c:
  if ((*(long **)(&LAB_00205180 + lVar4) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(&LAB_00205180 + lVar4), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  uVar1 = ((undefined4 *)(*(long *)(&LAB_00205168 + lVar4) + *(long *)(&LAB_00205160 + lVar4)))[1];
  *param_1 = *(undefined4 *)(*(long *)(&LAB_00205168 + lVar4) + *(long *)(&LAB_00205160 + lVar4));
  param_1[1] = uVar1;
  if ((((uVar2 & 1) == 0) && (*(long *)(&LAB_00205180 + lVar4) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(&LAB_00205180 + lVar4) + 8), puVar5 != (undefined8 *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x02670d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar5)();
    return;
  }
  return;
}

