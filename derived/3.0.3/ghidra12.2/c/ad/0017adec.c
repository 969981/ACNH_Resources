
undefined8 * FUN_0017adec(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_0017acd4(param_1,param_2);
    lVar2 = puVar1[4];
    if ((param_1 == lVar2) && (*(int *)(puVar1 + 5) == (int)param_2)) {
      param_4[2] = puVar1;
      param_4[4] = 0xffffffffffffffff;
      param_4[5] = 0xffffffffffffffff;
      param_4[3] = puVar1[3];
      *(undefined8 **)(puVar1[3] + 0x10) = param_4;
      goto LAB_0017aea0;
    }
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && ((int)param_2 < *(int *)(puVar1 + 5))))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1[1] = 0;
    }
  }
  param_4[4] = param_1;
  param_4[5] = param_2;
  param_4[2] = param_4;
  puVar1 = param_4;
LAB_0017aea0:
  puVar1[3] = param_4;
  return puVar1;
}

