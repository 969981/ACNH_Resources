
bool FUN_0222b64c(long param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(*(int *)(param_1 + 0x2d4) != 0);
  if (*(int *)(param_1 + 0x2d8) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x2dc) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x2e4) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (((param_2 & 1) == 0) || (uVar1 < *(ushort *)(param_1 + 0x2b6))) {
    return (((*(int *)(param_1 + 0x2d4) != 0 && *(int *)(param_1 + 0x2d8) != 0) &&
            *(int *)(param_1 + 0x2dc) != 0) && *(int *)(param_1 + 0x2e0) != 0) &&
           *(int *)(param_1 + 0x2e4) != 0;
  }
  return true;
}

