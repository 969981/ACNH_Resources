
void FUN_03b981f0(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  **(undefined4 **)(param_1 + 0x18) = 0;
  puVar6 = *(uint **)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = *puVar6;
  if ((int)(uVar3 * 4) < (int)uVar1) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    uVar3 = (int)uVar1 >> 2;
    *puVar6 = uVar3;
    puVar6[1] = 1;
    if (0xb < (int)uVar1) {
      uVar2 = uVar3 >> 1;
      *puVar5 = 0x3f800000;
      fVar12 = 0.7853982 / (float)uVar2;
      fVar10 = cosf(fVar12 * (float)uVar2);
      *(float *)((long)puVar5 + (ulong)uVar2 * 4) = fVar10;
      *(float *)((long)puVar5 + (ulong)(uVar2 + 1) * 4) = fVar10;
      if (0x17 < uVar1) {
        pfVar8 = (float *)((long)puVar5 + 0xc);
        uVar9 = 2;
        pfVar7 = (float *)((long)puVar5 + (ulong)uVar3 * 4 + -4);
        do {
          fVar11 = fVar12 * (float)(int)uVar9;
          fVar10 = cosf(fVar11);
          fVar11 = sinf(fVar11);
          uVar9 = uVar9 + 2;
          pfVar8[-1] = fVar10;
          *pfVar8 = fVar11;
          pfVar8 = pfVar8 + 2;
          pfVar7[-1] = fVar11;
          *pfVar7 = fVar10;
          pfVar7 = pfVar7 + -2;
        } while (uVar9 < uVar2);
        FUN_03b989b0(uVar3,puVar6 + 2,puVar5);
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (*(int *)(*(long *)(param_1 + 0x18) + (ulong)(1 < *(uint *)(param_1 + 0x10)) * 4) * 4 <
      (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar2 = (int)uVar1 >> 2;
    *(uint *)(*(long *)(param_1 + 0x18) + 4) = uVar2;
    if (7 < (int)uVar1) {
      pfVar8 = (float *)(lVar4 + (long)(int)uVar3 * 4);
      uVar3 = uVar2 >> 1;
      fVar12 = 0.7853982 / (float)uVar3;
      fVar10 = cosf(fVar12 * (float)uVar3);
      *pfVar8 = fVar10;
      pfVar8[uVar3] = fVar10 * 0.5;
      if (0xf < uVar1) {
        uVar9 = 1;
        if (uVar3 < 3) {
          uVar3 = 2;
        }
        lVar4 = (ulong)uVar2 * 4;
        do {
          lVar4 = lVar4 + -4;
          fVar11 = fVar12 * (float)(int)uVar9;
          fVar10 = cosf(fVar11);
          pfVar8[uVar9] = fVar10 * 0.5;
          fVar10 = sinf(fVar11);
          uVar9 = uVar9 + 1;
          *(float *)((long)pfVar8 + lVar4) = fVar10 * 0.5;
        } while (uVar3 != uVar9);
      }
    }
  }
  return;
}

