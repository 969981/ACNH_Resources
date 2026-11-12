
uint FUN_006f0400(float param_1,float param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    return 0;
  }
  if (0.0 <= param_2) {
    if (param_1 < 0.0) {
      param_1 = -param_1;
      if (param_1 <= param_2) {
        fVar3 = (param_1 / param_2) * 128.0;
        lVar1 = (long)(int)((param_1 / param_2) * 128.0) * 8;
        return -(int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1)) -
               *(int *)(&DAT_0419a7a8 + lVar1);
      }
      param_2 = param_2 / param_1;
      iVar2 = -0x40000000;
LAB_006f0494:
      lVar1 = (long)(int)(param_2 * 128.0) * 8;
      return *(int *)(&DAT_0419a7a8 + lVar1) + iVar2 +
             (int)((param_2 * 128.0 - (float)(int)(param_2 * 128.0)) *
                  *(float *)(&DAT_0419a7ac + lVar1));
    }
    if (param_1 <= param_2) {
      fVar3 = (param_1 / param_2) * 128.0;
      lVar1 = (long)(int)((param_1 / param_2) * 128.0) * 8;
      return *(int *)(&DAT_0419a7a8 + lVar1) +
             (int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1));
    }
    param_2 = param_2 / param_1;
    iVar2 = 0x40000000;
  }
  else if (0.0 <= param_1) {
    param_2 = -param_2;
    if (param_2 < param_1) {
      param_2 = param_2 / param_1;
      iVar2 = 0x40000000;
      goto LAB_006f0494;
    }
    param_2 = param_1 / param_2;
    iVar2 = -0x80000000;
  }
  else {
    if (param_2 <= param_1) {
      fVar3 = (param_1 / param_2) * 128.0;
      lVar1 = (long)(int)((param_1 / param_2) * 128.0) * 8;
      return *(int *)(&DAT_0419a7a8 + lVar1) +
             (int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1)) ^ 0x80000000;
    }
    param_2 = param_2 / param_1;
    iVar2 = -0x40000000;
  }
  lVar1 = (long)(int)(param_2 * 128.0) * 8;
  return (iVar2 - *(int *)(&DAT_0419a7a8 + lVar1)) -
         (int)((param_2 * 128.0 - (float)(int)(param_2 * 128.0)) * *(float *)(&DAT_0419a7ac + lVar1)
              );
}

