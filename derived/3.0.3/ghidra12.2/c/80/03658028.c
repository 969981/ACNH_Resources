
undefined8 FUN_03658028(uint *param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  bVar1 = *(byte *)(param_2 + 6);
  uVar8 = (uint)(bVar1 >> 4);
  bVar2 = *(byte *)(param_2 + 4);
  bVar3 = *(byte *)(param_2 + 5);
  if (*(char *)(param_2 + 0xf) == '\0') {
    uVar8 = uVar8 | *(byte *)(param_2 + 7) & 0xf0;
  }
  bVar4 = *(byte *)(param_2 + 8);
  uVar10 = (uint)bVar2 << 0xe | 0x10;
  uVar9 = (uint)bVar2 * 0x4000;
  if (bVar3 == 0) {
    uVar10 = 0x10;
  }
  uVar11 = bVar1 & 1 ^ 3;
  if ((bVar1 & 8) != 0) {
    uVar11 = 4;
  }
  param_1[9] = uVar11;
  if (param_3 < (uint)bVar3 * 0x2000 + uVar9) {
    return 0;
  }
  uVar7 = 0;
  switch(uVar8) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x42:
  case 0x46:
  case 0x4e:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5f:
  case 0x8c:
  case 0x98:
  case 0x99:
  case 0x9f:
  case 0xb8:
  case 0xb9:
  case 0xce:
    bVar5 = bVar3 != 0;
    *param_1 = (uint)bVar2;
    param_1[1] = (uint)bVar3;
    uVar11 = uVar9;
    if (bVar5) {
      uVar11 = (uint)bVar3 * 0x2000;
    }
    *(bool *)((long)param_1 + 0x29) = bVar5;
    uVar6 = 0x2000;
    if (bVar5 && uVar8 != 2) {
      uVar6 = 0;
    }
    param_1[6] = uVar6;
    uVar6 = 0x2000;
    if (uVar8 != 2) {
      uVar6 = uVar11;
    }
    param_1[4] = uVar9;
    param_1[5] = uVar6;
    *(byte *)(param_1 + 10) = bVar1 >> 1 & 1;
    param_1[2] = 0x10;
    param_1[3] = uVar10;
    param_1[7] = (uint)bVar4 << 0xd;
    param_1[8] = uVar8;
    uVar7 = 1;
  }
  return uVar7;
}

