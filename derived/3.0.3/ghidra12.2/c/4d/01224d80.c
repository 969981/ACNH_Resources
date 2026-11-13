
float FUN_01224d80(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar7 = *(uint *)(param_1 + 0x87e4);
  if (uVar7 == 0) {
    FUN_01224a98();
    uVar7 = *(uint *)(param_1 + 0x87e4);
  }
  puVar3 = PTR_DAT_04bb30a0;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar8 = 0;
    puVar10 = DAT_055c1b60;
    do {
      if (*(int *)(puVar10 + -1) == -0x17df00c3) goto LAB_01224e04;
      puVar10 = (undefined8 *)puVar10[1];
      sVar8 = sVar8 + 1;
    } while (puVar10 != &DAT_055c1b58);
  }
  sVar8 = -1;
LAB_01224e04:
  if (*(short *)PTR_DAT_04bb6298 == sVar8) {
    uVar13 = 0xe77eb24f;
    uVar11 = 0xfffffff9;
  }
  else {
    uVar11 = 0x62beb57f;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
      uVar11 = *(uint *)(param_1 + 0x87e8);
    }
    uVar13 = 0xd85ae254;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
      uVar13 = uVar7;
    }
  }
  fVar19 = *(float *)(param_1 + 0x87ec);
  if ((fVar19 == 0.0) ||
     ((((iVar2 = *(int *)(param_2 + 8), *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3 &&
        (lVar6 = *(long *)PTR_DAT_04bb59d8, *(int *)(lVar6 + 0x28) <= iVar2)) &&
       (iVar2 + 1 <= *(int *)(lVar6 + 0x38))) &&
      ((*(int *)(lVar6 + 0x2c) <= *(int *)(param_2 + 0xc) &&
       (*(int *)(param_2 + 0xc) + 1 <= *(int *)(lVar6 + 0x3c))))))) {
    uVar5 = FUN_00a8c31c(*(undefined8 *)PTR_DAT_04bb30a0);
    iVar2 = *(int *)(*(long *)puVar3 + 0x65204);
    iVar4 = FUN_00a82f40(uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    fVar19 = (float)(iVar4 + -1) / 365.0;
    if (iVar2 != 1) {
      return fVar19;
    }
    fVar17 = 0.5;
    if (0.5 <= fVar19) {
      fVar17 = -0.5;
    }
    return fVar19 + fVar17;
  }
  iVar4 = iVar2 % 5;
  if (iVar4 < 0) {
    uVar7 = 0;
  }
  else {
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = uVar13 ^ uVar13 * 0x800;
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
    uVar12 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4;
    uVar9 = uVar12 >> 0x13 ^ uVar7 >> 8 ^ uVar12 ^ uVar7;
    if (iVar4 == 0) {
      uVar7 = uVar9;
    }
    else {
      uVar13 = uVar13 ^ uVar13 * 0x800;
      uVar13 = uVar9 >> 0x13 ^ uVar13 >> 8 ^ uVar9 ^ uVar13;
      uVar7 = uVar13;
      if (iVar4 != 1) {
        uVar15 = uVar15 ^ uVar15 * 0x800;
        uVar15 = uVar13 >> 0x13 ^ uVar15 >> 8 ^ uVar13 ^ uVar15;
        uVar7 = uVar15;
        if (iVar4 != 2) {
          uVar12 = uVar12 ^ uVar12 * 0x800;
          uVar12 = uVar15 >> 0x13 ^ uVar12 >> 8 ^ uVar15 ^ uVar12;
          uVar7 = uVar12;
          if (iVar4 != 3) {
            uVar9 = uVar9 ^ uVar9 << 0xb;
            uVar7 = uVar12 >> 0x13 ^ uVar9 >> 8 ^ uVar12 ^ uVar9;
            if (iVar4 != 4) {
              uVar13 = uVar13 ^ uVar13 << 0xb;
              uVar15 = uVar15 ^ uVar15 << 0xb;
              uVar7 = uVar7 >> 0x13 ^ uVar13 >> 8 ^ uVar7 ^ uVar13;
              uVar12 = uVar12 ^ uVar12 << 0xb;
              uVar7 = uVar7 >> 0x13 ^ uVar15 >> 8 ^ uVar7 ^ uVar15;
              uVar7 = uVar7 >> 0x13 ^ uVar12 >> 8 ^ uVar7 ^ uVar12;
            }
          }
        }
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0xc) % 3;
  if (-1 < iVar4) {
    uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    uVar11 = uVar13 ^ uVar13 * 0x800;
    uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar12 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
    uVar13 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
    uVar13 = uVar13 >> 0x13 ^ uVar11 >> 8 ^ uVar13 ^ uVar11;
    uVar11 = uVar13;
    if (iVar4 != 0) {
      uVar11 = 0;
    }
    uVar7 = uVar11 + uVar7;
    if (iVar4 != 0) {
      uVar15 = uVar15 ^ uVar15 * 0x800;
      uVar13 = uVar13 >> 0x13 ^ uVar15 >> 8 ^ uVar13 ^ uVar15;
      uVar11 = uVar13;
      if (iVar4 != 1) {
        uVar11 = 0;
      }
      uVar7 = uVar11 + uVar7;
      if (iVar4 != 1) {
        uVar12 = uVar12 ^ uVar12 * 0x800;
        uVar11 = uVar13 >> 0x13 ^ uVar12 >> 8 ^ uVar13 ^ uVar12;
        if (iVar4 != 2) {
          uVar11 = 0;
        }
        uVar7 = uVar11 + uVar7;
      }
    }
  }
  uVar12 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  uVar15 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
  iVar2 = (*(int *)(param_2 + 0xc) + iVar2) % 7;
  uVar13 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
  uVar11 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
  if (iVar2 < 0) {
    uVar9 = uVar11;
    uVar15 = uVar12;
    goto LAB_012252dc;
  }
  uVar12 = uVar12 ^ uVar12 * 0x800;
  uVar9 = uVar11 >> 0x13 ^ uVar12 >> 8 ^ uVar11 ^ uVar12;
  uVar12 = uVar9;
  if (iVar2 != 0) {
    uVar12 = 0;
  }
  uVar12 = uVar12 + uVar7;
  if (iVar2 != 0) {
    uVar15 = uVar15 ^ uVar15 * 0x800;
    uVar14 = uVar9 >> 0x13 ^ uVar15 >> 8 ^ uVar9 ^ uVar15;
    uVar7 = uVar14;
    if (iVar2 != 1) {
      uVar7 = 0;
    }
    uVar12 = uVar7 + uVar12;
    if (iVar2 != 1) {
      uVar13 = uVar13 ^ uVar13 * 0x800;
      uVar13 = uVar14 >> 0x13 ^ uVar13 >> 8 ^ uVar14 ^ uVar13;
      uVar7 = uVar13;
      if (iVar2 != 2) {
        uVar7 = 0;
      }
      uVar12 = uVar7 + uVar12;
      if (iVar2 != 2) {
        uVar11 = uVar11 ^ uVar11 * 0x800;
        uVar11 = uVar13 >> 0x13 ^ uVar11 >> 8 ^ uVar13 ^ uVar11;
        uVar7 = uVar11;
        if (iVar2 != 3) {
          uVar7 = 0;
        }
        uVar12 = uVar7 + uVar12;
        if (iVar2 != 3) {
          uVar9 = uVar9 ^ uVar9 << 0xb;
          uVar1 = uVar11 >> 0x13 ^ uVar9 >> 8 ^ uVar11 ^ uVar9;
          uVar7 = uVar1;
          if (iVar2 != 4) {
            uVar7 = 0;
          }
          uVar12 = uVar7 + uVar12;
          if (iVar2 != 4) {
            uVar14 = uVar14 ^ uVar14 << 0xb;
            uVar14 = uVar1 >> 0x13 ^ uVar14 >> 8 ^ uVar1 ^ uVar14;
            uVar7 = uVar14;
            if (iVar2 != 5) {
              uVar7 = 0;
            }
            uVar12 = uVar7 + uVar12;
            if (iVar2 == 5) goto LAB_012251a4;
            uVar13 = uVar13 ^ uVar13 << 0xb;
            uVar9 = uVar14 >> 0x13 ^ uVar13 >> 8 ^ uVar14 ^ uVar13;
            uVar7 = uVar9;
            if (iVar2 != 6) {
              uVar7 = 0;
            }
            uVar12 = uVar7 + uVar12;
            if (iVar2 != 6) {
              uVar11 = uVar11 ^ uVar11 << 0xb;
              uVar9 = uVar9 >> 0x13 ^ uVar11 >> 8 ^ uVar9 ^ uVar11;
              uVar15 = uVar1;
            }
            else {
              uVar15 = uVar11;
            }
          }
          else {
            uVar15 = uVar14;
            uVar9 = uVar1;
          }
        }
        else {
          uVar15 = uVar9;
          uVar9 = uVar11;
        }
      }
      else {
        uVar15 = uVar11;
        uVar9 = uVar13;
      }
    }
    else {
LAB_012251a4:
      uVar15 = uVar13;
      uVar9 = uVar14;
    }
  }
  uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  uVar7 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  uVar11 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
LAB_012252dc:
  uVar15 = uVar15 ^ uVar15 << 0xb;
  uVar12 = uVar12 ^ uVar12 << 0xb;
  fVar16 = ((float)((uVar9 >> 0x13 ^ uVar15 >> 8 ^ uVar9 ^ uVar15) >> 9 | 0x3f800000) + -1.0) * 14.0
           * 0.5;
  fVar17 = -(fVar16 * 0.002739726);
  if (0.5 <= (float)((uVar12 >> 8 ^ uVar11 >> 0x13 ^ uVar12 ^ uVar11) >> 9 | 0x3f800000) + -1.0) {
    fVar17 = fVar16 * 0.002739726;
  }
  uVar5 = FUN_00a8c31c(*(undefined8 *)PTR_DAT_04bb30a0);
  iVar2 = *(int *)(*(long *)puVar3 + 0x65204);
  iVar4 = FUN_00a82f40(uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
  fVar16 = (float)(iVar4 + -1) / 365.0;
  fVar18 = fVar16 + 0.5;
  if (0.5 <= fVar16) {
    fVar18 = fVar16 + -0.5;
  }
  if (iVar2 == 1) {
    fVar16 = fVar18;
  }
  return fVar16 + fVar19 * fVar17;
}

