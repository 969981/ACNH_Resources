
void FUN_038836c0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined1 *)(param_1 + 0x850) = 0;
  pvVar5 = *(void **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x28) * 8);
  memset(pvVar5,0,0x2a6);
  *(undefined8 *)((long)pvVar5 + 0x2a8) = 0xffffffffffffffff;
  uVar2 = *(int *)(param_1 + 0x28) + 1U & 1;
  uVar3 = -uVar2;
  if (-2 < *(int *)(param_1 + 0x28)) {
    uVar3 = uVar2;
  }
  pvVar5 = *(void **)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 8);
  memset(pvVar5,0,0x2a6);
  lVar4 = 0;
  *(undefined8 *)((long)pvVar5 + 0x2a8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  do {
    lVar1 = param_1 + lVar4;
    lVar4 = lVar4 + 0x20;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined2 *)(lVar1 + 0x78) = 0xffff;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined1 *)(lVar1 + 0x88) = 0;
  } while (lVar4 != 0x7e0);
  return;
}

