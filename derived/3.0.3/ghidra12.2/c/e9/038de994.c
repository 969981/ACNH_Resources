
bool FUN_038de994(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return true;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 8))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar1 <= uVar2;
}

