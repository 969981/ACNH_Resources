
void FUN_011cc92c(long param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 local_68;
  float local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  switch(*(undefined4 *)(param_1 + 0xfc)) {
  case 0:
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x108);
    if ((uVar4 >> 0x18 & 1) != 0) {
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd4));
LAB_011ccafc:
      fVar9 = sinf(fVar8 * 1.4629181e-09);
      fVar8 = cosf(fVar8 * 1.4629181e-09);
      fVar10 = fVar9 * 0.0;
      *(float *)(param_1 + 0x28) = -fVar9;
      *(float *)(param_1 + 0x2c) = fVar8 * 0.0;
      *(float *)(param_1 + 8) = fVar8;
      *(float *)(param_1 + 0xc) = fVar10;
      *(float *)(param_1 + 0x20) = fVar10;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
      *(float *)(param_1 + 0x10) = fVar9 + 0.0;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xb8);
      *(float *)(param_1 + 0x18) = fVar8 * 0.0;
      *(float *)(param_1 + 0x1c) = fVar10 * 0.0 + 1.0;
      *(float *)(param_1 + 0x30) = fVar8;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc0);
      return;
    }
    if (*(int *)(param_1 + 0x100) != 0x11) {
      if (((uVar4 >> 0xc & 1) != 0) && (*(char *)(param_1 + 0x119) != -1)) {
        if (*(char *)(param_1 + 0x119) == '\0') {
          local_5c = (undefined1 *)0x3db2b8c23db2b8c2;
          local_54 = 0x3db2b8c2;
        }
        else {
          local_5c = (undefined1 *)0x4011361ec0060a92;
          local_54 = 0xbfea927f;
        }
        local_48 = 0x3f800000;
        local_50 = &DAT_3f8000003f800000;
        FUN_011ccd04(param_1 + 8,&local_50,&local_5c,param_1 + 0xb8);
        return;
      }
      if (*(uint *)(param_1 + 0xd0) != 0) {
        fVar8 = (float)*(uint *)(param_1 + 0xd0);
        goto LAB_011ccafc;
      }
      uVar3 = *(uint *)(param_1 + 0xd4);
      if (uVar3 != 0) {
        if ((uVar4 >> 8 & 1) == 0) {
          iVar5 = (int)((float)(int)-uVar3 * 0.1);
          iVar7 = 0x7fffffff;
          if (iVar5 < 1) {
            iVar7 = 0;
          }
          iVar6 = 0;
          if (iVar5 < 1) {
            iVar6 = -0x7fffffff;
          }
          iVar2 = iVar5;
          if (iVar7 <= iVar5) {
            iVar2 = iVar7;
          }
          if (iVar6 <= iVar5) {
            iVar6 = iVar2;
          }
          uVar3 = iVar6 + uVar3;
          *(uint *)(param_1 + 0xd4) = uVar3;
        }
        local_68 = 0;
        pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar3 >> 0x18) * 0x10);
        local_5c = &DAT_3f8000003f800000;
        local_54 = 0x3f800000;
        local_50._0_4_ = (float)*(undefined8 *)(param_1 + 0xb8);
        local_50._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
        local_48 = *(undefined4 *)(param_1 + 0xc0);
        local_50 = (undefined1 *)
                   CONCAT44(local_50._4_4_ +
                            (1.0 - (pfVar1[2] +
                                   pfVar1[3] * (float)(uVar3 & 0xffffff) * 5.9604645e-08)) * 3.75,
                            (float)local_50 +
                            (*pfVar1 + pfVar1[1] * (float)(uVar3 & 0xffffff) * 5.9604645e-08) * 3.75
                           );
        local_60 = (float)uVar3 * 1.4629181e-09;
        FUN_011ccd04(param_1 + 8,&local_5c,&local_68,&local_50);
        return;
      }
    }
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 8) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x18) = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xb8);
    uVar12 = *(undefined4 *)(param_1 + 0xc0);
    break;
  case 2:
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd0));
    fVar9 = sinf(fVar8 * 1.4629181e-09);
    fVar8 = cosf(fVar8 * 1.4629181e-09);
    *(float *)(param_1 + 8) = fVar8;
    *(float *)(param_1 + 0x30) = fVar8;
    fVar10 = fVar9 * 0.0;
    *(float *)(param_1 + 0x28) = -fVar9;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xb8);
    *(float *)(param_1 + 0x18) = fVar8 * 0.0;
    *(float *)(param_1 + 0x2c) = fVar8 * 0.0;
    uVar12 = *(undefined4 *)(param_1 + 0xc0);
    *(float *)(param_1 + 0xc) = fVar10;
    *(float *)(param_1 + 0x20) = fVar10;
    *(float *)(param_1 + 0x10) = fVar9 + 0.0;
    *(float *)(param_1 + 0x1c) = fVar10 * 0.0 + 1.0;
    break;
  case 3:
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd0));
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd8));
    fVar10 = sinf(fVar8 * 1.4629181e-09);
    fVar11 = sinf(fVar9 * 1.4629181e-09);
    fVar8 = cosf(fVar8 * 1.4629181e-09);
    fVar9 = cosf(fVar9 * 1.4629181e-09);
    *(float *)(param_1 + 0x30) = fVar8;
    *(float *)(param_1 + 0x28) = -fVar10;
    *(float *)(param_1 + 0x2c) = fVar8 * 0.0;
    *(float *)(param_1 + 0x10) = fVar11 * 0.0 + fVar10 * fVar9;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xb8);
    *(float *)(param_1 + 0x20) = fVar9 * -0.0 + fVar10 * fVar11;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
    *(float *)(param_1 + 8) = fVar8 * fVar9;
    *(float *)(param_1 + 0xc) = fVar10 * 0.0 * fVar9 - fVar11;
    uVar12 = *(undefined4 *)(param_1 + 0xc0);
    *(float *)(param_1 + 0x18) = fVar11 * fVar8;
    *(float *)(param_1 + 0x1c) = fVar9 + fVar11 * fVar10 * 0.0;
    break;
  default:
    goto switchD_011cc968_default;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar12;
switchD_011cc968_default:
  return;
}

