
void FUN_03c4b1a0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  
  if (param_2 != 0) {
    pfVar5 = (float *)(**(code **)(*(long *)(param_1 + 0x30) + 0xf0))();
    if (0.0 <= *pfVar5) {
      *(float *)(param_2 + 0x20) = *pfVar5;
    }
    puVar4 = PTR_DAT_04bc3ee8;
    if (0 < *(int *)(param_1 + 0xd8)) {
      lVar9 = *(long *)(param_2 + 0x18);
      uVar1 = 0;
      if (*(long *)(lVar9 + 0x10) != 0) {
        uVar1 = *(uint *)(lVar9 + 8);
      }
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar10 < *(uint *)(param_1 + 0xb8)) {
            lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + uVar10 * 8);
            lVar6 = *(long *)(lVar9 + 0x10);
          }
          else {
            lVar8 = 0;
            lVar6 = *(long *)(lVar9 + 0x10);
          }
          if ((lVar6 != 0) && (uVar3 = *(uint *)(lVar9 + 8), uVar3 != 0)) {
            uVar2 = (uint)uVar10;
            if (-1 < (int)*(uint *)(lVar9 + 0x18)) {
              uVar2 = *(uint *)(lVar9 + 0x18);
            }
            if ((int)uVar3 <= (int)uVar2) {
              uVar2 = 0;
            }
            if ((uVar2 < uVar3) && (lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8), lVar6 != 0)) {
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x60) + 0xf0))();
              if (0.0 < *pfVar5) {
                lVar7 = *(long *)puVar4;
                *(float *)(lVar6 + 0x18) = *pfVar5;
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
                  FUN_03bc7350();
                }
              }
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x90) + 0xf0))();
              fVar11 = *pfVar5;
              if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
                *(float *)(lVar6 + 0x1c) = fVar11;
              }
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0xc0) + 0xf0))
                                          ((long *)(lVar8 + 0xc0));
              fVar11 = *pfVar5;
              if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
                *(float *)(lVar6 + 0x20) = fVar11;
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar10);
        if (*(int *)(param_1 + 0xd8) < 1) {
          return;
        }
      }
      lVar9 = *(long *)(param_2 + 0x10);
      uVar1 = 0;
      if (*(long *)(lVar9 + 0x10) != 0) {
        uVar1 = *(uint *)(lVar9 + 8);
      }
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar10 < *(uint *)(param_1 + 0xb8)) {
            lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + uVar10 * 8);
            lVar6 = *(long *)(lVar9 + 0x10);
          }
          else {
            lVar8 = 0;
            lVar6 = *(long *)(lVar9 + 0x10);
          }
          if ((lVar6 != 0) && (uVar3 = *(uint *)(lVar9 + 8), uVar3 != 0)) {
            uVar2 = (uint)uVar10;
            if (-1 < (int)*(uint *)(lVar9 + 0x18)) {
              uVar2 = *(uint *)(lVar9 + 0x18);
            }
            if ((int)uVar3 <= (int)uVar2) {
              uVar2 = 0;
            }
            if ((uVar2 < uVar3) && (lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8), lVar6 != 0)) {
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x60) + 0xf0))();
              if (0.0 < *pfVar5) {
                lVar7 = *(long *)puVar4;
                *(float *)(lVar6 + 0x18) = *pfVar5;
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) {
                  FUN_03bc7350();
                }
              }
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x90) + 0xf0))();
              fVar11 = *pfVar5;
              if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
                *(float *)(lVar6 + 0x1c) = fVar11;
              }
              pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0xc0) + 0xf0))
                                          ((long *)(lVar8 + 0xc0));
              fVar11 = *pfVar5;
              if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
                *(float *)(lVar6 + 0x20) = fVar11;
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar10);
      }
    }
  }
  return;
}

