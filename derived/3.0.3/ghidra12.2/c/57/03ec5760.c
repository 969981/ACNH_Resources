
void FUN_03ec5760(long param_1,long *param_2)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float __x;
  float __x_00;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        uVar7 = uVar6;
        if (*(uint *)(param_1 + 8) <= uVar6) {
          uVar7 = 0;
        }
        uVar5 = (**(code **)(*param_2 + 0x60))(param_2,uVar6);
        if (0 < (int)uVar5) {
          puVar1 = (uint *)(lVar8 + (ulong)uVar7 * 0x10);
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            if (*puVar1 <= uVar7) {
              uVar3 = 0;
            }
            puVar9 = (undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x28);
            (**(code **)(*param_2 + 0x78))(param_2,&local_a0,puVar9 + 7,uVar6,uVar7);
            *puVar9 = local_94;
            puVar9[1] = local_84;
            puVar9[2] = local_74;
            pfVar2 = (float *)(puVar9 + 3);
            __x = (local_a0 + local_8c + local_78 + 1.0) * 0.25;
            __x_00 = __x + (local_8c + local_78) * -0.5;
            fVar11 = __x + (local_a0 + local_78) * -0.5;
            fVar10 = __x + (local_a0 + local_8c) * -0.5;
            if (__x <= __x_00) {
              if (__x_00 <= fVar11) goto code_r0x03ec5974;
              if (__x_00 <= fVar10) goto LAB_03ec59d0;
              fVar10 = SQRT(__x_00);
              if (NAN(fVar10)) {
                fVar10 = sqrtf(__x_00);
              }
              *pfVar2 = fVar10;
              fVar10 = 0.25 / fVar10;
              puVar9[6] = fVar10 * (local_7c - local_88);
              puVar9[4] = fVar10 * (local_9c + local_90);
              fVar11 = local_98 + local_80;
LAB_03ec5860:
              puVar9[5] = fVar10 * fVar11;
            }
            else {
              if (__x <= fVar11) {
code_r0x03ec5974:
                if (fVar10 < fVar11) {
                  fVar10 = SQRT(fVar11);
                  if (NAN(fVar10)) {
                    fVar10 = sqrtf(fVar11);
                  }
                  puVar9[4] = fVar10;
                  fVar10 = 0.25 / fVar10;
                  puVar9[6] = fVar10 * (local_98 - local_80);
                  puVar9[5] = fVar10 * (local_88 + local_7c);
                  *pfVar2 = fVar10 * (local_90 + local_9c);
                  goto LAB_03ec5868;
                }
              }
              else if (fVar10 < __x) {
                fVar10 = SQRT(__x);
                if (NAN(fVar10)) {
                  fVar10 = sqrtf(__x);
                }
                puVar9[6] = fVar10;
                fVar10 = 0.25 / fVar10;
                *pfVar2 = fVar10 * (local_7c - local_88);
                puVar9[4] = fVar10 * (local_98 - local_80);
                fVar11 = local_90 - local_9c;
                goto LAB_03ec5860;
              }
LAB_03ec59d0:
              fVar11 = SQRT(fVar10);
              if (NAN(fVar11)) {
                fVar11 = sqrtf(fVar10);
              }
              fVar10 = 0.25 / fVar11;
              puVar9[5] = fVar11;
              puVar9[6] = fVar10 * (local_90 - local_9c);
              *pfVar2 = fVar10 * (local_80 + local_98);
              puVar9[4] = fVar10 * (local_7c + local_88);
            }
LAB_03ec5868:
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}

