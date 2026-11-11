
void FUN_003de050(long param_1,ushort *param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  int iVar9;
  ushort uVar10;
  
  if (param_5 != 0) {
    uVar4 = 0;
    uVar6 = *param_2 & 0xf;
    uVar5 = (uint)(*param_2 >> 4);
    pbVar7 = (byte *)(param_4 + (param_1 / 0xe) * 8);
    uVar8 = param_1 % 0xe;
    do {
      if (uVar8 == 0) {
        bVar2 = *pbVar7;
        *param_2 = (ushort)bVar2;
        uVar5 = (uint)(bVar2 >> 4);
        uVar6 = bVar2 & 0xf;
      }
      uVar1 = uVar8;
      if ((long)uVar8 < 0) {
        uVar1 = uVar8 + 1;
      }
      bVar2 = pbVar7[((long)uVar1 >> 1) + 1] >> 4;
      if ((uVar8 & 1) != 0) {
        bVar2 = pbVar7[((long)uVar1 >> 1) + 1];
      }
      uVar3 = param_2[1];
      iVar9 = (int)(short)uVar3 * (int)*(short *)(param_3 + (ulong)(uVar5 << 1) * 2) +
              (int)(short)param_2[2] * (int)*(short *)(param_3 + (ulong)(uVar5 << 1 | 1) * 2) +
              ((0x10000 << (ulong)uVar6) >> 0x10) * ((int)((uint)bVar2 << 0x1c) >> 0x11);
      if (iVar9 < 0x3fffc00) {
        iVar9 = (iVar9 >> 10) + 1 >> 1;
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        uVar10 = (ushort)iVar9;
      }
      else {
        uVar10 = 0x7fff;
      }
      param_2[1] = uVar10;
      param_2[2] = uVar3;
      *(ushort *)(param_6 + uVar4 * 2) = uVar10;
      uVar4 = uVar4 + 1;
      uVar1 = 0;
      if (uVar8 != 0xd) {
        uVar1 = uVar8 + 1;
      }
      pbVar7 = pbVar7 + (ulong)(uVar8 == 0xd) * 8;
      uVar8 = uVar1;
    } while ((uVar4 & 0xffffffff) < param_5);
  }
  return;
}

