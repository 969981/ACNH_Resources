
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_013dd3a4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((0 < *(int *)(param_1 + 0xa8)) && (-1 < (int)(param_3 | param_2))) &&
     ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    if (param_2 < *(uint *)(param_1 + 0x88)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
      if ((int)param_3 < *(int *)(lVar5 + 0x1f8)) {
LAB_013dd408:
        if (param_3 < *(uint *)(lVar5 + 0x1d8)) {
          lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (ulong)param_3 * 8);
        }
        else {
          lVar5 = 0;
        }
        pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x158) + 0xf0))(lVar5 + 0x158);
        fVar10 = *pfVar4;
        if (fVar10 <= 0.0) {
          return 0.0;
        }
        nn::os::GetSystemTick();
        uVar3 = nn::os::GetSystemTick();
        uVar6 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
        uVar3 = uVar6 ^ uVar6 * 0x800;
        uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
        uVar1 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
        uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
        uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
        fVar7 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
        fVar9 = 1.0 - fVar7;
        if (fVar9 <= 0.0) {
          fVar8 = 0.0;
        }
        else {
          uVar6 = uVar6 ^ uVar6 * 0x800;
          uVar3 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
          fVar8 = fVar9 * ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) + 0.0;
          uVar6 = uVar1;
        }
        fVar9 = fVar9 - fVar8;
        if (fVar9 < 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
        if (fVar9 <= 0.0) {
          return fVar7;
        }
        uVar6 = uVar6 ^ uVar6 << 0xb;
        return fVar7 * ((fVar10 * ((float)((uVar3 >> 0x13 ^ uVar6 >> 8 ^ uVar3 ^ uVar6) >> 9 |
                                          0x3f800000) + -1.0) + 0.0) / fVar9);
      }
    }
    else if ((int)param_3 < _DAT_000001f8) {
      lVar5 = 0;
      goto LAB_013dd408;
    }
  }
  return 0.0;
}

