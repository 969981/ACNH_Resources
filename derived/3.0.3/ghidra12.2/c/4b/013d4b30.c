
bool FUN_013d4b30(long param_1,int *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  float local_7c [3];
  float local_70 [3];
  float local_64 [3];
  float local_58 [3];
  float local_4c [3];
  int local_34;
  
  local_4c[1] = 0.0;
  local_34 = 0;
  lVar1 = DAT_04cfae30 + 0x28;
  local_4c[2] = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
  local_4c[0] = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
  FUN_0093a950(lVar1,local_4c,&local_34);
  if (local_34 == *param_2) {
    return true;
  }
  local_58[1] = 0.0;
  local_58[0] = local_4c[0] - *param_3;
  local_58[2] = local_4c[2];
  FUN_0093a950(lVar1,local_58,&local_34);
  if (local_34 == *param_2) {
    local_7c[2] = local_58[2];
  }
  else {
    local_64[1] = 0.0;
    local_64[0] = local_4c[0] + *param_3;
    local_64[2] = local_4c[2];
    FUN_0093a950(lVar1,local_64,&local_34);
    if (local_34 == *param_2) {
      local_58[0] = local_64[0];
      local_7c[2] = local_64[2];
    }
    else {
      local_70[1] = 0.0;
      local_70[0] = local_4c[0];
      local_70[2] = local_4c[2] - *param_3;
      FUN_0093a950(lVar1,local_70,&local_34);
      if (local_34 != *param_2) {
        local_7c[1] = 0.0;
        local_7c[0] = local_4c[0];
        local_7c[2] = local_4c[2] + *param_3;
        FUN_0093a950(lVar1,local_7c,&local_34);
        bVar2 = local_34 == *param_2;
        local_58[0] = local_7c[0];
        if (!bVar2) {
          return bVar2;
        }
        goto LAB_013d4c98;
      }
      local_58[0] = local_70[0];
      local_7c[2] = local_70[2];
    }
  }
  bVar2 = true;
LAB_013d4c98:
  *(uint *)(param_1 + 8) = (int)((float)(int)local_58[0] / 10.0) - (uint)(local_58[0] < 0.0);
  *(uint *)(param_1 + 0xc) = (int)((float)(int)local_7c[2] / 10.0) - (uint)(local_7c[2] < 0.0);
  return bVar2;
}

