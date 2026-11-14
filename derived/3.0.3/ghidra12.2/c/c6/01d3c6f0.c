
void FUN_01d3c6f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0xff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x68) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x58));
  }
  *(undefined1 *)(param_1 + 0x446) = 0xff;
  *(undefined1 *)(param_1 + 0x138) = 0xff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x444) = 0xffff;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0xe8) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0xd8));
  }
  *(undefined2 *)(param_1 + 0x448) = 0xffff;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x44a) = 0xff;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0xff;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (0 < *(int *)(param_1 + 0x158)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x168);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x160) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x168) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x158));
  }
  *(undefined1 *)(param_1 + 0x44e) = 0xff;
  *(undefined1 *)(param_1 + 0x238) = 0xff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined2 *)(param_1 + 0x44c) = 0xffff;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x1e8);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x1e0) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x1e8) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x1d8));
  }
  *(undefined2 *)(param_1 + 0x450) = 0xffff;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x452) = 0xff;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0xff;
  *(undefined4 *)(param_1 + 700) = 0;
  if (0 < *(int *)(param_1 + 600)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x268);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x260) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x268) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 600));
  }
  *(undefined1 *)(param_1 + 0x456) = 0xff;
  *(undefined1 *)(param_1 + 0x338) = 0xff;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x454) = 0xffff;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  if (0 < *(int *)(param_1 + 0x2d8)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x2e8);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x2e0) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x2e8) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x2d8));
  }
  *(undefined2 *)(param_1 + 0x458) = 0xffff;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined1 *)(param_1 + 0x45a) = 0xff;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0xff;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  if (0 < *(int *)(param_1 + 0x358)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x368);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x360) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0x368) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x358));
  }
  *(undefined1 *)(param_1 + 0x45e) = 0xff;
  *(undefined1 *)(param_1 + 0x438) = 0xff;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x45c) = 0xffff;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  if (0 < *(int *)(param_1 + 0x3d8)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 1000);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x3e0) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 1000) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0x3d8));
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined1 *)(param_1 + 0x462) = 0xff;
  *(undefined2 *)(param_1 + 0x460) = 0xffff;
  *(undefined8 *)(param_1 + 0x468) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x470) = 0;
  return;
}

