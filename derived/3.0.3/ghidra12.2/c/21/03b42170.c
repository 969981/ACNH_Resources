
void FUN_03b42170(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) * *(float *)(param_1 + 8);
  if (0.0 <= *(float *)(param_2 + 0xc)) {
    fVar6 = 1.0;
    if (0.0 <= *(float *)(param_1 + 0xc)) {
      fVar6 = *(float *)(param_1 + 0xc);
    }
    *(float *)(param_1 + 0xc) = *(float *)(param_2 + 0xc) * fVar6;
  }
  if (0.0 <= *(float *)(param_2 + 0x10)) {
    fVar6 = 1.0;
    if (0.0 <= *(float *)(param_1 + 0x10)) {
      fVar6 = *(float *)(param_1 + 0x10);
    }
    *(float *)(param_1 + 0x10) = *(float *)(param_2 + 0x10) * fVar6;
  }
  if (0.0 <= *(float *)(param_2 + 0x14)) {
    fVar6 = 1.0;
    if (0.0 <= *(float *)(param_1 + 0x14)) {
      fVar6 = *(float *)(param_1 + 0x14);
    }
    *(float *)(param_1 + 0x14) = *(float *)(param_2 + 0x14) * fVar6;
  }
  if (0.0 <= *(float *)(param_2 + 0x18)) {
    fVar6 = 1.0;
    if (0.0 <= *(float *)(param_1 + 0x18)) {
      fVar6 = *(float *)(param_1 + 0x18);
    }
    *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) * fVar6;
  }
  if (0.0 <= *(float *)(param_2 + 0x1c)) {
    fVar6 = 1.0;
    if (0.0 <= *(float *)(param_1 + 0x1c)) {
      fVar6 = *(float *)(param_1 + 0x1c);
    }
    *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c) * fVar6;
  }
  puVar2 = *(uint **)(param_1 + 0x40);
  if (puVar2 != (uint *)0x0) {
    puVar3 = *(uint **)(param_2 + 0x40);
    if (0.0 <= (float)puVar3[4]) {
      fVar6 = 1.0;
      if (0.0 <= (float)puVar2[4]) {
        fVar6 = (float)puVar2[4];
      }
      puVar2[4] = (uint)((float)puVar3[4] * fVar6);
    }
    uVar4 = *puVar2;
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        uVar1 = uVar5;
        if (*puVar3 <= uVar5) {
          uVar1 = 0;
        }
        fVar6 = *(float *)(*(long *)(puVar3 + 2) + (ulong)uVar1 * 4);
        if (0.0 <= fVar6) {
          uVar1 = uVar5;
          if (uVar4 <= uVar5) {
            uVar1 = 0;
          }
          fVar7 = *(float *)(*(long *)(puVar2 + 2) + (ulong)uVar1 * 4);
          fVar8 = 1.0;
          if (0.0 <= fVar7) {
            fVar8 = fVar7;
          }
          *(float *)(*(long *)(puVar2 + 2) + (ulong)uVar1 * 4) = fVar6 * fVar8;
          uVar4 = *puVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar4);
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
      *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
    }
  }
  *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20) * *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) = *(float *)(param_2 + 0x24) + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = *(float *)(param_2 + 0x28) + *(float *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  *(float *)(param_1 + 0x30) = *(float *)(param_2 + 0x30) + *(float *)(param_1 + 0x30);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_2 + 0x34);
  *(float *)(param_1 + 0x38) = *(float *)(param_2 + 0x38) + *(float *)(param_1 + 0x38);
  return;
}

