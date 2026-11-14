
void FUN_01825b2c(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_1[9] + 0x248) >> 3 & 1) == 0) {
    *(int *)(param_1 + 0x51) = (int)param_1[0x50];
    uVar1 = *(uint *)(param_1 + 0x52);
    *(undefined4 *)((long)param_1 + 0x28c) = *(undefined4 *)((long)param_1 + 0x284);
    *(undefined4 *)((long)param_1 + 0x284) = 0;
    *(undefined1 *)((long)param_1 + 0x299) = 1;
    *(uint *)(param_1 + 0x50) = uVar1;
    if (uVar1 != 0xffffffff) {
      if (*(uint *)(param_1 + 0x54) <= uVar1) {
        uVar1 = 0;
      }
      puVar2 = *(undefined8 **)(param_1[0x55] + (long)(int)uVar1 * 0x40);
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)*puVar2)();
      }
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_01815e0c(param_1,(int)param_1[0x50],param_1 + 0x65);
  fVar3 = *(float *)(param_1[0x60] + 0x278);
  fVar4 = *(float *)(param_1[0x60] + 0x280);
  *(uint *)(param_1 + 0xb9) = (int)((float)(int)fVar3 / 10.0) - (uint)(fVar3 < 0.0);
  *(uint *)((long)param_1 + 0x5cc) = (int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0);
  if (*(char *)((long)param_1 + 0x432) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01825c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1[9] + 0x68) + 0x178))(0);
    return;
  }
  if ((int)param_1[0x50] == 1) {
    return;
  }
  FUN_03ebb160(param_1 + 0x4f,1);
  return;
}

