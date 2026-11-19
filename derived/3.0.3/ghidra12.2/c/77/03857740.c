
bool FUN_03857740(char *param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = FUN_03857564();
  pcVar1 = param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 0x1c;
  if (7 < *(uint *)(param_1 + 0xe0)) {
    pcVar1 = param_1;
  }
  if (*pcVar1 == '\0') {
    fVar4 = *(float *)(lVar3 + 0x14);
    fVar5 = -fVar4;
    if (0.0 <= fVar4) {
      fVar5 = fVar4;
    }
    if (fVar5 < 1.0) {
      fVar4 = *(float *)(pcVar1 + 0x14);
      fVar5 = -fVar4;
      if (0.0 <= fVar4) {
        fVar5 = fVar4;
      }
      if (fVar5 < 1.0) {
        bVar2 = false;
        fVar5 = 0.0;
        goto LAB_038578b0;
      }
    }
    fVar5 = *(float *)(lVar3 + 0x18);
    bVar2 = false;
  }
  else {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 8));
    fVar4 = fVar4 * 8.381903e-08;
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 4));
    fVar6 = fVar6 * 8.381903e-08;
    fVar5 = fVar4 + -360.0;
    if (fVar4 <= 180.0) {
      fVar5 = fVar4;
    }
    fVar4 = fVar6 + -360.0;
    if (fVar6 <= 180.0) {
      fVar4 = fVar6;
    }
    fVar5 = (float)(uint)((int)(long)(fVar4 * 11930465.0) - (int)(long)(fVar5 * 11930465.0)) *
            8.381903e-08;
    fVar4 = fVar5 + -360.0;
    if (fVar5 <= 180.0) {
      fVar4 = fVar5;
    }
    bVar2 = *(char *)(param_2 + 0x10) != '\0';
    if (*(char *)(param_2 + 0x10) != '\0') {
      fVar6 = *(float *)(lVar3 + 0x18);
      fVar5 = -fVar6;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      if (90.0 < fVar5) {
        if (0.0 <= fVar6) {
          if (fVar4 < 0.0) {
            fVar4 = 179.0;
          }
        }
        else if (0.0 < fVar4) {
          fVar4 = -179.0;
        }
      }
    }
    fVar6 = -fVar4;
    if (0.0 <= fVar4) {
      fVar6 = fVar4;
    }
    fVar5 = 0.0;
    if (1.0 <= fVar6) {
      fVar5 = fVar4;
    }
  }
LAB_038578b0:
  *(float *)(pcVar1 + 0x18) = fVar5;
  return bVar2;
}

