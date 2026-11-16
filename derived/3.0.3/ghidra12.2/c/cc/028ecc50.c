
ulong FUN_028ecc50(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 local_74 [4];
  
  puVar2 = PTR_DAT_04bb39d8;
  puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  fVar12 = -3.4028235e+38;
  uVar10 = 0;
  uVar7 = 0;
  do {
    uVar6 = (ulong)uVar7;
    if (0x22 < uVar7) {
      uVar6 = 0;
    }
    uVar9 = *(uint *)(param_2 + uVar6 * 4);
    uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    if ((uVar9 + (uVar9 >> 0x10) & 0x3f) != 0) {
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      uVar9 = *puVar4 ^ *puVar4 << 0xb;
      uVar5 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar9 = uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5;
      puVar4[2] = uVar5;
      puVar4[3] = uVar9;
      uVar6 = (ulong)uVar7;
      if (0x22 < uVar7) {
        uVar6 = 0;
      }
      fVar11 = *(float *)(param_1 + uVar6 * 4) + (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      if (fVar12 < fVar11) {
        fVar12 = fVar11;
        uVar10 = uVar7;
      }
    }
    uVar9 = 0x23;
    if ((int)uVar7 < 0x23) {
      uVar9 = uVar7 + 1;
    }
    uVar7 = uVar9;
  } while (uVar9 != 0x23);
  uVar6 = (ulong)uVar10;
  if (0x22 < uVar10) {
    uVar6 = 0;
  }
  uVar7 = *(uint *)(param_2 + uVar6 * 4);
  uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar7 = uVar7 + (uVar7 >> 0x10) & 0x3f;
  if (uVar7 == 0) {
    local_74[2] = DAT_053e6f44._2_1_;
    local_74._0_2_ = (undefined2)DAT_053e6f44;
  }
  else {
    uVar6 = (ulong)uVar10;
    if (0x22 < uVar10) {
      uVar6 = 0;
    }
    uVar9 = *puVar3 ^ *puVar3 << 0xb;
    uVar5 = puVar3[3];
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5;
    puVar3[2] = uVar5;
    puVar3[3] = uVar1;
    uVar5 = *(uint *)(param_2 + uVar6 * 4);
    uVar9 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    uVar7 = (uint)((ulong)uVar1 * (ulong)uVar7 >> 0x20);
    if ((uVar7 < (uVar9 + (uVar9 >> 0x10) & 0x3f)) && (uVar5 != 0)) {
      iVar8 = uVar7 + 2;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 2) {
          uVar6 = (ulong)uVar10;
          uVar7 = uVar5 - 1 & (uVar5 ^ 0xffffffff);
          uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
          uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
          uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
          uVar7 = uVar7 + (uVar7 >> 8);
          uVar7 = uVar7 + (uVar7 >> 0x10);
          uVar9 = uVar7 & 0x3f;
          if (uVar9 < 0x20) {
            if (0x22 < uVar10) {
              uVar6 = 0;
            }
            *(uint *)(param_2 + uVar6 * 4) =
                 *(uint *)(param_2 + uVar6 * 4) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
          goto LAB_028ece50;
        }
        uVar5 = uVar5 - 1 & uVar5;
      } while (uVar5 != 0);
    }
    uVar9 = 0xffffffff;
LAB_028ece50:
    local_74._0_3_ = 0x80023;
    FUN_020fd218(local_74,uVar10,uVar9);
    uVar6 = (ulong)uVar10;
    if (0x22 < uVar10) {
      uVar6 = 0;
    }
    *(float *)(param_1 + uVar6 * 4) = *(float *)(param_1 + uVar6 * 4) + -1.0;
  }
  return (ulong)(uint3)local_74._0_3_;
}

