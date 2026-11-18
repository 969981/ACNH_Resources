
void FUN_03285f74(undefined1 *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = PTR_PTR_04bb2238;
  *(undefined2 *)(param_1 + 0x30) = 0;
  uVar4 = *(undefined8 *)(puVar2 + 8);
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x92] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  param_1[0xf2] = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  param_1[0x122] = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  param_1[0x152] = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  *(undefined8 *)(param_1 + 0x168) = uVar4;
  *(undefined8 *)(param_1 + 0x178) = uVar4;
  param_1[0x182] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  iVar3 = FUN_032862c0(0);
  iVar1 = 0;
  if (iVar3 != -1) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x1c8) = iVar1;
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 8))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x100000384;
  return;
}

