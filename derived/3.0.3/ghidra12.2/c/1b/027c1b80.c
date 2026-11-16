
void FUN_027c1b80(uint *param_1)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  
  uVar7 = 0;
  uVar8 = 0;
  bVar3 = true;
  do {
    iVar9 = 0x20;
    uVar10 = uVar7;
    do {
      if ((((*(byte *)((long)param_1 + uVar10 + 0xa5) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)param_1 + uVar10 + 0xa5))) goto LAB_027c1bdc;
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar9 = iVar9 + -2;
    } while (iVar9 != 0);
    bVar3 = uVar8 < 0x1f;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)((int)uVar7 + 0x10);
  } while (uVar8 != 0x20);
LAB_027c1bdc:
  uVar7 = 0;
  uVar8 = 0;
  bVar4 = true;
  do {
    iVar9 = 0x20;
    uVar10 = uVar7;
    do {
      if ((((*(byte *)((long)param_1 + uVar10 + 0x2a5) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)param_1 + uVar10 + 0x2a5))) goto LAB_027c1c3c;
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar9 = iVar9 + -2;
    } while (iVar9 != 0);
    bVar4 = uVar8 < 0x1f;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)((int)uVar7 + 0x10);
  } while (uVar8 != 0x20);
LAB_027c1c3c:
  uVar7 = 0;
  uVar8 = 0;
  bVar5 = true;
  do {
    iVar9 = 0x20;
    uVar10 = uVar7;
    do {
      if ((((*(byte *)((long)param_1 + uVar10 + 0x4a5) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)param_1 + uVar10 + 0x4a5))) goto LAB_027c1c9c;
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar9 = iVar9 + -2;
    } while (iVar9 != 0);
    bVar5 = uVar8 < 0x1f;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)((int)uVar7 + 0x10);
  } while (uVar8 != 0x20);
LAB_027c1c9c:
  uVar7 = 0;
  uVar8 = 0;
  bVar6 = true;
  do {
    iVar9 = 0x20;
    uVar10 = uVar7;
    do {
      if ((((*(byte *)((long)param_1 + uVar10 + 0x6a5) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)param_1 + uVar10 + 0x6a5))) goto LAB_027c1cfc;
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar9 = iVar9 + -2;
    } while (iVar9 != 0);
    bVar6 = uVar8 < 0x1f;
    uVar8 = uVar8 + 1;
    uVar7 = (ulong)((int)uVar7 + 0x10);
  } while (uVar8 != 0x20);
LAB_027c1cfc:
  *param_1 = 0;
  uVar7 = 0;
  bVar2 = 2;
  if (!(bool)(bVar3 | bVar4 | bVar5 | bVar6)) {
    bVar2 = 0;
  }
  uVar8 = 0;
  *(byte *)(param_1 + 0x1c) = (byte)param_1[0x1c] & 0xfc | bVar2 | 1;
  do {
    piVar1 = (int *)((long)param_1 + uVar7);
    uVar7 = uVar7 + 4;
    uVar8 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar8;
    uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
  } while (uVar7 < 0x8a5);
  uVar8 = (uVar8 ^ uVar8 >> 0x10 ^ 0x8a8) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar8 ^ uVar8 >> 0x10;
  return;
}

