
void FUN_01ce57b4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04bc0760 + 0x10;
  *(long *)(param_1 + 8) = (long)puVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x30;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x40;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(void **)(param_1 + 0x10) = (void *)(param_1 + 0xe8);
  puVar3 = PTR_DAT_04bb2bc0;
  uVar2 = param_1 + 0x148;
  *(undefined4 *)(param_1 + 0xa0) = 0x40;
  puVar3 = puVar3 + 0x10;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined **)(param_1 + 0x38) = puVar3;
  *(undefined1 **)(param_1 + 0x40) = (undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined1 **)(param_1 + 0x98) = (undefined1 *)(param_1 + 0xa4);
  uVar4 = uVar2;
  if (uVar2 <= param_1 + 0xeaU) {
    uVar4 = param_1 + 0xeaU;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  memset((void *)(param_1 + 0xe8),0,((uVar4 - (param_1 + 8)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined4 *)(param_1 + 0x158) = 0x30;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  *(undefined **)(param_1 + 0x178) = puVar3;
  *(undefined1 **)(param_1 + 0x180) = (undefined1 *)(param_1 + 0x18c);
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0x40;
  *(undefined1 *)(param_1 + 0x1cb) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x40;
  *(undefined1 *)(param_1 + 0x223) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined **)(param_1 + 0x1d0) = puVar3;
  *(undefined1 **)(param_1 + 0x1d8) = (undefined1 *)(param_1 + 0x1e4);
  uVar4 = param_1 + 0x288U;
  if (param_1 + 0x288U <= param_1 + 0x22aU) {
    uVar4 = param_1 + 0x22aU;
  }
  *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffff00000000;
  *(undefined **)(param_1 + 0x148) = puVar1;
  *(void **)(param_1 + 0x150) = (void *)(param_1 + 0x228);
  memset((void *)(param_1 + 0x228),0,((uVar4 - uVar2) - 0xe1 & 0xfffffffffffffffe) + 2);
  return;
}

