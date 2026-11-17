
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b5a310(undefined4 *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b5a388;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b5a388;
    if (param_2 < 10) {
      lVar1 = lVar4 + 0x1962d8 + (ulong)param_2 * 0x10d8;
      if (9 < param_2) {
        lVar1 = lVar4 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      lVar4 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
      uVar2 = *(undefined4 *)(lVar4 + 0x1cc);
      *param_1 = *(undefined4 *)(lVar4 + 0x1c8);
      param_1[1] = uVar2;
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02b5a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
LAB_02b5a388:
  uVar2 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar2;
  return;
}

