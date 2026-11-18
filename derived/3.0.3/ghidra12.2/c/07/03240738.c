
void FUN_03240738(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x1c158);
  uVar2 = *(uint *)(param_1 + 0x1c170);
  if (uVar2 < 0x10e) {
    lVar3 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar4 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
      **(undefined1 **)(lVar4 + 0x60) = 0;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar4 + 0x140) == -1)) {
        *(undefined4 *)(lVar4 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1c190) + 0x2e0);
  *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 8) = *puVar1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c160);
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x1c168);
  *(undefined1 *)(param_1 + 0x1c184) = 0;
  uVar2 = *(uint *)(param_1 + 0x1c174);
  *(undefined4 *)(param_1 + 0x1c170) = 0xffffffff;
  if (uVar2 < 0x10e) {
    lVar3 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar4 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
      **(undefined1 **)(lVar4 + 0x60) = 0;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar4 + 0x140) == -1)) {
        *(undefined4 *)(lVar4 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1c198) + 0x2e0);
  *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 8) = *puVar1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c160);
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x1c168);
  *(undefined4 *)(param_1 + 0x1c174) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c185) = 0;
  uVar2 = *(uint *)(param_1 + 0x1c178);
  if (uVar2 < 0x10e) {
    lVar3 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar4 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
      **(undefined1 **)(lVar4 + 0x60) = 0;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar4 + 0x140) == -1)) {
        *(undefined4 *)(lVar4 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1c1a0) + 0x2e0);
  *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 8) = *puVar1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c160);
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x1c168);
  *(undefined4 *)(param_1 + 0x1c178) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c186) = 0;
  uVar2 = *(uint *)(param_1 + 0x1c17c);
  if (uVar2 < 0x10e) {
    lVar3 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar4 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
      **(undefined1 **)(lVar4 + 0x60) = 0;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar4 + 0x140) == -1)) {
        *(undefined4 *)(lVar4 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1c1a8) + 0x2e0);
  *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 8) = *puVar1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c160);
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x1c168);
  *(undefined4 *)(param_1 + 0x1c17c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c187) = 0;
  uVar2 = *(uint *)(param_1 + 0x1c180);
  if (uVar2 < 0x10e) {
    lVar3 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar4 = param_1 + 0x220 + (ulong)uVar2 * 0x1a8;
      **(undefined1 **)(lVar4 + 0x60) = 0;
      *(undefined1 *)(lVar4 + 0xf0) = 0;
      if (((*(int *)(lVar4 + 0x100) != 1) && ((*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar4 + 0x140) == -1)) {
        *(undefined4 *)(lVar4 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
    }
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1c1b0) + 0x2e0);
  *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 8) = *puVar1;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1c160);
  *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x1c168);
  *(undefined4 *)(param_1 + 0x1c180) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c188) = 0;
  return;
}

