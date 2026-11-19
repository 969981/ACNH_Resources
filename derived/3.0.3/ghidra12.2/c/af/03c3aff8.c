
void FUN_03c3aff8(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  
  *(float *)(param_1 + 0x58) =
       *(float *)(*(long *)(param_1 + 0x18) + 0x5a4c) + *(float *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x20) == 1) {
    pcVar4 = (char *)(**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x1a8) + 0xf0))
                               (*(long *)(param_1 + 0x38) + 0x1a8);
    bVar1 = true;
    bVar2 = false;
    if (*pcVar4 == '\0') {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(*(float *)(param_1 + 0x5c))) {
        bVar1 = *(float *)(param_1 + 0x5c) < 1.0;
        bVar2 = false;
      }
    }
    if ((bVar1 == bVar2) && ((*(int *)(param_1 + 0x14) < 5 || (6 < *(int *)(param_1 + 0x14))))) {
      if (2 < *(int *)(param_1 + 0x14)) {
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        nn::hid::VibrationPlayer::Stop();
      }
      *(undefined4 *)(param_1 + 0x14) = 6;
    }
  }
  fVar5 = *(float *)(param_1 + 0x54);
  fVar6 = *(float *)(param_1 + 0x58);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6) && !NAN(fVar5)) {
      bVar1 = fVar6 < fVar5;
      bVar2 = fVar6 == fVar5;
      bVar3 = false;
    }
  }
  if ((!bVar2 && bVar1 == bVar3) &&
     ((*(int *)(param_1 + 0x14) < 5 || (6 < *(int *)(param_1 + 0x14))))) {
    if (2 < *(int *)(param_1 + 0x14)) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      nn::hid::VibrationPlayer::Stop();
    }
    *(undefined4 *)(param_1 + 0x14) = 6;
  }
  return;
}

