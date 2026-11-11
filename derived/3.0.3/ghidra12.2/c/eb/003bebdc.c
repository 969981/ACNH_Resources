
void FUN_003bebdc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x10) < uVar2) {
    uVar1 = *(uint *)(param_1 + 0x10) + param_2;
    param_2 = uVar1 - uVar2;
    if (uVar1 < uVar2 || param_2 == 0) {
      *(uint *)(param_1 + 0x10) = uVar1;
      return;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  if (0.0 < *(float *)(param_1 + 4)) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
      fVar3 = fVar3 / 127.0;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x14);
    }
    fVar3 = (*(float *)(param_1 + 4) * (float)param_2) / 1000.0 + fVar3;
    *(bool *)(param_1 + 0x1d) = 1.0 <= fVar3;
    *(float *)(param_1 + 0x14) = fVar3 - (float)(int)fVar3;
  }
  return;
}

