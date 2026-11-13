
bool FUN_013b7250(undefined8 param_1,float *param_2,int *param_3,float *param_4)

{
  long lVar1;
  int local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  
  fStack_4c = param_2[1];
  local_30 = param_2[2];
  local_50 = *param_2;
  local_38 = *param_4;
  local_2c = local_50 - local_38;
  local_3c = local_38 + local_30;
  local_48 = local_30 - local_38;
  local_38 = local_50 + local_38;
  local_54 = 0;
  lVar1 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_44 = local_50;
  fStack_40 = fStack_4c;
  fStack_34 = fStack_4c;
  fStack_28 = fStack_4c;
  local_24 = local_30;
  FUN_0093a950(lVar1,&local_38,&local_54);
  if (((local_54 == *param_3) && (FUN_0093a950(lVar1,&local_2c,&local_54), local_54 == *param_3)) &&
     (FUN_0093a950(lVar1,&local_44,&local_54), local_54 == *param_3)) {
    FUN_0093a950(lVar1,&local_50,&local_54);
    return local_54 == *param_3;
  }
  return false;
}

