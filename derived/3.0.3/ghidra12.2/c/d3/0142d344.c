
void FUN_0142d344(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_0142ce9c();
  uVar1 = *(undefined4 *)(param_1 + 0x280);
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 3;
  }
  *(uint *)(param_1 + 0x290) = uVar3;
  *(uint *)(param_1 + 0x280) = uVar3;
  *(undefined4 *)(param_1 + 0x288) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined1 *)(param_1 + 0x299) = 1;
  if (*(uint *)(param_1 + 0x2a0) <= uVar3) {
    uVar3 = 0;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x2a8) + (ulong)uVar3 * 0x40);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0142d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)();
  return;
}

