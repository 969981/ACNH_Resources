
void FUN_0029ca08(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = FUN_002212e4(), (uVar1 & 1) != 0)) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x7f) = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar1 = FUN_002212e4(), (uVar1 & 1) != 0)) {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x11c) = 1;
  }
  return;
}

