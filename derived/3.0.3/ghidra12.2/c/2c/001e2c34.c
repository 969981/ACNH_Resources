
undefined8 FUN_001e2c34(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 1;
  default:
    return uVar1;
  case 4:
    break;
  case 5:
    if (*(int *)(param_1 + 0xc0) != 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 2;
      return 0;
    }
    return 0;
  case 6:
    if (*(int *)(param_1 + 0xc0) != 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 3;
      return 0;
    }
    return 0;
  case 7:
    if (*(int *)(param_1 + 0xc0) != 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 4;
      return 0;
    }
    return 0;
  case 8:
    if (*(int *)(param_1 + 0xc0) != 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 5;
      return 0;
    }
    return 0;
  case 9:
    if (*(int *)(param_1 + 0xc0) != 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 6;
      return 0;
    }
    return 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    return 0;
  }
  uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))();
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
    return 0;
  }
  return 0;
}

