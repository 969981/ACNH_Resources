
bool FUN_030b2c80(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float fStack_54;
  undefined8 local_18;
  
  fVar4 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if (40.0 <= fVar5) {
    local_18 = *(undefined8 *)param_2;
    if (-1 < (int)(fVar5 / 40.0)) {
      iVar2 = (int)(fVar5 / 40.0) + 1;
      fVar6 = (float)((ulong)local_18 >> 0x20);
      fVar5 = (float)local_18;
      fVar4 = fVar4 * (1.0 / (float)iVar2);
      fVar3 = fVar3 * (1.0 / (float)iVar2);
      do {
        local_58 = fVar4;
        fStack_54 = fVar3;
        FUN_030b2b20(param_1,&local_18,&local_58,param_4);
        fVar5 = fVar4 + fVar5;
        fVar6 = fVar3 + fVar6;
        iVar2 = iVar2 + -1;
        local_18 = CONCAT44(fVar6,fVar5);
      } while (iVar2 != 0);
    }
    bVar1 = true;
  }
  else {
    local_18 = CONCAT44(fVar3,fVar4);
    bVar1 = 2.0 <= fVar5 && 0.0 < fVar5;
    if (2.0 <= fVar5 && 0.0 < fVar5) {
      FUN_030b2b20(param_1,param_2,&local_18,param_4);
    }
  }
  return bVar1;
}

