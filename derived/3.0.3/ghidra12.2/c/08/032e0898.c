
void FUN_032e0898(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_4[1] = param_5;
  if (param_2 != 0) {
    return;
  }
  if (*(short *)(param_3 + 8) == -1) {
    uVar4 = (*(uint *)(param_1 + 0x1c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x1c) & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    puVar3 = (uint *)*param_4;
  }
  else {
    puVar1 = (undefined1 *)*param_4;
    *(undefined1 *)(param_1 + 0x1f) = *puVar1;
    *(undefined1 *)(param_1 + 0x1e) = puVar1[1];
    *(undefined1 *)(param_1 + 0x1d) = puVar1[2];
    *(undefined1 *)(param_1 + 0x1c) = puVar1[3];
    lVar2 = *(long *)(*(long *)(DAT_05af83f0 + 0x408) + 0x18);
    uVar4 = (uint)*(ushort *)(param_3 + 8);
    if (*(uint *)(lVar2 + 0x10) <= (uint)*(ushort *)(param_3 + 8)) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(*(long *)(lVar2 + 0x18) + (ulong)uVar4 * 4);
    fVar5 = powf((float)(uVar4 >> 0x18) / 255.0,2.2);
    fVar9 = 255.0;
    if (fVar5 <= 1.0) {
      fVar9 = fVar5 * 255.0;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar9;
    }
    fVar5 = powf((float)(uVar4 >> 0x10 & 0xff) / 255.0,2.2);
    fVar9 = 255.0;
    if (fVar5 <= 1.0) {
      fVar9 = fVar5 * 255.0;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar5) {
      fVar7 = fVar9;
    }
    fVar5 = powf((float)(uVar4 >> 8 & 0xff) / 255.0,2.2);
    puVar3 = (uint *)*param_4;
    fVar9 = 255.0;
    if (fVar5 <= 1.0) {
      fVar9 = fVar5 * 255.0;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar5) {
      fVar8 = fVar9;
    }
    uVar4 = (int)fVar6 | (int)fVar7 << 8 | (int)fVar8 << 0x10 | uVar4 << 0x18;
  }
  *puVar3 = uVar4;
  puVar3[1] = uVar4;
  return;
}

