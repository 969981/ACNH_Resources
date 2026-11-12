
float FUN_00a8f088(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  ulong uVar7;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return 0.0;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x651e4);
  uVar7 = (long)(char)bVar3 & 0xffffffff;
  if (0x17 < bVar3) {
    uVar7 = 0;
  }
  uVar2 = *(uint *)((byte *)(param_1 + 0x651e4) + uVar7 * 4 + 0xe8);
  if (4 < uVar2) {
    uVar2 = 0;
  }
  if (3 < uVar2 - 1) {
    return 0.0;
  }
  uVar4 = (uint)(char)*(byte *)(param_1 + 0x651e5);
  iVar5 = (int)*(char *)(param_1 + 0x651e6);
  switch(uVar2) {
  case 1:
    if (4 < (int)uVar4) {
      return 1.0;
    }
    break;
  case 2:
    return 1.0;
  case 3:
    if ((int)uVar4 < 0x2d) {
      return 1.0;
    }
    iVar5 = (uint)*(byte *)(param_1 + 0x651e5) * -0x3c - iVar5;
LAB_00a8f1b4:
    iVar5 = iVar5 + 0xe10;
    fVar6 = 900.0;
    goto LAB_00a8f1c0;
  case 4:
    if (4 < (int)uVar4) {
      if (uVar4 < 0x2d) {
        return 1.0;
      }
      iVar5 = uVar4 * -0x3c - iVar5;
      goto LAB_00a8f1b4;
    }
  }
  iVar5 = iVar5 + uVar4 * 0x3c;
  fVar6 = 300.0;
LAB_00a8f1c0:
  return (float)iVar5 / fVar6;
}

