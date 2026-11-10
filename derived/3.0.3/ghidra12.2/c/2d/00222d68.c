
void FUN_00222d68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar6 = (ulong *)(param_1 + 0x58);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  (**(code **)(param_1 + 0x10))(puVar6,puVar6,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar1 = (*puVar6 & 0xff00ff00ff00ff00) >> 8 | (*puVar6 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar1 >> 0x20;
  uVar1 = uVar2 | uVar1 << 0x20;
  uVar3 = (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x60) & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar3 & 0xffff0000ffff0000) >> 0x10;
  uVar3 = uVar5 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
  *(ulong *)(param_1 + 0x108) = uVar1;
  *(ulong *)(param_1 + 0x110) = uVar4;
  uVar3 = uVar4 >> 1 | uVar2 << 0x3f;
  uVar1 = uVar1 >> 1;
  if ((uVar5 & 0x100000000) != 0) {
    uVar1 = uVar1 ^ 0xe100000000000000;
  }
  *(ulong *)(param_1 + 200) = uVar1;
  *(ulong *)(param_1 + 0xd0) = uVar3;
  uVar2 = uVar3 >> 1 | uVar1 << 0x3f;
  uVar3 = uVar1 >> 1;
  if ((uVar5 & 0x200000000) != 0) {
    uVar3 = uVar1 >> 1 ^ 0xe100000000000000;
  }
  *(ulong *)(param_1 + 0xa8) = uVar3;
  *(ulong *)(param_1 + 0xb0) = uVar2;
  uVar1 = uVar3 >> 1;
  if ((uVar5 & 0x400000000) != 0) {
    uVar1 = uVar3 >> 1 ^ 0xe100000000000000;
  }
  *puVar6 = uVar1;
  *(ulong *)(param_1 + 0x60) = uVar4;
  uVar5 = uVar2 >> 1 | uVar3 << 0x3f;
  *puVar6 = uVar3;
  *(ulong *)(param_1 + 0x60) = uVar2;
  *(ulong *)(param_1 + 0x98) = uVar1;
  *(ulong *)(param_1 + 0xa0) = uVar5;
  *(ulong *)(param_1 + 0xb8) = uVar1 ^ uVar3;
  *(ulong *)(param_1 + 0xc0) = uVar5 ^ uVar2;
  *puVar6 = *(ulong *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xd0);
  uVar3 = *puVar6;
  uVar5 = *(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0xd8) = uVar1 ^ uVar3;
  *(ulong *)(param_1 + 0xe0) = *(ulong *)(param_1 + 0xa0) ^ uVar5;
  *(ulong *)(param_1 + 0xe8) = *(ulong *)(param_1 + 0xa8) ^ uVar3;
  *(ulong *)(param_1 + 0xf0) = *(ulong *)(param_1 + 0xb0) ^ uVar5;
  *(ulong *)(param_1 + 0xf8) = *(ulong *)(param_1 + 0xb8) ^ uVar3;
  *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0xc0) ^ uVar5;
  uVar3 = *(ulong *)(param_1 + 0x108);
  *puVar6 = uVar3;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(ulong *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x118) = uVar1 ^ uVar3;
  *(ulong *)(param_1 + 0x120) = *(ulong *)(param_1 + 0xa0) ^ uVar5;
  *(ulong *)(param_1 + 0x128) = *(ulong *)(param_1 + 0xa8) ^ uVar3;
  *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0xb0) ^ uVar5;
  *(ulong *)(param_1 + 0x138) = *(ulong *)(param_1 + 0xb8) ^ uVar3;
  *(ulong *)(param_1 + 0x140) = *(ulong *)(param_1 + 0xc0) ^ uVar5;
  *(ulong *)(param_1 + 0x148) = *(ulong *)(param_1 + 200) ^ uVar3;
  *(ulong *)(param_1 + 0x150) = *(ulong *)(param_1 + 0xd0) ^ uVar5;
  *(ulong *)(param_1 + 0x158) = *(ulong *)(param_1 + 0xd8) ^ uVar3;
  *(ulong *)(param_1 + 0x160) = *(ulong *)(param_1 + 0xe0) ^ uVar5;
  *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0xe8) ^ uVar3;
  *(ulong *)(param_1 + 0x170) = *(ulong *)(param_1 + 0xf0) ^ uVar5;
  *(ulong *)(param_1 + 0x178) = *(ulong *)(param_1 + 0xf8) ^ uVar3;
  *(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0x100) ^ uVar5;
  return;
}

