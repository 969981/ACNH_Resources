
void FUN_003e3d2c(long param_1)

{
  ushort uVar1;
  
  FUN_003cf888();
  uVar1 = *(ushort *)(param_1 + 0x2b0);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x23c) < *(int *)(param_1 + 0x238))) {
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  }
  if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x24c) < *(int *)(param_1 + 0x248))) {
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
  }
  if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 600))) {
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  }
  if (((uVar1 >> 3 & 1) != 0) && (*(int *)(param_1 + 0x26c) < *(int *)(param_1 + 0x268))) {
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 1;
  }
  if (((uVar1 >> 4 & 1) != 0) && (*(int *)(param_1 + 0x27c) < *(int *)(param_1 + 0x278))) {
    *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
  }
  if (((uVar1 >> 5 & 1) != 0) && (*(int *)(param_1 + 0x28c) < *(int *)(param_1 + 0x288))) {
    *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
  }
  if (((uVar1 >> 6 & 1) != 0) && (*(int *)(param_1 + 0x29c) < *(int *)(param_1 + 0x298))) {
    *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
  }
  if (((uVar1 >> 7 & 1) != 0) && (*(int *)(param_1 + 0x2ac) < *(int *)(param_1 + 0x2a8))) {
    *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
  }
  return;
}

