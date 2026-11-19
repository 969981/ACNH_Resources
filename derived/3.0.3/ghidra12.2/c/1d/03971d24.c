
void FUN_03971d24(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1 + 0x53a);
  uVar3 = 0;
  if (bVar2 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x539) / (uint)bVar2;
  }
  if ((uint)*(byte *)(param_1 + 0x539) != uVar3 * bVar2) {
    return;
  }
  if (*(char *)(param_1 + 0x194) == '\x01') {
    uVar3 = *(uint *)(param_1 + 400);
    if ((uVar3 >> 6 & 1) != 0) {
      *(uint *)(param_1 + 400) = uVar3 & 0xffffffbf;
      uVar3 = param_3;
      if (*(uint *)(param_1 + 0x10) <= param_3) {
        uVar3 = 0;
      }
      FUN_0396e840(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 8));
      uVar3 = *(uint *)(param_1 + 400);
    }
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x10) <= param_3) {
      uVar1 = 0;
    }
    FUN_0396e400(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar1 * 8),param_2,
                 uVar3 >> 8 & 1);
    *(undefined1 *)(param_2 + 0xf9) = 4;
  }
  else {
    uVar3 = param_3;
    if (*(uint *)(param_1 + 0x10) <= param_3) {
      uVar3 = 0;
    }
    FUN_0396dcf0(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 8),param_2);
  }
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    param_3 = 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (long)(int)param_3 * 8);
  if (*(long *)(lVar4 + 0x78) != 0) {
    *(undefined4 *)(lVar4 + 0x478) = *(undefined4 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x47c) = *(undefined8 *)(lVar4 + 0x24);
    *(undefined8 *)(lVar4 + 0x470) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x484) = *(undefined4 *)(lVar4 + 0x2c);
    FUN_01560750(lVar4 + 0x388,*(long *)(lVar4 + 0x78),*(undefined1 *)(lVar4 + 0x446),
                 *(undefined2 *)(lVar4 + 0x444));
    *(uint *)(lVar4 + 0x6b0) = *(uint *)(lVar4 + 0x6b0) | 0x800;
  }
  return;
}

