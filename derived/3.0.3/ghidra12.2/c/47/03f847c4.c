
undefined8 FUN_03f847c4(byte *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  
  bVar2 = param_2[0x25];
  bVar9 = bVar2 & 0x1f | 0x20;
  if (5 < (bVar2 & 0xe)) {
    return 0x52;
  }
  bVar3 = param_2[0x27];
  uVar8 = 0x52;
  if (bVar3 - 0xe < 0xfffffff9) {
    return 0x52;
  }
  if (param_3 < (uint)(0x200 << (ulong)(bVar3 & 0x1f))) {
    return 0x52;
  }
  if ((uint)(0x400 << (ulong)(bVar3 & 0x1f)) < param_3) {
    return 0x52;
  }
  bVar4 = param_2[0x29];
  if (0x14 < bVar4) {
    return 0x52;
  }
  bVar5 = param_2[0x26];
  bVar10 = param_2[0x28];
  uVar6 = *(ushort *)(param_2 + 0x2c);
  uVar7 = *(ushort *)(param_2 + 0x2e);
  if (bVar5 < 3) {
    bVar1 = 0x20;
    if ((bVar2 & 0x1e) != 2) {
      bVar1 = bVar9;
    }
    bVar9 = 0x30;
    if ((bVar1 & 0x3e) != 0x32) {
      bVar9 = bVar1;
    }
    goto LAB_03f848bc;
  }
  switch((bVar5 & 0xf0) + 0x10 >> 4 & 0xf) {
  case 0:
    if (param_2[0xf] != '\x10') {
      return 0x52;
    }
    param_1[0x3e] = 1;
    break;
  case 1:
    if (bVar5 == 3) {
      if (bVar9 == 0x30) {
        return 0x52;
      }
LAB_03f849ac:
      param_1[0x39] = 1;
    }
    else if (bVar5 == 5) {
      if (bVar9 != 0x20) {
        if ((bVar9 == 0x30) && (param_2[0x2a] == -0x4e)) {
          return 0x52;
        }
        goto LAB_03f849ac;
      }
      param_1[0x3a] = 1;
      bVar9 = 0x20;
    }
    break;
  case 2:
    param_1[0x3b] = 1;
    bVar10 = 5;
    if (0xfffffffd < (byte)param_2[0xd] - 7) {
      bVar10 = param_2[0xd];
    }
    goto LAB_03f848c4;
  default:
    goto switchD_03f84880_caseD_3;
  case 4:
    param_1[0x3c] = 1;
    if ((bVar2 & 0x10) != 0) {
      return 0x52;
    }
    break;
  case 5:
    param_1[0x3d] = 1;
  }
LAB_03f848bc:
  if (bVar10 < 8) {
LAB_03f848c4:
    param_1[1] = bVar9;
    param_1[2] = bVar5;
    *param_1 = bVar10;
    param_1[4] = bVar4;
    param_1[3] = bVar3;
    *(uint *)(param_1 + 8) = (uint)uVar7;
    *(uint *)(param_1 + 0xc) = (uint)uVar6;
    strncpy((char *)(param_1 + 0x10),param_2 + 2,4);
    param_1[0x14] = 0;
    strncpy((char *)(param_1 + 0x18),param_2 + 0x10,0x15);
    param_1[0x2d] = 0;
    if (param_2[0x2a] == '3') {
      strncpy((char *)(param_1 + 0x15),param_2,2);
    }
    else {
      snprintf((char *)(param_1 + 0x15),3,"%02X");
    }
    uVar8 = 0;
    param_1[0x17] = 0;
  }
switchD_03f84880_caseD_3:
  return uVar8;
}

