
void FUN_03ebb114(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(uint *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar1 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar1) {
      uVar1 = 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar1 * 0x40);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03ebb158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
  }
  return;
}

