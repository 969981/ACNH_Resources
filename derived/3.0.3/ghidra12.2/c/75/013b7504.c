
bool FUN_013b7504(float param_1,undefined4 param_2,float param_3,float param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  int local_58;
  float local_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  int local_24;
  
  local_30 = param_1 - param_4;
  fStack_3c = param_1 + param_4;
  local_40 = param_3 + param_4;
  local_4c = param_3 - param_4;
  local_58 = 0;
  lVar1 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_54 = param_1;
  uStack_50 = param_2;
  local_48 = param_1;
  local_44 = (float)param_2;
  local_38 = (float)param_2;
  fStack_34 = param_3;
  local_2c = (float)param_2;
  fStack_28 = param_3;
  local_24 = param_6;
  local_38 = (float)FUN_0093a950(lVar1,&fStack_3c,&local_58);
  local_38 = local_38 + -1.5;
  if (local_58 == local_24) {
    local_2c = (float)FUN_0093a950(lVar1,&local_30,&local_58);
    local_2c = local_2c + -1.5;
    if (local_58 == local_24) {
      local_44 = (float)FUN_0093a950(lVar1,&local_48,&local_58);
      local_44 = local_44 + -1.5;
      if (local_58 == local_24) {
        FUN_0093a950(lVar1,&local_54,&local_58);
        return local_58 == local_24;
      }
    }
  }
  return false;
}

