
uint FUN_0011dd00(long param_1,long param_2,byte *param_3,uint param_4,ulong param_5,byte param_6,
                 char param_7)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_24 [4];
  
  uVar6 = CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
  if ((uint)uVar6 <= ((uint)param_5 & 0xffff)) {
    return 0xa221;
  }
  bVar4 = *(byte *)(param_2 + 0x2f);
  pbVar1 = (byte *)(param_2 +
                   ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                    (ulong)*(byte *)(param_2 + 0x21) << 0x10 | (ulong)*(byte *)(param_2 + 0x22) << 8
                   | (ulong)*(byte *)(param_2 + 0x23)));
  uVar2 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),bVar4);
  pbVar11 = pbVar1 + uVar2 * (param_5 & 0xffff);
  if ((~*pbVar11 & 3) == 0) {
    return 0xa221;
  }
  if (((param_4 & 0xffff) == 0) && (param_6 == 2)) {
    return 1;
  }
  bVar5 = pbVar11[4];
  if ((((*pbVar11 >> 4 & 1) != 0) && (param_7 == '\x01')) && ((bVar5 & 0x7f) == 0)) {
    lVar8 = FUN_00119860(param_1,param_2,param_5 & 0xffffffff,local_24,1);
    if (lVar8 == 0) {
      return 0xa221;
    }
    FUN_00114550(lVar8,param_1 + 0x61ea0,local_24[0]);
    sVar7 = FUN_00100470(param_3,param_1 + 0x61ea0,param_4);
    if (sVar7 < 0) {
      return 0;
    }
    uVar9 = 1;
    if (sVar7 != 0) {
      uVar9 = 2;
    }
    return uVar9;
  }
  uVar12 = pbVar11[2] & 0x7f;
  pbVar11 = pbVar11 + 5;
  uVar9 = bVar4 - 5;
  if ((bVar5 & 0x7f) == 0 || param_7 != '\x01') {
    uVar10 = (uint)*param_3 - (uint)*pbVar11;
  }
  else {
    uVar10 = uVar9;
    if ((uVar9 & 0xff) <= uVar12) {
      uVar10 = bVar4 - 1;
      do {
        pbVar3 = pbVar11 + (byte)uVar9;
        if (pbVar1 + uVar2 * uVar6 + -1 <= pbVar11 + (byte)uVar9) {
          pbVar3 = pbVar1;
        }
        if (*pbVar3 != 0) {
          return 0xa221;
        }
        uVar12 = uVar12 - uVar9;
        pbVar11 = pbVar3 + 1;
        uVar9 = uVar10;
      } while ((uVar10 & 0xff) <= (uVar12 & 0xff));
    }
    pbVar11 = pbVar11 + (byte)uVar12;
    uVar9 = uVar10 - uVar12;
    uVar10 = (uint)*param_3 - (uint)*pbVar11;
    uVar12 = bVar5 & 0x7f;
  }
  if (uVar10 == 0) {
    uVar13 = 0;
    param_4 = param_4 << 1;
    do {
      param_3 = param_3 + 1;
      uVar13 = uVar13 + 1;
      if (uVar12 <= (uVar13 & 0xff)) {
        uVar9 = (uint)param_6;
        if (uVar9 != 2) {
          uVar9 = param_6 + 1;
        }
        uVar10 = 1;
        if (uVar12 != (param_4 & 0xffff)) {
          uVar10 = uVar9;
        }
        return uVar10;
      }
      if ((param_4 & 0xffff) <= (uVar13 & 0xffff)) {
        uVar9 = (uint)(param_6 == 2);
        if (uVar12 <= (param_4 & 0xffff)) {
          uVar9 = 2;
        }
        return uVar9;
      }
      pbVar11 = pbVar11 + 1;
      if ((uVar9 & 0xff) <= (uVar13 & 0xff)) {
        if (pbVar1 + uVar2 * uVar6 + -1 <= pbVar11) {
          pbVar11 = pbVar1;
        }
        if (*pbVar11 != 0) {
          return 0xa221;
        }
        pbVar11 = pbVar11 + 1;
        uVar9 = (bVar4 - 1) + uVar9;
      }
      uVar10 = (uint)*param_3 - (uint)*pbVar11;
    } while (uVar10 == 0);
  }
  return (uVar10 >> 0x1e ^ 0xffffffff) & 2;
}

