
byte FUN_0025b0f0(long param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0024e270(param_1 + 0xb0);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0xe0) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0xf0);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x120) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0x130);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x160) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0x170);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x1a0) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0x1b0);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x1e0) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0x1f0);
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x220) == param_2)) {
    return 1;
  }
  uVar2 = FUN_0024e270(param_1 + 0x230);
  if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 0x260) != param_2)) {
    bVar1 = FUN_0024e270(param_1 + 0x270);
    return bVar1 & *(int *)(param_1 + 0x2a0) == param_2;
  }
  return 1;
}

