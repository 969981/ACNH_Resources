
void FUN_03bc3b6c(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    if ((int)uVar1 < (int)*(uint *)(param_1 + 0x20)) {
      if (*(float *)(param_3 + 8) < *(float *)(param_1 + 0xc)) {
        *(float *)(param_1 + 0xc) = *(float *)(param_3 + 8);
      }
      if (*(float *)(param_1 + 0x10) < *(float *)(param_3 + 0xc)) {
        *(float *)(param_1 + 0x10) = *(float *)(param_3 + 0xc);
      }
      if (*(float *)(param_3 + 0x10) < *(float *)(param_1 + 0x14)) {
        *(float *)(param_1 + 0x14) = *(float *)(param_3 + 0x10);
      }
      if (*(float *)(param_1 + 0x18) < *(float *)(param_3 + 0x18)) {
        *(float *)(param_1 + 0x18) = *(float *)(param_3 + 0x18);
      }
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c) = param_2;
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 4) =
           *(undefined4 *)(param_3 + 4);
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 0x18) =
           *(undefined4 *)(param_3 + 0x14);
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 8) =
           *(undefined4 *)(param_3 + 0x1c);
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 0x10) =
           *(undefined4 *)(param_3 + 0x24);
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 0xc) =
           *(undefined4 *)(param_3 + 0x20);
      uVar1 = *(uint *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x1c + 0x14) =
           *(undefined4 *)(param_3 + 0x28);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  return;
}

