
void FUN_00388d30(long param_1,long param_2)

{
  size_t __n;
  byte bVar1;
  void *__dest;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  FUN_003889dc();
  if (*(long *)(param_2 + 0x150) != 0) {
    bVar1 = *(byte *)(*(long *)(param_2 + 0x150) + 0x12);
    __n = (ulong)bVar1 * 0x10 + 0x20;
    if (bVar1 < 2) {
      __n = 0x30;
    }
    __dest = (void *)FUN_00367b30(__n);
    *(void **)(param_1 + 0x150) = __dest;
    memcpy(__dest,*(void **)(param_2 + 0x150),__n);
    *(undefined8 *)(*(long *)(param_1 + 0x150) + 8) = 0;
  }
  return;
}

