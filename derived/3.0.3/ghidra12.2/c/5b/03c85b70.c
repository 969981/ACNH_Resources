
void FUN_03c85b70(long *param_1,uint param_2,uint param_3,uint param_4,char param_5,int param_6,
                 uint param_7,int param_8,int param_9)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  byte local_78 [12];
  int local_6c;
  int local_68;
  int local_64;
  
  uVar9 = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_6c = param_9;
  uVar10 = param_2;
  local_68 = param_8;
  local_64 = param_6;
  do {
    pbVar3 = local_78 + uVar9;
    if (9 < uVar9) {
      pbVar3 = local_78;
    }
    uVar9 = uVar9 + 1;
    *pbVar3 = (char)uVar10 + (char)(uVar10 / 10) * -10;
    bVar1 = 9 < uVar10;
    uVar10 = uVar10 / 10;
  } while (bVar1);
  iVar4 = (int)param_5;
  uVar10 = (int)uVar9 - iVar4;
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  if (param_2 == 0) {
    uVar10 = 1;
  }
  if (local_68 != 0) {
    uVar12 = (param_4 & 0xff) - iVar4;
    if ((int)uVar12 <= (int)uVar10) {
      uVar12 = uVar10;
    }
    if ((local_68 == 1) && (uVar10 < uVar12)) {
      do {
        (**(code **)(*param_1 + 0x28))(param_1,0x20);
        uVar12 = uVar12 - 1;
      } while ((int)uVar10 < (int)uVar12);
    }
    else {
      uVar10 = uVar12;
    }
  }
  if (local_64 == 3) {
    uVar7 = 0x20;
LAB_03c85ca4:
    uVar6 = 0x2d;
    if ((param_3 & 1) == 0) {
      uVar6 = uVar7;
    }
  }
  else {
    if (local_64 == 2) {
      uVar7 = 0x2b;
      goto LAB_03c85ca4;
    }
    if ((local_64 != 1) || ((param_3 & 1) == 0)) goto LAB_03c85cbc;
    uVar6 = 0x2d;
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar6);
LAB_03c85cbc:
  if ((param_7 & 1) == 0) {
    bVar1 = false;
    sVar11 = 0;
  }
  else {
    sVar11 = 0x2c;
    bVar1 = true;
    switch(local_6c) {
    case 2:
    case 6:
    case 0xb:
    case 0xc:
      bVar1 = 4 < (int)uVar10;
      sVar11 = (ushort)bVar1 << 5;
      break;
    case 3:
    case 7:
    case 8:
      sVar11 = 0x20;
      break;
    case 4:
    case 10:
      sVar11 = 0x2e;
      break;
    case 9:
      bVar1 = 4 < (int)uVar10;
      sVar11 = 0x2e;
      if ((int)uVar10 < 5) {
        sVar11 = 0;
      }
    }
  }
LAB_03c85d64:
  uVar12 = uVar10 - 1;
  if (iVar4 + uVar12 < 10) {
    uVar8 = (uint)local_78[iVar4 + uVar12];
  }
  else {
    uVar8 = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1,uVar8 + 0x30);
  if (((int)uVar10 < 2) && ((int)uVar12 <= -iVar4)) {
    return;
  }
  uVar10 = uVar12;
  if (uVar12 != 0) goto code_r0x03c85db0;
  sVar5 = 0x2e;
  if (local_6c - 3U < 10) {
    sVar5 = *(short *)(&DAT_041e9298 + (long)(int)(local_6c - 3U) * 2);
  }
  goto LAB_03c85d50;
code_r0x03c85db0:
  bVar2 = false;
  if (uVar12 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
    bVar2 = bVar1;
  }
  sVar5 = sVar11;
  if (bVar2) {
LAB_03c85d50:
    (**(code **)(*param_1 + 0x28))(param_1,sVar5);
  }
  goto LAB_03c85d64;
}

