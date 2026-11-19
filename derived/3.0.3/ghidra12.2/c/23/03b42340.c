
void FUN_03b42340(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) * *(float *)(param_3 + 8);
  fVar12 = *(float *)(param_3 + 0xc);
  fVar11 = *(float *)(param_2 + 0xc);
  if (0.0 <= fVar12) {
    if (0.0 <= fVar11) {
      fVar11 = fVar12 * fVar11;
    }
    else {
      fVar11 = fVar12;
    }
  }
  *(float *)(param_1 + 0xc) = fVar11;
  fVar12 = *(float *)(param_3 + 0x10);
  fVar11 = *(float *)(param_2 + 0x10);
  if (0.0 <= fVar12) {
    if (0.0 <= fVar11) {
      fVar11 = fVar12 * fVar11;
    }
    else {
      fVar11 = fVar12;
    }
  }
  *(float *)(param_1 + 0x10) = fVar11;
  fVar12 = *(float *)(param_3 + 0x14);
  fVar11 = *(float *)(param_2 + 0x14);
  if (0.0 <= fVar12) {
    if (0.0 <= fVar11) {
      fVar11 = fVar12 * fVar11;
    }
    else {
      fVar11 = fVar12;
    }
  }
  *(float *)(param_1 + 0x14) = fVar11;
  fVar12 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_2 + 0x18);
  if (0.0 <= fVar12) {
    if (0.0 <= fVar11) {
      fVar11 = fVar12 * fVar11;
    }
    else {
      fVar11 = fVar12;
    }
  }
  *(float *)(param_1 + 0x18) = fVar11;
  fVar12 = *(float *)(param_3 + 0x1c);
  fVar11 = *(float *)(param_2 + 0x1c);
  if (0.0 <= fVar12) {
    if (0.0 <= fVar11) {
      fVar11 = fVar12 * fVar11;
    }
    else {
      fVar11 = fVar12;
    }
  }
  puVar6 = *(uint **)(param_1 + 0x40);
  *(float *)(param_1 + 0x1c) = fVar11;
  if (puVar6 != (uint *)0x0) {
    puVar8 = *(uint **)(param_3 + 0x40);
    puVar7 = *(uint **)(param_2 + 0x40);
    fVar12 = (float)puVar8[4];
    fVar11 = (float)puVar7[4];
    if (0.0 <= fVar12) {
      if (0.0 <= fVar11) {
        fVar11 = fVar12 * fVar11;
      }
      else {
        fVar11 = fVar12;
      }
    }
    uVar9 = *puVar6;
    puVar6[4] = (uint)fVar11;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        if (*puVar8 <= uVar10) {
          uVar1 = 0;
        }
        fVar11 = *(float *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 4);
        uVar1 = uVar10;
        if (*puVar7 <= uVar10) {
          uVar1 = 0;
        }
        fVar12 = *(float *)(*(long *)(puVar7 + 2) + (ulong)uVar1 * 4);
        if (0.0 <= fVar11) {
          if (0.0 <= fVar12) {
            fVar12 = fVar11 * fVar12;
          }
          else {
            fVar12 = fVar11;
          }
        }
        uVar1 = uVar10;
        if (uVar9 <= uVar10) {
          uVar1 = 0;
        }
        uVar10 = uVar10 + 1;
        *(float *)(*(long *)(puVar6 + 2) + (ulong)uVar1 * 4) = fVar12;
        uVar9 = *puVar6;
      } while ((int)uVar10 < (int)uVar9);
    }
    bVar5 = *(char *)(param_3 + 0x48) != '\0';
    uVar4 = *(undefined1 *)(param_2 + 0x48);
    lVar3 = param_2;
    if (bVar5) {
      uVar4 = 1;
      lVar3 = param_3;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar4;
    *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(lVar3 + 0x49);
    lVar3 = param_2;
    if (bVar5) {
      lVar3 = param_3;
    }
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(lVar3 + 0x4a);
  }
  *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20) * *(float *)(param_3 + 0x20);
  *(float *)(param_1 + 0x24) = *(float *)(param_2 + 0x24) + *(float *)(param_3 + 0x24);
  *(float *)(param_1 + 0x28) = *(float *)(param_2 + 0x28) + *(float *)(param_3 + 0x28);
  iVar2 = *(int *)(param_2 + 0x2c);
  if (-1 < *(int *)(param_3 + 0x2c)) {
    iVar2 = *(int *)(param_3 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  *(float *)(param_1 + 0x30) = *(float *)(param_2 + 0x30) + *(float *)(param_3 + 0x30);
  *(int *)(param_1 + 0x34) = *(int *)(param_3 + 0x34) + *(int *)(param_2 + 0x34);
  *(float *)(param_1 + 0x38) = *(float *)(param_2 + 0x38) + *(float *)(param_3 + 0x38);
  return;
}

