
void FUN_01b93e60(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar3 + 0x1a0da0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1a0da0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar5 = *(uint *)(*(long *)(lVar3 + 0x1a0d88) + *(long *)(lVar3 + 0x1a0d80));
    if (2 < uVar5) {
      uVar5 = 0;
    }
    if ((int)uVar5 < 2) {
      uVar5 = 0x4f;
    }
    else {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
      uVar5 = 0x50;
    }
    if ((uVar5 < 0x13e) && (uVar1 = (int)uVar5 >> 3, uVar1 < 0x28)) {
      *(byte *)(param_1 + (ulong)uVar1) =
           *(byte *)(param_1 + (ulong)uVar1) | (byte)(1 << (ulong)(uVar5 & 7));
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x1a0da0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1a0da0) + 8), puVar4 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01b93ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}

