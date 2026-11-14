
uint FUN_01cdfea0(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = *param_1 * 0x16a88000 | (uint)(*param_1 * -0x3361d2af) >> 0x11;
  uVar4 = (uVar4 * 0x1b873593 >> 0x13 | uVar4 * -0x194da000) * 5 + 0xe6546b64;
  uVar4 = (uVar4 ^ uVar4 >> 0x10 ^ 4) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  uVar4 = uVar4 ^ uVar4 >> 0x10;
  uVar2 = (long)param_1[0x34] << 1;
  uVar1 = (uint)uVar2;
  if (3 < uVar1) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)((long)param_1 + uVar6 + 8);
      uVar4 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar4;
      iVar5 = (int)uVar6;
      uVar6 = (ulong)(iVar5 + 4);
      uVar4 = (uVar4 >> 0x13 | uVar4 << 0xd) * 5 + 0xe6546b64;
    } while (iVar5 + 8U <= uVar1);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar3 = (uint)*(ushort *)((long)param_1 + (((uVar2 & 0xfffffffe) + 8) - (uVar2 & 2)));
    uVar4 = (uVar3 * 0x16a88000 | uVar3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar4;
  }
  uVar4 = (uVar4 ^ uVar1 ^ (uVar4 ^ uVar1) >> 0x10) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  uVar4 = uVar4 ^ uVar4 >> 0x10;
  if (3 < uVar1) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)((long)param_1 + uVar6 + 0x6c);
      uVar4 = (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar4;
      iVar5 = (int)uVar6;
      uVar6 = (ulong)(iVar5 + 4);
      uVar4 = (uVar4 >> 0x13 | uVar4 << 0xd) * 5 + 0xe6546b64;
    } while (iVar5 + 8U <= uVar1);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar3 = (uint)*(ushort *)((long)param_1 + (((uVar2 & 0xfffffffe) + 0x6c) - (uVar2 & 2)));
    uVar4 = (uVar3 * 0x16a88000 | uVar3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar4;
  }
  uVar4 = (uVar4 ^ uVar1 ^ (uVar4 ^ uVar1) >> 0x10) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  uVar4 = ((uint)*(ushort *)(param_1 + 0x35) * 0x16a88000 |
          (uint)*(ushort *)(param_1 + 0x35) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar4 >> 0x10 ^
          uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x10 ^ 2) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  return uVar4 ^ uVar4 >> 0x10;
}

