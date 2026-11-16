
void FUN_027c1eb0(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 local_30 [2];
  long local_28;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 9;
  local_28 = param_1 + 0x10;
  local_30[0] = 0x14;
  FUN_02906c90(local_30,&DAT_04ccad10);
  *(undefined1 *)(param_1 + 0x70) = 4;
  uVar9 = DAT_04ccaca8;
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x38) = DAT_04ccaca0;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  uVar12 = DAT_04ccacd4;
  *(undefined8 *)(param_1 + 0x48) = DAT_04ccacb0;
  uVar10 = (undefined1)DAT_04ccacb8;
  if (1 < uVar12) {
    uVar12 = 0;
  }
  *(uint *)(param_1 + 0x6c) = uVar12;
  *(undefined1 *)(param_1 + 0x50) = uVar10;
  *(undefined8 *)(param_1 + 0x54) = DAT_04ccacbc;
  uVar9 = DAT_04ccaccc;
  *(undefined8 *)(param_1 + 0x5c) = DAT_04ccacc4;
  *(undefined8 *)(param_1 + 100) = uVar9;
  local_30[0] = 0xe;
  *(undefined8 *)(param_1 + 0x78) = 0xe5e52d77e52d2de5;
  *(undefined8 *)(param_1 + 0x80) = 0x391b8b1b2de5771e;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0x14;
  *(undefined8 *)(param_1 + 0x88) = 0xe53d3dd6912ad6b7;
  *(undefined8 *)(param_1 + 0x90) = 0xa8e5c95be5e54c89;
  *(undefined1 *)(param_1 + 0x71) = 0xee;
  *(undefined8 *)(param_1 + 0x98) = 0x6ee5e5e541508b98;
  *(undefined4 *)(param_1 + 0xa0) = 0x14146e6e;
  do {
    uVar12 = 0;
    iVar8 = ((uint)uVar11 & 0x1f) * 0x20;
    do {
      uVar6 = (uint)(uVar11 >> 4) & 0x7fffffe | (uint)(0x1f < uVar12);
      uVar3 = uVar12;
      if (0x1f < uVar12) {
        uVar3 = uVar12 - 0x20;
      }
      uVar12 = uVar12 + 1;
      lVar4 = param_1 + 0xa5 + (ulong)uVar6 * 0x200;
      if (3 < uVar6) {
        lVar4 = param_1 + 0xa5;
      }
      uVar6 = uVar3 + iVar8;
      uVar1 = uVar6;
      if ((int)uVar6 < 0 != SCARRY4(uVar3,iVar8)) {
        uVar1 = uVar6 + 1;
      }
      lVar7 = (long)((ulong)uVar1 << 0x20) >> 0x21;
      bVar5 = *(byte *)(lVar4 + lVar7);
      bVar2 = bVar5 & 0xf | 0xc0;
      if ((uVar6 & 0x80000001) != 1) {
        bVar2 = bVar5 & 0xf0 | 0xc;
      }
      *(byte *)(lVar4 + lVar7) = bVar2;
    } while (uVar12 != 0x40);
    uVar12 = (uint)uVar11 + 1;
    uVar11 = (ulong)uVar12;
  } while (uVar12 != 0x40);
  *(undefined2 *)(param_1 + 0x8a6) = 0;
  *(undefined1 *)(param_1 + 0x8a5) = 1;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
  FUN_027c1b80(param_1);
  return;
}

