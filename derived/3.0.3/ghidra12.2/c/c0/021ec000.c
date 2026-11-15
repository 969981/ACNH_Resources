
void FUN_021ec000(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  if (DAT_05574040 != 0) {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) {
        return;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar3[0x26] == (long *)0x0) {
        return;
      }
      lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      if (lVar2 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar2 + 0xd0) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0xd0), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    lVar5 = *(long *)(lVar2 + 0xb8) + *(long *)(lVar2 + 0xb0);
    uVar4 = (uint)*(byte *)(lVar5 + 0x1e3363);
    if (9 < *(byte *)(lVar5 + 0x1e3363)) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 < 10) {
      *param_1 = *param_1 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
      lVar5 = *(long *)(lVar2 + 0xb8) + *(long *)(lVar2 + 0xb0);
    }
    uVar4 = (uint)*(byte *)(lVar5 + 0x1e3364);
    if (9 < *(byte *)(lVar5 + 0x1e3364)) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 < 10) {
      *param_1 = *param_1 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
      lVar5 = *(long *)(lVar2 + 0xb8) + *(long *)(lVar2 + 0xb0);
    }
    uVar4 = (uint)*(byte *)(lVar5 + 0x1e3365);
    if (9 < *(byte *)(lVar5 + 0x1e3365)) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 < 10) {
      *param_1 = *param_1 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0xd0) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0xd0) + 8), puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x021ec15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

