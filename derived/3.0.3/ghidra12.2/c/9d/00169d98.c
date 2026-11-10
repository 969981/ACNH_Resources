
undefined8 FUN_00169d98(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_30 [2];
  
  uVar10 = param_2 + 1;
  uVar7 = 0x3f;
  if (param_4 != 0) {
    uVar7 = 0xf;
  }
  uVar8 = (ulong)uVar7;
  uVar9 = uVar10 - uVar8;
  if (uVar10 < uVar8) {
    lVar4 = 1;
  }
  else if (uVar9 < 0x80) {
    lVar4 = 2;
  }
  else {
    uVar1 = 0;
    do {
      uVar11 = uVar1;
      uVar12 = uVar9 >> 0xe;
      uVar9 = uVar9 >> 7;
      uVar1 = uVar11 + 1;
    } while (uVar12 != 0);
    if (0xe < uVar1) {
      return 0xfffffdf5;
    }
    lVar4 = uVar11 + 3;
  }
  bVar2 = (byte)(0x100040 >> (ulong)((param_4 & 3) << 3));
  local_30[1] = 0;
  if (2 < param_4) {
    bVar2 = 0;
  }
  uVar9 = uVar10 - uVar8;
  if (uVar10 < uVar8) {
    bVar2 = bVar2 & ((byte)uVar7 ^ 0xff) | (byte)uVar10;
  }
  else {
    bVar2 = bVar2 | (byte)uVar7;
    pbVar5 = (byte *)((ulong)local_30 | 1);
    pbVar6 = pbVar5;
    uVar10 = uVar9;
    if (0x7f < uVar9) {
      do {
        uVar9 = uVar10 >> 7;
        uVar8 = uVar10 >> 0xe;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = (byte)uVar10 | 0x80;
        pbVar6 = pbVar5;
        uVar10 = uVar9;
      } while (uVar8 != 0);
    }
    *pbVar5 = (byte)uVar9;
  }
  local_30[0] = (ulong)bVar2;
  uVar3 = FUN_0016b500(param_1,local_30,lVar4);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_0016af68(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18));
  }
  return uVar3;
}

