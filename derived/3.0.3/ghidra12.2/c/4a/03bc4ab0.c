
void FUN_03bc4ab0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 200);
  if (*(long *)(param_1 + 0xd0) != 0 && 0 < (int)uVar3) {
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0xd0) + (ulong)uVar1 * 0xa8);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      uVar3 = *(uint *)(param_1 + 200);
    } while ((int)uVar2 < (int)uVar3);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  if ((*(long *)(param_1 + 0x88) != 0) && (uVar3 = *(uint *)(param_1 + 0x80), 0 < (int)uVar3)) {
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      lVar5 = *(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x28;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0x7f7fffff;
      *(undefined8 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 0x24) = 0;
      uVar3 = *(uint *)(param_1 + 0x80);
    } while ((int)uVar2 < (int)uVar3);
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  return;
}

