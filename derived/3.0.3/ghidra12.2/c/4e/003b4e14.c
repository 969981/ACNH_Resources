
uint FUN_003b4e14(byte *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  uint in_w6;
  int iVar9;
  int iVar10;
  
  uVar7 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
  pbVar6 = (byte *)(param_2 + 0x10);
  uVar8 = 0;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  do {
    while( true ) {
      uVar8 = uVar8 >> 1;
      pbVar5 = pbVar6;
      if ((int)uVar8 == 0) {
        pbVar5 = pbVar6 + 1;
        in_w6 = (uint)*pbVar6;
        uVar8 = 0x80;
      }
      if ((in_w6 & (uint)uVar8) == 0) break;
      pbVar6 = pbVar5 + 1;
      uVar4 = uVar7 - 1;
      *param_1 = *pbVar5;
      bVar1 = (int)uVar7 < 1;
      param_1 = param_1 + 1;
      uVar7 = uVar4;
      if (uVar4 == 0 || bVar1) {
        return uVar4;
      }
    }
    bVar2 = *pbVar5;
    bVar3 = pbVar5[1];
    uVar4 = (uint)(bVar2 >> 4);
    iVar9 = uVar4 + 2;
    pbVar6 = pbVar5 + 2;
    if (uVar4 == 0) {
      pbVar6 = pbVar5 + 3;
      iVar9 = pbVar5[2] + 0x12;
    }
    uVar4 = uVar7 - iVar9;
    iVar10 = iVar9;
    do {
      iVar10 = iVar10 + -1;
      pbVar5 = param_1 + 1;
      *param_1 = param_1[(int)-((CONCAT11(bVar2,bVar3) & 0xfff) + 1)];
      param_1 = pbVar5;
    } while (iVar10 != 0);
    bVar1 = iVar9 <= (int)uVar7;
    uVar7 = uVar4;
  } while (uVar4 != 0 && bVar1);
  return uVar4;
}

