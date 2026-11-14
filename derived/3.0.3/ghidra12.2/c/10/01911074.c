
void FUN_01911074(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + -0x28) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = **(long **)(param_1 + -0x20);
  }
  puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x38) + 0xf0))((long *)(lVar2 + 0x38));
  *puVar1 = 0x41a00000;
  *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 0x1000000;
  if (*(int *)(param_1 + -0x28) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = **(long **)(param_1 + -0x20);
  }
  puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x68) + 0xf0))((long *)(lVar2 + 0x68));
  *puVar1 = 0x41a00000;
  *(uint *)(lVar2 + 0x88) = *(uint *)(lVar2 + 0x88) | 0x1000000;
  return;
}

