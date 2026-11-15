
void FUN_020eb86c(undefined2 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0xc) = 10;
  *param_1 = 0x23;
  *(undefined1 *)(param_1 + 1) = 8;
  param_1[4] = 0x23;
  *(undefined1 *)(param_1 + 5) = 8;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = 0xa0a;
  param_1[8] = 0x23;
  lVar1 = DAT_05574040;
  *(undefined1 *)(param_1 + 9) = 8;
  *(undefined4 *)(param_1 + 10) = 0;
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar1 == 0) {
        return;
      }
      lVar1 = lVar1 + 0x70;
    }
    else {
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar3[0x26] == (long *)0x0) {
        return;
      }
      lVar1 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      if (lVar1 == 0) {
        return;
      }
    }
    if ((*(long **)(&LAB_00205730 + lVar1) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(&LAB_00205730 + lVar1), puVar3 == (undefined8 *)0x0)) {
      FUN_020eb6bc(param_1,*(long *)(&LAB_00205718 + lVar1) + *(long *)(&LAB_00205710 + lVar1));
      return;
    }
    uVar2 = (**(code **)*puVar3)();
    FUN_020eb6bc(param_1,*(long *)(&LAB_00205718 + lVar1) + *(long *)(&LAB_00205710 + lVar1));
    if ((((uVar2 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar1) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar1) + 8), puVar3 != (undefined8 *)0x0
       )) {
                    /* WARNING: Could not recover jumptable at 0x020eb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

