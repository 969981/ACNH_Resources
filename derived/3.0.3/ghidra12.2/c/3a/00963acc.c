
float FUN_00963acc(long param_1,long param_2)

{
  float fVar1;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  
  if ((int)*(uint *)(param_2 + 8) < 0) {
    return -500.0;
  }
  fVar1 = -500.0;
  if (((-1 < (int)*(uint *)(param_2 + 0xc)) && (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 0x38)))
     && (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0x3c))) {
    FUN_00962530(0xc3fa0000,param_1,param_2,&local_44);
    if (fStack_40 <= local_44) {
      fStack_40 = local_44;
    }
    if (local_3c <= fStack_40) {
      local_3c = fStack_40;
    }
    if (fStack_38 <= local_3c) {
      fStack_38 = local_3c;
    }
    if (local_34 <= fStack_38) {
      local_34 = fStack_38;
    }
    if (fStack_30 <= local_34) {
      fStack_30 = local_34;
    }
    if (fStack_20 <= fStack_30) {
      fStack_20 = fStack_30;
    }
    if (local_1c <= fStack_20) {
      local_1c = fStack_20;
    }
    if (fStack_18 <= local_1c) {
      fStack_18 = local_1c;
    }
    if (local_2c <= fStack_18) {
      local_2c = fStack_18;
    }
    if (fStack_28 <= local_2c) {
      fStack_28 = local_2c;
    }
    fVar1 = local_24;
    if (local_24 <= fStack_28) {
      fVar1 = fStack_28;
    }
  }
  return fVar1;
}

