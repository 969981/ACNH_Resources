
uint FUN_01d2ce30(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  
  uVar2 = 0xefeffeff;
  uVar1 = *(uint *)(param_1 + 8) * 2;
  if (3 < uVar1) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(long *)(param_1 + 0x10) + uVar5);
      uVar2 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
      iVar3 = (int)uVar5;
      uVar5 = (ulong)(iVar3 + 4);
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
    } while (iVar3 + 8U <= uVar1);
  }
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    uVar4 = (uint)*(ushort *)((*(long *)(param_1 + 0x10) + (ulong)uVar1) - ((ulong)uVar1 & 2));
    uVar2 = (uVar4 * 0x16a88000 | uVar4 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar2;
  }
  uVar2 = (uVar2 ^ uVar1 ^ (uVar2 ^ uVar1) >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  uVar2 = uVar2 ^ uVar2 >> 0x10;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (3 < uVar1) {
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(long *)(param_1 + 0x20) + uVar5);
      uVar2 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
      iVar3 = (int)uVar5;
      uVar5 = (ulong)(iVar3 + 4);
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
    } while (iVar3 + 8U <= uVar1);
  }
  uVar4 = uVar1 & 3;
  if (uVar4 != 0) {
    puVar6 = (ushort *)((*(long *)(param_1 + 0x20) + (ulong)uVar1) - ((ulong)uVar1 & 3));
    if (uVar4 == 1) {
      uVar4 = (uint)(byte)*puVar6;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*puVar6;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(byte)puVar6[1] << 0x10 | (uint)*(byte *)((long)puVar6 + 1) << 8 |
              (uint)(byte)*puVar6;
    }
    else {
      uVar4 = 0;
    }
    uVar2 = (uVar4 * 0x16a88000 | uVar4 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar2;
  }
  uVar2 = (uVar2 ^ uVar1 ^ (uVar2 ^ uVar1) >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  return uVar2 ^ uVar2 >> 0x10;
}

