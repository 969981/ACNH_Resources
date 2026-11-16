
void FUN_026d4f58(long param_1,void *param_2)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_1 + 0xe0adc);
  *(undefined4 *)(param_1 + 0xe0adc) = *(undefined4 *)(param_1 + 0xe0ad8);
  *(undefined8 *)(param_1 + 0xe0ad4) = *(undefined8 *)(param_1 + 0xe0ad0);
  *(undefined8 *)(param_1 + 0xe0acc) = *(undefined8 *)(param_1 + 0xe0ac8);
  *(undefined8 *)(param_1 + 0xe0ac4) = *(undefined8 *)(param_1 + 0xe0ac0);
  *(undefined8 *)(param_1 + 0xe0abc) = *(undefined8 *)(param_1 + 0xe0ab8);
  uVar3 = *(undefined4 *)(param_1 + 0xe0ab4);
  *(undefined4 *)(param_1 + 0xe0ab4) = *(undefined4 *)(param_1 + 0xe0ab0);
  *(undefined4 *)(param_1 + 0xe0ab8) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0aac);
  *(undefined4 *)(param_1 + 0xe0aac) = *(undefined4 *)(param_1 + 0xe0aa8);
  *(undefined4 *)(param_1 + 0xe0ab0) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0aa4);
  *(undefined4 *)(param_1 + 0xe0aa4) = *(undefined4 *)(param_1 + 0xe0aa0);
  *(undefined4 *)(param_1 + 0xe0aa8) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a9c);
  *(undefined4 *)(param_1 + 0xe0a9c) = *(undefined4 *)(param_1 + 0xe0a98);
  *(undefined4 *)(param_1 + 0xe0aa0) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a94);
  *(undefined4 *)(param_1 + 0xe0a94) = *(undefined4 *)(param_1 + 0xe0a90);
  *(undefined4 *)(param_1 + 0xe0a98) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a8c);
  *(undefined4 *)(param_1 + 0xe0a8c) = *(undefined4 *)(param_1 + 0xe0a88);
  *(undefined4 *)(param_1 + 0xe0a90) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a84);
  *(undefined4 *)(param_1 + 0xe0a84) = *(undefined4 *)(param_1 + 0xe0a80);
  *(undefined4 *)(param_1 + 0xe0a88) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a7c);
  *(undefined4 *)(param_1 + 0xe0a7c) = *(undefined4 *)(param_1 + 0xe0a78);
  *(undefined4 *)(param_1 + 0xe0a80) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0xe0a74);
  *(undefined4 *)(param_1 + 0xe0a74) = *(undefined4 *)(param_1 + 0xe0a70);
  *(undefined4 *)(param_1 + 0xe0a78) = uVar3;
  uVar1 = *(uint *)(param_1 + 0xe0a68);
  uVar3 = *(undefined4 *)(param_1 + 0xe0a6c);
  *(uint *)(param_1 + 0xe0a68) = uVar2;
  *(uint *)(param_1 + 0xe0a6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe0a70) = uVar3;
  __dest = (void *)(param_1 + 8 + (ulong)uVar2 * 0x77d0);
  if (0x1d < uVar2) {
    __dest = (void *)(param_1 + 8);
  }
  memcpy(__dest,param_2,0x777c);
  uVar4 = *(undefined1 *)((long)param_2 + 0x7794);
  uVar5 = *(undefined8 *)((long)param_2 + 0x778c);
  uVar6 = *(undefined8 *)((long)param_2 + 0x777c);
  *(undefined8 *)((long)__dest + 0x7784) = *(undefined8 *)((long)param_2 + 0x7784);
  *(undefined8 *)((long)__dest + 0x778c) = uVar5;
  *(undefined1 *)((long)__dest + 0x7794) = uVar4;
  *(undefined8 *)((long)__dest + 0x777c) = uVar6;
  uVar5 = *(undefined8 *)((long)param_2 + 0x7798);
  uVar6 = *(undefined8 *)((long)param_2 + 0x77a0);
  *(undefined8 *)((long)__dest + 0x77a8) = *(undefined8 *)((long)param_2 + 0x77a8);
  *(undefined8 *)((long)__dest + 0x77a0) = uVar6;
  *(undefined8 *)((long)__dest + 0x7798) = uVar5;
  uVar1 = *(uint *)((long)param_2 + 0x77b0);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)((long)__dest + 0x77b0) = uVar1;
  uVar5 = *(undefined8 *)((long)param_2 + 0x77bc);
  uVar6 = *(undefined8 *)((long)param_2 + 0x77c4);
  *(undefined8 *)((long)__dest + 0x77b4) = *(undefined8 *)((long)param_2 + 0x77b4);
  *(undefined8 *)((long)__dest + 0x77bc) = uVar5;
  *(undefined8 *)((long)__dest + 0x77c4) = uVar6;
  return;
}

