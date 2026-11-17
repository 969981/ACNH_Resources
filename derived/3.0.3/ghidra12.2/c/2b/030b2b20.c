
void FUN_030b2b20(long param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  
  if (param_1 == 0) {
    fVar4 = 0.0;
    do {
      fVar1 = fVar4 + 2.0 / SQRT(param_3[1] * param_3[1] + *param_3 * *param_3);
      fVar4 = 1.0;
      if (fVar1 <= 1.0) {
        fVar4 = fVar1;
      }
    } while (fVar4 < 1.0);
  }
  else {
    fVar4 = 0.0;
    do {
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar3 = fVar4 + 2.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      local_68 = *param_2 + fVar1 * fVar4;
      fStack_64 = param_2[1] + fVar2 * fVar4;
      if (*(char *)(param_4 + 3) == '\0') {
        if ((*(uint *)(param_1 + 0xafcd0) >> 4 < 0x271) && (*(uint *)(param_1 + 0xafcd4) < 90000)) {
          FUN_030b4238((float)(int)(float)param_4[1],param_1,&local_68,*param_4,param_4[2],
                       1.0 <= fVar4);
        }
      }
      else {
        FUN_030b47e0((float)(int)(float)param_4[1] * 0.5,param_1,&local_68);
      }
    } while (fVar4 < 1.0);
  }
  return;
}

