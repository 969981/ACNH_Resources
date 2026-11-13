
void FUN_0138dfc8(long param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 0x24) = *param_2;
  *(char *)(param_1 + 0x26) = (char)*(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)((long)param_2 + 0x35);
  uVar1 = *(uint *)(param_1 + 0x18) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x1b);
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar1 = uVar1 & 0xfffffffd | (uint)*(byte *)(param_2 + 0x1a) << 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar2 = uVar1 & 0xfffffff7 | (uint)*(byte *)(param_2 + 0x1e) << 3;
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar1 = (uint)*(byte *)((long)param_2 + 0x3d) << 4;
  *(uint *)(param_1 + 0x18) = uVar2 & 0xffffffef | uVar1;
  *(uint *)(param_1 + 0x18) =
       uVar2 & 0xffffffeb | uVar1 | (uint)*(byte *)((long)param_2 + 0x37) << 2;
  *(undefined1 *)(param_1 + 0x3fb) = *(undefined1 *)((long)param_2 + 0x41);
  if (*(int *)(param_1 + 0x1c) - 0x1aU < 3) {
    *(undefined2 *)(param_1 + 0x3f8) = param_2[0x1f];
  }
  else if (*(int *)(param_1 + 0x1c) == 0x13) {
    *(undefined2 *)(param_1 + 0x3f8) = param_2[0x1f];
    *(undefined1 *)(param_1 + 0x3fa) = *(undefined1 *)(param_2 + 0x20);
    return;
  }
  return;
}

