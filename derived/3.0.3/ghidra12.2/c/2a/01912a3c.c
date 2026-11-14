
void FUN_01912a3c(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = **(long **)(param_1 + 0x60);
  }
  puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x68) + 0xf0))((long *)(lVar3 + 0x68));
  *puVar1 = 0x40a00000;
  *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) | 0x1000000;
  if (*(int *)(param_1 + 0x58) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = **(long **)(param_1 + 0x60);
  }
  puVar2 = (undefined8 *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  return;
}

