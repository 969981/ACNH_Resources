
void FUN_030da2b0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  FUN_03d66690();
  if (((*(long *)(param_1 + 0x218) != 0) && (*(long *)(param_1 + 0x210) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x210) + 8) == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x14c8) = *(undefined8 *)(param_1 + 0x208);
  }
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x310);
  uVar1 = *(uint *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined1 *)(param_1 + 0x329) = 1;
  *(uint *)(param_1 + 0x310) = uVar1;
  if (uVar1 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x330) <= uVar1) {
      uVar1 = 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x338) + (long)(int)uVar1 * 0x40);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030da33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
  }
  return;
}

