
void FUN_001de0f8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t __n;
  long lVar4;
  
  __n = *(size_t *)(param_1 + 0x178);
  lVar4 = *(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 0x148;
  memcpy((void *)(lVar4 + 8),(void *)(param_1 + 0x168),__n);
  *(size_t *)(lVar4 + 0x18) = __n;
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar2 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x1a8);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
  FUN_001864f4(lVar4 + 0x60,param_1 + 0x1c0);
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(param_1 + 0x208);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  uVar2 = *(undefined8 *)(param_1 + 0x228);
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(lVar4 + 200) = uVar2;
  *(undefined8 *)(lVar4 + 0xb0) = uVar3;
  *(undefined8 *)(lVar4 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  uVar2 = *(undefined8 *)(param_1 + 0x248);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(lVar4 + 0xe8) = uVar2;
  *(undefined8 *)(lVar4 + 0xd0) = uVar3;
  *(undefined8 *)(lVar4 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 600);
  uVar2 = *(undefined8 *)(param_1 + 0x260);
  uVar3 = *(undefined8 *)(param_1 + 0x250);
  *(undefined1 *)(lVar4 + 0x108) = *(undefined1 *)(param_1 + 0x268);
  *(undefined8 *)(lVar4 + 0xf8) = uVar1;
  *(undefined8 *)(lVar4 + 0x100) = uVar2;
  *(undefined8 *)(lVar4 + 0xf0) = uVar3;
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(param_1 + 0x278);
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  uVar2 = *(undefined8 *)(param_1 + 0x288);
  uVar3 = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(lVar4 + 0x130) = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(lVar4 + 0x138) = uVar3;
  *(undefined8 *)(lVar4 + 0x120) = uVar1;
  *(undefined8 *)(lVar4 + 0x128) = uVar2;
  *(undefined4 *)(lVar4 + 0x140) = *(undefined4 *)(param_1 + 0x2a0);
  return;
}

