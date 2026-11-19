
void FUN_03c3ad70(long param_1)

{
  undefined *puVar1;
  VibrationValue *pVVar2;
  float *pfVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    fVar6 = *(float *)(param_1 + 0x80);
    lVar5 = *(long *)PTR_DefaultVibrationSampleInterval_04bd2e48;
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x178) + 0xf0))
                                (*(long *)(param_1 + 0x38) + 0x178);
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_1 + 0x5c) +
         (((fVar6 * (float)(lVar5 / 1000)) / 1000.0) / 1000.0) / *pfVar3;
    pcVar4 = (char *)(**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x1a8) + 0xf0))
                               (*(long *)(param_1 + 0x38) + 0x1a8);
    fVar6 = *(float *)(param_1 + 0x5c);
    if (*pcVar4 == '\0') {
      if (1.0 < fVar6) {
        *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
      }
    }
    else {
      while (1.0 < fVar6) {
        pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x1d8) + 0xf0))
                                    (*(long *)(param_1 + 0x38) + 0x1d8);
        fVar6 = *(float *)(param_1 + 0x5c) - (1.0 - *pfVar3);
        *(float *)(param_1 + 0x5c) = fVar6;
      }
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
      return;
    }
    lVar5 = (**(code **)(*(long *)(lVar5 + 0x398) + 0xf0))(lVar5 + 0x398);
    puVar1 = PTR_PTR_04bb4f80;
    (**(code **)(PTR_PTR_04bb4f80 + (ulong)*(byte *)(lVar5 + 0x10) * 8))
              (*(undefined4 *)(param_1 + 0x5c),(byte *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 8));
    lVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x460) + 0xf0))
                      (*(long *)(param_1 + 0x38) + 0x460);
    fVar6 = (float)(**(code **)(puVar1 + (ulong)*(byte *)(lVar5 + 0x10) * 8))
                             (*(undefined4 *)(param_1 + 0x5c),(byte *)(lVar5 + 0x10),
                              *(undefined8 *)(lVar5 + 8));
    exp2f(fVar6);
    lVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x208) + 0xf0))
                      (*(long *)(param_1 + 0x38) + 0x208);
    (**(code **)(puVar1 + (ulong)*(byte *)(lVar5 + 0x10) * 8))
              (*(undefined4 *)(param_1 + 0x5c),(byte *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 8));
    lVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x2d0) + 0xf0))
                      (*(long *)(param_1 + 0x38) + 0x2d0);
    fVar6 = (float)(**(code **)(puVar1 + (ulong)*(byte *)(lVar5 + 0x10) * 8))
                             (*(undefined4 *)(param_1 + 0x5c),(byte *)(lVar5 + 0x10),
                              *(undefined8 *)(lVar5 + 8));
    exp2f(fVar6);
    pVVar2 = *(VibrationValue **)(param_1 + 600);
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x118) + 0xf0))
              (*(long *)(param_1 + 0x38) + 0x118);
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x148) + 0xf0))
              (*(long *)(param_1 + 0x38) + 0x148);
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0xb8) + 0xf0))();
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0xe8) + 0xf0))();
  }
  else {
    pVVar2 = *(VibrationValue **)(param_1 + 600);
  }
  nn::hid::VibrationWriter::Write(pVVar2);
  return;
}

