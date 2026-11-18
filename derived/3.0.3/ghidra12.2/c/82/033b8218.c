
void FUN_033b8218(long param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar1 = (**(code **)(*(long *)(param_1 + 0x1190) + 0x10))(param_1 + 0x1190);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x11b0) = 0xffffffff;
    *(undefined ***)(param_1 + 0x1190) = &PTR_FUN_048fc6e0;
  }
  return;
}

