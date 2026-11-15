
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_021abc98(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  uVar10 = nn::os::GetSystemTick();
  uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar15 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    iVar12 = 0;
    uVar11 = 0xffffffff;
    uVar13 = 0;
  }
  else {
    uVar1 = uVar10 ^ uVar10 * 0x800;
    iVar3 = *param_2;
    uVar13 = uVar5;
    uVar6 = uVar10;
    uVar7 = uVar15;
    uVar8 = uVar4;
    if (iVar3 == 0) {
      uVar13 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
      uVar6 = uVar15;
      uVar7 = uVar4;
      uVar8 = uVar5;
    }
    uVar14 = 0xffffffff;
    if (iVar3 == 0) {
      uVar14 = 0;
    }
    iVar12 = iVar3;
    if (iVar3 < 1) {
      iVar12 = 0;
      uVar10 = uVar6;
      uVar15 = uVar7;
      uVar4 = uVar8;
      uVar5 = uVar13;
    }
    uVar11 = 0;
    if (iVar3 < 1) {
      uVar11 = uVar14;
    }
    uVar13 = 1;
    if (iVar3 < 1) {
      uVar13 = (uint)(iVar3 == 0);
    }
  }
  uVar14 = uVar15;
  uVar9 = uVar4;
  uVar1 = uVar5;
  if ((uVar2 >> 1 & 1) != 0) {
    iVar3 = param_2[1];
    if (iVar12 < iVar3) {
      uVar11 = 1;
      uVar13 = 1;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar1 = uVar5 >> 0x13 ^ uVar10 >> 8 ^ uVar5 ^ uVar10;
      uVar10 = uVar15;
      uVar14 = uVar4;
      uVar9 = uVar5;
      if (((ulong)uVar1 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 1;
      }
    }
  }
  uVar15 = uVar1;
  if ((uVar2 >> 2 & 1) != 0) {
    iVar3 = param_2[2];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 2;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar15 = uVar1 >> 0x13 ^ uVar10 >> 8 ^ uVar1 ^ uVar10;
      uVar10 = uVar14;
      uVar14 = uVar9;
      uVar9 = uVar1;
      if (((ulong)uVar15 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 2;
      }
    }
  }
  uVar4 = uVar15;
  if ((uVar2 >> 3 & 1) != 0) {
    iVar3 = param_2[3];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 3;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar4 = uVar15 >> 0x13 ^ uVar10 >> 8 ^ uVar15 ^ uVar10;
      uVar10 = uVar14;
      uVar14 = uVar9;
      uVar9 = uVar15;
      if (((ulong)uVar4 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 3;
      }
    }
  }
  uVar15 = uVar4;
  if ((uVar2 >> 4 & 1) != 0) {
    iVar3 = param_2[4];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 4;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar15 = uVar4 >> 0x13 ^ uVar10 >> 8 ^ uVar4 ^ uVar10;
      uVar10 = uVar14;
      uVar14 = uVar9;
      uVar9 = uVar4;
      if (((ulong)uVar15 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 4;
      }
    }
  }
  uVar4 = uVar15;
  if ((uVar2 >> 5 & 1) != 0) {
    iVar3 = param_2[5];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 5;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar4 = uVar15 >> 0x13 ^ uVar10 >> 8 ^ uVar15 ^ uVar10;
      uVar10 = uVar14;
      uVar14 = uVar9;
      uVar9 = uVar15;
      if (((ulong)uVar4 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 5;
      }
    }
  }
  uVar15 = uVar4;
  uVar5 = uVar14;
  uVar1 = uVar9;
  if ((uVar2 >> 6 & 1) != 0) {
    iVar3 = param_2[6];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 6;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar15 = uVar4 >> 0x13 ^ uVar10 >> 8 ^ uVar4 ^ uVar10;
      uVar10 = uVar14;
      uVar5 = uVar9;
      uVar1 = uVar4;
      if (((ulong)uVar15 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 6;
      }
    }
  }
  if ((uVar2 >> 7 & 1) != 0) {
    iVar3 = param_2[7];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 7;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar15 = uVar15 >> 0x13 ^ uVar10 >> 8 ^ uVar15 ^ uVar10;
      uVar10 = uVar5;
      uVar5 = uVar1;
      if (((ulong)uVar15 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 7;
      }
    }
  }
  if ((uVar2 >> 8 & 1) != 0) {
    iVar3 = param_2[8];
    if (iVar12 < iVar3) {
      uVar13 = 1;
      uVar11 = 8;
      iVar12 = iVar3;
    }
    else if (iVar3 == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar13 = uVar13 + 1;
      uVar15 = uVar15 >> 0x13 ^ uVar10 >> 8 ^ uVar15 ^ uVar10;
      if (((ulong)uVar15 * (ulong)uVar13 & 0xffffffff00000000) == 0) {
        uVar11 = 8;
      }
      uVar10 = uVar5;
    }
  }
  if ((uVar2 >> 9 & 1) != 0) {
    if (iVar12 < param_2[9]) {
      return 9;
    }
    if (param_2[9] == iVar12) {
      uVar10 = uVar10 ^ uVar10 << 0xb;
      if (((ulong)(uVar15 >> 0x13 ^ uVar10 >> 8 ^ uVar15 ^ uVar10) * (ulong)(uVar13 + 1) &
          0xffffffff00000000) == 0) {
        uVar11 = 9;
      }
      return uVar11;
    }
  }
  return uVar11;
}

