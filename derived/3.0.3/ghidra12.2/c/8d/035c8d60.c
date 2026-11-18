
void FUN_035c8d60(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  bVar2 = *param_1;
  *param_1 = (byte)param_2;
  if (((param_2 >> 7 & 1) == 0) && ((char)bVar2 < '\0')) {
    bVar2 = param_1[0xd88];
    param_1[0x11] = 1;
    param_1[0xd88] = bVar2 & 0xfd;
    if ((bVar2 & 0xfd) == 0) {
      param_1[0xd8a] = 0;
      param_1[0xd8b] = 0;
      param_1[0xd8c] = 0;
      param_1[0xd8d] = 0;
    }
    param_1[0xd89] = param_1[0xd89] & 0xfd;
    bVar2 = param_1[0xd70];
    param_1[0xd70] = bVar2 & 0xfd;
    if ((bVar2 & 0xfd) == 0) {
      param_1[0xd72] = 0;
      param_1[0xd73] = 0;
      param_1[0xd74] = 0;
      param_1[0xd75] = 0;
    }
    param_1[0xd71] = param_1[0xd71] & 0xfd;
    param_1[0xd8] = 0;
    param_1[0xd9] = 0;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
    param_1[0xe3] = 0;
    param_1[0x175] = 0xff;
    if (param_1[0x1a1] != 0) {
      FUN_035c3e20(param_1 + 0x178);
    }
  }
  else if (((param_2 >> 7 & 1) != 0) && (-1 < (char)bVar2)) {
    param_1[0xe9] = 0;
    param_1[0x12] = 1;
    param_1[0xd] = 0xff;
    param_1[0xd8] = 0;
    param_1[0xd9] = 1;
    param_1[0x175] = 0xff;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
    param_1[0xe3] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0xc06] = 0xff;
    param_1[0xc07] = 0xff;
    if (param_1[0x1a1] == 0) {
      lVar4 = *(long *)(param_1 + 0x178);
      uVar5 = *(ulong *)(lVar4 + 0x110);
      *(ulong *)(param_1 + 0x188) = uVar5;
      if ((*(char *)(lVar4 + 0xd5) == '\0' && *(byte *)(lVar4 + 0xd2) < 3) ||
         (*(ulong *)(param_1 + 0x198) < uVar5)) {
        pbVar1 = param_1 + 0x178;
        *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar4 + 0x110);
        FUN_035c34e0(pbVar1,1,*(undefined8 *)(*(long *)pbVar1 + 0x110));
        FUN_035c3b90(pbVar1,*(undefined8 *)(*(long *)pbVar1 + 0x110),1);
      }
      param_1[0x1a1] = 1;
    }
  }
  param_1[0x15] = 1;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 5 & 1;
  param_1[0x16] = bVar3;
  param_1[0xe8] = (param_1[4] == param_1[9] && param_1[0xe9] == 0) & bVar2 >> 5;
  param_1[0x18] = (bVar2 ^ 0xff) & 1;
  if (param_1[0x163] == 0) {
    param_1[0x17] = 1;
  }
  else {
    param_1[0x17] = 1;
    if (bVar3 == 0) {
      param_1[0x163] = 0;
      *(ushort *)(param_1 + 0x166) = (ushort)param_1[2] + (ushort)param_1[4];
    }
  }
  bVar3 = (bVar2 << 3 ^ 0xff) & 0x80;
  *(ushort *)(param_1 + 0x160) = ((bVar2 ^ 0xffff) & 0x10) << 7;
  param_1[0x162] = bVar3;
  param_1[0x110] = param_1[0x10b] ^ bVar3;
  return;
}

