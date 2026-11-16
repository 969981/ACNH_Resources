
undefined4 FUN_026e8284(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  
  uVar4 = FUN_026e9ac0();
  uVar5 = FUN_026e9ac0(param_1 + 0x11f8);
  uVar6 = FUN_026e9ac0(param_1 + 0x23f0);
  uVar7 = FUN_026e9ac0(param_1 + 0x35e8);
  uVar8 = FUN_026e9ac0(param_1 + 0x47e0);
  uVar9 = FUN_026e9ac0(param_1 + 23000);
  uVar10 = FUN_026e9ac0(param_1 + 0x6bd0);
  uVar11 = FUN_026e9ac0(param_1 + 0x7dc8);
  uVar2 = param_2[3];
  uVar1 = *param_2 ^ *param_2 << 0xb;
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  param_2[2] = uVar2;
  param_2[3] = uVar1;
  uVar12 = FUN_026e9ac0(param_1);
  iVar15 = (int)(((uVar5 & 1) + (uVar4 & 1) + (uVar6 & 1) + (uVar7 & 1) +
                  (uVar8 & 1) + (uVar9 & 1) + (uVar10 & 1) + (uVar11 & 1)) * (ulong)uVar1 >> 0x20);
  if ((uVar12 & 1) == 0) {
    iVar14 = 0;
  }
  else {
    if (iVar15 == 0) {
      return 0;
    }
    iVar14 = 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 0x11f8);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 1;
    }
    iVar14 = iVar14 + 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 0x23f0);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 2;
    }
    iVar14 = iVar14 + 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 0x35e8);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 3;
    }
    iVar14 = iVar14 + 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 0x47e0);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 4;
    }
    iVar14 = iVar14 + 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 23000);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 5;
    }
    iVar14 = iVar14 + 1;
  }
  uVar4 = FUN_026e9ac0(param_1 + 0x6bd0);
  if ((uVar4 & 1) != 0) {
    if (iVar14 == iVar15) {
      return 6;
    }
    iVar14 = iVar14 + 1;
  }
  bVar3 = FUN_026e9ac0(param_1 + 0x7dc8);
  uVar13 = 7;
  if ((bVar3 & iVar14 == iVar15) == 0) {
    uVar13 = 0xffffffff;
  }
  return uVar13;
}

