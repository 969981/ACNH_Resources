
void FUN_038e5644(long *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((char)param_1[1] == '\0') {
    if (*(char *)((long)param_1 + 9) == '\0') goto LAB_038e56b0;
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,(long)param_1 + 0xc);
    *(undefined2 *)(param_1 + 1) = 0x100;
  }
  (**(code **)(*param_1 + 0x60))
            (param_1,(long)param_1 + 0x4c,(long)param_1 + 0xc,*(undefined4 *)((long)param_1 + 0x8c))
  ;
  *(undefined1 *)((long)param_1 + 9) = 0;
LAB_038e56b0:
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = 1.0 / (*(float *)(param_1 + 9) +
                fVar2 * *(float *)(param_1 + 8) + fVar1 * *(float *)((long)param_1 + 0x3c) +
                fVar3 * *(float *)((long)param_1 + 0x44));
  *param_2 = fVar4 * (*(float *)(param_1 + 3) +
                     fVar2 * *(float *)(param_1 + 2) + fVar1 * *(float *)((long)param_1 + 0xc) +
                     fVar3 * *(float *)((long)param_1 + 0x14));
  param_2[1] = fVar4 * (*(float *)(param_1 + 5) +
                       fVar2 * *(float *)(param_1 + 4) + fVar1 * *(float *)((long)param_1 + 0x1c) +
                       fVar3 * *(float *)((long)param_1 + 0x24));
  param_2[2] = fVar4 * (*(float *)(param_1 + 7) +
                       fVar2 * *(float *)(param_1 + 6) + fVar1 * *(float *)((long)param_1 + 0x2c) +
                       fVar3 * *(float *)((long)param_1 + 0x34));
  return;
}

