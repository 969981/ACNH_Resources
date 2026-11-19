
void FUN_0389e530(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined1 *)(param_1 + 0x850) = 0;
  pvVar6 = *(void **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x28) * 8);
  memset(pvVar6,0,0x2a6);
  *(undefined8 *)((long)pvVar6 + 0x2a8) = 0xffffffffffffffff;
  uVar2 = *(int *)(param_1 + 0x28) + 1U & 1;
  uVar3 = -uVar2;
  if (-2 < *(int *)(param_1 + 0x28)) {
    uVar3 = uVar2;
  }
  pvVar6 = *(void **)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 8);
  memset(pvVar6,0,0x2a6);
  lVar5 = 0;
  *(undefined8 *)((long)pvVar6 + 0x2a8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  do {
    lVar1 = param_1 + lVar5;
    lVar5 = lVar5 + 0x20;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined2 *)(lVar1 + 0x78) = 0xffff;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined1 *)(lVar1 + 0x88) = 0;
  } while (lVar5 != 0x7e0);
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined8 *)(param_1 + 0x898) = 0;
  *(undefined8 *)(param_1 + 0x890) = 0;
  *(undefined8 *)(param_1 + 0x888) = 0;
  *(undefined8 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x8b8) = 0xffffffffffffffff;
  memset((void *)(param_1 + 0x8c0),0,0x46e);
  uVar4 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0xd30) = uVar4;
  uVar4 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0xd38) = uVar4;
  return;
}

