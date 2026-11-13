
void FUN_011a2b58(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar5 + 0xe7648) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe7648), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar5 + 0xe7630) + *(long *)(lVar5 + 0xe7628);
    iVar2 = *(int *)(lVar1 + 0x100640);
    iVar3 = *(int *)(lVar1 + 0x100644);
    *(int *)(param_1 + 0x18) = iVar2;
    *(int *)(param_1 + 0x1c) = iVar3;
    *(int *)(param_1 + 0x28) = iVar2 + 0x17;
    *(int *)(param_1 + 0x2c) = iVar3 + 0x13;
    *(float *)(param_1 + 0x30) = ((float)iVar2 * 5.0 + (float)(iVar2 + 0x17) * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x38) = ((float)iVar3 * 5.0 + (float)(iVar3 + 0x13) * 5.0 + 5.0) * 0.5;
    FUN_011a2cac(param_1);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0xe7648) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe7648) + 8), puVar6 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x011a2c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar6)();
      return;
    }
  }
  return;
}

