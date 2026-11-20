
void FUN_03fea370(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar1 = *(byte *)(param_1 + 0x6a);
  lVar6 = (ulong)*(byte *)(param_1 + 0x68) * 0x400;
  uVar8 = 3;
  if ((*(byte *)(param_1 + 0x33c) & 0x10) == 0) {
    uVar8 = bVar1 >> 4 & 2 | bVar1 >> 2 & 1;
  }
  uVar4 = (int)lVar6 + uVar8 * 0x10000 | (uint)((ulong)bVar1 & 3);
  if (uVar4 != *(uint *)(param_1 + 0x798)) {
    *(uint *)(param_1 + 0x798) = uVar4;
    bVar2 = (&DAT_041eca57)[uVar8];
    bVar1 = (&DAT_04084363)[(ulong)bVar1 & 3];
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x79c) = bVar2 + 0x80;
    lVar6 = *(long *)(param_1 + 0x28) + lVar6;
    if (uVar8 != 3) {
      uVar8 = (uint)bVar1;
      iVar3 = (bVar2 + 0x80) * uVar8;
      *(long *)(param_1 + 0x7a0) = lVar6;
      *(ulong *)(param_1 + 0x7a8) = lVar6 + uVar5 * 8;
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      *(int *)(param_1 + 0x8a4) = iVar3;
      *(ulong *)(param_1 + 0x7b0) = lVar6 + uVar5 * 0x10;
      *(ulong *)(param_1 + 2000) = lVar6 + (ulong)uVar8 * 0x30;
      *(ulong *)(param_1 + 0x7b8) = lVar6 + (ulong)uVar8 * 0x18;
      *(ulong *)(param_1 + 0x7c0) = lVar6 + uVar5 * 0x20;
      *(int *)(param_1 + 0x8b8) = iVar3 * 6;
      uVar4 = (uint)bVar1;
      *(ulong *)(param_1 + 0x7c8) = lVar6 + (ulong)uVar8 * 0x28;
      *(int *)(param_1 + 0x8ac) = iVar3 * 3;
      *(int *)(param_1 + 0x8b4) = iVar3 * 5;
      *(int *)(param_1 + 0x8b0) = iVar3 * 4;
      *(int *)(param_1 + 0x8a8) = iVar3 * 2;
      *(ulong *)(param_1 + 0x7d8) = lVar6 + uVar5 * 0x38;
      *(int *)(param_1 + 0x8c0) = iVar3 * 8;
      *(int *)(param_1 + 0x8bc) = iVar3 * 7;
      *(int *)(param_1 + 0x8c4) = iVar3 * 9;
      *(int *)(param_1 + 0x8e8) = iVar3 * 0x12;
      *(ulong *)(param_1 + 0x7e0) = lVar6 + uVar5 * 0x40;
      *(ulong *)(param_1 + 0x838) = lVar6 + (ulong)uVar4 * 0x98;
      *(ulong *)(param_1 + 0x7e8) = lVar6 + (ulong)uVar4 * 0x48;
      *(int *)(param_1 + 0x8ec) = iVar3 * 0x13;
      *(ulong *)(param_1 + 0x7f0) = lVar6 + (ulong)uVar4 * 0x50;
      *(int *)(param_1 + 0x8c8) = iVar3 * 10;
      *(int *)(param_1 + 0x8f0) = iVar3 * 0x14;
      *(ulong *)(param_1 + 0x840) = lVar6 + (ulong)uVar4 * 0xa0;
      *(ulong *)(param_1 + 0x7f8) = lVar6 + (ulong)uVar4 * 0x58;
      *(ulong *)(param_1 + 0x848) = lVar6 + (ulong)uVar4 * 0xa8;
      *(int *)(param_1 + 0x8cc) = iVar3 * 0xb;
      *(int *)(param_1 + 0x8f4) = iVar3 * 0x15;
      *(ulong *)(param_1 + 0x800) = lVar6 + (ulong)uVar4 * 0x60;
      *(ulong *)(param_1 + 0x850) = lVar6 + uVar5 * 0xb0;
      *(int *)(param_1 + 0x900) = iVar3 * 0x18;
      *(int *)(param_1 + 0x8d0) = iVar3 * 0xc;
      *(int *)(param_1 + 0x8f8) = iVar3 * 0x16;
      *(ulong *)(param_1 + 0x868) = lVar6 + uVar5 * 200;
      *(ulong *)(param_1 + 0x808) = lVar6 + uVar5 * 0x68;
      *(ulong *)(param_1 + 0x858) = lVar6 + uVar5 * 0xb8;
      *(int *)(param_1 + 0x904) = iVar3 * 0x19;
      *(int *)(param_1 + 0x8d4) = iVar3 * 0xd;
      *(int *)(param_1 + 0x8fc) = iVar3 * 0x17;
      *(ulong *)(param_1 + 0x870) = lVar6 + uVar5 * 0xd0;
      *(ulong *)(param_1 + 0x810) = lVar6 + uVar5 * 0x70;
      *(int *)(param_1 + 0x8e0) = iVar3 * 0x10;
      *(int *)(param_1 + 0x8d8) = iVar3 * 0xe;
      *(ulong *)(param_1 + 0x860) = lVar6 + uVar5 * 0xc0;
      *(int *)(param_1 + 0x908) = iVar3 * 0x1a;
      *(ulong *)(param_1 + 0x818) = lVar6 + uVar5 * 0x78;
      *(int *)(param_1 + 0x8dc) = iVar3 * 0xf;
      *(int *)(param_1 + 0x8e4) = iVar3 * 0x11;
      *(ulong *)(param_1 + 0x878) = lVar6 + uVar5 * 0xd8;
      *(ulong *)(param_1 + 0x820) = lVar6 + uVar5 * 0x80;
      *(ulong *)(param_1 + 0x830) = lVar6 + uVar5 * 0x90;
      *(int *)(param_1 + 0x90c) = iVar3 * 0x1b;
      *(ulong *)(param_1 + 0x828) = lVar6 + uVar5 * 0x88;
      *(ulong *)(param_1 + 0x880) = lVar6 + uVar5 * 0xe0;
      *(int *)(param_1 + 0x910) = iVar3 * 0x1c;
      *(int *)(param_1 + 0x918) = iVar3 * 0x1e;
      *(ulong *)(param_1 + 0x888) = lVar6 + uVar5 * 0xe8;
      *(int *)(param_1 + 0x914) = iVar3 * 0x1d;
      *(ulong *)(param_1 + 0x898) = lVar6 + uVar5 * 0xf8;
      *(ulong *)(param_1 + 0x890) = lVar6 + uVar5 * 0xf0;
      *(int *)(param_1 + 0x91c) = iVar3 * 0x1f;
      return;
    }
    uVar7 = 0;
    do {
      uVar8 = (uint)uVar7 & 0xf;
      *(ulong *)(param_1 + 0x8a0 + uVar7 * 8 + -0x100) =
           lVar6 + uVar5 * 0x100 * (uVar7 & 0x10) + uVar5 * 0x80 * (ulong)uVar8;
      *(uint *)(param_1 + 0x8a0 + uVar7 * 4) = ((int)(uVar7 & 0x10) << 7 | uVar8 << 3) * (uint)bVar1
      ;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x20);
  }
  return;
}

