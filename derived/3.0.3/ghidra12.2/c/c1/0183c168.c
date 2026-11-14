
void FUN_0183c168(long param_1)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(*(long *)(param_1 + 0x300) + 0x27c);
  if (*(float *)(param_1 + 0x57c) + *(float *)(param_1 + 0x358) <= fVar4) {
    if (fVar4 <= *(float *)(param_1 + 0x358) + *(float *)(param_1 + 0x580)) {
      return;
    }
    if (*(float *)(param_1 + 0x40c) <= 0.0) {
      return;
    }
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xf0) + 0xf0))();
    fVar4 = *(float *)(param_1 + 0x40c);
    if (0.0 <= fVar4) {
      if (fVar4 <= 0.0) {
        return;
      }
      fVar5 = fVar4 - *pfVar3;
      bVar1 = false;
      bVar2 = false;
      if (fVar5 <= fVar4) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 == 0.0;
          bVar2 = 0.0 <= fVar5;
        }
      }
      fVar4 = 0.0;
      if (bVar2 && !bVar1) {
        fVar4 = fVar5;
      }
    }
    else {
      fVar5 = *pfVar3 + fVar4;
      bVar1 = false;
      bVar2 = false;
      if (fVar4 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 < 0.0;
          bVar2 = false;
        }
      }
      fVar4 = 0.0;
      if (bVar1 != bVar2) {
        fVar4 = fVar5;
      }
    }
  }
  else {
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xc0) + 0xf0))();
    fVar4 = *pfVar3;
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0xf0) + 0xf0))();
    fVar5 = *(float *)(param_1 + 0x40c);
    if (fVar4 <= fVar5) {
      if (fVar5 <= fVar4) {
        return;
      }
      fVar6 = fVar5 - *pfVar3;
      bVar1 = false;
      bVar2 = false;
      if (fVar6 <= fVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6) && !NAN(fVar4)) {
          bVar1 = fVar6 == fVar4;
          bVar2 = fVar4 <= fVar6;
        }
      }
      if (bVar2 && !bVar1) {
        fVar4 = fVar6;
      }
    }
    else {
      fVar6 = *pfVar3 + fVar5;
      bVar1 = false;
      bVar2 = false;
      if (fVar5 <= fVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6) && !NAN(fVar4)) {
          bVar1 = fVar6 < fVar4;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        fVar4 = fVar6;
      }
    }
  }
  *(float *)(param_1 + 0x40c) = fVar4;
  return;
}

