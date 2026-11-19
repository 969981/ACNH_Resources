
void FUN_03857564(char *param_1,float *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint3 uStack_1c;
  
  uVar3 = *(uint *)(param_1 + 0xe0);
  uVar1 = uVar3 + 1 & 7;
  *(uint *)(param_1 + 0xe0) = uVar1;
  pcVar2 = param_1 + (ulong)uVar3 * 0x1c;
  if (7 < uVar3) {
    pcVar2 = param_1;
  }
  pcVar5 = param_1 + (ulong)uVar1 * 0x1c;
  *pcVar5 = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  pcVar5[0x10] = '\0';
  *(ulong *)(pcVar5 + 1) = (ulong)uStack_1c;
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  pcVar5[0x18] = '\0';
  pcVar5[0x18] = '\0';
  pcVar5[0x19] = '\0';
  pcVar5[0x1a] = '\0';
  pcVar5[0x1b] = '\0';
  cVar4 = *pcVar2;
  fVar6 = *param_2;
  fVar8 = 1.0;
  if (fVar6 <= 1.0) {
    fVar8 = fVar6;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar6) {
    fVar9 = fVar8;
  }
  fVar8 = -fVar9;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  *pcVar5 = 0.01 < fVar8;
  fVar9 = *param_2;
  fVar6 = 1.0;
  if (fVar9 <= 1.0) {
    fVar6 = fVar9;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar9) {
    fVar7 = fVar6;
  }
  *(float *)(pcVar5 + 4) = fVar7;
  if (0.01 < fVar8) {
    fVar6 = (float)NEON_ucvtf(param_2[1]);
    fVar6 = fVar6 * 8.381903e-08;
    fVar8 = fVar6 + -360.0;
    if (fVar6 <= 180.0) {
      fVar8 = fVar6;
    }
    *(float *)(param_1 + (ulong)uVar1 * 0x1c + 8) = fVar8;
    if (cVar4 != '\0') {
      fVar6 = (float)(uint)((int)(long)(fVar8 * 11930465.0) -
                           (int)(long)(*(float *)(pcVar2 + 8) * 11930465.0)) * 8.381903e-08;
      fVar8 = fVar6 + -360.0;
      if (fVar6 <= 180.0) {
        fVar8 = fVar6;
      }
      *(float *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) = fVar8;
    }
  }
  fVar6 = (float)NEON_ucvtf(param_2[2]);
  fVar6 = fVar6 * 8.381903e-08;
  fVar8 = fVar6 + -360.0;
  if (fVar6 <= 180.0) {
    fVar8 = fVar6;
  }
  *(float *)(param_1 + (ulong)uVar1 * 0x1c + 0x10) = fVar8;
  fVar6 = (float)(uint)((int)(long)(fVar8 * 11930465.0) -
                       (int)(long)(*(float *)(pcVar2 + 0x10) * 11930465.0)) * 8.381903e-08;
  fVar8 = fVar6 + -360.0;
  if (fVar6 <= 180.0) {
    fVar8 = fVar6;
  }
  *(float *)(param_1 + (ulong)uVar1 * 0x1c + 0x14) = fVar8;
  return;
}

