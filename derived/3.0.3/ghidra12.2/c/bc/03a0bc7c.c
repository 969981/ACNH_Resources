
void FUN_03a0bc7c(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(ushort *)(param_1 + 0x144);
  *(ushort *)(param_1 + 0x144) = uVar1 + 1;
  lVar4 = *(long *)(param_1 + 0x128);
  uVar3 = (uint)uVar1;
  if (*(uint *)(param_1 + 0x120) < (uint)uVar1 || *(uint *)(param_1 + 0x120) == uVar3) {
    uVar3 = 0;
  }
  fVar10 = *(float *)(*(long *)(param_3 + 0x18) + 0x144);
  puVar6 = (ushort *)(lVar4 + (ulong)uVar3 * 0x3d8);
  *puVar6 = (ushort)*(byte *)(param_3 + 8);
  puVar6[1] = (ushort)(1 << (ulong)(*(byte *)(param_3 + 8) & 0x1f));
  *(long *)(puVar6 + 0xc) = *(long *)(param_3 + 0x18) + 0x60;
  *(long *)(puVar6 + 0x7c) = *(long *)(param_3 + 0x18) + 0x2a0;
  *(long *)(puVar6 + 0x10) = *(long *)(param_3 + 0x18) + 0x470;
  *(long *)(puVar6 + 0x80) = *(long *)(param_3 + 0x18) + 0x6b0;
  *(long *)(puVar6 + 0x14) = *(long *)(param_3 + 0x18) + 0x880;
  *(long *)(puVar6 + 0x84) = *(long *)(param_3 + 0x18) + 0xac0;
  *(long *)(puVar6 + 0x18) = *(long *)(param_3 + 0x18) + 0xc90;
  *(long *)(puVar6 + 0x88) = *(long *)(param_3 + 0x18) + 0xed0;
  *(long *)(puVar6 + 0x1c) = *(long *)(param_3 + 0x18) + 0x10a0;
  *(long *)(puVar6 + 0x8c) = *(long *)(param_3 + 0x18) + 0x12e0;
  *(long *)(puVar6 + 0x20) = *(long *)(param_3 + 0x18) + 0x14b0;
  *(long *)(puVar6 + 0x90) = *(long *)(param_3 + 0x18) + 0x16f0;
  *(long *)(puVar6 + 0x24) = *(long *)(param_3 + 0x18) + 0x18c0;
  *(long *)(puVar6 + 0x94) = *(long *)(param_3 + 0x18) + 0x1b00;
  *(long *)(puVar6 + 0x28) = *(long *)(param_3 + 0x18) + 0x1cd0;
  *(long *)(puVar6 + 0x98) = *(long *)(param_3 + 0x18) + 0x1f10;
  *(long *)(puVar6 + 0x2c) = *(long *)(param_3 + 0x18) + 0x20e0;
  *(long *)(puVar6 + 0x9c) = *(long *)(param_3 + 0x18) + 0x2320;
  *(long *)(puVar6 + 0x30) = *(long *)(param_3 + 0x18) + 0x24f0;
  *(long *)(puVar6 + 0xa0) = *(long *)(param_3 + 0x18) + 0x2730;
  *(long *)(puVar6 + 0x34) = *(long *)(param_3 + 0x18) + 0x2900;
  *(long *)(puVar6 + 0xa4) = *(long *)(param_3 + 0x18) + 0x2b40;
  *(long *)(puVar6 + 0x38) = *(long *)(param_3 + 0x18) + 0x2d10;
  *(long *)(puVar6 + 0xa8) = *(long *)(param_3 + 0x18) + 0x2f50;
  *(long *)(puVar6 + 0x3c) = *(long *)(param_3 + 0x18) + 0x3120;
  *(long *)(puVar6 + 0xac) = *(long *)(param_3 + 0x18) + 0x3360;
  *(long *)(puVar6 + 0x40) = *(long *)(param_3 + 0x18) + 0x3530;
  *(long *)(puVar6 + 0xb0) = *(long *)(param_3 + 0x18) + 0x3770;
  *(long *)(puVar6 + 0x44) = *(long *)(param_3 + 0x18) + 0x3940;
  *(long *)(puVar6 + 0xb4) = *(long *)(param_3 + 0x18) + 0x3b80;
  *(long *)(puVar6 + 0x48) = *(long *)(param_3 + 0x18) + 0x3d50;
  *(long *)(puVar6 + 0xb8) = *(long *)(param_3 + 0x18) + 0x3f90;
  *(long *)(puVar6 + 0x4c) = *(long *)(param_3 + 0x18) + 0x4160;
  *(long *)(puVar6 + 0xbc) = *(long *)(param_3 + 0x18) + 0x43a0;
  *(long *)(puVar6 + 0x50) = *(long *)(param_3 + 0x18) + 0x4570;
  *(long *)(puVar6 + 0xc0) = *(long *)(param_3 + 0x18) + 0x47b0;
  *(long *)(puVar6 + 0x54) = *(long *)(param_3 + 0x18) + 0x4980;
  *(long *)(puVar6 + 0xc4) = *(long *)(param_3 + 0x18) + 0x4bc0;
  *(long *)(puVar6 + 0x58) = *(long *)(param_3 + 0x18) + 0x4d90;
  *(long *)(puVar6 + 200) = *(long *)(param_3 + 0x18) + 0x4fd0;
  *(long *)(puVar6 + 0x5c) = *(long *)(param_3 + 0x18) + 0x51a0;
  *(long *)(puVar6 + 0xcc) = *(long *)(param_3 + 0x18) + 0x53e0;
  *(long *)(puVar6 + 0x60) = *(long *)(param_3 + 0x18) + 0x55b0;
  *(long *)(puVar6 + 0xd0) = *(long *)(param_3 + 0x18) + 0x57f0;
  *(long *)(puVar6 + 100) = *(long *)(param_3 + 0x18) + 0x59c0;
  *(long *)(puVar6 + 0xd4) = *(long *)(param_3 + 0x18) + 0x5c00;
  *(long *)(puVar6 + 0x68) = *(long *)(param_3 + 0x18) + 0x5dd0;
  *(long *)(puVar6 + 0xd8) = *(long *)(param_3 + 0x18) + 0x6010;
  *(long *)(puVar6 + 0x6c) = *(long *)(param_3 + 0x18) + 0x61e0;
  *(long *)(puVar6 + 0xdc) = *(long *)(param_3 + 0x18) + 0x6420;
  *(long *)(puVar6 + 0x70) = *(long *)(param_3 + 0x18) + 0x65f0;
  *(long *)(puVar6 + 0xe0) = *(long *)(param_3 + 0x18) + 0x6830;
  *(long *)(puVar6 + 0x74) = *(long *)(param_3 + 0x18) + 0x6a00;
  *(long *)(puVar6 + 0xe4) = *(long *)(param_3 + 0x18) + 0x6c40;
  *(long *)(puVar6 + 0x78) = *(long *)(param_3 + 0x18) + 0x6e10;
  *(long *)(puVar6 + 0xe8) = *(long *)(param_3 + 0x18) + 0x7050;
  fVar11 = fVar10;
  if ((*(long *)(param_2 + 0x55c8) != 0) && (*(char *)(*(long *)(param_2 + 0x118) + 0x6b0) != '\0'))
  {
    fVar11 = *(float *)(param_3 + 0x3f0);
  }
  lVar7 = lVar4 + (ulong)uVar3 * 0x3d8;
  *(float *)(lVar7 + 4) = -fVar11;
  *(float *)(lVar7 + 8) = -*(float *)(param_3 + 0x3f4);
  uVar5 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(param_2 + 0x108) <= (uint)*(byte *)(param_3 + 8)) {
    uVar5 = 0;
  }
  if (((*(char *)(*(long *)(param_2 + 0x31e0) + 0x570) != '\0') &&
      ((*(byte *)(*(long *)(param_2 + 0x110) + (ulong)uVar5 * 0x430 + 0x3c8) >> 4 & 1) != 0)) &&
     (*(char *)(*(long *)(param_2 + 0x118) + 0x1100) != '\0')) {
    fVar10 = *(float *)(param_3 + 0x3f8);
  }
  lVar7 = lVar4 + (ulong)uVar3 * 0x3d8;
  *(float *)(lVar7 + 0xc) = -fVar10;
  *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_3 + 0x3fc);
  *(undefined8 *)(lVar7 + 0x3c0) = *(undefined8 *)(param_3 + 0x18);
  *(long *)(lVar7 + 0x3c8) = *(long *)(param_3 + 0x18) + 0xc0;
  lVar7 = *(long *)(param_2 + 0x1600);
  if ((*(ushort *)(param_2 + 0x1a34) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(byte *)(lVar7 + 0x510);
    if (*(byte *)(lVar7 + 0x510) != 0) {
      uVar5 = (uint)(*(char *)(param_2 + 0x1db8) != '\0' || *(char *)(param_2 + 0x2690) != '\0') <<
              4;
    }
  }
  if ((*(char *)(lVar7 + 0xa10) == '\0') || (*(char *)(lVar7 + 0x4d0) == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)(*(char *)(lVar7 + 0x1660) == '\0');
  }
  uVar9 = 0x20;
  if ((uVar8 & *(uint *)(param_2 + 0x1b48) >> (ulong)(*(byte *)(param_3 + 8) & 0x1f)) == 0) {
    uVar9 = 0;
  }
  *(uint *)(lVar4 + (ulong)uVar3 * 0x3d8 + 0x14) = uVar9 | uVar5;
  lVar7 = *(long *)(param_2 + 0x1600);
  bVar2 = false;
  if (((*(char *)(lVar7 + 0xa10) != '\0') && (bVar2 = false, *(char *)(lVar7 + 0x4d0) != '\0')) &&
     ((bVar2 = false, *(char *)(lVar7 + 0x1660) == '\0' &&
      (uVar5 = 1 << (ulong)(*(byte *)(param_3 + 8) & 0x1f),
      (*(uint *)(param_2 + 0x1b48) & uVar5) != 0)))) {
    bVar2 = (*(uint *)(param_2 + 0x1b4c) & uVar5) != 0;
  }
  lVar4 = lVar4 + (ulong)uVar3 * 0x3d8;
  *(bool *)(lVar4 + 0x3d0) = bVar2;
  *(undefined4 *)(lVar4 + 0x214) = 0;
  *(undefined8 *)(lVar4 + 500) = 0;
  *(undefined4 *)(lVar4 + 0x254) = 0;
  *(undefined8 *)(lVar4 + 0x234) = 0;
  *(undefined4 *)(lVar4 + 0x294) = 0;
  *(undefined8 *)(lVar4 + 0x274) = 0;
  *(undefined4 *)(lVar4 + 0x2d4) = 0;
  *(undefined8 *)(lVar4 + 0x2b4) = 0;
  *(undefined4 *)(lVar4 + 0x314) = 0;
  *(undefined8 *)(lVar4 + 0x2f4) = 0;
  *(undefined4 *)(lVar4 + 0x35c) = 0;
  *(undefined8 *)(lVar4 + 0x33c) = 0;
  *(undefined4 *)(lVar4 + 0x39c) = 0;
  *(undefined8 *)(lVar4 + 0x37c) = 0;
  return;
}

