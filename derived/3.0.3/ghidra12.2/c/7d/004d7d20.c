
undefined4 FUN_004d7d20(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  ulong local_30;
  
  FUN_004dad30(auStack_40);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if ((local_30 & 1) != 0) {
    FUN_0043dd50(local_30 & 0xfffffffffffffffe);
  }
  return uVar1;
}

