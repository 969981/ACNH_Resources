
void FUN_001f9b84(long param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),param_1 + 0x88,*(undefined8 *)(param_1 + 0x70),
             *(undefined8 *)(param_1 + 0xe0));
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_00194970(param_1);
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  FUN_0019c910(param_1,1);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}

