
void FUN_03b46430(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_03b42340(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x38,param_1 + 0x88);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_03b42170(*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0x110) + 0x10);
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_03b42170(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x138)
                );
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  fVar9 = *(float *)(lVar2 + 0x24);
  fVar8 = 0.0;
  if (0.0 <= *(float *)(lVar2 + 0x20)) {
    fVar8 = *(float *)(lVar2 + 0x20);
  }
  fVar7 = 2.0;
  if (fVar9 <= 2.0) {
    fVar7 = fVar9;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar9) {
    fVar10 = fVar7;
  }
  *(float *)(lVar2 + 0x20) = fVar8;
  *(float *)(lVar2 + 0x24) = fVar10;
  if (*(int *)(lVar2 + 0x2c) < 0) {
    *(undefined4 *)(lVar2 + 0x2c) = 3;
  }
  fVar9 = *(float *)(lVar2 + 0x28);
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar9) {
    fVar7 = fVar8;
  }
  *(float *)(lVar2 + 0x28) = fVar7;
  fVar9 = *(float *)(lVar2 + 0x30);
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar9) {
    fVar7 = fVar8;
  }
  *(float *)(lVar2 + 0x30) = fVar7;
  fVar9 = *(float *)(lVar2 + 0x38);
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  fVar7 = -1.0;
  if (-1.0 <= fVar9) {
    fVar7 = fVar8;
  }
  *(float *)(lVar2 + 0x38) = fVar7;
  lVar2 = *(long *)(param_1 + 0xd8);
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar8 = 0.0;
  if (0.0 <= *(float *)(lVar2 + 0x10)) {
    fVar8 = *(float *)(lVar2 + 0x10);
  }
  fVar9 = 0.0;
  if (0.0 <= *(float *)(lVar2 + 0x14)) {
    fVar9 = *(float *)(lVar2 + 0x14);
  }
  *(float *)(lVar2 + 0x10) = fVar8;
  *(float *)(lVar2 + 0x14) = fVar9;
  fVar8 = 0.0;
  if (0.0 <= *(float *)(lVar2 + 0x18)) {
    fVar8 = *(float *)(lVar2 + 0x18);
  }
  fVar9 = 0.0;
  if (0.0 <= *(float *)(lVar2 + 0x1c)) {
    fVar9 = *(float *)(lVar2 + 0x1c);
  }
  *(float *)(lVar2 + 0x18) = fVar8;
  *(float *)(lVar2 + 0x1c) = fVar9;
  if (lVar3 != 0) {
    fVar8 = 0.0;
    if (0.0 <= *(float *)(lVar3 + 0x10)) {
      fVar8 = *(float *)(lVar3 + 0x10);
    }
    *(float *)(lVar3 + 0x10) = fVar8;
    puVar4 = *(uint **)(lVar2 + 0x40);
    uVar6 = *puVar4;
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        uVar1 = uVar5;
        if (uVar6 <= uVar5) {
          uVar1 = 0;
        }
        uVar5 = uVar5 + 1;
        fVar9 = *(float *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 4);
        fVar8 = 0.0;
        if (0.0 <= fVar9) {
          fVar8 = fVar9;
        }
        *(float *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 4) = fVar8;
        puVar4 = *(uint **)(lVar2 + 0x40);
        uVar6 = *puVar4;
      } while ((int)uVar5 < (int)uVar6);
    }
  }
  return;
}

